// Bot.cpp
//

#include "precompiled.h"
#pragma hdrstop

#include "../Game_local.h"

idCVar bot_pathdebug("bot_pathdebug", "0", CVAR_BOOL | CVAR_CHEAT, "force the bot to path to player");
idCVar bot_goaldist("bot_goaldist", "20", CVAR_INTEGER | CVAR_CHEAT, "");
idCVar bot_debugnav("bot_debugnav", "0", CVAR_BOOL | CVAR_CHEAT, "draws navmesh paths for the bot");

CLASS_DECLARATION(idPlayer, rvmBot)
END_CLASS

/*
===================
rvmBot::rvmBot
===================
*/
rvmBot::rvmBot() {
	gameLocal.RegisterBot(this);
}

/*
===================
rvmBot::~rvmBot
===================
*/
rvmBot::~rvmBot() {
	gameLocal.UnRegisterBot(this);
}

/*
===================
rvmBot::Spawn
===================
*/
void rvmBot::Spawn(void) {
	idPlayer::Spawn();

	if (gameLocal.mpGame.GetGameState() != idMultiplayerGame::GAMEON)
	{
		gameLocal.mpGame.NewState(idMultiplayerGame::GAMEON, this);
	}
}

/*
===================
rvmBot::Think
===================
*/
void rvmBot::BotMoveToGoalOrigin(void) {
	botinput.dir = currentGoal.nextMoveOrigin - GetPhysics()->GetOrigin();

	idAngles ang(0, botinput.dir.ToYaw(), 0);
	botinput.viewangles = ang;
	botinput.speed = 200;

	botinput.dir.Normalize();
}

/*
===================
rvmBot::ServerThink
===================
*/
void rvmBot::ServerThink(void) {
	
}

/*
===================
rvmBot::Think
===================
*/
void rvmBot::Think(void) {
	if(common->IsServer())
	{
		ServerThink();
	}

	deltaViewAngles.Zero();

	idPlayer::Think();
}