// Monster_base.cpp
//

#pragma hdrstop
#include "precompiled.h"

#include "../Game_local.h"

//
// attack flags
//
#define ATTACK_DODGE_LEFT	1
#define ATTACK_DODGE_RIGHT	2
#define ATTACK_COMBAT_NODE	4
#define ATTACK_MELEE		8
#define ATTACK_LEAP			16
#define ATTACK_MISSILE		32
#define ATTACK_SPECIAL1		64
#define ATTACK_SPECIAL2		128
#define ATTACK_SPECIAL3		256
#define ATTACK_SPECIAL4		512


#define AI_NOT_ACTIVATED	0
#define AI_CHASING_ENEMY	1
#define AI_LOST				2
#define AI_PATH_FOLLOWING	3
#define AI_ATTACK_NODE		4

/*
======================
rvmMonsterBase::trigger_wakeup_targets
======================
*/
void rvmMonsterBase::trigger_wakeup_targets(void) {
	idStr key;
	idStr name;
	idEntity *ent;

	key = GetNextKey("wakeup_target", "");
	while (key != "") {
		name = GetKey(key);
		ent = gameLocal.FindEntity(name);
		if (!ent) {
			idLib::Warning("Unknown wakeup_target '" + name + "' on entity '" + GetName() + "'");
		}
		else {
			ent->Signal(SIG_TRIGGER);
			ent->ProcessEvent(&EV_Activate, gameLocal.GetLocalPlayer());
			ent->TriggerGuis();			
		}
		key = GetNextKey("wakeup_target", key);
	}
}

/*
======================
rvmMonsterBase::checkForEnemy
======================
*/
bool rvmMonsterBase::checkForEnemy(float use_fov) {
	idEntity *enemy;
	idVec3 size;
	float dist;

	if (gameLocal.InfluenceActive()) {
		return false;
	}

	if (AI_PAIN) {
		// get out of ambush mode when shot
		ambush = false;
	}

	if (ignoreEnemies) {
		// while we're following paths, we only respond to enemies on pain, or when close enough to them
		if (stay_on_attackpath) {
			// don't exit attack_path when close to enemy
			return false;
		}

		enemy = this->enemy.GetEntity();
		if (!enemy) {
			enemy = FindEnemy(false);
		}

		if (!enemy) {
			return false;
		}

		size = GetSize();
		dist = (size.x * 1.414) + 16;  // diagonal distance plus 16 units
		if (EnemyRange() > dist) {
			return false;
		}
	}
	else {
		if (this->enemy.GetEntity()) {
			// we were probably triggered (which sets our enemy)
			return true;
		}

		if (!ignore_sight) {
			enemy = FindEnemy(use_fov);
		}

		if (!enemy) {
			if (ambush) {
				return false;
			}

			enemy = HeardSound(true);
			if (!enemy) {
				return false;
			}
		}
	}

	ignoreEnemies = false;

	// once we've woken up, get out of ambush mode
	ambush = false;

	// don't use the fov for sight anymore
	idle_sight_fov = false;

	Event_SetEnemy(enemy);
	return true;
}

/*
=====================
rvmMonsterBase::state_Spawner
=====================
*/
stateResult_t rvmMonsterBase::state_Spawner() {
	return SRESULT_DONE; // TODO implement this
}

/*
======================
rvmMonsterBase::monster_begin
======================
*/
stateResult_t rvmMonsterBase::monster_begin(void) {
#if 0
	float	teleportType;
	idStr	triggerAnim;
	float	waittime;
	bool  start_active;
	idEntity  *path;
	float	movetype;
	idEntity  *enemy;

	run = false;
	ignore_sight = GetIntKey("no_sight");

	if (!GetIntKey("ignore_flashlight")) {
		// allow waking up from the flashlight
		Event_WakeOnFlashlight(true);
	}

	start_active = false;

	if (resurrect) {
		teleportType = 4;
		triggerAnim = "";
		AI_ACTIVATED = true;
	}
	else {
		teleportType = GetIntKey("teleport");
		triggerAnim = GetKey("trigger_anim");
	}

	if (GetIntKey("spawner")) {
		stateThread.SetState("state_Spawner");
		stateThread.SetState("monster_begin");
		Event_SetKey("spawner", "0");
		return SRESULT_DONE;
	}

	if (playingTriggerAnim != "") {

	}

	if (triggerAnim != "") {
		//
		// hide until triggered and then play a special animation
		//
		if (fl.hidden == false)
		{
			Event_CheckAnim(ANIMCHANNEL_TORSO, triggerAnim);
			Hide();
		}

		// waitUntil(AI_ACTIVATED);
		if (!AI_ACTIVATED)
		{
			return SRESULT_WAIT;
		}

		// waitUntil(canBecomeSolid());
		if (!CanBecomeSolid())
		{
			return SRESULT_WAIT;
		}		

		// don't go dormant during trigger_anim anims since they
		// may end up floating in air during no gravity anims.
		Event_SetNeverDormant(true);

		Show();
		trigger_wakeup_targets();

		playingTriggerAnim = triggerAnim;

		

		playCustomAnim(triggerAnim, 0, 4);
		waitAction("customAnim");
		setNeverDormant(getFloatKey("neverdormant"));
		locateEnemy();
		start_active = true;
	}
	else if (teleportType > 0) {
		//
		// teleport in when triggered
		//
		hide();
		waitUntil(AI_ACTIVATED);
		waitUntil(canBecomeSolid());
		becomeSolid();
		movetype = getMoveType();
		setMoveType(MOVETYPE_STATIC);

		// don't go dormant during teleport anims since they
		// may end up floating in air during no gravity anims.
		setNeverDormant(true);

		trigger_wakeup_targets();
		if (teleportType == 1) {
			startFx(getKey("fx_teleport1"));
			wait(1.6);
		}
		else if (teleportType == 2) {
			startFx(getKey("fx_teleport2"));
			wait(2.6);
		}
		else if (teleportType == 3) {
			startFx(getKey("fx_teleport3"));
			wait(3.6);
		}
		else {
			startFx(getKey("fx_teleport"));
			wait(0.6);
		}
		show();
		playCustomAnim("teleport", 0, 4);
		waitAction("customAnim");
		setNeverDormant(getFloatKey("neverdormant"));
		locateEnemy();
		setMoveType(movetype);
		start_active = true;
	}
	else if (getIntKey("hide")) {
		//
		// hide until triggered
		//
		hide();
		waitUntil(AI_ACTIVATED);
		if ((getIntKey("hide") == 1) || ambush) {
			AI_ACTIVATED = false;
			clearEnemy();
		}
		waitUntil(canBecomeSolid());
		show();
	}

	waittime = getFloatKey("wait");
	if (waittime > 0) {
		sys.wait(waittime);
	}

	enemy = getEntityKey("enemy");
	if (enemy) {
		setEnemy(enemy);
	}

	if (!start_active) {
		if (getIntKey("wake_on_attackcone")) {
			wake_on_attackcone();
		}
		else if (getIntKey("walk_on_trigger")) {
			walk_on_trigger();
		}
		else if (getIntKey("trigger")) {
			wake_on_trigger();
		}
		else {
			wake_on_enemy();
		}
	}
	else if (getIntKey("attack_path")) {
		// follow a path and fight player at end
		path = randomPath();
		if (path) {
			run = true;
			ignoreEnemies = true;
			idle_followPathEntities(path);
			ignoreEnemies = false;
		}
	}

	// allow him to see after he's woken up
	ignore_sight = false;

	// ignore the flashlight from now on
	wakeOnFlashlight(false);
#else
	return SRESULT_DONE;
#endif
}