/*
===========================================================================

Doom 3 GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company. 

This file is part of the Doom 3 GPL Source Code (?Doom 3 Source Code?).  

Doom 3 Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/


#include "precompiled.h"
#include "maya_main.h"
#include "ExportOptions.h"

#undef strncmp

#include <assimp/cimport.h>
#include <assimp/postprocess.h>
#include <assimp/Importer.hpp>   
#include <assimp/postprocess.h> 
#include <assimp/scene.h>      

#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

#define DEFAULT_ANIM_EPSILON	0.125f
#define DEFAULT_QUAT_EPSILON	( 1.0f / 8192.0f )

#define	ANIM_BIT_TX			0
#define	ANIM_BIT_TY			1
#define	ANIM_BIT_TZ			2
#define	ANIM_BIT_QX			3
#define	ANIM_BIT_QY			4
#define	ANIM_BIT_QZ			5

#define	ANIM_TX				BIT( ANIM_BIT_TX )
#define	ANIM_TY				BIT( ANIM_BIT_TY )
#define	ANIM_TZ				BIT( ANIM_BIT_TZ )
#define	ANIM_QX				BIT( ANIM_BIT_QX )
#define	ANIM_QY				BIT( ANIM_BIT_QY )
#define	ANIM_QZ				BIT( ANIM_BIT_QZ )

const char* componentNames[6] = { "Tx", "Ty", "Tz", "Qx", "Qy", "Qz" };

using namespace std;

struct rvmBoneEntry {
	idStr name;
	const aiBone* bone;

	inline bool operator==(const rvmBoneEntry& rhs) {
		if (name != rhs.name)
			return false;

		return true;
	}
};

struct rvmExportJointWeight {
	void Reset() {
		for(int i = 0; i < 4; i++) {
			jointIndex[i] = -1;
			weights[i] = 0;
		}

		numWeights = 0;
	}

	int numWeights;
	int jointIndex[4];
	float weights[4];
};

//
// rvmExportMesh
//
struct rvmExportMesh {
	aiMesh* mesh;
	idStr mtrName;
	idList<int> indexes;
	idList<idDrawVert> vertexes;
	idList<rvmExportJointWeight> vertexWeights;

	void ResetWeights() {
		for (int i = 0; i < vertexWeights.Num(); i++) {
			vertexWeights[i].Reset();
		}
	}
};

/*
===============
ConvertToIdSpace
===============
*/
idMat3 ConvertToIdSpace(const aiMatrix3x3& mat) {
	idMat3 idmat;

	idmat[0][0] = mat[0][0];
	idmat[0][1] = -mat[0][2];
	idmat[0][2] = mat[0][1];

	idmat[1][0] = mat[1][0];
	idmat[1][1] = -mat[1][2];
	idmat[1][2] = mat[1][1];

	idmat[2][0] = mat[2][0];
	idmat[2][1] = -mat[2][2];
	idmat[2][2] = mat[2][1];

	return idmat;
}


/*
===============
ConvertToIdSpace
===============
*/
idVec3 ConvertToIdSpace(const aiVector3D& pos) {
	idVec3 idpos;

	idpos.x = pos.x;
	idpos.y = -pos.z;
	idpos.z = pos.y;

	return idpos;
}

/*
===============
ConvertToIdSpace
===============
*/
idVec3 ConvertToIdSpace(const idVec3& pos) {
	idVec3 idpos;

	idpos.x = pos.x;
	idpos.y = -pos.z;
	idpos.z = pos.y;

	return idpos;
}

// https://github.com/ccxvii/asstools/blob/master/assview.c
// find a node by name in the hierarchy (for anims and bones)
struct aiNode* FindNodeByName(struct aiNode* node, const char* name)
{
	int i;
	if (!strcmp(name, node->mName.data))
		return node;
	for (i = 0; i < node->mNumChildren; i++) {
		struct aiNode* found = FindNodeByName(node->mChildren[i], name);
		if (found)
			return found;
	}
	return NULL;
}

// https://github.com/ccxvii/asstools/blob/master/assview.c
void transformnode(aiMatrix4x4* result, struct aiNode* node)
{
	if (node->mParent) {
		transformnode(result, node->mParent);
		aiMultiplyMatrix4(result, &node->mTransformation);
	}
	else {
		*result = node->mTransformation;
	}
}

