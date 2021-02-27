// BotAI_Battle_Attacked.cpp
//

#pragma hdrstop
#include "precompiled.h"
#include "../Game_local.h"

/*
==================
rvmBot::state_Attacked
==================
*/
stateResult_t rvmBot::state_Attacked(stateParms_t* parms) {
	// respawn if dead.
	if (BotIsDead(&bs))
	{
		stateThread.SetState("state_Respawn");
		return SRESULT_DONE_FRAME;
	}

	if (gameLocal.SysScriptTime() > bs.aggressiveAttackTime || bs.weaponnum == 0) {
		stateThread.SetState("state_Retreat");
		return SRESULT_DONE;
	}

	bs.currentGoal.origin = bs.lastenemyorigin;

	//aim at the enemy
	BotAimAtEnemy(&bs);

	//attack the enemy if possible
	BotCheckAttack(&bs);

	return SRESULT_WAIT;
}