// Snapmap.cpp
//

#include "precompiled.h"
#include "Snapmap.h"

/*
==========================
rvmSnapMap::ParseCell
==========================
*/
void rvmSnapMap::ParseCell(idLexer& lexer) {
	rvmSnapMapCell* cell = new rvmSnapMapCell();

	cell->x = lexer.ParseInt();
	cell->y = lexer.ParseInt();
	cell->rotation = lexer.ParseInt();

	idToken mapFileName;
	lexer.ReadToken(&mapFileName);

	cell->mapFile = new idMapFile();
	if (!cell->mapFile->Parse(mapFileName))
	{
		delete cell;
		lexer.Error("Failed to load map file for cell %s\n", mapFileName.c_str());
		return;
	}

	cells.Append(cell);
}

void ShiftMapBrush(idMapBrush* brush, idMapBrush *newBrush, idVec3 offset, idMat3 rotation)
{
	for (int i = 0; i < brush->GetNumSides(); i++)
	{
		idMapBrushSide* side = brush->GetSide(i);
		idMapBrushSide* newSide = new idMapBrushSide();

		*newSide = *side;

		idWinding w;
		w.BaseForPlane(side->GetPlane());

		idVec3 planepts[3];

		for (int j = 0; j < 3; j++) {
			planepts[j].x = w[j].x;
			planepts[j].y = w[j].y;
			planepts[j].z = w[j].z;

			planepts[j] *= rotation;
		}

		for (int j = 0; j < 3; j++) {
			planepts[j].x += offset.x;
			planepts[j].y += offset.y;
			planepts[j].z += offset.z;
		}

		idPlane p;
		p.FromPoints(planepts[0], planepts[1], planepts[2]);

		newSide->SetPlane(p);	
		newBrush->AddSide(newSide);
	}
}

/*
====================
rvmSnapMap::Build
====================
*/
void rvmSnapMap::Build(const char* fileName) {
	idMapFile* newMap = new idMapFile();

	idMapEntity* newWorldSpawn = new idMapEntity();

	newWorldSpawn->epairs.Set("classname", "worldspawn");

	for (int i = 0; i < cells.Num(); i++)
	{
		rvmSnapMapCell* cell = cells[i];

		//cell->mapFile->ShiftMap(cell->x * 128, cell->y * 128);

		for (int d = 0; d < cell->mapFile->GetNumEntities(); d++)
		{
			idMapEntity* entity = cell->mapFile->GetEntity(d);
			
			for (int r = 0; r < entity->GetNumPrimitives(); r++)
			{
				idMapPrimitive* prim = entity->GetPrimitive(r);
				
				if (prim->GetType() == idMapPrimitive::TYPE_BRUSH)
				{
					idMapBrush* brush = (idMapBrush*)prim;
					idMapBrush* newPrimitive = new idMapBrush();

					ShiftMapBrush(brush, newPrimitive, idVec3(cell->x * (192 * 2), cell->y * (192 * 2), 0), idAngles(0, cell->rotation, 0).ToMat3());

					newWorldSpawn->AddPrimitive(newPrimitive);
				}
			}
		}
	}	
	newMap->AddEntity(newWorldSpawn);
	newMap->Write(fileName, ".map");

	delete newMap;
}

//
// snapmap
//
CONSOLE_COMMAND(snapmap, "snapmap tool", NULL)
{
	idLexer lexer;
	rvmSnapMap snapMap;

	if (args.Argc() < 2)
	{
		idLib::Warning("usage: snapmap <mapname>\n");
		return;
	}

	if (!lexer.LoadFile(va("snapmaps/%s.snapmap", args.Argv(1)), false))
	{
		idLib::Warning("Failed to open snapmap snapmaps/%s.snapmap\n", args.Argv(1));
		return;
	}

	lexer.ExpectTokenString(SNAPMAPIDEN);
	lexer.ExpectTokenString(SNAPMAPVERSION);

	while (!lexer.EndOfFile())
	{
		idToken token;

		lexer.ReadToken(&token);
		if (token == "")
		{
			break;
		}
		if (token == "cell")
		{
			snapMap.ParseCell(lexer);
		}
		else
		{
			lexer.Error("Unknown or unexpected token %s\n", token.c_str());
		}
	}

	snapMap.Build(va("maps/snapmaps/%s.map", args.Argv(1)));
}