void extract3x3(aiMatrix3x3* m3, aiMatrix4x4* m4)
{
	m3->a1 = m4->a1; m3->a2 = m4->a2; m3->a3 = m4->a3;
	m3->b1 = m4->b1; m3->b2 = m4->b2; m3->b3 = m4->b3;
	m3->c1 = m4->c1; m3->c2 = m4->c2; m3->c3 = m4->c3;
}

const char *FixBoneName(const char *name) {
	const char* skipTo = strstr(name, ":");
	if (skipTo != NULL) {
		return skipTo + 1;
	}

	return name;
}

// https://www.gamedev.net/forums/topic/648859-assimp-build-the-skeleton-from-the-scene/
static void GatherBoneNames(const aiScene* scene, struct aiNode* nodes, idList<rvmBoneEntry> &bones)
{
	bones.Clear();

	// Loop through each bone of each mesh.
	for (int meshIndex = 0; meshIndex < scene->mNumMeshes; meshIndex++)
	{
		const aiMesh* mesh = scene->mMeshes[meshIndex];
		for (int boneIndex = 0; boneIndex < mesh->mNumBones; boneIndex++)
		{
			const aiBone* bone = mesh->mBones[boneIndex];
			const aiNode* node = FindNodeByName(nodes, bone->mName.C_Str());
			while (node)
			{
				rvmBoneEntry entry;
				entry.bone = bone;
				entry.name = FixBoneName(node->mName.C_Str());
				bones.AddUnique(entry);
				node = node->mParent;
				if (node && node->mNumChildren == 1) {
					break;	// don't chase up until the scene root, if possible
				}
			}
		}
	}
}

class BoneDesc
{
public:
	const aiNode* node;
	const aiBone* bone;

	idStr	name;
	int		parentIndex;
	
	idQuat  q;
	idVec3  t;

	int exportNum;
	int animBits;
	int firstComponent;
	class AnimationFrame* baseFrame;
};

class AnimationFrame {
public:
	const aiNode* node;
	const aiBone* bone;

	idStr	name;
	int		parentIndex;

	idCQuat q;
	idVec3  t;

	idMat3  idwm;
	idVec3  idt;
};



// This is a global variable because it needs to stay persistant between mesh -> anim runs because assimp doesn't let you gather bone names
// on FBX without names.
idList<rvmBoneEntry> boneNames;
idList< BoneDesc > meshskeleton;

// parentTransform * node->mTransformation;

static void GetBindPose(const idMat3 align, const aiNode* node, const int parentBoneIndex, idList< BoneDesc >& skeleton)
{
	int newBoneIndex = parentBoneIndex;
	int index = -1; 

	idVec3 nodeTranslation = idVec3(node->mTransformation.a4, node->mTransformation.b4, node->mTransformation.c4);
	aiMatrix3x3 nodeRotation = aiMatrix3x3(node->mTransformation);
	
	for(int i = 0; i < boneNames.Num(); i++) {
		if(boneNames[i].name == FixBoneName(node->mName.C_Str())) {
			index = i;
			break;
		}
	}

	if (index != -1)
	{		
		newBoneIndex = skeleton.Num();

		// convert to id coordinates
		idMat3 jointaxis = ConvertToIdSpace(nodeRotation) * align;
		idVec3 jointpos = ConvertToIdSpace(nodeTranslation) * align;

		BoneDesc newBone;

		newBone.node = node;
		newBone.name = node->mName.C_Str();

		newBone.t = jointpos;
		newBone.q = jointaxis.ToQuat();
		newBone.parentIndex = parentBoneIndex;
		newBone.bone = boneNames[index].bone;

		skeleton.Append(newBone);
	}
	for (int childIndex = 0; childIndex < node->mNumChildren; childIndex++)
	{
		const aiNode* childNode = node->mChildren[childIndex];
		GetBindPose(align, childNode, newBoneIndex, skeleton);
	}
}

static void GetAnimationFrame(const aiNode* node, const int parentBoneIndex, idList< AnimationFrame >& skeleton)
{
	int newBoneIndex = parentBoneIndex;
	int index = -1;

	idVec3 nodeTranslation = idVec3(node->mTransformation.a4, node->mTransformation.b4, node->mTransformation.c4);
	aiMatrix3x3 nodeRotation = aiMatrix3x3(node->mTransformation);

	for (int i = 0; i < boneNames.Num(); i++) {
		if (boneNames[i].name == FixBoneName(node->mName.C_Str())) {
			index = i;
			break;
		}
	}

	if (index != -1)
	{
		newBoneIndex = skeleton.Num();

		// convert to id coordinates
		idMat3 jointaxis = ConvertToIdSpace(nodeRotation);
		idVec3 jointpos = ConvertToIdSpace(nodeTranslation);

		AnimationFrame newBone;

		// save worldspace position of joint for children
		newBone.idwm = jointaxis;
		newBone.idt = jointpos;

		if (parentBoneIndex != -1)
		{
			AnimationFrame* parent = &skeleton[parentBoneIndex];

			// convert to local coordinates
			jointpos = (jointpos - parent->idt) * parent->idwm.Transpose();
			jointaxis = jointaxis * parent->idwm.Transpose();
		}

		newBone.node = node;
		newBone.name = node->mName.C_Str();

		newBone.t = jointpos;
		newBone.q = jointaxis.ToQuat().ToCQuat();
		newBone.parentIndex = parentBoneIndex;
		newBone.bone = boneNames[index].bone;

		skeleton.Append(newBone);
	}
	for (int childIndex = 0; childIndex < node->mNumChildren; childIndex++)
	{
		const aiNode* childNode = node->mChildren[childIndex];
		GetAnimationFrame(childNode, newBoneIndex, skeleton);
	}
}

int FindExportJoint(aiBone* bone, idList<BoneDesc>& exportJoints) {
	for (int i = 0; i < exportJoints.Num(); i++) {
		if (exportJoints[i].name == bone->mName.C_Str()) {
			return i;
		}
	}

	common->FatalError("FindExportJoint: Failed to find joint!\n");
	return -1;
}


int GetAnimLength(aiAnimation* anim)
{
	int i, len = 0;
	for (i = 0; i < anim->mNumChannels; i++) {
		struct aiNodeAnim* chan = anim->mChannels[i];
		len = max(len, chan->mNumPositionKeys);
		len = max(len, chan->mNumRotationKeys);
		len = max(len, chan->mNumScalingKeys);
	}
	return len;
}


void composematrix(aiMatrix4x4* m, aiVector3D* t, aiQuaternion* q, aiVector3D* s)
{
	// quat to rotation matrix
	m->a1 = 1 - 2 * (q->y * q->y + q->z * q->z);
	m->a2 = 2 * (q->x * q->y - q->z * q->w);
	m->a3 = 2 * (q->x * q->z + q->y * q->w);
	m->b1 = 2 * (q->x * q->y + q->z * q->w);
	m->b2 = 1 - 2 * (q->x * q->x + q->z * q->z);
	m->b3 = 2 * (q->y * q->z - q->x * q->w);
	m->c1 = 2 * (q->x * q->z - q->y * q->w);
	m->c2 = 2 * (q->y * q->z + q->x * q->w);
	m->c3 = 1 - 2 * (q->x * q->x + q->y * q->y);

	// scale matrix
	m->a1 *= s->x; m->a2 *= s->x; m->a3 *= s->x;
	m->b1 *= s->y; m->b2 *= s->y; m->b3 *= s->y;
	m->c1 *= s->z; m->c2 *= s->z; m->c3 *= s->z;

	// set translation
	m->a4 = t->x; m->b4 = t->y; m->c4 = t->z;

	m->d1 = 0; m->d2 = 0; m->d3 = 0; m->d4 = 1;
}

void mixvector(aiVector3D* p, aiVector3D* a, aiVector3D* b, float t)
{
	p->x = a->x + t * (b->x - a->x);
	p->y = a->y + t * (b->y - a->y);
	p->z = a->z + t * (b->z - a->z);
}


float dotquaternions(aiQuaternion* a, aiQuaternion* b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

void normalizequaternion(aiQuaternion* q)
{
	float d = sqrt(dotquaternions(q, q));
	if (d >= 0.00001) {
		d = 1 / d;
		q->x *= d;
		q->y *= d;
		q->z *= d;
		q->w *= d;
	}
	else {
		q->x = q->y = q->z = 0;
		q->w = 1;
	}
}

void mixquaternion(aiQuaternion* q, aiQuaternion* a, aiQuaternion* b, float t)
{
	aiQuaternion tmp;
	if (dotquaternions(a, b) < 0) {
		tmp.x = -a->x; tmp.y = -a->y; tmp.z = -a->z; tmp.w = -a->w;
		a = &tmp;
	}
	q->x = a->x + t * (b->x - a->x);
	q->y = a->y + t * (b->y - a->y);
	q->z = a->z + t * (b->z - a->z);
	q->w = a->w + t * (b->w - a->w);
	normalizequaternion(q);
}

//
// ANIMATION
//

void animatescene(struct aiScene* scene, struct aiAnimation* anim, float tick)
{
	aiVectorKey* p0, * p1, * s0, * s1;
	aiQuatKey* r0, * r1;
	aiVector3D p, s;
	aiQuaternion r;
	int i;

	// Assumes even key frame rate and synchronized pos/rot/scale keys.
	// We should look at the key->mTime values instead, but I'm lazy.

	int frame = floor(tick);
	float t = tick - floor(tick);

	for (i = 0; i < anim->mNumChannels; i++) {
		struct aiNodeAnim* chan = anim->mChannels[i];
		struct aiNode* node = FindNodeByName(scene->mRootNode, chan->mNodeName.data);
		p0 = chan->mPositionKeys + (frame + 0) % chan->mNumPositionKeys;
		p1 = chan->mPositionKeys + (frame + 1) % chan->mNumPositionKeys;
		r0 = chan->mRotationKeys + (frame + 0) % chan->mNumRotationKeys;
		r1 = chan->mRotationKeys + (frame + 1) % chan->mNumRotationKeys;
		s0 = chan->mScalingKeys + (frame + 0) % chan->mNumScalingKeys;
		s1 = chan->mScalingKeys + (frame + 1) % chan->mNumScalingKeys;
		mixvector(&p, &p0->mValue, &p1->mValue, t);
		mixquaternion(&r, &r0->mValue, &r1->mValue, t);
		mixvector(&s, &s0->mValue, &s1->mValue, t);
		composematrix(&node->mTransformation, &p, &r, &s);
	}
}

//
// md6Frame_t
//
struct md6Frame_t {
	idBounds bounds;
	idList< AnimationFrame > skeleton;
};

/*
===============
WriteMD5Anim
===============
*/
void WriteMD5Anim(const char *meshpath, const char* dest, idList< BoneDesc >& bind_pose, idList<md6Frame_t> &frames,  const char* commandLine) {
	common->Printf("Writing MD5 anim %s\n", dest);

	int numAnimatedComponents = 0;
	for (int i = 0; i < bind_pose.Num(); i++) {
		BoneDesc *joint = &bind_pose[i];
		joint->exportNum = i;
		joint->baseFrame = &frames[0].skeleton[i];
		joint->animBits = 0;
		for (int j = 1; j < frames.Num(); j++) {
			AnimationFrame*frame = &frames[j].skeleton[i];
			if (fabs(frame->t[0] - joint->baseFrame->t[0]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_TX;
			}
			if (fabs(frame->t[1] - joint->baseFrame->t[1]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_TY;
			}
			if (fabs(frame->t[2] - joint->baseFrame->t[2]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_TZ;
			}
			if (fabs(frame->q[0] - joint->baseFrame->q[0]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_QX;
			}
			if (fabs(frame->q[1] - joint->baseFrame->q[1]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_QY;
			}
			if (fabs(frame->q[2] - joint->baseFrame->q[2]) > DEFAULT_ANIM_EPSILON) {
				joint->animBits |= ANIM_QZ;
			}
			if ((joint->animBits & 63) == 63) {
				break;
			}
		}
		if (joint->animBits) {
			joint->firstComponent = numAnimatedComponents;
			for (int j = 0; j < 6; j++) {
				if (joint->animBits & BIT(j)) {
					numAnimatedComponents++;
				}
			}
		}
	}

	idFile* file = fileSystem->OpenExplicitFileWrite(dest);

	file->WriteFloatString(MD5_VERSION_STRING " %d\n", MD5_VERSION);
	file->WriteFloatString("\tcommandLine \"%s\"\n", commandLine);
	
	file->WriteFloatString("\tnumFrames %d\n", frames.Num());
	file->WriteFloatString("\tnumJoints %d\n", bind_pose.Num());
	file->WriteFloatString("\tframeRate 30\n");	
	file->WriteFloatString("numAnimatedComponents %d\n", numAnimatedComponents);
	
	// Write the joint block
	// write out the hierarchy
	file->WriteFloatString("\nhierarchy {\n");
	for (int i = 0; i < bind_pose.Num(); i++) {
		BoneDesc *joint = &bind_pose[i];
		BoneDesc* parent = NULL;

		if (joint->parentIndex >= 0)
			parent = &bind_pose[joint->parentIndex];

		if (parent) {
			file->WriteFloatString("\t\"%s\"\t%d %d %d\t// %s", joint->name.c_str(), parent->exportNum, joint->animBits, joint->firstComponent, parent->name.c_str());
		}
		else {
			file->WriteFloatString("\t\"%s\"\t-1 %d %d\t//", joint->name.c_str(), joint->animBits, joint->firstComponent);
		}

		if (!joint->animBits) {
			file->WriteFloatString("\n");
		}
		else {
			file->WriteFloatString(" ( ");
			for (int j = 0; j < 6; j++) {
				if (joint->animBits & BIT(j)) {
					file->WriteFloatString("%s ", componentNames[j]);
				}
			}
			file->WriteFloatString(")\n");
		}
	}
	file->WriteFloatString("}\n");

	// write the frame bounds
	file->WriteFloatString("\nbounds {\n");
	for (int i = 0; i < frames.Num(); i++) {
		file->WriteFloatString("\t( %f %f %f ) ( %f %f %f )\n", frames[i].bounds[0].x, frames[i].bounds[0].y, frames[i].bounds[0].z, frames[i].bounds[1].x, frames[i].bounds[1].y, frames[i].bounds[1].z);
	}

	// write the base frame
	file->WriteFloatString("\nbaseframe {\n");
	for (int i = 0; i < bind_pose.Num(); i++) {
		BoneDesc* joint = &bind_pose[i];
		file->WriteFloatString("\t( %f %f %f ) ( %f %f %f )\n", joint->baseFrame->t[0], joint->baseFrame->t[1], joint->baseFrame->t[2], joint->baseFrame->q[0], joint->baseFrame->q[1], joint->baseFrame->q[2]);
	}
	file->WriteFloatString("}\n");

	// write the frames
	for (int i = 0; i < frames.Num(); i++) {
		file->WriteFloatString( "\nframe %d {\n", i);
		for (int j = 0; j < bind_pose.Num(); j++) {
			BoneDesc* joint = &bind_pose[i];
			AnimationFrame* frame = &frames[i].skeleton[j];

			if (joint->animBits) {
				file->WriteFloatString("\t");
				if (joint->animBits & ANIM_TX) {
					file->WriteFloatString(" %f", frame->t[0]);
				}
				if (joint->animBits & ANIM_TY) {
					file->WriteFloatString(" %f", frame->t[1]);
				}
				if (joint->animBits & ANIM_TZ) {
					file->WriteFloatString(" %f", frame->t[2]);
				}
				if (joint->animBits & ANIM_QX) {
					file->WriteFloatString(" %f", frame->q[0]);
				}
				if (joint->animBits & ANIM_QY) {
					file->WriteFloatString(" %f", frame->q[1]);
				}
				if (joint->animBits & ANIM_QZ) {
					file->WriteFloatString(" %f", frame->q[2]);
				}
				file->WriteFloatString( "\n");
			}
		}
		file->WriteFloatString("}\n");
	}
	
	fileSystem->CloseFile(file);
}

/*
===============
ExportAnim
===============
*/
void ExportAnim(const char *modelpath, const char* src, const char* dest, idExportOptions& options) {
	common->Printf("Opening Mesh %s\n", src);
	aiScene* scene = (aiScene*)aiImportFile(src, aiProcess_Triangulate | aiProcess_GenSmoothNormals);
	if (scene == nullptr) {
		common->Warning("ExportMesh: Failed to open mesh %s\n", dest);
		return;
	}

	// Find the origin node.
	struct aiNode* originNode = FindNodeByName(scene->mRootNode, "origin");
	if (originNode == NULL) {
		common->Error("You don't have a origin bone in your mesh!\n");
		return;
	}

	int animLength = GetAnimLength(scene->mAnimations[0]);
	common->Printf("AnimLength: %d\n", animLength);

	idList<md6Frame_t> frames;
	frames.SetNum(animLength);

	for (int d = 0; d < animLength; d++) {
		idVec3 _origin;
		idMat3 _axis;
		aiMatrix4x4 iden;

		_origin.Zero();
		_axis.Identity();

		animatescene(scene, scene->mAnimations[0], d);
		frames[d].bounds.Clear();
		GetAnimationFrame(originNode, -1, frames[d].skeleton);

		for (int t = 0; t < frames[d].skeleton.Num(); t++)
		{
			frames[t].bounds.AddPoint(frames[d].skeleton[t].t);
		}
	}

	idList< BoneDesc > root_bones = meshskeleton;
	WriteMD5Anim(modelpath, dest, root_bones, frames, options.commandLine);
}

struct md5ExportWeight_t {
	float weight;
	int jointExportNum;
	idVec3 offset;
};

/*
===============
WriteMD5Mesh
===============
*/
void WriteMD5Mesh(const char *dest, idList< BoneDesc > &skeleton, rvmExportMesh* meshes, int numMeshes, const char *commandLine, aiMatrix4x4 &globalInverseTransform) {	
	idMat4 inverseTransform;
	memcpy(inverseTransform.ToFloatPtr(), &globalInverseTransform, sizeof(float) * 16);

	common->Printf("Writing MD5 mesh %s\n", dest);

	idFile* file = fileSystem->OpenExplicitFileWrite(dest);

	file->WriteFloatString(MD5_VERSION_STRING " %d\n", MD5_VERSION);
	file->WriteFloatString("\tcommandLine \"%s\"\n", commandLine);

	file->WriteFloatString("\tnumMeshes %d\n", numMeshes);
	file->WriteFloatString("\tnumJoints %d\n", skeleton.Num());

	// Write the joint block
	file->WriteFloatString("joints {\n");
		for(int i = 0; i < skeleton.Num(); i++) {
			idQuat quat = skeleton[i].q;
			idVec3 translation = skeleton[i].t;

			idStr parentName = "";
			if(skeleton[i].parentIndex != -1) {				
				parentName = skeleton[skeleton[i].parentIndex].name;			
			}

			//idAngles debugAngles = quat.ToAngles()
			idCQuat	bindQuat = quat.ToCQuat();
			file->WriteFloatString("\t \"%s\" %d ( %f %f %f ) ( %f %f %f ) // %s\n", skeleton[i].name.c_str(), skeleton[i].parentIndex, 
									translation.x, translation.y, translation.z,
									quat.x, quat.y, quat.z, quat.w,									
									parentName.c_str());
		}
	file->WriteFloatString("}\n");

	// Write out all of our meshes.
	for(int i = 0; i < numMeshes; i++) {
		file->WriteFloatString("mesh {\n");
			file->WriteFloatString("\tname \"%s\"\n", meshes[i].mesh->mName.C_Str());
			file->WriteFloatString("\tshader \"%s\"\n", meshes[i].mtrName.c_str());

			idList<md5ExportWeight_t> exportedWeights;

			// Write out all the vertexes.
			file->WriteFloatString("\n\tnumverts %d\n", meshes[i].vertexes.Num());
				for(int d = 0; d < meshes[i].vertexes.Num(); d++) {
					idDrawVert* vert = &meshes[i].vertexes[d];
					rvmExportJointWeight* weight = &meshes[i].vertexWeights[d];

					idVec3 exportedXyz = ConvertToIdSpace(vert->xyz);
					
					//file->WriteFloatString("\t\tvert %d ( %f %f %f ) ( %f %f ) ( %d %d %d %d %f %f %f %f )\n", d, exportedXyz.x, exportedXyz.y, exportedXyz.z,
					//	vert->st.x, vert->st.y,
					//	weight->jointIndex[0], weight->jointIndex[1], weight->jointIndex[2], weight->jointIndex[3],
					//	weight->weights[0], weight->weights[1], weight->weights[2], weight->weights[3]);

					int startWeight = exportedWeights.Num();
					int numWeights = 0;

					for (int o = 0; i < 4; o++)
					{
						if(weight->weights[o] == 0.0f)
							continue;

						int jointIndex = weight->jointIndex[o];
						md5ExportWeight_t w;

						w.jointExportNum = weight->jointIndex[o];

						numWeights++;

						skeleton[jointIndex].q.ToMat3().ProjectVector(vert->xyz - skeleton[jointIndex].t, w.offset);

						w.weight = weight->weights[o];
						exportedWeights.Append(w);
					}

					file->WriteFloatString("\t\tvert %d ( %f %f ) %d %d\n", d, vert->GetTexCoordS(), vert->GetTexCoordT(), startWeight, numWeights);
				}
			file->WriteFloatString("\t}\n");

			// Write out all the triangles
			int triCount = meshes[i].indexes.Num() / 3;
			file->WriteFloatString("\n\tnumtris %d\n", triCount);
			for (int d = 0; d < triCount; d++) {
				file->WriteFloatString("\ttri %d %d %d %d\n", d, meshes[i].indexes[d * 3 + 0], meshes[i].indexes[d * 3 + 1], meshes[i].indexes[d * 3 + 2]);
			}
			file->WriteFloatString("\t}\n");

			// Write out all the weights.
			file->WriteFloatString("\n\tnumweights %d\n", exportedWeights.Num());
			for (int d = 0; d < exportedWeights.Num(); d++) {
				md5ExportWeight_t* w = &exportedWeights[d];
				file->WriteFloatString("\tweight %d %d %f ( %f %f %f )\n", d, w->jointExportNum, w->weight, w->offset.x, w->offset.y, w->offset.z);
			}
		file->WriteFloatString("}\n");
	}

	fileSystem->CloseFile(file);
}

void SetBasePose(struct aiScene* scene, rvmExportMesh *mesh)
{
	aiMesh* amesh = mesh->mesh;
	aiMatrix4x4 skin4;
	aiMatrix3x3 skin3;

	for (int k = 0; k < amesh->mNumBones; k++) {
		struct aiBone* bone = amesh->mBones[k];
		struct aiNode* node = FindNodeByName(scene->mRootNode, bone->mName.data);

		transformnode(&skin4, node);
		aiMultiplyMatrix4(&skin4, &bone->mOffsetMatrix);
		extract3x3(&skin3, &skin4);

		for (int i = 0; i < bone->mNumWeights; i++) {
			int v = bone->mWeights[i].mVertexId;
			float w = bone->mWeights[i].mWeight;

			aiVector3D position = amesh->mVertices[v];
			aiTransformVecByMatrix4(&position, &skin4);
			mesh->vertexes[v].xyz.x += position.x * w;
			mesh->vertexes[v].xyz.y += position.y * w;
			mesh->vertexes[v].xyz.z += position.z * w;
		}
	}
}

/*
===============
ExportMesh
===============
*/
void ExportMesh(const char *src, const char *dest, idExportOptions &options) {
	common->Printf("Opening Mesh %s\n", src);
	aiScene* scene = (aiScene*)aiImportFile(src, aiProcess_Triangulate | aiProcess_GenSmoothNormals);
	if (scene == nullptr) {
		common->Warning("ExportMesh: Failed to open mesh %s\n", dest);
		return;
	}

	// Find the origin node.
	struct aiNode* originNode = FindNodeByName(scene->mRootNode, "origin");
	if (originNode == NULL) {
		common->Error("You don't have a origin bone in your mesh!\n");
		return;
	}

	meshskeleton.Clear();
	boneNames.Clear();
	GatherBoneNames(scene, originNode, boneNames);
	
	idVec3 _origin;
	idMat3 _axis;
	aiMatrix4x4 iden;

	_origin.Zero();
	_axis.Identity();

	GetBindPose(mat3_identity, originNode, -1, meshskeleton);

	// Grab all of the meshes.
	int numMeshes = scene->mNumMeshes;
	idList<rvmExportMesh> meshes;// = new rvmExportMesh[numMeshes];
	meshes.SetNum(numMeshes);

	for(int i = 0; i < numMeshes; i++) {
		rvmExportMesh* mesh = &meshes[i];

		mesh->mesh = scene->mMeshes[i];
		mesh->vertexes.SetNum(mesh->mesh->mNumVertices);
		mesh->vertexWeights.SetNum(mesh->mesh->mNumVertices);

		mesh->ResetWeights();

		for(int f = 0; f < mesh->mesh->mNumVertices; f++) {
			mesh->vertexes[f].xyz = idVec3(0, 0, 0);
			mesh->vertexes[f].SetTexCoord(idVec2(mesh->mesh->mTextureCoords[0][f].x, mesh->mesh->mTextureCoords[0][f].y));
		}

		mesh->indexes.SetNum(mesh->mesh->mNumFaces * 3);
		for(int f = 0; f < mesh->mesh->mNumFaces; f++) {
			aiFace* face = &mesh->mesh->mFaces[f];
			mesh->indexes[f * 3 + 2] = face->mIndices[0];
			mesh->indexes[f * 3 + 1] = face->mIndices[1];
			mesh->indexes[f * 3 + 0] = face->mIndices[2];
		}

		for(int f = 0; f < mesh->mesh->mNumBones; f++) {
			aiBone* bone = mesh->mesh->mBones[f];

			for(int g = 0; g < bone->mNumWeights; g++) {
				int vertexId = bone->mWeights[g].mVertexId;
				float weight = bone->mWeights[g].mWeight;
				
				if (weight > 0) {
					mesh->vertexWeights[vertexId].jointIndex[mesh->vertexWeights[vertexId].numWeights] = FindExportJoint(bone, meshskeleton);
					mesh->vertexWeights[vertexId].weights[mesh->vertexWeights[vertexId].numWeights] = weight;
					mesh->vertexWeights[vertexId].numWeights++;
				}
			}
		}

		aiString Path;
		const aiMaterial* material = scene->mMaterials[mesh->mesh->mMaterialIndex];
		material->GetTexture(aiTextureType_DIFFUSE, 0, &Path);
		mesh->mtrName = Path.C_Str();
		if(mesh->mtrName.Length() > 0) {
			mesh->mtrName = fileSystem->OSPathToRelativePath(mesh->mtrName);
		}

		if(mesh->mtrName.Length() <= 0) {
			common->Warning("No diffuse texture assigned for mesh %s, using implicit path", mesh->mesh->mName.C_Str());

			const char* meshName = mesh->mesh->mName.C_Str();
			const char *skipTo = strstr(meshName, ":");
			if(skipTo != NULL) {
				meshName = skipTo + 1;
			}

			idStr modelSrcPath = src;			
			modelSrcPath = fileSystem->OSPathToRelativePath(modelSrcPath.c_str());
			modelSrcPath.StripFilename();
			modelSrcPath += "/";
			modelSrcPath += meshName;

			mesh->mtrName = modelSrcPath;
			mesh->mtrName.Replace(".", "_");
		}

		SetBasePose(scene, mesh);
	}

	aiMatrix4x4 globalInverseTransform = scene->mRootNode->mTransformation;
	globalInverseTransform.Inverse();

	WriteMD5Mesh(dest, meshskeleton, meshes.Ptr(), numMeshes, options.commandLine, globalInverseTransform);
}

/*
==============================================================================

dll setup

==============================================================================
*/

/*
===============
Maya_Shutdown
===============
*/
void Maya_Shutdown( void ) {

}

idStr lastMeshExport = "";

/*
===============
Maya_ConvertModel
===============
*/
const char *Maya_ConvertModel( const char *ospath, const char *commandline ) {
	idExportOptions options(commandline, ospath);

	switch(options.type) {
		case WRITE_MESH:
			ExportMesh(options.src, options.dest, options);
			lastMeshExport = options.dest;
			break;

		case WRITE_ANIM:
			ExportAnim(lastMeshExport.c_str(), options.src, options.dest, options);
			break;
	}

	return "Ok";
}


