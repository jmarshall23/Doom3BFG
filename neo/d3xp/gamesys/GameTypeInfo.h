
#ifndef __GAMETYPEINFO_H__
#define __GAMETYPEINFO_H__

/*
===================================================================================

	This file has been generated with the Type Info Generator v1.0 (c) 2004 id Software

	922 constants
	86 enums
	447 classes/structs/unions
	3 templates
	6 max inheritance level for 'idAFEntity_VehicleAutomated'

===================================================================================
*/

typedef struct {
	const char * name;
	const char * type;
	const char * value;
} constantInfo_t;

typedef struct {
	const char * name;
	int value;
} enumValueInfo_t;

typedef struct {
	const char * typeName;
	const enumValueInfo_t * values;
} enumTypeInfo_t;

typedef struct {
	const char * type;
	const char * name;
	int offset;
	int size;
} classVariableInfo_t;

typedef struct {
	const char * typeName;
	const char * superType;
	int size;
	const classVariableInfo_t * variables;
} classTypeInfo_t;

static constantInfo_t constantInfo[] = {
	{ "const int", "MAX_CLIENTS", "0" },
	{ "const int", "MAX_CLIENTS_IN_PVS", "0>>3" },
	{ "const int", "GENTITYNUM_BITS", "12" },
	{ "const int", "MAX_GENTITIES", "1<<12" },
	{ "const int", "ENTITYNUM_NONE", "4096-1" },
	{ "const int", "ENTITYNUM_WORLD", "4096-2" },
	{ "const int", "ENTITYNUM_MAX_NORMAL", "4096-2" },
	{ "const int", "ENTITYNUM_FIRST_NON_REPLICATED", "4094-256" },
	{ "int", "ev_error", "-1" },
	{ "int", "ev_void", "0" },
	{ "int", "ev_scriptevent", "1" },
	{ "int", "ev_namespace", "2" },
	{ "int", "ev_string", "3" },
	{ "int", "ev_float", "4" },
	{ "int", "ev_vector", "5" },
	{ "int", "ev_entity", "6" },
	{ "int", "ev_field", "7" },
	{ "int", "ev_function", "8" },
	{ "int", "ev_virtualfunction", "9" },
	{ "int", "ev_pointer", "10" },
	{ "int", "ev_object", "11" },
	{ "int", "ev_jumpoffset", "12" },
	{ "int", "ev_argsize", "13" },
	{ "int", "ev_boolean", "14" },
	{ "int", "idVarDef::uninitialized", "0" },
	{ "int", "idVarDef::initializedVariable", "1" },
	{ "int", "idVarDef::initializedConstant", "2" },
	{ "int", "idVarDef::stackVariable", "3" },
	{ "const int", "ANIM_NumAnimChannels", "5" },
	{ "const int", "ANIM_MaxAnimsPerChannel", "3" },
	{ "const int", "ANIM_MaxSyncedAnims", "3" },
	{ "const int", "ANIMCHANNEL_ALL", "0" },
	{ "const int", "ANIMCHANNEL_TORSO", "1" },
	{ "const int", "ANIMCHANNEL_LEGS", "2" },
	{ "const int", "ANIMCHANNEL_HEAD", "3" },
	{ "const int", "ANIMCHANNEL_EYELIDS", "4" },
	{ "int", "JOINTMOD_NONE", "0" },
	{ "int", "JOINTMOD_LOCAL", "1" },
	{ "int", "JOINTMOD_LOCAL_OVERRIDE", "2" },
	{ "int", "JOINTMOD_WORLD", "3" },
	{ "int", "JOINTMOD_WORLD_OVERRIDE", "4" },
	{ "int", "FC_SCRIPTFUNCTION", "0" },
	{ "int", "FC_SCRIPTFUNCTIONOBJECT", "1" },
	{ "int", "FC_EVENTFUNCTION", "2" },
	{ "int", "FC_SOUND", "3" },
	{ "int", "FC_SOUND_VOICE", "4" },
	{ "int", "FC_SOUND_VOICE2", "5" },
	{ "int", "FC_SOUND_BODY", "6" },
	{ "int", "FC_SOUND_BODY2", "7" },
	{ "int", "FC_SOUND_BODY3", "8" },
	{ "int", "FC_SOUND_WEAPON", "9" },
	{ "int", "FC_SOUND_ITEM", "10" },
	{ "int", "FC_SOUND_GLOBAL", "11" },
	{ "int", "FC_SOUND_CHATTER", "12" },
	{ "int", "FC_SKIN", "13" },
	{ "int", "FC_TRIGGER", "14" },
	{ "int", "FC_TRIGGER_SMOKE_PARTICLE", "15" },
	{ "int", "FC_MELEE", "16" },
	{ "int", "FC_DIRECTDAMAGE", "17" },
	{ "int", "FC_BEGINATTACK", "18" },
	{ "int", "FC_ENDATTACK", "19" },
	{ "int", "FC_MUZZLEFLASH", "20" },
	{ "int", "FC_CREATEMISSILE", "21" },
	{ "int", "FC_LAUNCHMISSILE", "22" },
	{ "int", "FC_FIREMISSILEATTARGET", "23" },
	{ "int", "FC_FOOTSTEP", "24" },
	{ "int", "FC_LEFTFOOT", "25" },
	{ "int", "FC_RIGHTFOOT", "26" },
	{ "int", "FC_ENABLE_EYE_FOCUS", "27" },
	{ "int", "FC_DISABLE_EYE_FOCUS", "28" },
	{ "int", "FC_FX", "29" },
	{ "int", "FC_DISABLE_GRAVITY", "30" },
	{ "int", "FC_ENABLE_GRAVITY", "31" },
	{ "int", "FC_JUMP", "32" },
	{ "int", "FC_ENABLE_CLIP", "33" },
	{ "int", "FC_DISABLE_CLIP", "34" },
	{ "int", "FC_ENABLE_WALK_IK", "35" },
	{ "int", "FC_DISABLE_WALK_IK", "36" },
	{ "int", "FC_ENABLE_LEG_IK", "37" },
	{ "int", "FC_DISABLE_LEG_IK", "38" },
	{ "int", "FC_RECORDDEMO", "39" },
	{ "int", "FC_AVIGAME", "40" },
	{ "int", "FC_LAUNCH_PROJECTILE", "41" },
	{ "int", "FC_TRIGGER_FX", "42" },
	{ "int", "FC_START_EMITTER", "43" },
	{ "int", "FC_STOP_EMITTER", "44" },
	{ "int", "AF_JOINTMOD_AXIS", "0" },
	{ "int", "AF_JOINTMOD_ORIGIN", "1" },
	{ "int", "AF_JOINTMOD_BOTH", "2" },
	{ "int", "PATHTYPE_WALK", "0" },
	{ "int", "PATHTYPE_WALKOFFLEDGE", "1" },
	{ "int", "PATHTYPE_BARRIERJUMP", "2" },
	{ "int", "PATHTYPE_JUMP", "3" },
	{ "int", "PVS_NORMAL", "0" },
	{ "int", "PVS_ALL_PORTALS_OPEN", "1" },
	{ "int", "PVS_CONNECTED_AREAS", "2" },
	{ "int", "GAME_SP", "-2" },
	{ "int", "GAME_RANDOM", "-1" },
	{ "int", "GAME_DM", "0" },
	{ "int", "GAME_TOURNEY", "1" },
	{ "int", "GAME_TDM", "2" },
	{ "int", "GAME_LASTMAN", "3" },
	{ "int", "GAME_CTF", "4" },
	{ "int", "GAME_COUNT", "5" },
	{ "int", "FLAGSTATUS_INBASE", "0" },
	{ "int", "FLAGSTATUS_TAKEN", "1" },
	{ "int", "FLAGSTATUS_STRAY", "2" },
	{ "int", "FLAGSTATUS_NONE", "3" },
	{ "const int", "NUM_CHAT_NOTIFY", "5" },
	{ "const int", "CHAT_FADE_TIME", "400" },
	{ "const int", "FRAGLIMIT_DELAY", "2000" },
	{ "const int", "MP_PLAYER_MINFRAGS", "-100" },
	{ "const int", "MP_PLAYER_MAXFRAGS", "400" },
	{ "const int", "MP_PLAYER_MAXWINS", "100" },
	{ "const int", "MP_PLAYER_MAXPING", "999" },
	{ "const int", "MP_CTF_MAXPOINTS", "400" },
	{ "int", "SND_YOUWIN", "0" },
	{ "int", "SND_YOULOSE", "1" },
	{ "int", "SND_FIGHT", "2" },
	{ "int", "SND_THREE", "3" },
	{ "int", "SND_TWO", "4" },
	{ "int", "SND_ONE", "5" },
	{ "int", "SND_SUDDENDEATH", "6" },
	{ "int", "SND_FLAG_CAPTURED_YOURS", "7" },
	{ "int", "SND_FLAG_CAPTURED_THEIRS", "8" },
	{ "int", "SND_FLAG_RETURN", "9" },
	{ "int", "SND_FLAG_TAKEN_YOURS", "10" },
	{ "int", "SND_FLAG_TAKEN_THEIRS", "11" },
	{ "int", "SND_FLAG_DROPPED_YOURS", "12" },
	{ "int", "SND_FLAG_DROPPED_THEIRS", "13" },
	{ "int", "SND_COUNT", "14" },
	{ "int", "idMultiplayerGame::INACTIVE", "0" },
	{ "int", "idMultiplayerGame::WARMUP", "1" },
	{ "int", "idMultiplayerGame::COUNTDOWN", "2" },
	{ "int", "idMultiplayerGame::GAMEON", "3" },
	{ "int", "idMultiplayerGame::SUDDENDEATH", "4" },
	{ "int", "idMultiplayerGame::GAMEREVIEW", "5" },
	{ "int", "idMultiplayerGame::NEXTGAME", "6" },
	{ "int", "idMultiplayerGame::STATE_COUNT", "7" },
	{ "int", "idMultiplayerGame::MSG_SUICIDE", "0" },
	{ "int", "idMultiplayerGame::MSG_KILLED", "1" },
	{ "int", "idMultiplayerGame::MSG_KILLEDTEAM", "2" },
	{ "int", "idMultiplayerGame::MSG_DIED", "3" },
	{ "int", "idMultiplayerGame::MSG_SUDDENDEATH", "4" },
	{ "int", "idMultiplayerGame::MSG_JOINEDSPEC", "5" },
	{ "int", "idMultiplayerGame::MSG_TIMELIMIT", "6" },
	{ "int", "idMultiplayerGame::MSG_FRAGLIMIT", "7" },
	{ "int", "idMultiplayerGame::MSG_TELEFRAGGED", "8" },
	{ "int", "idMultiplayerGame::MSG_JOINTEAM", "9" },
	{ "int", "idMultiplayerGame::MSG_HOLYSHIT", "10" },
	{ "int", "idMultiplayerGame::MSG_POINTLIMIT", "11" },
	{ "int", "idMultiplayerGame::MSG_FLAGTAKEN", "12" },
	{ "int", "idMultiplayerGame::MSG_FLAGDROP", "13" },
	{ "int", "idMultiplayerGame::MSG_FLAGRETURN", "14" },
	{ "int", "idMultiplayerGame::MSG_FLAGCAPTURE", "15" },
	{ "int", "idMultiplayerGame::MSG_SCOREUPDATE", "16" },
	{ "int", "idMultiplayerGame::MSG_LEFTGAME", "17" },
	{ "int", "idMultiplayerGame::MSG_COUNT", "18" },
	{ "const int", "MAX_GAME_MESSAGE_SIZE", "8192" },
	{ "const int", "MAX_ENTITY_STATE_SIZE", "512" },
	{ "const int", "ENTITY_PVS_SIZE", "((4096+31)>>5)" },
	{ "const int", "NUM_RENDER_PORTAL_BITS", "0(0)" },
	{ "const int", "MAX_EVENT_PARAM_SIZE", "128" },
	{ "int", "GAME_RELIABLE_MESSAGE_SYNCEDCVARS", "0" },
	{ "int", "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", "1" },
	{ "int", "GAME_RELIABLE_MESSAGE_CHAT", "2" },
	{ "int", "GAME_RELIABLE_MESSAGE_TCHAT", "3" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_EVENT", "4" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_INDEX", "5" },
	{ "int", "GAME_RELIABLE_MESSAGE_DB", "6" },
	{ "int", "GAME_RELIABLE_MESSAGE_DROPWEAPON", "7" },
	{ "int", "GAME_RELIABLE_MESSAGE_RESTART", "8" },
	{ "int", "GAME_RELIABLE_MESSAGE_TOURNEYLINE", "9" },
	{ "int", "GAME_RELIABLE_MESSAGE_VCHAT", "10" },
	{ "int", "GAME_RELIABLE_MESSAGE_STARTSTATE", "11" },
	{ "int", "GAME_RELIABLE_MESSAGE_WARMUPTIME", "12" },
	{ "int", "GAME_RELIABLE_MESSAGE_SPECTATE", "13" },
	{ "int", "GAME_RELIABLE_MESSAGE_EVENT", "14" },
	{ "int", "GAME_RELIABLE_MESSAGE_LOBBY_COUNTDOWN", "15" },
	{ "int", "GAME_RELIABLE_MESSAGE_RESPAWN_AVAILABLE", "16" },
	{ "int", "GAME_RELIABLE_MESSAGE_MATCH_STARTED_TIME", "17" },
	{ "int", "GAME_RELIABLE_MESSAGE_ACHIEVEMENT_UNLOCK", "18" },
	{ "int", "GAME_RELIABLE_MESSAGE_CLIENT_HITSCAN_HIT", "19" },
	{ "int", "GAMESTATE_UNINITIALIZED", "0" },
	{ "int", "GAMESTATE_NOMAP", "1" },
	{ "int", "GAMESTATE_STARTUP", "2" },
	{ "int", "GAMESTATE_ACTIVE", "3" },
	{ "int", "GAMESTATE_SHUTDOWN", "4" },
	{ "int", "idEventQueue::OUTOFORDER_IGNORE", "0" },
	{ "int", "idEventQueue::OUTOFORDER_DROP", "1" },
	{ "int", "idEventQueue::OUTOFORDER_SORT", "2" },
	{ "int", "SLOWMO_STATE_OFF", "0" },
	{ "int", "SLOWMO_STATE_RAMPUP", "1" },
	{ "int", "SLOWMO_STATE_ON", "2" },
	{ "int", "SLOWMO_STATE_RAMPDOWN", "3" },
	{ ": const static int", "idGameLocal::INITIAL_SPAWN_COUNT", "1" },
	{ "int", "SND_CHANNEL_ANY", "0" },
	{ "int", "SND_CHANNEL_VOICE", "0" },
	{ "int", "SND_CHANNEL_VOICE2", "1" },
	{ "int", "SND_CHANNEL_BODY", "2" },
	{ "int", "SND_CHANNEL_BODY2", "3" },
	{ "int", "SND_CHANNEL_BODY3", "4" },
	{ "int", "SND_CHANNEL_WEAPON", "5" },
	{ "int", "SND_CHANNEL_ITEM", "6" },
	{ "int", "SND_CHANNEL_HEART", "7" },
	{ "int", "SND_CHANNEL_PDA_AUDIO", "8" },
	{ "int", "SND_CHANNEL_PDA_VIDEO", "9" },
	{ "int", "SND_CHANNEL_DEMONIC", "10" },
	{ "int", "SND_CHANNEL_RADIO", "11" },
	{ "int", "SND_CHANNEL_AMBIENT", "12" },
	{ "int", "SND_CHANNEL_DAMAGE", "13" },
	{ "const float", "DEFAULT_GRAVITY", "1066.0" },
	{ "const int", "CINEMATIC_SKIP_DELAY", "0(2.0)" },
	{ "int", "FORCEFIELD_UNIFORM", "0" },
	{ "int", "FORCEFIELD_EXPLOSION", "1" },
	{ "int", "FORCEFIELD_IMPLOSION", "2" },
	{ "int", "FORCEFIELD_APPLY_FORCE", "0" },
	{ "int", "FORCEFIELD_APPLY_VELOCITY", "1" },
	{ "int", "FORCEFIELD_APPLY_IMPULSE", "2" },
	{ "int", "MM_OK", "0" },
	{ "int", "MM_SLIDING", "1" },
	{ "int", "MM_BLOCKED", "2" },
	{ "int", "MM_STEPPED", "3" },
	{ "int", "MM_FALLING", "4" },
	{ "int", "PM_NORMAL", "0" },
	{ "int", "PM_DEAD", "1" },
	{ "int", "PM_SPECTATOR", "2" },
	{ "int", "PM_FREEZE", "3" },
	{ "int", "PM_NOCLIP", "4" },
	{ "int", "WATERLEVEL_NONE", "0" },
	{ "int", "WATERLEVEL_FEET", "1" },
	{ "int", "WATERLEVEL_WAIST", "2" },
	{ "int", "WATERLEVEL_HEAD", "3" },
	{ "int", "CONSTRAINT_INVALID", "0" },
	{ "int", "CONSTRAINT_FIXED", "1" },
	{ "int", "CONSTRAINT_BALLANDSOCKETJOINT", "2" },
	{ "int", "CONSTRAINT_UNIVERSALJOINT", "3" },
	{ "int", "CONSTRAINT_HINGE", "4" },
	{ "int", "CONSTRAINT_HINGESTEERING", "5" },
	{ "int", "CONSTRAINT_SLIDER", "6" },
	{ "int", "CONSTRAINT_CYLINDRICALJOINT", "7" },
	{ "int", "CONSTRAINT_LINE", "8" },
	{ "int", "CONSTRAINT_PLANE", "9" },
	{ "int", "CONSTRAINT_SPRING", "10" },
	{ "int", "CONSTRAINT_CONTACT", "11" },
	{ "int", "CONSTRAINT_FRICTION", "12" },
	{ "int", "CONSTRAINT_CONELIMIT", "13" },
	{ "int", "CONSTRAINT_PYRAMIDLIMIT", "14" },
	{ "int", "CONSTRAINT_SUSPENSION", "15" },
	{ "static const int", "idSmokeParticles::MAX_SMOKE_PARTICLES", "10000" },
	{ "static const int", "DELAY_DORMANT_TIME", "3000" },
	{ "int", "TH_ALL", "-1" },
	{ "int", "TH_THINK", "1" },
	{ "int", "TH_PHYSICS", "2" },
	{ "int", "TH_ANIMATE", "4" },
	{ "int", "TH_UPDATEVISUALS", "8" },
	{ "int", "TH_UPDATEPARTICLES", "16" },
	{ "int", "SIG_TOUCH", "0" },
	{ "int", "SIG_USE", "1" },
	{ "int", "SIG_TRIGGER", "2" },
	{ "int", "SIG_REMOVED", "3" },
	{ "int", "SIG_DAMAGE", "4" },
	{ "int", "SIG_BLOCKED", "5" },
	{ "int", "SIG_MOVER_POS1", "6" },
	{ "int", "SIG_MOVER_POS2", "7" },
	{ "int", "SIG_MOVER_1TO2", "8" },
	{ "int", "SIG_MOVER_2TO1", "9" },
	{ "int", "NUM_SIGNALS", "10" },
	{ ": static const int", "idEntity::MAX_PVS_AREAS", "4" },
	{ "static const uint32", "idEntity::INVALID_PREDICTION_KEY", "0xFFFFFFFF" },
	{ "int", "idEntity::EVENT_STARTSOUNDSHADER", "0" },
	{ "int", "idEntity::EVENT_STOPSOUNDSHADER", "1" },
	{ "int", "idEntity::EVENT_MAXEVENTS", "2" },
	{ "int", "idEntity::USE_NO_INTERPOLATION", "0" },
	{ "int", "idEntity::USE_LATEST_SNAP_ONLY", "1" },
	{ "int", "idEntity::USE_INTERPOLATION", "2" },
	{ "int", "idAnimatedEntity::EVENT_ADD_DAMAGE_EFFECT", "2" },
	{ "int", "idAnimatedEntity::EVENT_MAXEVENTS", "3" },
	{ ": static const int", "idIK_Walk::MAX_LEGS", "8" },
	{ ": static const int", "idIK_Reach::MAX_ARMS", "2" },
	{ "const int", "GIB_DELAY", "200" },
	{ "int", "idPlayerStart::EVENT_TELEPORTPLAYER", "2" },
	{ "int", "idPlayerStart::EVENT_MAXEVENTS", "3" },
	{ "int", "idProjectile::EVENT_DAMAGE_EFFECT", "2" },
	{ "int", "idProjectile::EVENT_MAXEVENTS", "3" },
	{ "static const int", "idProjectile::MAX_SIMULATED_PROJECTILES", "64" },
	{ "int", "idProjectile::SPAWNED", "0" },
	{ "int", "idProjectile::CREATED", "1" },
	{ "int", "idProjectile::LAUNCHED", "2" },
	{ "int", "idProjectile::FIZZLED", "3" },
	{ "int", "idProjectile::EXPLODED", "4" },
	{ "int", "WP_NONE", "0" },
	{ "int", "WP_IDLE", "1" },
	{ "int", "WP_READY", "2" },
	{ "int", "WP_OUTOFAMMO", "3" },
	{ "int", "WP_RELOAD", "4" },
	{ "int", "WP_HOLSTERED", "5" },
	{ "int", "WP_RISING", "6" },
	{ "int", "WP_LOWERING", "7" },
	{ "int", "WP_FIRE", "8" },
	{ "static const int", "AMMO_NUMTYPES", "16" },
	{ "static const int", "LIGHTID_WORLD_MUZZLE_FLASH", "1" },
	{ "static const int", "LIGHTID_VIEW_MUZZLE_FLASH", "100" },
	{ "int", "idWeapon::EVENT_RELOAD", "2" },
	{ "int", "idWeapon::EVENT_ENDRELOAD", "3" },
	{ "int", "idWeapon::EVENT_CHANGESKIN", "4" },
	{ "int", "idWeapon::EVENT_MAXEVENTS", "5" },
	{ "int", "idLight::EVENT_BECOMEBROKEN", "2" },
	{ "int", "idLight::EVENT_MAXEVENTS", "3" },
	{ "int", "ITEM_GIVE_FEEDBACK", "0" },
	{ "int", "ITEM_GIVE_UPDATE_STATE", "0" },
	{ "int", "ITEM_GIVE_FROM_WEAPON", "0" },
	{ "int", "idItem::EVENT_PICKUP", "2" },
	{ "int", "idItem::EVENT_RESPAWN", "3" },
	{ "int", "idItem::EVENT_RESPAWNFX", "4" },
	{ "int", "idItem::EVENT_TAKEFLAG", "5" },
	{ "int", "idItem::EVENT_DROPFLAG", "6" },
	{ "int", "idItem::EVENT_FLAGRETURN", "7" },
	{ "int", "idItem::EVENT_FLAGCAPTURE", "8" },
	{ "int", "idItem::EVENT_MAXEVENTS", "9" },
	{ "int", "FxFader::FX_STATE_OFF", "0" },
	{ "int", "FxFader::FX_STATE_RAMPUP", "1" },
	{ "int", "FxFader::FX_STATE_RAMPDOWN", "2" },
	{ "int", "FxFader::FX_STATE_ON", "3" },
	{ "int", "ICON_LAG", "0" },
	{ "int", "ICON_CHAT", "1" },
	{ "int", "ICON_TEAM_RED", "2" },
	{ "int", "ICON_TEAM_BLUE", "3" },
	{ "int", "ICON_NONE", "4" },
	{ "int", "ACHIEVEMENT_INVALID", "-1" },
	{ "int", "ACHIEVEMENT_EARN_ALL_50_TROPHIES", "0" },
	{ "int", "ACHIEVEMENT_COMPLETED_DIFFICULTY_0", "1" },
	{ "int", "ACHIEVEMENT_COMPLETED_DIFFICULTY_1", "2" },
	{ "int", "ACHIEVEMENT_COMPLETED_DIFFICULTY_2", "3" },
	{ "int", "ACHIEVEMENT_COMPLETED_DIFFICULTY_3", "4" },
	{ "int", "ACHIEVEMENT_PDAS_BASE", "5" },
	{ "int", "ACHIEVEMENT_WATCH_ALL_VIDEOS", "6" },
	{ "int", "ACHIEVEMENT_KILL_MONSTER_WITH_1_HEALTH_LEFT", "7" },
	{ "int", "ACHIEVEMENT_OPEN_ALL_LOCKERS", "8" },
	{ "int", "ACHIEVEMENT_KILL_20_ENEMY_FISTS_HANDS", "9" },
	{ "int", "ACHIEVEMENT_KILL_SCI_NEXT_TO_RCR", "10" },
	{ "int", "ACHIEVEMENT_KILL_TWO_IMPS_ONE_SHOTGUN", "11" },
	{ "int", "ACHIEVEMENT_SCORE_25000_TURKEY_PUNCHER", "12" },
	{ "int", "ACHIEVEMENT_DESTROY_BARRELS", "13" },
	{ "int", "ACHIEVEMENT_GET_BFG_FROM_SECURITY_OFFICE", "14" },
	{ "int", "ACHIEVEMENT_COMPLETE_LEVEL_WITHOUT_TAKING_DMG", "15" },
	{ "int", "ACHIEVEMENT_FIND_RAGE_LOGO", "16" },
	{ "int", "ACHIEVEMENT_SPEED_RUN", "17" },
	{ "int", "ACHIEVEMENT_DEFEAT_VAGARY_BOSS", "18" },
	{ "int", "ACHIEVEMENT_DEFEAT_GUARDIAN_BOSS", "19" },
	{ "int", "ACHIEVEMENT_DEFEAT_SABAOTH_BOSS", "20" },
	{ "int", "ACHIEVEMENT_DEFEAT_CYBERDEMON_BOSS", "21" },
	{ "int", "ACHIEVEMENT_SENTRY_BOT_ALIVE_TO_DEST", "22" },
	{ "int", "ACHIEVEMENT_KILL_20_ENEMY_WITH_CHAINSAW", "23" },
	{ "int", "ACHIEVEMENT_ID_LOGO_SECRET_ROOM", "24" },
	{ "int", "ACHIEVEMENT_BLOODY_HANDWORK_OF_BETRUGER", "25" },
	{ "int", "ACHIEVEMENT_TWO_DEMONS_FIGHT_EACH_OTHER", "26" },
	{ "int", "ACHIEVEMENT_USE_SOUL_CUBE_TO_DEFEAT_20_ENEMY", "27" },
	{ "int", "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_0", "28" },
	{ "int", "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_1", "29" },
	{ "int", "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_2", "30" },
	{ "int", "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_3", "31" },
	{ "int", "ACHIEVEMENT_PDAS_ROE", "32" },
	{ "int", "ACHIEVEMENT_KILL_5_ENEMY_HELL_TIME", "33" },
	{ "int", "ACHIEVEMENT_DEFEAT_HELLTIME_HUNTER", "34" },
	{ "int", "ACHIEVEMENT_DEFEAT_BERSERK_HUNTER", "35" },
	{ "int", "ACHIEVEMENT_DEFEAT_INVULNERABILITY_HUNTER", "36" },
	{ "int", "ACHIEVEMENT_DEFEAT_MALEDICT_BOSS", "37" },
	{ "int", "ACHIEVEMENT_GRABBER_KILL_20_ENEMY", "38" },
	{ "int", "ACHIEVEMENT_ARTIFACT_WITH_BERSERK_PUNCH_20", "39" },
	{ "int", "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_0", "40" },
	{ "int", "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_1", "41" },
	{ "int", "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_2", "42" },
	{ "int", "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_3", "43" },
	{ "int", "ACHIEVEMENT_PDAS_LE", "44" },
	{ "int", "ACHIEVEMENT_MP_KILL_PLAYER_VIA_TELEPORT", "45" },
	{ "int", "ACHIEVEMENT_MP_CATCH_ENEMY_IN_ROFC", "46" },
	{ "int", "ACHIEVEMENT_MP_KILL_5_PLAYERS_USING_INVIS", "47" },
	{ "int", "ACHIEVEMENT_MP_COMPLETE_MATCH_WITHOUT_DYING", "48" },
	{ "int", "ACHIEVEMENT_MP_USE_BERSERK_TO_KILL_PLAYER", "49" },
	{ "int", "ACHIEVEMENT_MP_KILL_2_GUYS_IN_ROOM_WITH_BFG", "50" },
	{ "int", "ACHIEVEMENT_DOOM1_NEOPHYTE_COMPLETE_ANY_LEVEL", "51" },
	{ "int", "ACHIEVEMENT_DOOM1_EPISODE1_COMPLETE_MEDIUM", "52" },
	{ "int", "ACHIEVEMENT_DOOM1_EPISODE2_COMPLETE_MEDIUM", "53" },
	{ "int", "ACHIEVEMENT_DOOM1_EPISODE3_COMPLETE_MEDIUM", "54" },
	{ "int", "ACHIEVEMENT_DOOM1_EPISODE4_COMPLETE_MEDIUM", "55" },
	{ "int", "ACHIEVEMENT_DOOM1_RAMPAGE_COMPLETE_ALL_HARD", "56" },
	{ "int", "ACHIEVEMENT_DOOM1_NIGHTMARE_COMPLETE_ANY_LEVEL_NIGHTMARE", "57" },
	{ "int", "ACHIEVEMENT_DOOM1_BURNING_OUT_OF_CONTROL_COMPLETE_KILLS_ITEMS_SECRETS", "58" },
	{ "int", "ACHIEVEMENT_DOOM2_JUST_GETTING_STARTED_COMPLETE_ANY_LEVEL", "59" },
	{ "int", "ACHIEVEMENT_DOOM2_FROM_EARTH_TO_HELL_COMPLETE_HELL_ON_EARTH", "60" },
	{ "int", "ACHIEVEMENT_DOOM2_AND_BACK_AGAIN_COMPLETE_NO_REST", "61" },
	{ "int", "ACHIEVEMENT_DOOM2_SUPERIOR_FIREPOWER_COMPLETE_ALL_HARD", "62" },
	{ "int", "ACHIEVEMENT_DOOM2_REALLY_BIG_GUN_FIND_BFG_SINGLEPLAYER", "63" },
	{ "int", "ACHIEVEMENT_DOOM2_BURNING_OUT_OF_CONTROL_COMPLETE_KILLS_ITEMS_SECRETS", "64" },
	{ "int", "ACHIEVEMENT_DOOM2_IMPORTANT_LOOKING_DOOR_FIND_ANY_SECRET", "65" },
	{ "int", "ACHIEVEMENTS_NUM", "66" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_1_MEDIUM", "67" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_2_MEDIUM", "68" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_3_MEDIUM", "69" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_4_MEDIUM", "70" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_1_HARD", "71" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_2_HARD", "72" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_3_HARD", "73" },
	{ "int", "STAT_DOOM_COMPLETED_EPISODE_4_HARD", "74" },
	{ "const float", "THIRD_PERSON_FOCUS_DISTANCE", "512.0" },
	{ "const int", "LAND_DEFLECT_TIME", "150" },
	{ "const int", "LAND_RETURN_TIME", "300" },
	{ "const int", "FOCUS_TIME", "300" },
	{ "const int", "FOCUS_GUI_TIME", "500" },
	{ "const int", "NUM_QUICK_SLOTS", "4" },
	{ "const int", "MAX_WEAPONS", "32" },
	{ "const int", "DEAD_HEARTRATE", "0" },
	{ "const int", "LOWHEALTH_HEARTRATE_ADJ", "20" },
	{ "const int", "DYING_HEARTRATE", "30" },
	{ "const int", "BASE_HEARTRATE", "70" },
	{ "const int", "ZEROSTAMINA_HEARTRATE", "115" },
	{ "const int", "MAX_HEARTRATE", "130" },
	{ "const int", "ZERO_VOLUME", "-40" },
	{ "const int", "DMG_VOLUME", "5" },
	{ "const int", "DEATH_VOLUME", "15" },
	{ "const int", "SAVING_THROW_TIME", "5000" },
	{ "const int", "ASYNC_PLAYER_INV_AMMO_BITS", "0(3000)" },
	{ "const int", "ASYNC_PLAYER_INV_CLIP_BITS", "-7" },
	{ "int", "GAME_BASE", "0" },
	{ "int", "GAME_D3XP", "1" },
	{ "int", "GAME_D3LE", "2" },
	{ "int", "GAME_UNKNOWN", "3" },
	{ "int", "BERSERK", "0" },
	{ "int", "INVISIBILITY", "1" },
	{ "int", "MEGAHEALTH", "2" },
	{ "int", "ADRENALINE", "3" },
	{ "int", "INVULNERABILITY", "4" },
	{ "int", "HELLTIME", "5" },
	{ "int", "ENVIROSUIT", "6" },
	{ "int", "ENVIROTIME", "7" },
	{ "int", "MAX_POWERUPS", "8" },
	{ "int", "SPEED", "0" },
	{ "int", "PROJECTILE_DAMAGE", "1" },
	{ "int", "MELEE_DAMAGE", "2" },
	{ "int", "MELEE_DISTANCE", "3" },
	{ "int", "INFLUENCE_NONE", "0" },
	{ "int", "INFLUENCE_LEVEL1", "1" },
	{ "int", "INFLUENCE_LEVEL2", "2" },
	{ "int", "INFLUENCE_LEVEL3", "3" },
	{ "int", "idPlayer::EVENT_IMPULSE", "2" },
	{ "int", "idPlayer::EVENT_EXIT_TELEPORTER", "3" },
	{ "int", "idPlayer::EVENT_ABORT_TELEPORTER", "4" },
	{ "int", "idPlayer::EVENT_POWERUP", "5" },
	{ "int", "idPlayer::EVENT_SPECTATE", "6" },
	{ "int", "idPlayer::EVENT_PICKUPNAME", "7" },
	{ "int", "idPlayer::EVENT_FORCE_ORIGIN", "8" },
	{ "int", "idPlayer::EVENT_KNOCKBACK", "9" },
	{ "int", "idPlayer::EVENT_MAXEVENTS", "10" },
	{ "static const int", "idPlayer::MAX_PLAYER_PDA", "100" },
	{ "static const int", "idPlayer::MAX_PLAYER_VIDEO", "100" },
	{ "static const int", "idPlayer::MAX_PLAYER_AUDIO", "100" },
	{ "static const int", "idPlayer::MAX_PLAYER_AUDIO_ENTRIES", "2" },
	{ "const static int", "idPlayer::MAX_SHAKE_BUFFER", "3" },
	{ "static const int", "idPlayer::NUM_LOGGED_VIEW_ANGLES", "64" },
	{ "static const int", "idPlayer::NUM_LOGGED_ACCELS", "16" },
	{ "int", "idMover::ACCELERATION_STAGE", "0" },
	{ "int", "idMover::LINEAR_STAGE", "1" },
	{ "int", "idMover::DECELERATION_STAGE", "2" },
	{ "int", "idMover::FINISHED_STAGE", "3" },
	{ "int", "idMover::MOVER_NONE", "0" },
	{ "int", "idMover::MOVER_ROTATING", "1" },
	{ "int", "idMover::MOVER_MOVING", "2" },
	{ "int", "idMover::MOVER_SPLINE", "3" },
	{ "int", "idMover::DIR_UP", "-1" },
	{ "int", "idMover::DIR_DOWN", "-2" },
	{ "int", "idMover::DIR_LEFT", "-3" },
	{ "int", "idMover::DIR_RIGHT", "-4" },
	{ "int", "idMover::DIR_FORWARD", "-5" },
	{ "int", "idMover::DIR_BACK", "-6" },
	{ "int", "idMover::DIR_REL_UP", "-7" },
	{ "int", "idMover::DIR_REL_DOWN", "-8" },
	{ "int", "idMover::DIR_REL_LEFT", "-9" },
	{ "int", "idMover::DIR_REL_RIGHT", "-10" },
	{ "int", "idMover::DIR_REL_FORWARD", "-11" },
	{ "int", "idMover::DIR_REL_BACK", "-12" },
	{ "int", "idElevator::INIT", "0" },
	{ "int", "idElevator::IDLE", "1" },
	{ "int", "idElevator::WAITING_ON_DOORS", "2" },
	{ "int", "MOVER_POS1", "0" },
	{ "int", "MOVER_POS2", "1" },
	{ "int", "MOVER_1TO2", "2" },
	{ "int", "MOVER_2TO1", "3" },
	{ "int", "idExplodingBarrel::EVENT_EXPLODE", "2" },
	{ "int", "idExplodingBarrel::EVENT_MAXEVENTS", "3" },
	{ "int", "idExplodingBarrel::NORMAL", "0" },
	{ "int", "idExplodingBarrel::BURNING", "1" },
	{ "int", "idExplodingBarrel::BURNEXPIRED", "2" },
	{ "int", "idExplodingBarrel::EXPLODING", "3" },
	{ "int", "idSecurityCamera::SCANNING", "0" },
	{ "int", "idSecurityCamera::LOSINGINTEREST", "1" },
	{ "int", "idSecurityCamera::ALERT", "2" },
	{ "int", "idSecurityCamera::ACTIVATED", "3" },
	{ "int", "idBrittleFracture::EVENT_PROJECT_DECAL", "2" },
	{ "int", "idBrittleFracture::EVENT_SHATTER", "3" },
	{ "int", "idBrittleFracture::EVENT_MAXEVENTS", "4" },
	{ "const float", "SQUARE_ROOT_OF_2", "1.414213562" },
	{ "const float", "AI_TURN_PREDICTION", "0.2" },
	{ "const float", "AI_TURN_SCALE", "60.0" },
	{ "const float", "AI_SEEK_PREDICTION", "0.3" },
	{ "const float", "AI_FLY_DAMPENING", "0.15" },
	{ "const float", "AI_HEARING_RANGE", "2048.0" },
	{ "const int", "DEFAULT_FLY_OFFSET", "68" },
	{ "int", "MOVETYPE_DEAD", "0" },
	{ "int", "MOVETYPE_ANIM", "1" },
	{ "int", "MOVETYPE_SLIDE", "2" },
	{ "int", "MOVETYPE_FLY", "3" },
	{ "int", "MOVETYPE_STATIC", "4" },
	{ "int", "NUM_MOVETYPES", "5" },
	{ "int", "MOVE_NONE", "0" },
	{ "int", "MOVE_FACE_ENEMY", "1" },
	{ "int", "MOVE_FACE_ENTITY", "2" },
	{ "int", "NUM_NONMOVING_COMMANDS", "3" },
	{ "int", "MOVE_TO_ENEMY", "3" },
	{ "int", "MOVE_TO_ENEMYHEIGHT", "4" },
	{ "int", "MOVE_TO_ENTITY", "5" },
	{ "int", "MOVE_OUT_OF_RANGE", "6" },
	{ "int", "MOVE_TO_ATTACK_POSITION", "7" },
	{ "int", "MOVE_TO_COVER", "8" },
	{ "int", "MOVE_TO_POSITION", "9" },
	{ "int", "MOVE_TO_POSITION_DIRECT", "10" },
	{ "int", "MOVE_SLIDE_TO_POSITION", "11" },
	{ "int", "MOVE_WANDER", "12" },
	{ "int", "NUM_MOVE_COMMANDS", "13" },
	{ "int", "TALK_NEVER", "0" },
	{ "int", "TALK_DEAD", "1" },
	{ "int", "TALK_OK", "2" },
	{ "int", "TALK_BUSY", "3" },
	{ "int", "NUM_TALK_STATES", "4" },
	{ "int", "MOVE_STATUS_DONE", "0" },
	{ "int", "MOVE_STATUS_MOVING", "1" },
	{ "int", "MOVE_STATUS_WAITING", "2" },
	{ "int", "MOVE_STATUS_DEST_NOT_FOUND", "3" },
	{ "int", "MOVE_STATUS_DEST_UNREACHABLE", "4" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_WALL", "5" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_OBJECT", "6" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_ENEMY", "7" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_MONSTER", "8" },
	{ "int", "SE_BLOCKED", "0" },
	{ "int", "SE_ENTER_LEDGE_AREA", "0" },
	{ "int", "SE_ENTER_OBSTACLE", "0" },
	{ "int", "SE_FALL", "0" },
	{ "int", "SE_LAND", "0" },
	{ "int", "OPTION_INVALID", "-1" },
	{ "int", "OPTION_BUTTON_TEXT", "0" },
	{ "int", "OPTION_SLIDER_BAR", "1" },
	{ "int", "OPTION_SLIDER_TEXT", "2" },
	{ "int", "OPTION_SLIDER_TOGGLE", "3" },
	{ "int", "OPTION_BUTTON_INFO", "4" },
	{ "int", "OPTION_BUTTON_FULL_TEXT_SLIDER", "5" },
	{ "int", "MAX_MENU_OPTION_TYPES", "6" },
	{ "int", "WIDGET_EVENT_PRESS", "0" },
	{ "int", "WIDGET_EVENT_RELEASE", "1" },
	{ "int", "WIDGET_EVENT_ROLL_OVER", "2" },
	{ "int", "WIDGET_EVENT_ROLL_OUT", "3" },
	{ "int", "WIDGET_EVENT_FOCUS_ON", "4" },
	{ "int", "WIDGET_EVENT_FOCUS_OFF", "5" },
	{ "int", "WIDGET_EVENT_SCROLL_UP_LSTICK", "6" },
	{ "int", "WIDGET_EVENT_SCROLL_UP_LSTICK_RELEASE", "7" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN_LSTICK", "8" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN_LSTICK_RELEASE", "9" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT_LSTICK", "10" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT_LSTICK_RELEASE", "11" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT_LSTICK", "12" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT_LSTICK_RELEASE", "13" },
	{ "int", "WIDGET_EVENT_SCROLL_UP_RSTICK", "14" },
	{ "int", "WIDGET_EVENT_SCROLL_UP_RSTICK_RELEASE", "15" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN_RSTICK", "16" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN_RSTICK_RELEASE", "17" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT_RSTICK", "18" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT_RSTICK_RELEASE", "19" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT_RSTICK", "20" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT_RSTICK_RELEASE", "21" },
	{ "int", "WIDGET_EVENT_SCROLL_UP", "22" },
	{ "int", "WIDGET_EVENT_SCROLL_UP_RELEASE", "23" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN", "24" },
	{ "int", "WIDGET_EVENT_SCROLL_DOWN_RELEASE", "25" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT", "26" },
	{ "int", "WIDGET_EVENT_SCROLL_LEFT_RELEASE", "27" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT", "28" },
	{ "int", "WIDGET_EVENT_SCROLL_RIGHT_RELEASE", "29" },
	{ "int", "WIDGET_EVENT_DRAG_START", "30" },
	{ "int", "WIDGET_EVENT_DRAG_STOP", "31" },
	{ "int", "WIDGET_EVENT_SCROLL_PAGEDWN", "32" },
	{ "int", "WIDGET_EVENT_SCROLL_PAGEDWN_RELEASE", "33" },
	{ "int", "WIDGET_EVENT_SCROLL_PAGEUP", "34" },
	{ "int", "WIDGET_EVENT_SCROLL_PAGEUP_RELEASE", "35" },
	{ "int", "WIDGET_EVENT_SCROLL", "36" },
	{ "int", "WIDGET_EVENT_SCROLL_RELEASE", "37" },
	{ "int", "WIDGET_EVENT_BACK", "38" },
	{ "int", "WIDGET_EVENT_COMMAND", "39" },
	{ "int", "WIDGET_EVENT_TAB_NEXT", "40" },
	{ "int", "WIDGET_EVENT_TAB_PREV", "41" },
	{ "int", "MAX_WIDGET_EVENT", "42" },
	{ "int", "SCROLL_SINGLE", "0" },
	{ "int", "SCROLL_PAGE", "1" },
	{ "int", "SCROLL_FULL", "2" },
	{ "int", "SCROLL_TOP", "3" },
	{ "int", "SCROLL_END", "4" },
	{ "int", "WIDGET_ACTION_NONE", "0" },
	{ "int", "WIDGET_ACTION_COMMAND", "1" },
	{ "int", "WIDGET_ACTION_FUNCTION", "2" },
	{ "int", "WIDGET_ACTION_SCROLL_VERTICAL", "3" },
	{ "int", "WIDGET_ACTION_SCROLL_VERTICAL_VARIABLE", "4" },
	{ "int", "WIDGET_ACTION_SCROLL_PAGE", "5" },
	{ "int", "WIDGET_ACTION_SCROLL_HORIZONTAL", "6" },
	{ "int", "WIDGET_ACTION_SCROLL_TAB", "7" },
	{ "int", "WIDGET_ACTION_START_REPEATER", "8" },
	{ "int", "WIDGET_ACTION_STOP_REPEATER", "9" },
	{ "int", "WIDGET_ACTION_ADJUST_FIELD", "10" },
	{ "int", "WIDGET_ACTION_PRESS_FOCUSED", "11" },
	{ "int", "WIDGET_ACTION_JOY3_ON_PRESS", "12" },
	{ "int", "WIDGET_ACTION_JOY4_ON_PRESS", "13" },
	{ "int", "WIDGET_ACTION_GOTO_MENU", "14" },
	{ "int", "WIDGET_ACTION_GO_BACK", "15" },
	{ "int", "WIDGET_ACTION_EXIT_GAME", "16" },
	{ "int", "WIDGET_ACTION_LAUNCH_MULTIPLAYER", "17" },
	{ "int", "WIDGET_ACTION_MENU_BAR_SELECT", "18" },
	{ "int", "WIDGET_ACTION_EMAIL_HOVER", "19" },
	{ "int", "WIDGET_ACTION_PDA_SELECT_USER", "20" },
	{ "int", "WIDGET_ACTION_SELECT_GAMERTAG", "21" },
	{ "int", "WIDGET_ACTION_PDA_SELECT_NAV", "22" },
	{ "int", "WIDGET_ACTION_SELECT_PDA_AUDIO", "23" },
	{ "int", "WIDGET_ACTION_SELECT_PDA_VIDEO", "24" },
	{ "int", "WIDGET_ACTION_SELECT_PDA_ITEM", "25" },
	{ "int", "WIDGET_ACTION_SCROLL_DRAG", "26" },
	{ "int", "WIDGET_ACTION_PDA_SELECT_EMAIL", "27" },
	{ "int", "WIDGET_ACTION_PDA_CLOSE", "28" },
	{ "int", "WIDGET_ACTION_REFRESH", "29" },
	{ "int", "WIDGET_ACTION_MUTE_PLAYER", "30" },
	{ "int", "MAX_WIDGET_ACTION", "31" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_UP_START_REPEATER", "0" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_UP_START_REPEATER_VARIABLE", "1" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_DOWN_START_REPEATER", "2" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_DOWN_START_REPEATER_VARIABLE", "3" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_LEFT_START_REPEATER", "4" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_RIGHT_START_REPEATER", "5" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_PAGE_DOWN_START_REPEATER", "6" },
	{ "int", "WIDGET_ACTION_EVENT_SCROLL_PAGE_UP_START_REPEATER", "7" },
	{ "int", "WIDGET_ACTION_EVENT_STOP_REPEATER", "8" },
	{ "int", "WIDGET_ACTION_EVENT_TAB_NEXT", "9" },
	{ "int", "WIDGET_ACTION_EVENT_TAB_PREV", "10" },
	{ "int", "WIDGET_ACTION_EVENT_DRAG_START", "11" },
	{ "int", "WIDGET_ACTION_EVENT_DRAG_STOP", "12" },
	{ "int", "WIDGET_ACTION_EVENT_JOY3_ON_PRESS", "13" },
	{ "int", "idMenuWidget::WIDGET_STATE_HIDDEN", "0" },
	{ "int", "idMenuWidget::WIDGET_STATE_NORMAL", "1" },
	{ "int", "idMenuWidget::WIDGET_STATE_SELECTING", "2" },
	{ "int", "idMenuWidget::WIDGET_STATE_SELECTED", "3" },
	{ "int", "idMenuWidget::WIDGET_STATE_DISABLED", "4" },
	{ "int", "idMenuWidget::WIDGET_STATE_MAX", "5" },
	{ "static const int", "idMenuWidget::INVALID_ACTION_INDEX", "-1" },
	{ "int", "idMenuWidget_Button::ANIM_STATE_UP", "0" },
	{ "int", "idMenuWidget_Button::ANIM_STATE_DOWN", "1" },
	{ "int", "idMenuWidget_Button::ANIM_STATE_OVER", "2" },
	{ "int", "idMenuWidget_Button::ANIM_STATE_MAX", "3" },
	{ "int", "idMenuWidget_NavButton::NAV_WIDGET_LEFT", "0" },
	{ "int", "idMenuWidget_NavButton::NAV_WIDGET_RIGHT", "1" },
	{ "int", "idMenuWidget_NavButton::NAV_WIDGET_SELECTED", "2" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_JOY1", "0" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_JOY2", "1" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_JOY3", "2" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_JOY4", "3" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_JOY10", "4" },
	{ "int", "idMenuWidget_CommandBar::BUTTON_TAB", "5" },
	{ "int", "idMenuWidget_CommandBar::MAX_BUTTONS", "6" },
	{ "int", "idMenuWidget_CommandBar::LEFT", "0" },
	{ "int", "idMenuWidget_CommandBar::RIGHT", "1" },
	{ "int", "MENU_TRANSITION_INVALID", "-1" },
	{ "int", "MENU_TRANSITION_SIMPLE", "0" },
	{ "int", "MENU_TRANSITION_ADVANCE", "1" },
	{ "int", "MENU_TRANSITION_BACK", "2" },
	{ "int", "MENU_TRANSITION_FORCE", "3" },
	{ "int", "CURSOR_NONE", "0" },
	{ "int", "CURSOR_IN_COMBAT", "1" },
	{ "int", "CURSOR_TALK", "2" },
	{ "int", "CURSOR_GRABBER", "3" },
	{ "int", "CURSOR_ITEM", "4" },
	{ "int", "LEADERBOARD_FILTER_OVERALL", "0" },
	{ "int", "LEADERBOARD_FILTER_MYSCORE", "1" },
	{ "int", "LEADERBOARD_FILTER_FRIENDS", "2" },
	{ ": static const int", "idLBCache::NUM_ROW_BLOCKS", "5" },
	{ "static const leaderboardFilterMode_t", "idLBCache::DEFAULT_LEADERBOARD_FILTER", "0" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_FOV", "0" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_CHECKPOINTS", "1" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_AUTO_SWITCH", "2" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_AUTO_RELOAD", "3" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_AIM_ASSIST", "4" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_ALWAYS_SPRINT", "5" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::GAME_FIELD_FLASHLIGHT_SHADOWS", "6" },
	{ "int", "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::MAX_GAME_FIELDS", "7" },
	{ "int", "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::MATCH_FIELD_MODE", "0" },
	{ "int", "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::MATCH_FIELD_MAP", "1" },
	{ "int", "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::MATCH_FIELD_TIME", "2" },
	{ "int", "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::MATCH_FIELD_SCORE", "3" },
	{ "int", "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::MAX_MATCH_FIELDS", "4" },
	{ "int", "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings::CONTROLS_FIELD_INVERT_MOUSE", "0" },
	{ "int", "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings::CONTROLS_FIELD_GAMEPAD_ENABLED", "1" },
	{ "int", "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings::CONTROLS_FIELD_MOUSE_SENS", "2" },
	{ "int", "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings::MAX_CONTROL_FIELDS", "3" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_LEFTY", "0" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_INVERT", "1" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_VIBRATE", "2" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_HOR_SENS", "3" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_VERT_SENS", "4" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_ACCELERATION", "5" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::GAMEPAD_FIELD_THRESHOLD", "6" },
	{ "int", "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::MAX_GAMEPAD_FIELDS", "7" },
	{ "int", "idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings::LAYOUT_FIELD_LAYOUT", "0" },
	{ "int", "idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings::MAX_LAYOUT_FIELDS", "1" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_FULLSCREEN", "0" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_FRAMERATE", "1" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_VSYNC", "2" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_ANTIALIASING", "3" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_LODBIAS", "4" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_BRIGHTNESS", "5" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::SYSTEM_FIELD_VOLUME", "6" },
	{ "int", "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::MAX_SYSTEM_FIELDS", "7" },
	{ "int", "SHELL_AREA_INVALID", "-1" },
	{ "int", "SHELL_AREA_START", "0" },
	{ "int", "SHELL_AREA_ROOT", "1" },
	{ "int", "SHELL_AREA_DEV", "2" },
	{ "int", "SHELL_AREA_CAMPAIGN", "3" },
	{ "int", "SHELL_AREA_LOAD", "4" },
	{ "int", "SHELL_AREA_SAVE", "5" },
	{ "int", "SHELL_AREA_NEW_GAME", "6" },
	{ "int", "SHELL_AREA_GAME_OPTIONS", "7" },
	{ "int", "SHELL_AREA_SYSTEM_OPTIONS", "8" },
	{ "int", "SHELL_AREA_MULTIPLAYER", "9" },
	{ "int", "SHELL_AREA_GAME_LOBBY", "10" },
	{ "int", "SHELL_AREA_PARTY_LOBBY", "11" },
	{ "int", "SHELL_AREA_SETTINGS", "12" },
	{ "int", "SHELL_AREA_AUDIO", "13" },
	{ "int", "SHELL_AREA_VIDEO", "14" },
	{ "int", "SHELL_AREA_KEYBOARD", "15" },
	{ "int", "SHELL_AREA_CONTROLS", "16" },
	{ "int", "SHELL_AREA_CONTROLLER_LAYOUT", "17" },
	{ "int", "SHELL_AREA_GAMEPAD", "18" },
	{ "int", "SHELL_AREA_PAUSE", "19" },
	{ "int", "SHELL_AREA_LEADERBOARDS", "20" },
	{ "int", "SHELL_AREA_PLAYSTATION", "21" },
	{ "int", "SHELL_AREA_DIFFICULTY", "22" },
	{ "int", "SHELL_AREA_RESOLUTION", "23" },
	{ "int", "SHELL_AREA_MATCH_SETTINGS", "24" },
	{ "int", "SHELL_AREA_MODE_SELECT", "25" },
	{ "int", "SHELL_AREA_BROWSER", "26" },
	{ "int", "SHELL_AREA_CREDITS", "27" },
	{ "int", "SHELL_NUM_AREAS", "28" },
	{ "int", "SHELL_STATE_INVALID", "-1" },
	{ "int", "SHELL_STATE_PRESS_START", "0" },
	{ "int", "SHELL_STATE_IDLE", "1" },
	{ "int", "SHELL_STATE_PARTY_LOBBY", "2" },
	{ "int", "SHELL_STATE_GAME_LOBBY", "3" },
	{ "int", "SHELL_STATE_PAUSED", "4" },
	{ "int", "SHELL_STATE_CONNECTING", "5" },
	{ "int", "SHELL_STATE_SEARCHING", "6" },
	{ "int", "SHELL_STATE_LOADING", "7" },
	{ "int", "SHELL_STATE_BUSY", "8" },
	{ "int", "SHELL_STATE_IN_GAME", "9" },
	{ "int", "PDA_AREA_INVALID", "-1" },
	{ "int", "PDA_AREA_USER_DATA", "0" },
	{ "int", "PDA_AREA_USER_EMAIL", "1" },
	{ "int", "PDA_AREA_VIDEO_DISKS", "2" },
	{ "int", "PDA_AREA_INVENTORY", "3" },
	{ "int", "PDA_NUM_AREAS", "4" },
	{ "int", "HUD_AREA_INVALID", "-1" },
	{ "int", "HUD_AREA_PLAYING", "0" },
	{ "int", "HUD_NUM_AREAS", "1" },
	{ "int", "SCOREBOARD_AREA_INVALID", "-1" },
	{ "int", "SCOREBOARD_AREA_DEFAULT", "0" },
	{ "int", "SCOREBOARD_AREA_TEAM", "1" },
	{ "int", "SCOREBOARD_AREA_CTF", "2" },
	{ "int", "SCOREBOARD_NUM_AREAS", "3" },
	{ "int", "PDA_WIDGET_NAV_BAR", "0" },
	{ "int", "PDA_WIDGET_PDA_LIST", "1" },
	{ "int", "PDA_WIDGET_PDA_LIST_SCROLLBAR", "2" },
	{ "int", "PDA_WIDGET_CMD_BAR", "3" },
	{ "int", "SCOREBOARD_WIDGET_CMD_BAR", "0" },
	{ "int", "GUI_SOUND_MUSIC", "0" },
	{ "int", "GUI_SOUND_SCROLL", "1" },
	{ "int", "GUI_SOUND_ADVANCE", "2" },
	{ "int", "GUI_SOUND_BACK", "3" },
	{ "int", "GUI_SOUND_BUILD_ON", "4" },
	{ "int", "GUI_SOUND_BUILD_OFF", "5" },
	{ "int", "GUI_SOUND_FOCUS", "6" },
	{ "int", "GUI_SOUND_ROLL_OVER", "7" },
	{ "int", "GUI_SOUND_ROLL_OUT", "8" },
	{ "int", "NUM_GUI_SOUNDS", "9" },
	{ "static const int", "MAX_SCREEN_AREAS", "32" },
	{ "static const int", "DEFAULT_REPEAT_TIME", "150" },
	{ "static const int", "WAIT_START_TIME_LONG", "30000" },
	{ "static const int", "WAIT_START_TIME_SHORT", "5000" },
	{ "const char * const", "RESULT_STRING", "<RESULT>" },
	{ "int", "OP_RETURN", "0" },
	{ "int", "OP_UINC_F", "1" },
	{ "int", "OP_UINCP_F", "2" },
	{ "int", "OP_UDEC_F", "3" },
	{ "int", "OP_UDECP_F", "4" },
	{ "int", "OP_COMP_F", "5" },
	{ "int", "OP_MUL_F", "6" },
	{ "int", "OP_MUL_V", "7" },
	{ "int", "OP_MUL_FV", "8" },
	{ "int", "OP_MUL_VF", "9" },
	{ "int", "OP_DIV_F", "10" },
	{ "int", "OP_MOD_F", "11" },
	{ "int", "OP_ADD_F", "12" },
	{ "int", "OP_ADD_V", "13" },
	{ "int", "OP_ADD_S", "14" },
	{ "int", "OP_ADD_FS", "15" },
	{ "int", "OP_ADD_SF", "16" },
	{ "int", "OP_ADD_VS", "17" },
	{ "int", "OP_ADD_SV", "18" },
	{ "int", "OP_SUB_F", "19" },
	{ "int", "OP_SUB_V", "20" },
	{ "int", "OP_EQ_F", "21" },
	{ "int", "OP_EQ_V", "22" },
	{ "int", "OP_EQ_S", "23" },
	{ "int", "OP_EQ_E", "24" },
	{ "int", "OP_EQ_EO", "25" },
	{ "int", "OP_EQ_OE", "26" },
	{ "int", "OP_EQ_OO", "27" },
	{ "int", "OP_NE_F", "28" },
	{ "int", "OP_NE_V", "29" },
	{ "int", "OP_NE_S", "30" },
	{ "int", "OP_NE_E", "31" },
	{ "int", "OP_NE_EO", "32" },
	{ "int", "OP_NE_OE", "33" },
	{ "int", "OP_NE_OO", "34" },
	{ "int", "OP_LE", "35" },
	{ "int", "OP_GE", "36" },
	{ "int", "OP_LT", "37" },
	{ "int", "OP_GT", "38" },
	{ "int", "OP_INDIRECT_F", "39" },
	{ "int", "OP_INDIRECT_V", "40" },
	{ "int", "OP_INDIRECT_S", "41" },
	{ "int", "OP_INDIRECT_ENT", "42" },
	{ "int", "OP_INDIRECT_BOOL", "43" },
	{ "int", "OP_INDIRECT_OBJ", "44" },
	{ "int", "OP_ADDRESS", "45" },
	{ "int", "OP_EVENTCALL", "46" },
	{ "int", "OP_OBJECTCALL", "47" },
	{ "int", "OP_SYSCALL", "48" },
	{ "int", "OP_STORE_F", "49" },
	{ "int", "OP_STORE_V", "50" },
	{ "int", "OP_STORE_S", "51" },
	{ "int", "OP_STORE_ENT", "52" },
	{ "int", "OP_STORE_BOOL", "53" },
	{ "int", "OP_STORE_OBJENT", "54" },
	{ "int", "OP_STORE_OBJ", "55" },
	{ "int", "OP_STORE_ENTOBJ", "56" },
	{ "int", "OP_STORE_FTOS", "57" },
	{ "int", "OP_STORE_BTOS", "58" },
	{ "int", "OP_STORE_VTOS", "59" },
	{ "int", "OP_STORE_FTOBOOL", "60" },
	{ "int", "OP_STORE_BOOLTOF", "61" },
	{ "int", "OP_STOREP_F", "62" },
	{ "int", "OP_STOREP_V", "63" },
	{ "int", "OP_STOREP_S", "64" },
	{ "int", "OP_STOREP_ENT", "65" },
	{ "int", "OP_STOREP_FLD", "66" },
	{ "int", "OP_STOREP_BOOL", "67" },
	{ "int", "OP_STOREP_OBJ", "68" },
	{ "int", "OP_STOREP_OBJENT", "69" },
	{ "int", "OP_STOREP_FTOS", "70" },
	{ "int", "OP_STOREP_BTOS", "71" },
	{ "int", "OP_STOREP_VTOS", "72" },
	{ "int", "OP_STOREP_FTOBOOL", "73" },
	{ "int", "OP_STOREP_BOOLTOF", "74" },
	{ "int", "OP_UMUL_F", "75" },
	{ "int", "OP_UMUL_V", "76" },
	{ "int", "OP_UDIV_F", "77" },
	{ "int", "OP_UDIV_V", "78" },
	{ "int", "OP_UMOD_F", "79" },
	{ "int", "OP_UADD_F", "80" },
	{ "int", "OP_UADD_V", "81" },
	{ "int", "OP_USUB_F", "82" },
	{ "int", "OP_USUB_V", "83" },
	{ "int", "OP_UAND_F", "84" },
	{ "int", "OP_UOR_F", "85" },
	{ "int", "OP_NOT_BOOL", "86" },
	{ "int", "OP_NOT_F", "87" },
	{ "int", "OP_NOT_V", "88" },
	{ "int", "OP_NOT_S", "89" },
	{ "int", "OP_NOT_ENT", "90" },
	{ "int", "OP_NEG_F", "91" },
	{ "int", "OP_NEG_V", "92" },
	{ "int", "OP_INT_F", "93" },
	{ "int", "OP_IF", "94" },
	{ "int", "OP_IFNOT", "95" },
	{ "int", "OP_CALL", "96" },
	{ "int", "OP_THREAD", "97" },
	{ "int", "OP_OBJTHREAD", "98" },
	{ "int", "OP_PUSH_F", "99" },
	{ "int", "OP_PUSH_V", "100" },
	{ "int", "OP_PUSH_S", "101" },
	{ "int", "OP_PUSH_ENT", "102" },
	{ "int", "OP_PUSH_OBJ", "103" },
	{ "int", "OP_PUSH_OBJENT", "104" },
	{ "int", "OP_PUSH_FTOS", "105" },
	{ "int", "OP_PUSH_BTOF", "106" },
	{ "int", "OP_PUSH_FTOB", "107" },
	{ "int", "OP_PUSH_VTOS", "108" },
	{ "int", "OP_PUSH_BTOS", "109" },
	{ "int", "OP_GOTO", "110" },
	{ "int", "OP_AND", "111" },
	{ "int", "OP_AND_BOOLF", "112" },
	{ "int", "OP_AND_FBOOL", "113" },
	{ "int", "OP_AND_BOOLBOOL", "114" },
	{ "int", "OP_OR", "115" },
	{ "int", "OP_OR_BOOLF", "116" },
	{ "int", "OP_OR_FBOOL", "117" },
	{ "int", "OP_OR_BOOLBOOL", "118" },
	{ "int", "OP_BITAND", "119" },
	{ "int", "OP_BITOR", "120" },
	{ "int", "OP_BREAK", "121" },
	{ "int", "OP_CONTINUE", "122" },
	{ "int", "NUM_OPCODES", "123" },
	{ NULL, NULL, NULL }
};

static enumValueInfo_t etype_t_typeInfo[] = {
	{ "ev_error", -1 },
	{ "ev_void", 0 },
	{ "ev_scriptevent", 1 },
	{ "ev_namespace", 2 },
	{ "ev_string", 3 },
	{ "ev_float", 4 },
	{ "ev_vector", 5 },
	{ "ev_entity", 6 },
	{ "ev_field", 7 },
	{ "ev_function", 8 },
	{ "ev_virtualfunction", 9 },
	{ "ev_pointer", 10 },
	{ "ev_object", 11 },
	{ "ev_jumpoffset", 12 },
	{ "ev_argsize", 13 },
	{ "ev_boolean", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t idVarDef_initialized_t_typeInfo[] = {
	{ "uninitialized", 0 },
	{ "initializedVariable", 1 },
	{ "initializedConstant", 2 },
	{ "stackVariable", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t jointModTransform_t_typeInfo[] = {
	{ "JOINTMOD_NONE", 0 },
	{ "JOINTMOD_LOCAL", 1 },
	{ "JOINTMOD_LOCAL_OVERRIDE", 2 },
	{ "JOINTMOD_WORLD", 3 },
	{ "JOINTMOD_WORLD_OVERRIDE", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t frameCommandType_t_typeInfo[] = {
	{ "FC_SCRIPTFUNCTION", 0 },
	{ "FC_SCRIPTFUNCTIONOBJECT", 1 },
	{ "FC_EVENTFUNCTION", 2 },
	{ "FC_SOUND", 3 },
	{ "FC_SOUND_VOICE", 4 },
	{ "FC_SOUND_VOICE2", 5 },
	{ "FC_SOUND_BODY", 6 },
	{ "FC_SOUND_BODY2", 7 },
	{ "FC_SOUND_BODY3", 8 },
	{ "FC_SOUND_WEAPON", 9 },
	{ "FC_SOUND_ITEM", 10 },
	{ "FC_SOUND_GLOBAL", 11 },
	{ "FC_SOUND_CHATTER", 12 },
	{ "FC_SKIN", 13 },
	{ "FC_TRIGGER", 14 },
	{ "FC_TRIGGER_SMOKE_PARTICLE", 15 },
	{ "FC_MELEE", 16 },
	{ "FC_DIRECTDAMAGE", 17 },
	{ "FC_BEGINATTACK", 18 },
	{ "FC_ENDATTACK", 19 },
	{ "FC_MUZZLEFLASH", 20 },
	{ "FC_CREATEMISSILE", 21 },
	{ "FC_LAUNCHMISSILE", 22 },
	{ "FC_FIREMISSILEATTARGET", 23 },
	{ "FC_FOOTSTEP", 24 },
	{ "FC_LEFTFOOT", 25 },
	{ "FC_RIGHTFOOT", 26 },
	{ "FC_ENABLE_EYE_FOCUS", 27 },
	{ "FC_DISABLE_EYE_FOCUS", 28 },
	{ "FC_FX", 29 },
	{ "FC_DISABLE_GRAVITY", 30 },
	{ "FC_ENABLE_GRAVITY", 31 },
	{ "FC_JUMP", 32 },
	{ "FC_ENABLE_CLIP", 33 },
	{ "FC_DISABLE_CLIP", 34 },
	{ "FC_ENABLE_WALK_IK", 35 },
	{ "FC_DISABLE_WALK_IK", 36 },
	{ "FC_ENABLE_LEG_IK", 37 },
	{ "FC_DISABLE_LEG_IK", 38 },
	{ "FC_RECORDDEMO", 39 },
	{ "FC_AVIGAME", 40 },
	{ "FC_LAUNCH_PROJECTILE", 41 },
	{ "FC_TRIGGER_FX", 42 },
	{ "FC_START_EMITTER", 43 },
	{ "FC_STOP_EMITTER", 44 },
	{ NULL, 0 }
};

static enumValueInfo_t AFJointModType_t_typeInfo[] = {
	{ "AF_JOINTMOD_AXIS", 0 },
	{ "AF_JOINTMOD_ORIGIN", 1 },
	{ "AF_JOINTMOD_BOTH", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_5_typeInfo[] = {
	{ "PATHTYPE_WALK", 0 },
	{ "PATHTYPE_WALKOFFLEDGE", 1 },
	{ "PATHTYPE_BARRIERJUMP", 2 },
	{ "PATHTYPE_JUMP", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t pvsType_t_typeInfo[] = {
	{ "PVS_NORMAL", 0 },
	{ "PVS_ALL_PORTALS_OPEN", 1 },
	{ "PVS_CONNECTED_AREAS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t gameType_t_typeInfo[] = {
	{ "GAME_SP", -2 },
	{ "GAME_RANDOM", -1 },
	{ "GAME_DM", 0 },
	{ "GAME_TOURNEY", 1 },
	{ "GAME_TDM", 2 },
	{ "GAME_LASTMAN", 3 },
	{ "GAME_CTF", 4 },
	{ "GAME_COUNT", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t flagStatus_t_typeInfo[] = {
	{ "FLAGSTATUS_INBASE", 0 },
	{ "FLAGSTATUS_TAKEN", 1 },
	{ "FLAGSTATUS_STRAY", 2 },
	{ "FLAGSTATUS_NONE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t snd_evt_t_typeInfo[] = {
	{ "SND_YOUWIN", 0 },
	{ "SND_YOULOSE", 1 },
	{ "SND_FIGHT", 2 },
	{ "SND_THREE", 3 },
	{ "SND_TWO", 4 },
	{ "SND_ONE", 5 },
	{ "SND_SUDDENDEATH", 6 },
	{ "SND_FLAG_CAPTURED_YOURS", 7 },
	{ "SND_FLAG_CAPTURED_THEIRS", 8 },
	{ "SND_FLAG_RETURN", 9 },
	{ "SND_FLAG_TAKEN_YOURS", 10 },
	{ "SND_FLAG_TAKEN_THEIRS", 11 },
	{ "SND_FLAG_DROPPED_YOURS", 12 },
	{ "SND_FLAG_DROPPED_THEIRS", 13 },
	{ "SND_COUNT", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_gameState_t_typeInfo[] = {
	{ "INACTIVE", 0 },
	{ "WARMUP", 1 },
	{ "COUNTDOWN", 2 },
	{ "GAMEON", 3 },
	{ "SUDDENDEATH", 4 },
	{ "GAMEREVIEW", 5 },
	{ "NEXTGAME", 6 },
	{ "STATE_COUNT", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_msg_evt_t_typeInfo[] = {
	{ "MSG_SUICIDE", 0 },
	{ "MSG_KILLED", 1 },
	{ "MSG_KILLEDTEAM", 2 },
	{ "MSG_DIED", 3 },
	{ "MSG_SUDDENDEATH", 4 },
	{ "MSG_JOINEDSPEC", 5 },
	{ "MSG_TIMELIMIT", 6 },
	{ "MSG_FRAGLIMIT", 7 },
	{ "MSG_TELEFRAGGED", 8 },
	{ "MSG_JOINTEAM", 9 },
	{ "MSG_HOLYSHIT", 10 },
	{ "MSG_POINTLIMIT", 11 },
	{ "MSG_FLAGTAKEN", 12 },
	{ "MSG_FLAGDROP", 13 },
	{ "MSG_FLAGRETURN", 14 },
	{ "MSG_FLAGCAPTURE", 15 },
	{ "MSG_SCOREUPDATE", 16 },
	{ "MSG_LEFTGAME", 17 },
	{ "MSG_COUNT", 18 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_12_typeInfo[] = {
	{ "GAME_RELIABLE_MESSAGE_SYNCEDCVARS", 0 },
	{ "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", 1 },
	{ "GAME_RELIABLE_MESSAGE_CHAT", 2 },
	{ "GAME_RELIABLE_MESSAGE_TCHAT", 3 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_EVENT", 4 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_INDEX", 5 },
	{ "GAME_RELIABLE_MESSAGE_DB", 6 },
	{ "GAME_RELIABLE_MESSAGE_DROPWEAPON", 7 },
	{ "GAME_RELIABLE_MESSAGE_RESTART", 8 },
	{ "GAME_RELIABLE_MESSAGE_TOURNEYLINE", 9 },
	{ "GAME_RELIABLE_MESSAGE_VCHAT", 10 },
	{ "GAME_RELIABLE_MESSAGE_STARTSTATE", 11 },
	{ "GAME_RELIABLE_MESSAGE_WARMUPTIME", 12 },
	{ "GAME_RELIABLE_MESSAGE_SPECTATE", 13 },
	{ "GAME_RELIABLE_MESSAGE_EVENT", 14 },
	{ "GAME_RELIABLE_MESSAGE_LOBBY_COUNTDOWN", 15 },
	{ "GAME_RELIABLE_MESSAGE_RESPAWN_AVAILABLE", 16 },
	{ "GAME_RELIABLE_MESSAGE_MATCH_STARTED_TIME", 17 },
	{ "GAME_RELIABLE_MESSAGE_ACHIEVEMENT_UNLOCK", 18 },
	{ "GAME_RELIABLE_MESSAGE_CLIENT_HITSCAN_HIT", 19 },
	{ NULL, 0 }
};

static enumValueInfo_t gameState_t_typeInfo[] = {
	{ "GAMESTATE_UNINITIALIZED", 0 },
	{ "GAMESTATE_NOMAP", 1 },
	{ "GAMESTATE_STARTUP", 2 },
	{ "GAMESTATE_ACTIVE", 3 },
	{ "GAMESTATE_SHUTDOWN", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t idEventQueue_outOfOrderBehaviour_t_typeInfo[] = {
	{ "OUTOFORDER_IGNORE", 0 },
	{ "OUTOFORDER_DROP", 1 },
	{ "OUTOFORDER_SORT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t slowmoState_t_typeInfo[] = {
	{ "SLOWMO_STATE_OFF", 0 },
	{ "SLOWMO_STATE_RAMPUP", 1 },
	{ "SLOWMO_STATE_ON", 2 },
	{ "SLOWMO_STATE_RAMPDOWN", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t gameSoundChannel_t_typeInfo[] = {
	{ "SND_CHANNEL_ANY", 0 },
	{ "SND_CHANNEL_VOICE", 0 },
	{ "SND_CHANNEL_VOICE2", 1 },
	{ "SND_CHANNEL_BODY", 2 },
	{ "SND_CHANNEL_BODY2", 3 },
	{ "SND_CHANNEL_BODY3", 4 },
	{ "SND_CHANNEL_WEAPON", 5 },
	{ "SND_CHANNEL_ITEM", 6 },
	{ "SND_CHANNEL_HEART", 7 },
	{ "SND_CHANNEL_PDA_AUDIO", 8 },
	{ "SND_CHANNEL_PDA_VIDEO", 9 },
	{ "SND_CHANNEL_DEMONIC", 10 },
	{ "SND_CHANNEL_RADIO", 11 },
	{ "SND_CHANNEL_AMBIENT", 12 },
	{ "SND_CHANNEL_DAMAGE", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldType_typeInfo[] = {
	{ "FORCEFIELD_UNIFORM", 0 },
	{ "FORCEFIELD_EXPLOSION", 1 },
	{ "FORCEFIELD_IMPLOSION", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldApplyType_typeInfo[] = {
	{ "FORCEFIELD_APPLY_FORCE", 0 },
	{ "FORCEFIELD_APPLY_VELOCITY", 1 },
	{ "FORCEFIELD_APPLY_IMPULSE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t monsterMoveResult_t_typeInfo[] = {
	{ "MM_OK", 0 },
	{ "MM_SLIDING", 1 },
	{ "MM_BLOCKED", 2 },
	{ "MM_STEPPED", 3 },
	{ "MM_FALLING", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t pmtype_t_typeInfo[] = {
	{ "PM_NORMAL", 0 },
	{ "PM_DEAD", 1 },
	{ "PM_SPECTATOR", 2 },
	{ "PM_FREEZE", 3 },
	{ "PM_NOCLIP", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t waterLevel_t_typeInfo[] = {
	{ "WATERLEVEL_NONE", 0 },
	{ "WATERLEVEL_FEET", 1 },
	{ "WATERLEVEL_WAIST", 2 },
	{ "WATERLEVEL_HEAD", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t constraintType_t_typeInfo[] = {
	{ "CONSTRAINT_INVALID", 0 },
	{ "CONSTRAINT_FIXED", 1 },
	{ "CONSTRAINT_BALLANDSOCKETJOINT", 2 },
	{ "CONSTRAINT_UNIVERSALJOINT", 3 },
	{ "CONSTRAINT_HINGE", 4 },
	{ "CONSTRAINT_HINGESTEERING", 5 },
	{ "CONSTRAINT_SLIDER", 6 },
	{ "CONSTRAINT_CYLINDRICALJOINT", 7 },
	{ "CONSTRAINT_LINE", 8 },
	{ "CONSTRAINT_PLANE", 9 },
	{ "CONSTRAINT_SPRING", 10 },
	{ "CONSTRAINT_CONTACT", 11 },
	{ "CONSTRAINT_FRICTION", 12 },
	{ "CONSTRAINT_CONELIMIT", 13 },
	{ "CONSTRAINT_PYRAMIDLIMIT", 14 },
	{ "CONSTRAINT_SUSPENSION", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_23_typeInfo[] = {
	{ "TH_ALL", -1 },
	{ "TH_THINK", 1 },
	{ "TH_PHYSICS", 2 },
	{ "TH_ANIMATE", 4 },
	{ "TH_UPDATEVISUALS", 8 },
	{ "TH_UPDATEPARTICLES", 16 },
	{ NULL, 0 }
};

static enumValueInfo_t signalNum_t_typeInfo[] = {
	{ "SIG_TOUCH", 0 },
	{ "SIG_USE", 1 },
	{ "SIG_TRIGGER", 2 },
	{ "SIG_REMOVED", 3 },
	{ "SIG_DAMAGE", 4 },
	{ "SIG_BLOCKED", 5 },
	{ "SIG_MOVER_POS1", 6 },
	{ "SIG_MOVER_POS2", 7 },
	{ "SIG_MOVER_1TO2", 8 },
	{ "SIG_MOVER_2TO1", 9 },
	{ "NUM_SIGNALS", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t idEntity_enum_25_typeInfo[] = {
	{ "EVENT_STARTSOUNDSHADER", 0 },
	{ "EVENT_STOPSOUNDSHADER", 1 },
	{ "EVENT_MAXEVENTS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idEntity_interpolationBehavior_t_typeInfo[] = {
	{ "USE_NO_INTERPOLATION", 0 },
	{ "USE_LATEST_SNAP_ONLY", 1 },
	{ "USE_INTERPOLATION", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idAnimatedEntity_enum_27_typeInfo[] = {
	{ "EVENT_ADD_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayerStart_enum_28_typeInfo[] = {
	{ "EVENT_TELEPORTPLAYER", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_enum_29_typeInfo[] = {
	{ "EVENT_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_projectileState_t_typeInfo[] = {
	{ "SPAWNED", 0 },
	{ "CREATED", 1 },
	{ "LAUNCHED", 2 },
	{ "FIZZLED", 3 },
	{ "EXPLODED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t weaponStatus_t_typeInfo[] = {
	{ "WP_NONE", 0 },
	{ "WP_IDLE", 1 },
	{ "WP_READY", 2 },
	{ "WP_OUTOFAMMO", 3 },
	{ "WP_RELOAD", 4 },
	{ "WP_HOLSTERED", 5 },
	{ "WP_RISING", 6 },
	{ "WP_LOWERING", 7 },
	{ "WP_FIRE", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t idWeapon_enum_32_typeInfo[] = {
	{ "EVENT_RELOAD", 2 },
	{ "EVENT_ENDRELOAD", 3 },
	{ "EVENT_CHANGESKIN", 4 },
	{ "EVENT_MAXEVENTS", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idLight_enum_33_typeInfo[] = {
	{ "EVENT_BECOMEBROKEN", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t itemGiveFlags_t_typeInfo[] = {
	{ "ITEM_GIVE_FEEDBACK", 0 },
	{ "ITEM_GIVE_UPDATE_STATE", 0 },
	{ "ITEM_GIVE_FROM_WEAPON", 0 },
	{ NULL, 0 }
};

static enumValueInfo_t idItem_enum_35_typeInfo[] = {
	{ "EVENT_PICKUP", 2 },
	{ "EVENT_RESPAWN", 3 },
	{ "EVENT_RESPAWNFX", 4 },
	{ "EVENT_TAKEFLAG", 5 },
	{ "EVENT_DROPFLAG", 6 },
	{ "EVENT_FLAGRETURN", 7 },
	{ "EVENT_FLAGCAPTURE", 8 },
	{ "EVENT_MAXEVENTS", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t FxFader_enum_36_typeInfo[] = {
	{ "FX_STATE_OFF", 0 },
	{ "FX_STATE_RAMPUP", 1 },
	{ "FX_STATE_RAMPDOWN", 2 },
	{ "FX_STATE_ON", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t playerIconType_t_typeInfo[] = {
	{ "ICON_LAG", 0 },
	{ "ICON_CHAT", 1 },
	{ "ICON_TEAM_RED", 2 },
	{ "ICON_TEAM_BLUE", 3 },
	{ "ICON_NONE", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t achievement_t_typeInfo[] = {
	{ "ACHIEVEMENT_INVALID", -1 },
	{ "ACHIEVEMENT_EARN_ALL_50_TROPHIES", 0 },
	{ "ACHIEVEMENT_COMPLETED_DIFFICULTY_0", 1 },
	{ "ACHIEVEMENT_COMPLETED_DIFFICULTY_1", 2 },
	{ "ACHIEVEMENT_COMPLETED_DIFFICULTY_2", 3 },
	{ "ACHIEVEMENT_COMPLETED_DIFFICULTY_3", 4 },
	{ "ACHIEVEMENT_PDAS_BASE", 5 },
	{ "ACHIEVEMENT_WATCH_ALL_VIDEOS", 6 },
	{ "ACHIEVEMENT_KILL_MONSTER_WITH_1_HEALTH_LEFT", 7 },
	{ "ACHIEVEMENT_OPEN_ALL_LOCKERS", 8 },
	{ "ACHIEVEMENT_KILL_20_ENEMY_FISTS_HANDS", 9 },
	{ "ACHIEVEMENT_KILL_SCI_NEXT_TO_RCR", 10 },
	{ "ACHIEVEMENT_KILL_TWO_IMPS_ONE_SHOTGUN", 11 },
	{ "ACHIEVEMENT_SCORE_25000_TURKEY_PUNCHER", 12 },
	{ "ACHIEVEMENT_DESTROY_BARRELS", 13 },
	{ "ACHIEVEMENT_GET_BFG_FROM_SECURITY_OFFICE", 14 },
	{ "ACHIEVEMENT_COMPLETE_LEVEL_WITHOUT_TAKING_DMG", 15 },
	{ "ACHIEVEMENT_FIND_RAGE_LOGO", 16 },
	{ "ACHIEVEMENT_SPEED_RUN", 17 },
	{ "ACHIEVEMENT_DEFEAT_VAGARY_BOSS", 18 },
	{ "ACHIEVEMENT_DEFEAT_GUARDIAN_BOSS", 19 },
	{ "ACHIEVEMENT_DEFEAT_SABAOTH_BOSS", 20 },
	{ "ACHIEVEMENT_DEFEAT_CYBERDEMON_BOSS", 21 },
	{ "ACHIEVEMENT_SENTRY_BOT_ALIVE_TO_DEST", 22 },
	{ "ACHIEVEMENT_KILL_20_ENEMY_WITH_CHAINSAW", 23 },
	{ "ACHIEVEMENT_ID_LOGO_SECRET_ROOM", 24 },
	{ "ACHIEVEMENT_BLOODY_HANDWORK_OF_BETRUGER", 25 },
	{ "ACHIEVEMENT_TWO_DEMONS_FIGHT_EACH_OTHER", 26 },
	{ "ACHIEVEMENT_USE_SOUL_CUBE_TO_DEFEAT_20_ENEMY", 27 },
	{ "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_0", 28 },
	{ "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_1", 29 },
	{ "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_2", 30 },
	{ "ACHIEVEMENT_ROE_COMPLETED_DIFFICULTY_3", 31 },
	{ "ACHIEVEMENT_PDAS_ROE", 32 },
	{ "ACHIEVEMENT_KILL_5_ENEMY_HELL_TIME", 33 },
	{ "ACHIEVEMENT_DEFEAT_HELLTIME_HUNTER", 34 },
	{ "ACHIEVEMENT_DEFEAT_BERSERK_HUNTER", 35 },
	{ "ACHIEVEMENT_DEFEAT_INVULNERABILITY_HUNTER", 36 },
	{ "ACHIEVEMENT_DEFEAT_MALEDICT_BOSS", 37 },
	{ "ACHIEVEMENT_GRABBER_KILL_20_ENEMY", 38 },
	{ "ACHIEVEMENT_ARTIFACT_WITH_BERSERK_PUNCH_20", 39 },
	{ "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_0", 40 },
	{ "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_1", 41 },
	{ "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_2", 42 },
	{ "ACHIEVEMENT_LE_COMPLETED_DIFFICULTY_3", 43 },
	{ "ACHIEVEMENT_PDAS_LE", 44 },
	{ "ACHIEVEMENT_MP_KILL_PLAYER_VIA_TELEPORT", 45 },
	{ "ACHIEVEMENT_MP_CATCH_ENEMY_IN_ROFC", 46 },
	{ "ACHIEVEMENT_MP_KILL_5_PLAYERS_USING_INVIS", 47 },
	{ "ACHIEVEMENT_MP_COMPLETE_MATCH_WITHOUT_DYING", 48 },
	{ "ACHIEVEMENT_MP_USE_BERSERK_TO_KILL_PLAYER", 49 },
	{ "ACHIEVEMENT_MP_KILL_2_GUYS_IN_ROOM_WITH_BFG", 50 },
	{ "ACHIEVEMENT_DOOM1_NEOPHYTE_COMPLETE_ANY_LEVEL", 51 },
	{ "ACHIEVEMENT_DOOM1_EPISODE1_COMPLETE_MEDIUM", 52 },
	{ "ACHIEVEMENT_DOOM1_EPISODE2_COMPLETE_MEDIUM", 53 },
	{ "ACHIEVEMENT_DOOM1_EPISODE3_COMPLETE_MEDIUM", 54 },
	{ "ACHIEVEMENT_DOOM1_EPISODE4_COMPLETE_MEDIUM", 55 },
	{ "ACHIEVEMENT_DOOM1_RAMPAGE_COMPLETE_ALL_HARD", 56 },
	{ "ACHIEVEMENT_DOOM1_NIGHTMARE_COMPLETE_ANY_LEVEL_NIGHTMARE", 57 },
	{ "ACHIEVEMENT_DOOM1_BURNING_OUT_OF_CONTROL_COMPLETE_KILLS_ITEMS_SECRETS", 58 },
	{ "ACHIEVEMENT_DOOM2_JUST_GETTING_STARTED_COMPLETE_ANY_LEVEL", 59 },
	{ "ACHIEVEMENT_DOOM2_FROM_EARTH_TO_HELL_COMPLETE_HELL_ON_EARTH", 60 },
	{ "ACHIEVEMENT_DOOM2_AND_BACK_AGAIN_COMPLETE_NO_REST", 61 },
	{ "ACHIEVEMENT_DOOM2_SUPERIOR_FIREPOWER_COMPLETE_ALL_HARD", 62 },
	{ "ACHIEVEMENT_DOOM2_REALLY_BIG_GUN_FIND_BFG_SINGLEPLAYER", 63 },
	{ "ACHIEVEMENT_DOOM2_BURNING_OUT_OF_CONTROL_COMPLETE_KILLS_ITEMS_SECRETS", 64 },
	{ "ACHIEVEMENT_DOOM2_IMPORTANT_LOOKING_DOOR_FIND_ANY_SECRET", 65 },
	{ "ACHIEVEMENTS_NUM", 66 },
	{ "STAT_DOOM_COMPLETED_EPISODE_1_MEDIUM", 67 },
	{ "STAT_DOOM_COMPLETED_EPISODE_2_MEDIUM", 68 },
	{ "STAT_DOOM_COMPLETED_EPISODE_3_MEDIUM", 69 },
	{ "STAT_DOOM_COMPLETED_EPISODE_4_MEDIUM", 70 },
	{ "STAT_DOOM_COMPLETED_EPISODE_1_HARD", 71 },
	{ "STAT_DOOM_COMPLETED_EPISODE_2_HARD", 72 },
	{ "STAT_DOOM_COMPLETED_EPISODE_3_HARD", 73 },
	{ "STAT_DOOM_COMPLETED_EPISODE_4_HARD", 74 },
	{ NULL, 0 }
};

static enumValueInfo_t gameExpansionType_t_typeInfo[] = {
	{ "GAME_BASE", 0 },
	{ "GAME_D3XP", 1 },
	{ "GAME_D3LE", 2 },
	{ "GAME_UNKNOWN", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_40_typeInfo[] = {
	{ "BERSERK", 0 },
	{ "INVISIBILITY", 1 },
	{ "MEGAHEALTH", 2 },
	{ "ADRENALINE", 3 },
	{ "INVULNERABILITY", 4 },
	{ "HELLTIME", 5 },
	{ "ENVIROSUIT", 6 },
	{ "ENVIROTIME", 7 },
	{ "MAX_POWERUPS", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_41_typeInfo[] = {
	{ "SPEED", 0 },
	{ "PROJECTILE_DAMAGE", 1 },
	{ "MELEE_DAMAGE", 2 },
	{ "MELEE_DISTANCE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_42_typeInfo[] = {
	{ "INFLUENCE_NONE", 0 },
	{ "INFLUENCE_LEVEL1", 1 },
	{ "INFLUENCE_LEVEL2", 2 },
	{ "INFLUENCE_LEVEL3", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayer_enum_43_typeInfo[] = {
	{ "EVENT_IMPULSE", 2 },
	{ "EVENT_EXIT_TELEPORTER", 3 },
	{ "EVENT_ABORT_TELEPORTER", 4 },
	{ "EVENT_POWERUP", 5 },
	{ "EVENT_SPECTATE", 6 },
	{ "EVENT_PICKUPNAME", 7 },
	{ "EVENT_FORCE_ORIGIN", 8 },
	{ "EVENT_KNOCKBACK", 9 },
	{ "EVENT_MAXEVENTS", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moveStage_t_typeInfo[] = {
	{ "ACCELERATION_STAGE", 0 },
	{ "LINEAR_STAGE", 1 },
	{ "DECELERATION_STAGE", 2 },
	{ "FINISHED_STAGE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverCommand_t_typeInfo[] = {
	{ "MOVER_NONE", 0 },
	{ "MOVER_ROTATING", 1 },
	{ "MOVER_MOVING", 2 },
	{ "MOVER_SPLINE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverDir_t_typeInfo[] = {
	{ "DIR_UP", -1 },
	{ "DIR_DOWN", -2 },
	{ "DIR_LEFT", -3 },
	{ "DIR_RIGHT", -4 },
	{ "DIR_FORWARD", -5 },
	{ "DIR_BACK", -6 },
	{ "DIR_REL_UP", -7 },
	{ "DIR_REL_DOWN", -8 },
	{ "DIR_REL_LEFT", -9 },
	{ "DIR_REL_RIGHT", -10 },
	{ "DIR_REL_FORWARD", -11 },
	{ "DIR_REL_BACK", -12 },
	{ NULL, 0 }
};

static enumValueInfo_t idElevator_elevatorState_t_typeInfo[] = {
	{ "INIT", 0 },
	{ "IDLE", 1 },
	{ "WAITING_ON_DOORS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t moverState_t_typeInfo[] = {
	{ "MOVER_POS1", 0 },
	{ "MOVER_POS2", 1 },
	{ "MOVER_1TO2", 2 },
	{ "MOVER_2TO1", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_enum_49_typeInfo[] = {
	{ "EVENT_EXPLODE", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_explode_state_t_typeInfo[] = {
	{ "NORMAL", 0 },
	{ "BURNING", 1 },
	{ "BURNEXPIRED", 2 },
	{ "EXPLODING", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idSecurityCamera_enum_51_typeInfo[] = {
	{ "SCANNING", 0 },
	{ "LOSINGINTEREST", 1 },
	{ "ALERT", 2 },
	{ "ACTIVATED", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idBrittleFracture_enum_52_typeInfo[] = {
	{ "EVENT_PROJECT_DECAL", 2 },
	{ "EVENT_SHATTER", 3 },
	{ "EVENT_MAXEVENTS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t moveType_t_typeInfo[] = {
	{ "MOVETYPE_DEAD", 0 },
	{ "MOVETYPE_ANIM", 1 },
	{ "MOVETYPE_SLIDE", 2 },
	{ "MOVETYPE_FLY", 3 },
	{ "MOVETYPE_STATIC", 4 },
	{ "NUM_MOVETYPES", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t moveCommand_t_typeInfo[] = {
	{ "MOVE_NONE", 0 },
	{ "MOVE_FACE_ENEMY", 1 },
	{ "MOVE_FACE_ENTITY", 2 },
	{ "NUM_NONMOVING_COMMANDS", 3 },
	{ "MOVE_TO_ENEMY", 3 },
	{ "MOVE_TO_ENEMYHEIGHT", 4 },
	{ "MOVE_TO_ENTITY", 5 },
	{ "MOVE_OUT_OF_RANGE", 6 },
	{ "MOVE_TO_ATTACK_POSITION", 7 },
	{ "MOVE_TO_COVER", 8 },
	{ "MOVE_TO_POSITION", 9 },
	{ "MOVE_TO_POSITION_DIRECT", 10 },
	{ "MOVE_SLIDE_TO_POSITION", 11 },
	{ "MOVE_WANDER", 12 },
	{ "NUM_MOVE_COMMANDS", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t talkState_t_typeInfo[] = {
	{ "TALK_NEVER", 0 },
	{ "TALK_DEAD", 1 },
	{ "TALK_OK", 2 },
	{ "TALK_BUSY", 3 },
	{ "NUM_TALK_STATES", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t moveStatus_t_typeInfo[] = {
	{ "MOVE_STATUS_DONE", 0 },
	{ "MOVE_STATUS_MOVING", 1 },
	{ "MOVE_STATUS_WAITING", 2 },
	{ "MOVE_STATUS_DEST_NOT_FOUND", 3 },
	{ "MOVE_STATUS_DEST_UNREACHABLE", 4 },
	{ "MOVE_STATUS_BLOCKED_BY_WALL", 5 },
	{ "MOVE_STATUS_BLOCKED_BY_OBJECT", 6 },
	{ "MOVE_STATUS_BLOCKED_BY_ENEMY", 7 },
	{ "MOVE_STATUS_BLOCKED_BY_MONSTER", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t stopEvent_t_typeInfo[] = {
	{ "SE_BLOCKED", 0 },
	{ "SE_ENTER_LEDGE_AREA", 0 },
	{ "SE_ENTER_OBSTACLE", 0 },
	{ "SE_FALL", 0 },
	{ "SE_LAND", 0 },
	{ NULL, 0 }
};

static enumValueInfo_t menuOption_t_typeInfo[] = {
	{ "OPTION_INVALID", -1 },
	{ "OPTION_BUTTON_TEXT", 0 },
	{ "OPTION_SLIDER_BAR", 1 },
	{ "OPTION_SLIDER_TEXT", 2 },
	{ "OPTION_SLIDER_TOGGLE", 3 },
	{ "OPTION_BUTTON_INFO", 4 },
	{ "OPTION_BUTTON_FULL_TEXT_SLIDER", 5 },
	{ "MAX_MENU_OPTION_TYPES", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t widgetEvent_t_typeInfo[] = {
	{ "WIDGET_EVENT_PRESS", 0 },
	{ "WIDGET_EVENT_RELEASE", 1 },
	{ "WIDGET_EVENT_ROLL_OVER", 2 },
	{ "WIDGET_EVENT_ROLL_OUT", 3 },
	{ "WIDGET_EVENT_FOCUS_ON", 4 },
	{ "WIDGET_EVENT_FOCUS_OFF", 5 },
	{ "WIDGET_EVENT_SCROLL_UP_LSTICK", 6 },
	{ "WIDGET_EVENT_SCROLL_UP_LSTICK_RELEASE", 7 },
	{ "WIDGET_EVENT_SCROLL_DOWN_LSTICK", 8 },
	{ "WIDGET_EVENT_SCROLL_DOWN_LSTICK_RELEASE", 9 },
	{ "WIDGET_EVENT_SCROLL_LEFT_LSTICK", 10 },
	{ "WIDGET_EVENT_SCROLL_LEFT_LSTICK_RELEASE", 11 },
	{ "WIDGET_EVENT_SCROLL_RIGHT_LSTICK", 12 },
	{ "WIDGET_EVENT_SCROLL_RIGHT_LSTICK_RELEASE", 13 },
	{ "WIDGET_EVENT_SCROLL_UP_RSTICK", 14 },
	{ "WIDGET_EVENT_SCROLL_UP_RSTICK_RELEASE", 15 },
	{ "WIDGET_EVENT_SCROLL_DOWN_RSTICK", 16 },
	{ "WIDGET_EVENT_SCROLL_DOWN_RSTICK_RELEASE", 17 },
	{ "WIDGET_EVENT_SCROLL_LEFT_RSTICK", 18 },
	{ "WIDGET_EVENT_SCROLL_LEFT_RSTICK_RELEASE", 19 },
	{ "WIDGET_EVENT_SCROLL_RIGHT_RSTICK", 20 },
	{ "WIDGET_EVENT_SCROLL_RIGHT_RSTICK_RELEASE", 21 },
	{ "WIDGET_EVENT_SCROLL_UP", 22 },
	{ "WIDGET_EVENT_SCROLL_UP_RELEASE", 23 },
	{ "WIDGET_EVENT_SCROLL_DOWN", 24 },
	{ "WIDGET_EVENT_SCROLL_DOWN_RELEASE", 25 },
	{ "WIDGET_EVENT_SCROLL_LEFT", 26 },
	{ "WIDGET_EVENT_SCROLL_LEFT_RELEASE", 27 },
	{ "WIDGET_EVENT_SCROLL_RIGHT", 28 },
	{ "WIDGET_EVENT_SCROLL_RIGHT_RELEASE", 29 },
	{ "WIDGET_EVENT_DRAG_START", 30 },
	{ "WIDGET_EVENT_DRAG_STOP", 31 },
	{ "WIDGET_EVENT_SCROLL_PAGEDWN", 32 },
	{ "WIDGET_EVENT_SCROLL_PAGEDWN_RELEASE", 33 },
	{ "WIDGET_EVENT_SCROLL_PAGEUP", 34 },
	{ "WIDGET_EVENT_SCROLL_PAGEUP_RELEASE", 35 },
	{ "WIDGET_EVENT_SCROLL", 36 },
	{ "WIDGET_EVENT_SCROLL_RELEASE", 37 },
	{ "WIDGET_EVENT_BACK", 38 },
	{ "WIDGET_EVENT_COMMAND", 39 },
	{ "WIDGET_EVENT_TAB_NEXT", 40 },
	{ "WIDGET_EVENT_TAB_PREV", 41 },
	{ "MAX_WIDGET_EVENT", 42 },
	{ NULL, 0 }
};

static enumValueInfo_t scrollType_t_typeInfo[] = {
	{ "SCROLL_SINGLE", 0 },
	{ "SCROLL_PAGE", 1 },
	{ "SCROLL_FULL", 2 },
	{ "SCROLL_TOP", 3 },
	{ "SCROLL_END", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t widgetAction_t_typeInfo[] = {
	{ "WIDGET_ACTION_NONE", 0 },
	{ "WIDGET_ACTION_COMMAND", 1 },
	{ "WIDGET_ACTION_FUNCTION", 2 },
	{ "WIDGET_ACTION_SCROLL_VERTICAL", 3 },
	{ "WIDGET_ACTION_SCROLL_VERTICAL_VARIABLE", 4 },
	{ "WIDGET_ACTION_SCROLL_PAGE", 5 },
	{ "WIDGET_ACTION_SCROLL_HORIZONTAL", 6 },
	{ "WIDGET_ACTION_SCROLL_TAB", 7 },
	{ "WIDGET_ACTION_START_REPEATER", 8 },
	{ "WIDGET_ACTION_STOP_REPEATER", 9 },
	{ "WIDGET_ACTION_ADJUST_FIELD", 10 },
	{ "WIDGET_ACTION_PRESS_FOCUSED", 11 },
	{ "WIDGET_ACTION_JOY3_ON_PRESS", 12 },
	{ "WIDGET_ACTION_JOY4_ON_PRESS", 13 },
	{ "WIDGET_ACTION_GOTO_MENU", 14 },
	{ "WIDGET_ACTION_GO_BACK", 15 },
	{ "WIDGET_ACTION_EXIT_GAME", 16 },
	{ "WIDGET_ACTION_LAUNCH_MULTIPLAYER", 17 },
	{ "WIDGET_ACTION_MENU_BAR_SELECT", 18 },
	{ "WIDGET_ACTION_EMAIL_HOVER", 19 },
	{ "WIDGET_ACTION_PDA_SELECT_USER", 20 },
	{ "WIDGET_ACTION_SELECT_GAMERTAG", 21 },
	{ "WIDGET_ACTION_PDA_SELECT_NAV", 22 },
	{ "WIDGET_ACTION_SELECT_PDA_AUDIO", 23 },
	{ "WIDGET_ACTION_SELECT_PDA_VIDEO", 24 },
	{ "WIDGET_ACTION_SELECT_PDA_ITEM", 25 },
	{ "WIDGET_ACTION_SCROLL_DRAG", 26 },
	{ "WIDGET_ACTION_PDA_SELECT_EMAIL", 27 },
	{ "WIDGET_ACTION_PDA_CLOSE", 28 },
	{ "WIDGET_ACTION_REFRESH", 29 },
	{ "WIDGET_ACTION_MUTE_PLAYER", 30 },
	{ "MAX_WIDGET_ACTION", 31 },
	{ NULL, 0 }
};

static enumValueInfo_t actionHandler_t_typeInfo[] = {
	{ "WIDGET_ACTION_EVENT_SCROLL_UP_START_REPEATER", 0 },
	{ "WIDGET_ACTION_EVENT_SCROLL_UP_START_REPEATER_VARIABLE", 1 },
	{ "WIDGET_ACTION_EVENT_SCROLL_DOWN_START_REPEATER", 2 },
	{ "WIDGET_ACTION_EVENT_SCROLL_DOWN_START_REPEATER_VARIABLE", 3 },
	{ "WIDGET_ACTION_EVENT_SCROLL_LEFT_START_REPEATER", 4 },
	{ "WIDGET_ACTION_EVENT_SCROLL_RIGHT_START_REPEATER", 5 },
	{ "WIDGET_ACTION_EVENT_SCROLL_PAGE_DOWN_START_REPEATER", 6 },
	{ "WIDGET_ACTION_EVENT_SCROLL_PAGE_UP_START_REPEATER", 7 },
	{ "WIDGET_ACTION_EVENT_STOP_REPEATER", 8 },
	{ "WIDGET_ACTION_EVENT_TAB_NEXT", 9 },
	{ "WIDGET_ACTION_EVENT_TAB_PREV", 10 },
	{ "WIDGET_ACTION_EVENT_DRAG_START", 11 },
	{ "WIDGET_ACTION_EVENT_DRAG_STOP", 12 },
	{ "WIDGET_ACTION_EVENT_JOY3_ON_PRESS", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuWidget_widgetState_t_typeInfo[] = {
	{ "WIDGET_STATE_HIDDEN", 0 },
	{ "WIDGET_STATE_NORMAL", 1 },
	{ "WIDGET_STATE_SELECTING", 2 },
	{ "WIDGET_STATE_SELECTED", 3 },
	{ "WIDGET_STATE_DISABLED", 4 },
	{ "WIDGET_STATE_MAX", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuWidget_Button_animState_t_typeInfo[] = {
	{ "ANIM_STATE_UP", 0 },
	{ "ANIM_STATE_DOWN", 1 },
	{ "ANIM_STATE_OVER", 2 },
	{ "ANIM_STATE_MAX", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuWidget_NavButton_navWidgetState_t_typeInfo[] = {
	{ "NAV_WIDGET_LEFT", 0 },
	{ "NAV_WIDGET_RIGHT", 1 },
	{ "NAV_WIDGET_SELECTED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuWidget_CommandBar_button_t_typeInfo[] = {
	{ "BUTTON_JOY1", 0 },
	{ "BUTTON_JOY2", 1 },
	{ "BUTTON_JOY3", 2 },
	{ "BUTTON_JOY4", 3 },
	{ "BUTTON_JOY10", 4 },
	{ "BUTTON_TAB", 5 },
	{ "MAX_BUTTONS", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuWidget_CommandBar_alignment_t_typeInfo[] = {
	{ "LEFT", 0 },
	{ "RIGHT", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t mainMenuTransition_t_typeInfo[] = {
	{ "MENU_TRANSITION_INVALID", -1 },
	{ "MENU_TRANSITION_SIMPLE", 0 },
	{ "MENU_TRANSITION_ADVANCE", 1 },
	{ "MENU_TRANSITION_BACK", 2 },
	{ "MENU_TRANSITION_FORCE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t cursorState_t_typeInfo[] = {
	{ "CURSOR_NONE", 0 },
	{ "CURSOR_IN_COMBAT", 1 },
	{ "CURSOR_TALK", 2 },
	{ "CURSOR_GRABBER", 3 },
	{ "CURSOR_ITEM", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t leaderboardFilterMode_t_typeInfo[] = {
	{ "LEADERBOARD_FILTER_OVERALL", 0 },
	{ "LEADERBOARD_FILTER_MYSCORE", 1 },
	{ "LEADERBOARD_FILTER_FRIENDS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_GameOptions_idMenuDataSource_GameSettings_gameSettingFields_t_typeInfo[] = {
	{ "GAME_FIELD_FOV", 0 },
	{ "GAME_FIELD_CHECKPOINTS", 1 },
	{ "GAME_FIELD_AUTO_SWITCH", 2 },
	{ "GAME_FIELD_AUTO_RELOAD", 3 },
	{ "GAME_FIELD_AIM_ASSIST", 4 },
	{ "GAME_FIELD_ALWAYS_SPRINT", 5 },
	{ "GAME_FIELD_FLASHLIGHT_SHADOWS", 6 },
	{ "MAX_GAME_FIELDS", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_MatchSettings_idMenuDataSource_MatchSettings_matchSettingFields_t_typeInfo[] = {
	{ "MATCH_FIELD_MODE", 0 },
	{ "MATCH_FIELD_MAP", 1 },
	{ "MATCH_FIELD_TIME", 2 },
	{ "MATCH_FIELD_SCORE", 3 },
	{ "MAX_MATCH_FIELDS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_Controls_idMenuDataSource_ControlSettings_controlSettingFields_t_typeInfo[] = {
	{ "CONTROLS_FIELD_INVERT_MOUSE", 0 },
	{ "CONTROLS_FIELD_GAMEPAD_ENABLED", 1 },
	{ "CONTROLS_FIELD_MOUSE_SENS", 2 },
	{ "MAX_CONTROL_FIELDS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_Gamepad_idMenuDataSource_GamepadSettings_controlSettingFields_t_typeInfo[] = {
	{ "GAMEPAD_FIELD_LEFTY", 0 },
	{ "GAMEPAD_FIELD_INVERT", 1 },
	{ "GAMEPAD_FIELD_VIBRATE", 2 },
	{ "GAMEPAD_FIELD_HOR_SENS", 3 },
	{ "GAMEPAD_FIELD_VERT_SENS", 4 },
	{ "GAMEPAD_FIELD_ACCELERATION", 5 },
	{ "GAMEPAD_FIELD_THRESHOLD", 6 },
	{ "MAX_GAMEPAD_FIELDS", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_ControllerLayout_idMenuDataSource_LayoutSettings_controlSettingFields_t_typeInfo[] = {
	{ "LAYOUT_FIELD_LAYOUT", 0 },
	{ "MAX_LAYOUT_FIELDS", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t idMenuScreen_Shell_SystemOptions_idMenuDataSource_SystemSettings_systemSettingFields_t_typeInfo[] = {
	{ "SYSTEM_FIELD_FULLSCREEN", 0 },
	{ "SYSTEM_FIELD_FRAMERATE", 1 },
	{ "SYSTEM_FIELD_VSYNC", 2 },
	{ "SYSTEM_FIELD_ANTIALIASING", 3 },
	{ "SYSTEM_FIELD_LODBIAS", 4 },
	{ "SYSTEM_FIELD_BRIGHTNESS", 5 },
	{ "SYSTEM_FIELD_VOLUME", 6 },
	{ "MAX_SYSTEM_FIELDS", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t shellAreas_t_typeInfo[] = {
	{ "SHELL_AREA_INVALID", -1 },
	{ "SHELL_AREA_START", 0 },
	{ "SHELL_AREA_ROOT", 1 },
	{ "SHELL_AREA_DEV", 2 },
	{ "SHELL_AREA_CAMPAIGN", 3 },
	{ "SHELL_AREA_LOAD", 4 },
	{ "SHELL_AREA_SAVE", 5 },
	{ "SHELL_AREA_NEW_GAME", 6 },
	{ "SHELL_AREA_GAME_OPTIONS", 7 },
	{ "SHELL_AREA_SYSTEM_OPTIONS", 8 },
	{ "SHELL_AREA_MULTIPLAYER", 9 },
	{ "SHELL_AREA_GAME_LOBBY", 10 },
	{ "SHELL_AREA_PARTY_LOBBY", 11 },
	{ "SHELL_AREA_SETTINGS", 12 },
	{ "SHELL_AREA_AUDIO", 13 },
	{ "SHELL_AREA_VIDEO", 14 },
	{ "SHELL_AREA_KEYBOARD", 15 },
	{ "SHELL_AREA_CONTROLS", 16 },
	{ "SHELL_AREA_CONTROLLER_LAYOUT", 17 },
	{ "SHELL_AREA_GAMEPAD", 18 },
	{ "SHELL_AREA_PAUSE", 19 },
	{ "SHELL_AREA_LEADERBOARDS", 20 },
	{ "SHELL_AREA_PLAYSTATION", 21 },
	{ "SHELL_AREA_DIFFICULTY", 22 },
	{ "SHELL_AREA_RESOLUTION", 23 },
	{ "SHELL_AREA_MATCH_SETTINGS", 24 },
	{ "SHELL_AREA_MODE_SELECT", 25 },
	{ "SHELL_AREA_BROWSER", 26 },
	{ "SHELL_AREA_CREDITS", 27 },
	{ "SHELL_NUM_AREAS", 28 },
	{ NULL, 0 }
};

static enumValueInfo_t shellState_t_typeInfo[] = {
	{ "SHELL_STATE_INVALID", -1 },
	{ "SHELL_STATE_PRESS_START", 0 },
	{ "SHELL_STATE_IDLE", 1 },
	{ "SHELL_STATE_PARTY_LOBBY", 2 },
	{ "SHELL_STATE_GAME_LOBBY", 3 },
	{ "SHELL_STATE_PAUSED", 4 },
	{ "SHELL_STATE_CONNECTING", 5 },
	{ "SHELL_STATE_SEARCHING", 6 },
	{ "SHELL_STATE_LOADING", 7 },
	{ "SHELL_STATE_BUSY", 8 },
	{ "SHELL_STATE_IN_GAME", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t pdaAreas_t_typeInfo[] = {
	{ "PDA_AREA_INVALID", -1 },
	{ "PDA_AREA_USER_DATA", 0 },
	{ "PDA_AREA_USER_EMAIL", 1 },
	{ "PDA_AREA_VIDEO_DISKS", 2 },
	{ "PDA_AREA_INVENTORY", 3 },
	{ "PDA_NUM_AREAS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t hudArea_t_typeInfo[] = {
	{ "HUD_AREA_INVALID", -1 },
	{ "HUD_AREA_PLAYING", 0 },
	{ "HUD_NUM_AREAS", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t scoreboardArea_t_typeInfo[] = {
	{ "SCOREBOARD_AREA_INVALID", -1 },
	{ "SCOREBOARD_AREA_DEFAULT", 0 },
	{ "SCOREBOARD_AREA_TEAM", 1 },
	{ "SCOREBOARD_AREA_CTF", 2 },
	{ "SCOREBOARD_NUM_AREAS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t pdaHandlerWidgets_t_typeInfo[] = {
	{ "PDA_WIDGET_NAV_BAR", 0 },
	{ "PDA_WIDGET_PDA_LIST", 1 },
	{ "PDA_WIDGET_PDA_LIST_SCROLLBAR", 2 },
	{ "PDA_WIDGET_CMD_BAR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t scoreboardHandlerWidgets_t_typeInfo[] = {
	{ "SCOREBOARD_WIDGET_CMD_BAR", 0 },
	{ NULL, 0 }
};

static enumValueInfo_t menuSounds_t_typeInfo[] = {
	{ "GUI_SOUND_MUSIC", 0 },
	{ "GUI_SOUND_SCROLL", 1 },
	{ "GUI_SOUND_ADVANCE", 2 },
	{ "GUI_SOUND_BACK", 3 },
	{ "GUI_SOUND_BUILD_ON", 4 },
	{ "GUI_SOUND_BUILD_OFF", 5 },
	{ "GUI_SOUND_FOCUS", 6 },
	{ "GUI_SOUND_ROLL_OVER", 7 },
	{ "GUI_SOUND_ROLL_OUT", 8 },
	{ "NUM_GUI_SOUNDS", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_85_typeInfo[] = {
	{ "OP_RETURN", 0 },
	{ "OP_UINC_F", 1 },
	{ "OP_UINCP_F", 2 },
	{ "OP_UDEC_F", 3 },
	{ "OP_UDECP_F", 4 },
	{ "OP_COMP_F", 5 },
	{ "OP_MUL_F", 6 },
	{ "OP_MUL_V", 7 },
	{ "OP_MUL_FV", 8 },
	{ "OP_MUL_VF", 9 },
	{ "OP_DIV_F", 10 },
	{ "OP_MOD_F", 11 },
	{ "OP_ADD_F", 12 },
	{ "OP_ADD_V", 13 },
	{ "OP_ADD_S", 14 },
	{ "OP_ADD_FS", 15 },
	{ "OP_ADD_SF", 16 },
	{ "OP_ADD_VS", 17 },
	{ "OP_ADD_SV", 18 },
	{ "OP_SUB_F", 19 },
	{ "OP_SUB_V", 20 },
	{ "OP_EQ_F", 21 },
	{ "OP_EQ_V", 22 },
	{ "OP_EQ_S", 23 },
	{ "OP_EQ_E", 24 },
	{ "OP_EQ_EO", 25 },
	{ "OP_EQ_OE", 26 },
	{ "OP_EQ_OO", 27 },
	{ "OP_NE_F", 28 },
	{ "OP_NE_V", 29 },
	{ "OP_NE_S", 30 },
	{ "OP_NE_E", 31 },
	{ "OP_NE_EO", 32 },
	{ "OP_NE_OE", 33 },
	{ "OP_NE_OO", 34 },
	{ "OP_LE", 35 },
	{ "OP_GE", 36 },
	{ "OP_LT", 37 },
	{ "OP_GT", 38 },
	{ "OP_INDIRECT_F", 39 },
	{ "OP_INDIRECT_V", 40 },
	{ "OP_INDIRECT_S", 41 },
	{ "OP_INDIRECT_ENT", 42 },
	{ "OP_INDIRECT_BOOL", 43 },
	{ "OP_INDIRECT_OBJ", 44 },
	{ "OP_ADDRESS", 45 },
	{ "OP_EVENTCALL", 46 },
	{ "OP_OBJECTCALL", 47 },
	{ "OP_SYSCALL", 48 },
	{ "OP_STORE_F", 49 },
	{ "OP_STORE_V", 50 },
	{ "OP_STORE_S", 51 },
	{ "OP_STORE_ENT", 52 },
	{ "OP_STORE_BOOL", 53 },
	{ "OP_STORE_OBJENT", 54 },
	{ "OP_STORE_OBJ", 55 },
	{ "OP_STORE_ENTOBJ", 56 },
	{ "OP_STORE_FTOS", 57 },
	{ "OP_STORE_BTOS", 58 },
	{ "OP_STORE_VTOS", 59 },
	{ "OP_STORE_FTOBOOL", 60 },
	{ "OP_STORE_BOOLTOF", 61 },
	{ "OP_STOREP_F", 62 },
	{ "OP_STOREP_V", 63 },
	{ "OP_STOREP_S", 64 },
	{ "OP_STOREP_ENT", 65 },
	{ "OP_STOREP_FLD", 66 },
	{ "OP_STOREP_BOOL", 67 },
	{ "OP_STOREP_OBJ", 68 },
	{ "OP_STOREP_OBJENT", 69 },
	{ "OP_STOREP_FTOS", 70 },
	{ "OP_STOREP_BTOS", 71 },
	{ "OP_STOREP_VTOS", 72 },
	{ "OP_STOREP_FTOBOOL", 73 },
	{ "OP_STOREP_BOOLTOF", 74 },
	{ "OP_UMUL_F", 75 },
	{ "OP_UMUL_V", 76 },
	{ "OP_UDIV_F", 77 },
	{ "OP_UDIV_V", 78 },
	{ "OP_UMOD_F", 79 },
	{ "OP_UADD_F", 80 },
	{ "OP_UADD_V", 81 },
	{ "OP_USUB_F", 82 },
	{ "OP_USUB_V", 83 },
	{ "OP_UAND_F", 84 },
	{ "OP_UOR_F", 85 },
	{ "OP_NOT_BOOL", 86 },
	{ "OP_NOT_F", 87 },
	{ "OP_NOT_V", 88 },
	{ "OP_NOT_S", 89 },
	{ "OP_NOT_ENT", 90 },
	{ "OP_NEG_F", 91 },
	{ "OP_NEG_V", 92 },
	{ "OP_INT_F", 93 },
	{ "OP_IF", 94 },
	{ "OP_IFNOT", 95 },
	{ "OP_CALL", 96 },
	{ "OP_THREAD", 97 },
	{ "OP_OBJTHREAD", 98 },
	{ "OP_PUSH_F", 99 },
	{ "OP_PUSH_V", 100 },
	{ "OP_PUSH_S", 101 },
	{ "OP_PUSH_ENT", 102 },
	{ "OP_PUSH_OBJ", 103 },
	{ "OP_PUSH_OBJENT", 104 },
	{ "OP_PUSH_FTOS", 105 },
	{ "OP_PUSH_BTOF", 106 },
	{ "OP_PUSH_FTOB", 107 },
	{ "OP_PUSH_VTOS", 108 },
	{ "OP_PUSH_BTOS", 109 },
	{ "OP_GOTO", 110 },
	{ "OP_AND", 111 },
	{ "OP_AND_BOOLF", 112 },
	{ "OP_AND_FBOOL", 113 },
	{ "OP_AND_BOOLBOOL", 114 },
	{ "OP_OR", 115 },
	{ "OP_OR_BOOLF", 116 },
	{ "OP_OR_FBOOL", 117 },
	{ "OP_OR_BOOLBOOL", 118 },
	{ "OP_BITAND", 119 },
	{ "OP_BITOR", 120 },
	{ "OP_BREAK", 121 },
	{ "OP_CONTINUE", 122 },
	{ "NUM_OPCODES", 123 },
	{ NULL, 0 }
};

static enumTypeInfo_t enumTypeInfo[] = {
	{ "etype_t", etype_t_typeInfo },
	{ "idVarDef::initialized_t", idVarDef_initialized_t_typeInfo },
	{ "jointModTransform_t", jointModTransform_t_typeInfo },
	{ "frameCommandType_t", frameCommandType_t_typeInfo },
	{ "AFJointModType_t", AFJointModType_t_typeInfo },
	{ "enum_5", enum_5_typeInfo },
	{ "pvsType_t", pvsType_t_typeInfo },
	{ "gameType_t", gameType_t_typeInfo },
	{ "flagStatus_t", flagStatus_t_typeInfo },
	{ "snd_evt_t", snd_evt_t_typeInfo },
	{ "idMultiplayerGame::gameState_t", idMultiplayerGame_gameState_t_typeInfo },
	{ "idMultiplayerGame::msg_evt_t", idMultiplayerGame_msg_evt_t_typeInfo },
	{ "enum_12", enum_12_typeInfo },
	{ "gameState_t", gameState_t_typeInfo },
	{ "idEventQueue::outOfOrderBehaviour_t", idEventQueue_outOfOrderBehaviour_t_typeInfo },
	{ "slowmoState_t", slowmoState_t_typeInfo },
	{ "gameSoundChannel_t", gameSoundChannel_t_typeInfo },
	{ "forceFieldType", forceFieldType_typeInfo },
	{ "forceFieldApplyType", forceFieldApplyType_typeInfo },
	{ "monsterMoveResult_t", monsterMoveResult_t_typeInfo },
	{ "pmtype_t", pmtype_t_typeInfo },
	{ "waterLevel_t", waterLevel_t_typeInfo },
	{ "constraintType_t", constraintType_t_typeInfo },
	{ "enum_23", enum_23_typeInfo },
	{ "signalNum_t", signalNum_t_typeInfo },
	{ "idEntity::enum_25", idEntity_enum_25_typeInfo },
	{ "idEntity::interpolationBehavior_t", idEntity_interpolationBehavior_t_typeInfo },
	{ "idAnimatedEntity::enum_27", idAnimatedEntity_enum_27_typeInfo },
	{ "idPlayerStart::enum_28", idPlayerStart_enum_28_typeInfo },
	{ "idProjectile::enum_29", idProjectile_enum_29_typeInfo },
	{ "idProjectile::projectileState_t", idProjectile_projectileState_t_typeInfo },
	{ "weaponStatus_t", weaponStatus_t_typeInfo },
	{ "idWeapon::enum_32", idWeapon_enum_32_typeInfo },
	{ "idLight::enum_33", idLight_enum_33_typeInfo },
	{ "itemGiveFlags_t", itemGiveFlags_t_typeInfo },
	{ "idItem::enum_35", idItem_enum_35_typeInfo },
	{ "FxFader::enum_36", FxFader_enum_36_typeInfo },
	{ "playerIconType_t", playerIconType_t_typeInfo },
	{ "achievement_t", achievement_t_typeInfo },
	{ "gameExpansionType_t", gameExpansionType_t_typeInfo },
	{ "enum_40", enum_40_typeInfo },
	{ "enum_41", enum_41_typeInfo },
	{ "enum_42", enum_42_typeInfo },
	{ "idPlayer::enum_43", idPlayer_enum_43_typeInfo },
	{ "idMover::moveStage_t", idMover_moveStage_t_typeInfo },
	{ "idMover::moverCommand_t", idMover_moverCommand_t_typeInfo },
	{ "idMover::moverDir_t", idMover_moverDir_t_typeInfo },
	{ "idElevator::elevatorState_t", idElevator_elevatorState_t_typeInfo },
	{ "moverState_t", moverState_t_typeInfo },
	{ "idExplodingBarrel::enum_49", idExplodingBarrel_enum_49_typeInfo },
	{ "idExplodingBarrel::explode_state_t", idExplodingBarrel_explode_state_t_typeInfo },
	{ "idSecurityCamera::enum_51", idSecurityCamera_enum_51_typeInfo },
	{ "idBrittleFracture::enum_52", idBrittleFracture_enum_52_typeInfo },
	{ "moveType_t", moveType_t_typeInfo },
	{ "moveCommand_t", moveCommand_t_typeInfo },
	{ "talkState_t", talkState_t_typeInfo },
	{ "moveStatus_t", moveStatus_t_typeInfo },
	{ "stopEvent_t", stopEvent_t_typeInfo },
	{ "menuOption_t", menuOption_t_typeInfo },
	{ "widgetEvent_t", widgetEvent_t_typeInfo },
	{ "scrollType_t", scrollType_t_typeInfo },
	{ "widgetAction_t", widgetAction_t_typeInfo },
	{ "actionHandler_t", actionHandler_t_typeInfo },
	{ "idMenuWidget::widgetState_t", idMenuWidget_widgetState_t_typeInfo },
	{ "idMenuWidget_Button::animState_t", idMenuWidget_Button_animState_t_typeInfo },
	{ "idMenuWidget_NavButton::navWidgetState_t", idMenuWidget_NavButton_navWidgetState_t_typeInfo },
	{ "idMenuWidget_CommandBar::button_t", idMenuWidget_CommandBar_button_t_typeInfo },
	{ "idMenuWidget_CommandBar::alignment_t", idMenuWidget_CommandBar_alignment_t_typeInfo },
	{ "mainMenuTransition_t", mainMenuTransition_t_typeInfo },
	{ "cursorState_t", cursorState_t_typeInfo },
	{ "leaderboardFilterMode_t", leaderboardFilterMode_t_typeInfo },
	{ "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings::gameSettingFields_t", idMenuScreen_Shell_GameOptions_idMenuDataSource_GameSettings_gameSettingFields_t_typeInfo },
	{ "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings::matchSettingFields_t", idMenuScreen_Shell_MatchSettings_idMenuDataSource_MatchSettings_matchSettingFields_t_typeInfo },
	{ "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings::controlSettingFields_t", idMenuScreen_Shell_Controls_idMenuDataSource_ControlSettings_controlSettingFields_t_typeInfo },
	{ "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings::controlSettingFields_t", idMenuScreen_Shell_Gamepad_idMenuDataSource_GamepadSettings_controlSettingFields_t_typeInfo },
	{ "idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings::controlSettingFields_t", idMenuScreen_Shell_ControllerLayout_idMenuDataSource_LayoutSettings_controlSettingFields_t_typeInfo },
	{ "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings::systemSettingFields_t", idMenuScreen_Shell_SystemOptions_idMenuDataSource_SystemSettings_systemSettingFields_t_typeInfo },
	{ "shellAreas_t", shellAreas_t_typeInfo },
	{ "shellState_t", shellState_t_typeInfo },
	{ "pdaAreas_t", pdaAreas_t_typeInfo },
	{ "hudArea_t", hudArea_t_typeInfo },
	{ "scoreboardArea_t", scoreboardArea_t_typeInfo },
	{ "pdaHandlerWidgets_t", pdaHandlerWidgets_t_typeInfo },
	{ "scoreboardHandlerWidgets_t", scoreboardHandlerWidgets_t_typeInfo },
	{ "menuSounds_t", menuSounds_t_typeInfo },
	{ "enum_85", enum_85_typeInfo },
	{ NULL, NULL }
};

static classVariableInfo_t idEventDef_typeInfo[] = {
	{ ": const char *", "name", (int)(&((idEventDef *)0)->name), sizeof( ((idEventDef *)0)->name ) },
	{ "const char *", "formatspec", (int)(&((idEventDef *)0)->formatspec), sizeof( ((idEventDef *)0)->formatspec ) },
	{ "unsigned int", "formatspecIndex", (int)(&((idEventDef *)0)->formatspecIndex), sizeof( ((idEventDef *)0)->formatspecIndex ) },
	{ "int", "returnType", (int)(&((idEventDef *)0)->returnType), sizeof( ((idEventDef *)0)->returnType ) },
	{ "int", "numargs", (int)(&((idEventDef *)0)->numargs), sizeof( ((idEventDef *)0)->numargs ) },
	{ "size_t", "argsize", (int)(&((idEventDef *)0)->argsize), sizeof( ((idEventDef *)0)->argsize ) },
	{ "int[8]", "argOffset", (int)(&((idEventDef *)0)->argOffset), sizeof( ((idEventDef *)0)->argOffset ) },
	{ "int", "eventnum", (int)(&((idEventDef *)0)->eventnum), sizeof( ((idEventDef *)0)->eventnum ) },
	{ "const idEventDef *", "next", (int)(&((idEventDef *)0)->next), sizeof( ((idEventDef *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEvent_typeInfo[] = {
	{ ": const idEventDef *", "eventdef", (int)(&((idEvent *)0)->eventdef), sizeof( ((idEvent *)0)->eventdef ) },
	{ "byte *", "data", (int)(&((idEvent *)0)->data), sizeof( ((idEvent *)0)->data ) },
	{ "int", "time", (int)(&((idEvent *)0)->time), sizeof( ((idEvent *)0)->time ) },
	{ "idClass *", "object", (int)(&((idEvent *)0)->object), sizeof( ((idEvent *)0)->object ) },
	{ "const idTypeInfo *", "typeinfo", (int)(&((idEvent *)0)->typeinfo), sizeof( ((idEvent *)0)->typeinfo ) },
	{ "idLinkList < idEvent >", "eventNode", (int)(&((idEvent *)0)->eventNode), sizeof( ((idEvent *)0)->eventNode ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventArg_typeInfo[] = {
	{ ": int", "type", (int)(&((idEventArg *)0)->type), sizeof( ((idEventArg *)0)->type ) },
	{ "int", "value", (int)(&((idEventArg *)0)->value), sizeof( ((idEventArg *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAllocError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTypeInfo_typeInfo[] = {
	{ ": const char *", "classname", (int)(&((idTypeInfo *)0)->classname), sizeof( ((idTypeInfo *)0)->classname ) },
	{ "const char *", "superclass", (int)(&((idTypeInfo *)0)->superclass), sizeof( ((idTypeInfo *)0)->superclass ) },
	{ "idEventFunc < idClass > *", "eventCallbacks", (int)(&((idTypeInfo *)0)->eventCallbacks), sizeof( ((idTypeInfo *)0)->eventCallbacks ) },
	{ "eventCallback_t *", "eventMap", (int)(&((idTypeInfo *)0)->eventMap), sizeof( ((idTypeInfo *)0)->eventMap ) },
	{ "idTypeInfo *", "super", (int)(&((idTypeInfo *)0)->super), sizeof( ((idTypeInfo *)0)->super ) },
	{ "idTypeInfo *", "next", (int)(&((idTypeInfo *)0)->next), sizeof( ((idTypeInfo *)0)->next ) },
	{ "bool", "freeEventMap", (int)(&((idTypeInfo *)0)->freeEventMap), sizeof( ((idTypeInfo *)0)->freeEventMap ) },
	{ "int", "typeNum", (int)(&((idTypeInfo *)0)->typeNum), sizeof( ((idTypeInfo *)0)->typeNum ) },
	{ "int", "lastChild", (int)(&((idTypeInfo *)0)->lastChild), sizeof( ((idTypeInfo *)0)->lastChild ) },
	{ "idHierarchy < idTypeInfo >", "node", (int)(&((idTypeInfo *)0)->node), sizeof( ((idTypeInfo *)0)->node ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSaveGame_stringTableIndex_s_typeInfo[] = {
	{ "idStr", "string", (int)(&((idSaveGame::stringTableIndex_s *)0)->string), sizeof( ((idSaveGame::stringTableIndex_s *)0)->string ) },
	{ "int", "offset", (int)(&((idSaveGame::stringTableIndex_s *)0)->offset), sizeof( ((idSaveGame::stringTableIndex_s *)0)->offset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSaveGame_typeInfo[] = {
	{ ": idFile *", "file", (int)(&((idSaveGame *)0)->file), sizeof( ((idSaveGame *)0)->file ) },
	{ "idFile *", "stringFile", (int)(&((idSaveGame *)0)->stringFile), sizeof( ((idSaveGame *)0)->stringFile ) },
	{ "idCompressor *", "compressor", (int)(&((idSaveGame *)0)->compressor), sizeof( ((idSaveGame *)0)->compressor ) },
	{ "idList < const idClass * >", "objects", (int)(&((idSaveGame *)0)->objects), sizeof( ((idSaveGame *)0)->objects ) },
	{ "int", "version", (int)(&((idSaveGame *)0)->version), sizeof( ((idSaveGame *)0)->version ) },
	{ "idHashIndex", "stringHash", (int)(&((idSaveGame *)0)->stringHash), sizeof( ((idSaveGame *)0)->stringHash ) },
	{ "idList < stringTableIndex_s >", "stringTable", (int)(&((idSaveGame *)0)->stringTable), sizeof( ((idSaveGame *)0)->stringTable ) },
	{ "int", "curStringTableOffset", (int)(&((idSaveGame *)0)->curStringTableOffset), sizeof( ((idSaveGame *)0)->curStringTableOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRestoreGame_typeInfo[] = {
	{ ": idFile *", "file", (int)(&((idRestoreGame *)0)->file), sizeof( ((idRestoreGame *)0)->file ) },
	{ "idFile *", "stringFile", (int)(&((idRestoreGame *)0)->stringFile), sizeof( ((idRestoreGame *)0)->stringFile ) },
	{ "idList < idClass * , TAG_SAVEGAMES >", "objects", (int)(&((idRestoreGame *)0)->objects), sizeof( ((idRestoreGame *)0)->objects ) },
	{ "int", "version", (int)(&((idRestoreGame *)0)->version), sizeof( ((idRestoreGame *)0)->version ) },
	{ "int", "stringTableOffset", (int)(&((idRestoreGame *)0)->stringTableOffset), sizeof( ((idRestoreGame *)0)->stringTableOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t function_t_typeInfo[] = {
	{ ": idStr", "name", (int)(&((function_t *)0)->name), sizeof( ((function_t *)0)->name ) },
	{ ": const idEventDef *", "eventdef", (int)(&((function_t *)0)->eventdef), sizeof( ((function_t *)0)->eventdef ) },
	{ "idVarDef *", "def", (int)(&((function_t *)0)->def), sizeof( ((function_t *)0)->def ) },
	{ "const idTypeDef *", "type", (int)(&((function_t *)0)->type), sizeof( ((function_t *)0)->type ) },
	{ "int", "firstStatement", (int)(&((function_t *)0)->firstStatement), sizeof( ((function_t *)0)->firstStatement ) },
	{ "int", "numStatements", (int)(&((function_t *)0)->numStatements), sizeof( ((function_t *)0)->numStatements ) },
	{ "int", "parmTotal", (int)(&((function_t *)0)->parmTotal), sizeof( ((function_t *)0)->parmTotal ) },
	{ "int", "locals", (int)(&((function_t *)0)->locals), sizeof( ((function_t *)0)->locals ) },
	{ "int", "filenum", (int)(&((function_t *)0)->filenum), sizeof( ((function_t *)0)->filenum ) },
	{ "idList < int , TAG_SCRIPT >", "parmSize", (int)(&((function_t *)0)->parmSize), sizeof( ((function_t *)0)->parmSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t eval_t_typeInfo[] = {
	{ "const char *", "stringPtr", (int)(&((eval_t *)0)->stringPtr), sizeof( ((eval_t *)0)->stringPtr ) },
	{ "float", "_float", (int)(&((eval_t *)0)->_float), sizeof( ((eval_t *)0)->_float ) },
	{ "float[3]", "vector", (int)(&((eval_t *)0)->vector), sizeof( ((eval_t *)0)->vector ) },
	{ "function_t *", "function", (int)(&((eval_t *)0)->function), sizeof( ((eval_t *)0)->function ) },
	{ "int", "_int", (int)(&((eval_t *)0)->_int), sizeof( ((eval_t *)0)->_int ) },
	{ "int", "entity", (int)(&((eval_t *)0)->entity), sizeof( ((eval_t *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTypeDef_typeInfo[] = {
	{ ": etype_t", "type", (int)(&((idTypeDef *)0)->type), sizeof( ((idTypeDef *)0)->type ) },
	{ "idStr", "name", (int)(&((idTypeDef *)0)->name), sizeof( ((idTypeDef *)0)->name ) },
	{ "int", "size", (int)(&((idTypeDef *)0)->size), sizeof( ((idTypeDef *)0)->size ) },
	{ "idTypeDef *", "auxType", (int)(&((idTypeDef *)0)->auxType), sizeof( ((idTypeDef *)0)->auxType ) },
	{ "idList < idTypeDef * , TAG_SCRIPT >", "parmTypes", (int)(&((idTypeDef *)0)->parmTypes), sizeof( ((idTypeDef *)0)->parmTypes ) },
	{ "idStrList", "parmNames", (int)(&((idTypeDef *)0)->parmNames), sizeof( ((idTypeDef *)0)->parmNames ) },
	{ "idList < const function_t * , TAG_SCRIPT >", "functions", (int)(&((idTypeDef *)0)->functions), sizeof( ((idTypeDef *)0)->functions ) },
	{ ": idVarDef *", "def", (int)(&((idTypeDef *)0)->def), sizeof( ((idTypeDef *)0)->def ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScriptObject_typeInfo[] = {
	{ ": idTypeDef *", "type", (int)(&((idScriptObject *)0)->type), sizeof( ((idScriptObject *)0)->type ) },
	{ ": byte *", "data", (int)(&((idScriptObject *)0)->data), sizeof( ((idScriptObject *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompileError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t varEval_t_typeInfo[] = {
	{ "idScriptObject * *", "objectPtrPtr", (int)(&((varEval_t *)0)->objectPtrPtr), sizeof( ((varEval_t *)0)->objectPtrPtr ) },
	{ "char *", "stringPtr", (int)(&((varEval_t *)0)->stringPtr), sizeof( ((varEval_t *)0)->stringPtr ) },
	{ "float *", "floatPtr", (int)(&((varEval_t *)0)->floatPtr), sizeof( ((varEval_t *)0)->floatPtr ) },
	{ "idVec3 *", "vectorPtr", (int)(&((varEval_t *)0)->vectorPtr), sizeof( ((varEval_t *)0)->vectorPtr ) },
	{ "function_t *", "functionPtr", (int)(&((varEval_t *)0)->functionPtr), sizeof( ((varEval_t *)0)->functionPtr ) },
	{ "int *", "intPtr", (int)(&((varEval_t *)0)->intPtr), sizeof( ((varEval_t *)0)->intPtr ) },
	{ "byte *", "bytePtr", (int)(&((varEval_t *)0)->bytePtr), sizeof( ((varEval_t *)0)->bytePtr ) },
	{ "int *", "entityNumberPtr", (int)(&((varEval_t *)0)->entityNumberPtr), sizeof( ((varEval_t *)0)->entityNumberPtr ) },
	{ "int", "virtualFunction", (int)(&((varEval_t *)0)->virtualFunction), sizeof( ((varEval_t *)0)->virtualFunction ) },
	{ "int", "jumpOffset", (int)(&((varEval_t *)0)->jumpOffset), sizeof( ((varEval_t *)0)->jumpOffset ) },
	{ "int", "stackOffset", (int)(&((varEval_t *)0)->stackOffset), sizeof( ((varEval_t *)0)->stackOffset ) },
	{ "int", "argSize", (int)(&((varEval_t *)0)->argSize), sizeof( ((varEval_t *)0)->argSize ) },
	{ "varEval_s *", "evalPtr", (int)(&((varEval_t *)0)->evalPtr), sizeof( ((varEval_t *)0)->evalPtr ) },
	{ "int", "ptrOffset", (int)(&((varEval_t *)0)->ptrOffset), sizeof( ((varEval_t *)0)->ptrOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDef_typeInfo[] = {
	{ ": int", "num", (int)(&((idVarDef *)0)->num), sizeof( ((idVarDef *)0)->num ) },
	{ "varEval_t", "value", (int)(&((idVarDef *)0)->value), sizeof( ((idVarDef *)0)->value ) },
	{ "idVarDef *", "scope", (int)(&((idVarDef *)0)->scope), sizeof( ((idVarDef *)0)->scope ) },
	{ "int", "numUsers", (int)(&((idVarDef *)0)->numUsers), sizeof( ((idVarDef *)0)->numUsers ) },
	{ "initialized_t", "initialized", (int)(&((idVarDef *)0)->initialized), sizeof( ((idVarDef *)0)->initialized ) },
	{ ": idTypeDef *", "typeDef", (int)(&((idVarDef *)0)->typeDef), sizeof( ((idVarDef *)0)->typeDef ) },
	{ "idVarDefName *", "name", (int)(&((idVarDef *)0)->name), sizeof( ((idVarDef *)0)->name ) },
	{ "idVarDef *", "next", (int)(&((idVarDef *)0)->next), sizeof( ((idVarDef *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDefName_typeInfo[] = {
	{ ": idStr", "name", (int)(&((idVarDefName *)0)->name), sizeof( ((idVarDefName *)0)->name ) },
	{ "idVarDef *", "defs", (int)(&((idVarDefName *)0)->defs), sizeof( ((idVarDefName *)0)->defs ) },
	{ NULL, 0 }
};

static classVariableInfo_t statement_t_typeInfo[] = {
	{ "unsigned short", "op", (int)(&((statement_t *)0)->op), sizeof( ((statement_t *)0)->op ) },
	{ "idVarDef *", "a", (int)(&((statement_t *)0)->a), sizeof( ((statement_t *)0)->a ) },
	{ "idVarDef *", "b", (int)(&((statement_t *)0)->b), sizeof( ((statement_t *)0)->b ) },
	{ "idVarDef *", "c", (int)(&((statement_t *)0)->c), sizeof( ((statement_t *)0)->c ) },
	{ "unsigned short", "linenumber", (int)(&((statement_t *)0)->linenumber), sizeof( ((statement_t *)0)->linenumber ) },
	{ "unsigned short", "file", (int)(&((statement_t *)0)->file), sizeof( ((statement_t *)0)->file ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProgram_typeInfo[] = {
	{ ": idStrList", "fileList", (int)(&((idProgram *)0)->fileList), sizeof( ((idProgram *)0)->fileList ) },
	{ "idStr", "filename", (int)(&((idProgram *)0)->filename), sizeof( ((idProgram *)0)->filename ) },
	{ "int", "filenum", (int)(&((idProgram *)0)->filenum), sizeof( ((idProgram *)0)->filenum ) },
	{ "int", "numVariables", (int)(&((idProgram *)0)->numVariables), sizeof( ((idProgram *)0)->numVariables ) },
	{ "byte[296608]", "variables", (int)(&((idProgram *)0)->variables), sizeof( ((idProgram *)0)->variables ) },
	{ "idStaticList < byte , 296608 >", "variableDefaults", (int)(&((idProgram *)0)->variableDefaults), sizeof( ((idProgram *)0)->variableDefaults ) },
	{ "idStaticList < function_t , 3584 >", "functions", (int)(&((idProgram *)0)->functions), sizeof( ((idProgram *)0)->functions ) },
	{ "idStaticList < statement_t , 131072 >", "statements", (int)(&((idProgram *)0)->statements), sizeof( ((idProgram *)0)->statements ) },
	{ "idList < idTypeDef * , TAG_SCRIPT >", "types", (int)(&((idProgram *)0)->types), sizeof( ((idProgram *)0)->types ) },
	{ "idHashIndex", "typesHash", (int)(&((idProgram *)0)->typesHash), sizeof( ((idProgram *)0)->typesHash ) },
	{ "idList < idVarDefName * , TAG_SCRIPT >", "varDefNames", (int)(&((idProgram *)0)->varDefNames), sizeof( ((idProgram *)0)->varDefNames ) },
	{ "idHashIndex", "varDefNameHash", (int)(&((idProgram *)0)->varDefNameHash), sizeof( ((idProgram *)0)->varDefNameHash ) },
	{ "idList < idVarDef * , TAG_SCRIPT >", "varDefs", (int)(&((idProgram *)0)->varDefs), sizeof( ((idProgram *)0)->varDefs ) },
	{ "idVarDef *", "sysDef", (int)(&((idProgram *)0)->sysDef), sizeof( ((idProgram *)0)->sysDef ) },
	{ "int", "top_functions", (int)(&((idProgram *)0)->top_functions), sizeof( ((idProgram *)0)->top_functions ) },
	{ "int", "top_statements", (int)(&((idProgram *)0)->top_statements), sizeof( ((idProgram *)0)->top_statements ) },
	{ "int", "top_types", (int)(&((idProgram *)0)->top_types), sizeof( ((idProgram *)0)->top_types ) },
	{ "int", "top_defs", (int)(&((idProgram *)0)->top_defs), sizeof( ((idProgram *)0)->top_defs ) },
	{ "int", "top_files", (int)(&((idProgram *)0)->top_files), sizeof( ((idProgram *)0)->top_files ) },
	{ ": idVarDef *", "returnDef", (int)(&((idProgram *)0)->returnDef), sizeof( ((idProgram *)0)->returnDef ) },
	{ "idVarDef *", "returnStringDef", (int)(&((idProgram *)0)->returnStringDef), sizeof( ((idProgram *)0)->returnStringDef ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameBlend_t_typeInfo[] = {
	{ "int", "cycleCount", (int)(&((frameBlend_t *)0)->cycleCount), sizeof( ((frameBlend_t *)0)->cycleCount ) },
	{ "int", "frame1", (int)(&((frameBlend_t *)0)->frame1), sizeof( ((frameBlend_t *)0)->frame1 ) },
	{ "int", "frame2", (int)(&((frameBlend_t *)0)->frame2), sizeof( ((frameBlend_t *)0)->frame2 ) },
	{ "float", "frontlerp", (int)(&((frameBlend_t *)0)->frontlerp), sizeof( ((frameBlend_t *)0)->frontlerp ) },
	{ "float", "backlerp", (int)(&((frameBlend_t *)0)->backlerp), sizeof( ((frameBlend_t *)0)->backlerp ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointAnimInfo_t_typeInfo[] = {
	{ "int", "nameIndex", (int)(&((jointAnimInfo_t *)0)->nameIndex), sizeof( ((jointAnimInfo_t *)0)->nameIndex ) },
	{ "int", "parentNum", (int)(&((jointAnimInfo_t *)0)->parentNum), sizeof( ((jointAnimInfo_t *)0)->parentNum ) },
	{ "int", "animBits", (int)(&((jointAnimInfo_t *)0)->animBits), sizeof( ((jointAnimInfo_t *)0)->animBits ) },
	{ "int", "firstComponent", (int)(&((jointAnimInfo_t *)0)->firstComponent), sizeof( ((jointAnimInfo_t *)0)->firstComponent ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointInfo_t_typeInfo[] = {
	{ "jointHandle_t", "num", (int)(&((jointInfo_t *)0)->num), sizeof( ((jointInfo_t *)0)->num ) },
	{ "jointHandle_t", "parentNum", (int)(&((jointInfo_t *)0)->parentNum), sizeof( ((jointInfo_t *)0)->parentNum ) },
	{ "int", "channel", (int)(&((jointInfo_t *)0)->channel), sizeof( ((jointInfo_t *)0)->channel ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointMod_t_typeInfo[] = {
	{ "jointHandle_t", "jointnum", (int)(&((jointMod_t *)0)->jointnum), sizeof( ((jointMod_t *)0)->jointnum ) },
	{ "idMat3", "mat", (int)(&((jointMod_t *)0)->mat), sizeof( ((jointMod_t *)0)->mat ) },
	{ "idVec3", "pos", (int)(&((jointMod_t *)0)->pos), sizeof( ((jointMod_t *)0)->pos ) },
	{ "jointModTransform_t", "transform_pos", (int)(&((jointMod_t *)0)->transform_pos), sizeof( ((jointMod_t *)0)->transform_pos ) },
	{ "jointModTransform_t", "transform_axis", (int)(&((jointMod_t *)0)->transform_axis), sizeof( ((jointMod_t *)0)->transform_axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameLookup_t_typeInfo[] = {
	{ "int", "num", (int)(&((frameLookup_t *)0)->num), sizeof( ((frameLookup_t *)0)->num ) },
	{ "int", "firstCommand", (int)(&((frameLookup_t *)0)->firstCommand), sizeof( ((frameLookup_t *)0)->firstCommand ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameCommand_t_typeInfo[] = {
	{ "frameCommandType_t", "type", (int)(&((frameCommand_t *)0)->type), sizeof( ((frameCommand_t *)0)->type ) },
	{ "idStr *", "string", (int)(&((frameCommand_t *)0)->string), sizeof( ((frameCommand_t *)0)->string ) },
	{ NULL, 0 }
};

static classVariableInfo_t animFlags_t_typeInfo[] = {
//	{ "bool", "prevent_idle_override", (int)(&((animFlags_t *)0)->prevent_idle_override), sizeof( ((animFlags_t *)0)->prevent_idle_override ) },
//	{ "bool", "random_cycle_start", (int)(&((animFlags_t *)0)->random_cycle_start), sizeof( ((animFlags_t *)0)->random_cycle_start ) },
//	{ "bool", "ai_no_turn", (int)(&((animFlags_t *)0)->ai_no_turn), sizeof( ((animFlags_t *)0)->ai_no_turn ) },
//	{ "bool", "anim_turn", (int)(&((animFlags_t *)0)->anim_turn), sizeof( ((animFlags_t *)0)->anim_turn ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMD5Anim_typeInfo[] = {
	{ ": int", "numFrames", (int)(&((idMD5Anim *)0)->numFrames), sizeof( ((idMD5Anim *)0)->numFrames ) },
	{ "int", "frameRate", (int)(&((idMD5Anim *)0)->frameRate), sizeof( ((idMD5Anim *)0)->frameRate ) },
	{ "int", "animLength", (int)(&((idMD5Anim *)0)->animLength), sizeof( ((idMD5Anim *)0)->animLength ) },
	{ "int", "numJoints", (int)(&((idMD5Anim *)0)->numJoints), sizeof( ((idMD5Anim *)0)->numJoints ) },
	{ "int", "numAnimatedComponents", (int)(&((idMD5Anim *)0)->numAnimatedComponents), sizeof( ((idMD5Anim *)0)->numAnimatedComponents ) },
	{ "idList < idBounds , TAG_MD5_ANIM >", "bounds", (int)(&((idMD5Anim *)0)->bounds), sizeof( ((idMD5Anim *)0)->bounds ) },
	{ "idList < jointAnimInfo_t , TAG_MD5_ANIM >", "jointInfo", (int)(&((idMD5Anim *)0)->jointInfo), sizeof( ((idMD5Anim *)0)->jointInfo ) },
	{ "idList < idJointQuat , TAG_MD5_ANIM >", "baseFrame", (int)(&((idMD5Anim *)0)->baseFrame), sizeof( ((idMD5Anim *)0)->baseFrame ) },
	{ "idList < float , TAG_MD5_ANIM >", "componentFrames", (int)(&((idMD5Anim *)0)->componentFrames), sizeof( ((idMD5Anim *)0)->componentFrames ) },
	{ "idStr", "name", (int)(&((idMD5Anim *)0)->name), sizeof( ((idMD5Anim *)0)->name ) },
	{ "idVec3", "totaldelta", (int)(&((idMD5Anim *)0)->totaldelta), sizeof( ((idMD5Anim *)0)->totaldelta ) },
	{ "mutable int", "ref_count", (int)(&((idMD5Anim *)0)->ref_count), sizeof( ((idMD5Anim *)0)->ref_count ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnim_typeInfo[] = {
	{ ": const idDeclModelDef *", "modelDef", (int)(&((idAnim *)0)->modelDef), sizeof( ((idAnim *)0)->modelDef ) },
	{ "const idMD5Anim *[3]", "anims", (int)(&((idAnim *)0)->anims), sizeof( ((idAnim *)0)->anims ) },
	{ "int", "numAnims", (int)(&((idAnim *)0)->numAnims), sizeof( ((idAnim *)0)->numAnims ) },
	{ "idStr", "name", (int)(&((idAnim *)0)->name), sizeof( ((idAnim *)0)->name ) },
	{ "idStr", "realname", (int)(&((idAnim *)0)->realname), sizeof( ((idAnim *)0)->realname ) },
	{ "idList < frameLookup_t , TAG_ANIM >", "frameLookup", (int)(&((idAnim *)0)->frameLookup), sizeof( ((idAnim *)0)->frameLookup ) },
	{ "idList < frameCommand_t , TAG_ANIM >", "frameCommands", (int)(&((idAnim *)0)->frameCommands), sizeof( ((idAnim *)0)->frameCommands ) },
	{ "animFlags_t", "flags", (int)(&((idAnim *)0)->flags), sizeof( ((idAnim *)0)->flags ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclModelDef_typeInfo[] = {
	{ ": idVec3", "offset", (int)(&((idDeclModelDef *)0)->offset), sizeof( ((idDeclModelDef *)0)->offset ) },
	{ "idList < jointInfo_t , TAG_ANIM >", "joints", (int)(&((idDeclModelDef *)0)->joints), sizeof( ((idDeclModelDef *)0)->joints ) },
	{ "idList < int , TAG_ANIM >", "jointParents", (int)(&((idDeclModelDef *)0)->jointParents), sizeof( ((idDeclModelDef *)0)->jointParents ) },
	{ "idList < int , TAG_ANIM >[5]", "channelJoints", (int)(&((idDeclModelDef *)0)->channelJoints), sizeof( ((idDeclModelDef *)0)->channelJoints ) },
	{ "idRenderModel *", "modelHandle", (int)(&((idDeclModelDef *)0)->modelHandle), sizeof( ((idDeclModelDef *)0)->modelHandle ) },
	{ "idList < idAnim * , TAG_ANIM >", "anims", (int)(&((idDeclModelDef *)0)->anims), sizeof( ((idDeclModelDef *)0)->anims ) },
	{ "const idDeclSkin *", "skin", (int)(&((idDeclModelDef *)0)->skin), sizeof( ((idDeclModelDef *)0)->skin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimBlend_typeInfo[] = {
	{ ": const idDeclModelDef *", "modelDef", (int)(&((idAnimBlend *)0)->modelDef), sizeof( ((idAnimBlend *)0)->modelDef ) },
	{ "int", "starttime", (int)(&((idAnimBlend *)0)->starttime), sizeof( ((idAnimBlend *)0)->starttime ) },
	{ "int", "endtime", (int)(&((idAnimBlend *)0)->endtime), sizeof( ((idAnimBlend *)0)->endtime ) },
	{ "int", "timeOffset", (int)(&((idAnimBlend *)0)->timeOffset), sizeof( ((idAnimBlend *)0)->timeOffset ) },
	{ "float", "rate", (int)(&((idAnimBlend *)0)->rate), sizeof( ((idAnimBlend *)0)->rate ) },
	{ "int", "blendStartTime", (int)(&((idAnimBlend *)0)->blendStartTime), sizeof( ((idAnimBlend *)0)->blendStartTime ) },
	{ "int", "blendDuration", (int)(&((idAnimBlend *)0)->blendDuration), sizeof( ((idAnimBlend *)0)->blendDuration ) },
	{ "float", "blendStartValue", (int)(&((idAnimBlend *)0)->blendStartValue), sizeof( ((idAnimBlend *)0)->blendStartValue ) },
	{ "float", "blendEndValue", (int)(&((idAnimBlend *)0)->blendEndValue), sizeof( ((idAnimBlend *)0)->blendEndValue ) },
	{ "float[3]", "animWeights", (int)(&((idAnimBlend *)0)->animWeights), sizeof( ((idAnimBlend *)0)->animWeights ) },
	{ "short", "cycle", (int)(&((idAnimBlend *)0)->cycle), sizeof( ((idAnimBlend *)0)->cycle ) },
	{ "short", "frame", (int)(&((idAnimBlend *)0)->frame), sizeof( ((idAnimBlend *)0)->frame ) },
	{ "short", "animNum", (int)(&((idAnimBlend *)0)->animNum), sizeof( ((idAnimBlend *)0)->animNum ) },
	{ "bool", "allowMove", (int)(&((idAnimBlend *)0)->allowMove), sizeof( ((idAnimBlend *)0)->allowMove ) },
	{ "bool", "allowFrameCommands", (int)(&((idAnimBlend *)0)->allowFrameCommands), sizeof( ((idAnimBlend *)0)->allowFrameCommands ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFPoseJointMod_typeInfo[] = {
	{ "AFJointModType_t", "mod", (int)(&((idAFPoseJointMod *)0)->mod), sizeof( ((idAFPoseJointMod *)0)->mod ) },
	{ "idMat3", "axis", (int)(&((idAFPoseJointMod *)0)->axis), sizeof( ((idAFPoseJointMod *)0)->axis ) },
	{ "idVec3", "origin", (int)(&((idAFPoseJointMod *)0)->origin), sizeof( ((idAFPoseJointMod *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimator_typeInfo[] = {
	{ ": const idDeclModelDef *", "modelDef", (int)(&((idAnimator *)0)->modelDef), sizeof( ((idAnimator *)0)->modelDef ) },
	{ "idEntity *", "entity", (int)(&((idAnimator *)0)->entity), sizeof( ((idAnimator *)0)->entity ) },
	{ "idAnimBlend[15]", "channels", (int)(&((idAnimator *)0)->channels), sizeof( ((idAnimator *)0)->channels ) },
	{ "idList < jointMod_t * , TAG_ANIM >", "jointMods", (int)(&((idAnimator *)0)->jointMods), sizeof( ((idAnimator *)0)->jointMods ) },
	{ "int", "numJoints", (int)(&((idAnimator *)0)->numJoints), sizeof( ((idAnimator *)0)->numJoints ) },
	{ "idJointMat *", "joints", (int)(&((idAnimator *)0)->joints), sizeof( ((idAnimator *)0)->joints ) },
	{ "mutable int", "lastTransformTime", (int)(&((idAnimator *)0)->lastTransformTime), sizeof( ((idAnimator *)0)->lastTransformTime ) },
	{ "mutable bool", "stoppedAnimatingUpdate", (int)(&((idAnimator *)0)->stoppedAnimatingUpdate), sizeof( ((idAnimator *)0)->stoppedAnimatingUpdate ) },
	{ "bool", "removeOriginOffset", (int)(&((idAnimator *)0)->removeOriginOffset), sizeof( ((idAnimator *)0)->removeOriginOffset ) },
	{ "bool", "forceUpdate", (int)(&((idAnimator *)0)->forceUpdate), sizeof( ((idAnimator *)0)->forceUpdate ) },
	{ "idBounds", "frameBounds", (int)(&((idAnimator *)0)->frameBounds), sizeof( ((idAnimator *)0)->frameBounds ) },
	{ "float", "AFPoseBlendWeight", (int)(&((idAnimator *)0)->AFPoseBlendWeight), sizeof( ((idAnimator *)0)->AFPoseBlendWeight ) },
	{ "idList < int , TAG_ANIM >", "AFPoseJoints", (int)(&((idAnimator *)0)->AFPoseJoints), sizeof( ((idAnimator *)0)->AFPoseJoints ) },
	{ "idList < idAFPoseJointMod , TAG_ANIM >", "AFPoseJointMods", (int)(&((idAnimator *)0)->AFPoseJointMods), sizeof( ((idAnimator *)0)->AFPoseJointMods ) },
	{ "idList < idJointQuat , TAG_ANIM >", "AFPoseJointFrame", (int)(&((idAnimator *)0)->AFPoseJointFrame), sizeof( ((idAnimator *)0)->AFPoseJointFrame ) },
	{ "idBounds", "AFPoseBounds", (int)(&((idAnimator *)0)->AFPoseBounds), sizeof( ((idAnimator *)0)->AFPoseBounds ) },
	{ "int", "AFPoseTime", (int)(&((idAnimator *)0)->AFPoseTime), sizeof( ((idAnimator *)0)->AFPoseTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimManager_typeInfo[] = {
	{ ": idHashTable < idMD5Anim * >", "animations", (int)(&((idAnimManager *)0)->animations), sizeof( ((idAnimManager *)0)->animations ) },
	{ "idStrList", "jointnames", (int)(&((idAnimManager *)0)->jointnames), sizeof( ((idAnimManager *)0)->jointnames ) },
	{ "idHashIndex", "jointnamesHash", (int)(&((idAnimManager *)0)->jointnamesHash), sizeof( ((idAnimManager *)0)->jointnamesHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_typeInfo[] = {
	{ ": int", "travelType", (int)(&((idReachability *)0)->travelType), sizeof( ((idReachability *)0)->travelType ) },
	{ "short", "toAreaNum", (int)(&((idReachability *)0)->toAreaNum), sizeof( ((idReachability *)0)->toAreaNum ) },
	{ "short", "fromAreaNum", (int)(&((idReachability *)0)->fromAreaNum), sizeof( ((idReachability *)0)->fromAreaNum ) },
	{ "idVec3", "start", (int)(&((idReachability *)0)->start), sizeof( ((idReachability *)0)->start ) },
	{ "idVec3", "end", (int)(&((idReachability *)0)->end), sizeof( ((idReachability *)0)->end ) },
	{ "int", "edgeNum", (int)(&((idReachability *)0)->edgeNum), sizeof( ((idReachability *)0)->edgeNum ) },
	{ "unsigned short", "travelTime", (int)(&((idReachability *)0)->travelTime), sizeof( ((idReachability *)0)->travelTime ) },
	{ "byte", "number", (int)(&((idReachability *)0)->number), sizeof( ((idReachability *)0)->number ) },
	{ "byte", "disableCount", (int)(&((idReachability *)0)->disableCount), sizeof( ((idReachability *)0)->disableCount ) },
	{ "idReachability *", "next", (int)(&((idReachability *)0)->next), sizeof( ((idReachability *)0)->next ) },
	{ "idReachability *", "rev_next", (int)(&((idReachability *)0)->rev_next), sizeof( ((idReachability *)0)->rev_next ) },
	{ "unsigned short *", "areaTravelTimes", (int)(&((idReachability *)0)->areaTravelTimes), sizeof( ((idReachability *)0)->areaTravelTimes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Walk_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_BarrierJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WaterJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WalkOffLedge_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Swim_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Fly_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Special_typeInfo[] = {
	{ ": idDict", "dict", (int)(&((idReachability_Special *)0)->dict), sizeof( ((idReachability_Special *)0)->dict ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasEdge_t_typeInfo[] = {
	{ "int[2]", "vertexNum", (int)(&((aasEdge_t *)0)->vertexNum), sizeof( ((aasEdge_t *)0)->vertexNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasFace_t_typeInfo[] = {
	{ "unsigned short", "planeNum", (int)(&((aasFace_t *)0)->planeNum), sizeof( ((aasFace_t *)0)->planeNum ) },
	{ "unsigned short", "flags", (int)(&((aasFace_t *)0)->flags), sizeof( ((aasFace_t *)0)->flags ) },
	{ "int", "numEdges", (int)(&((aasFace_t *)0)->numEdges), sizeof( ((aasFace_t *)0)->numEdges ) },
	{ "int", "firstEdge", (int)(&((aasFace_t *)0)->firstEdge), sizeof( ((aasFace_t *)0)->firstEdge ) },
	{ "short[2]", "areas", (int)(&((aasFace_t *)0)->areas), sizeof( ((aasFace_t *)0)->areas ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasArea_t_typeInfo[] = {
	{ "int", "numFaces", (int)(&((aasArea_t *)0)->numFaces), sizeof( ((aasArea_t *)0)->numFaces ) },
	{ "int", "firstFace", (int)(&((aasArea_t *)0)->firstFace), sizeof( ((aasArea_t *)0)->firstFace ) },
	{ "idBounds", "bounds", (int)(&((aasArea_t *)0)->bounds), sizeof( ((aasArea_t *)0)->bounds ) },
	{ "idVec3", "center", (int)(&((aasArea_t *)0)->center), sizeof( ((aasArea_t *)0)->center ) },
	{ "unsigned short", "flags", (int)(&((aasArea_t *)0)->flags), sizeof( ((aasArea_t *)0)->flags ) },
	{ "unsigned short", "contents", (int)(&((aasArea_t *)0)->contents), sizeof( ((aasArea_t *)0)->contents ) },
	{ "short", "cluster", (int)(&((aasArea_t *)0)->cluster), sizeof( ((aasArea_t *)0)->cluster ) },
	{ "short", "clusterAreaNum", (int)(&((aasArea_t *)0)->clusterAreaNum), sizeof( ((aasArea_t *)0)->clusterAreaNum ) },
	{ "int", "travelFlags", (int)(&((aasArea_t *)0)->travelFlags), sizeof( ((aasArea_t *)0)->travelFlags ) },
	{ "idReachability *", "reach", (int)(&((aasArea_t *)0)->reach), sizeof( ((aasArea_t *)0)->reach ) },
	{ "idReachability *", "rev_reach", (int)(&((aasArea_t *)0)->rev_reach), sizeof( ((aasArea_t *)0)->rev_reach ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasNode_t_typeInfo[] = {
	{ "unsigned short", "planeNum", (int)(&((aasNode_t *)0)->planeNum), sizeof( ((aasNode_t *)0)->planeNum ) },
	{ "int[2]", "children", (int)(&((aasNode_t *)0)->children), sizeof( ((aasNode_t *)0)->children ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasPortal_t_typeInfo[] = {
	{ "short", "areaNum", (int)(&((aasPortal_t *)0)->areaNum), sizeof( ((aasPortal_t *)0)->areaNum ) },
	{ "short[2]", "clusters", (int)(&((aasPortal_t *)0)->clusters), sizeof( ((aasPortal_t *)0)->clusters ) },
	{ "short[2]", "clusterAreaNum", (int)(&((aasPortal_t *)0)->clusterAreaNum), sizeof( ((aasPortal_t *)0)->clusterAreaNum ) },
	{ "unsigned short", "maxAreaTravelTime", (int)(&((aasPortal_t *)0)->maxAreaTravelTime), sizeof( ((aasPortal_t *)0)->maxAreaTravelTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasCluster_t_typeInfo[] = {
	{ "int", "numAreas", (int)(&((aasCluster_t *)0)->numAreas), sizeof( ((aasCluster_t *)0)->numAreas ) },
	{ "int", "numReachableAreas", (int)(&((aasCluster_t *)0)->numReachableAreas), sizeof( ((aasCluster_t *)0)->numReachableAreas ) },
	{ "int", "numPortals", (int)(&((aasCluster_t *)0)->numPortals), sizeof( ((aasCluster_t *)0)->numPortals ) },
	{ "int", "firstPortal", (int)(&((aasCluster_t *)0)->firstPortal), sizeof( ((aasCluster_t *)0)->firstPortal ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasTrace_t_typeInfo[] = {
	{ "int", "flags", (int)(&((aasTrace_t *)0)->flags), sizeof( ((aasTrace_t *)0)->flags ) },
	{ "int", "travelFlags", (int)(&((aasTrace_t *)0)->travelFlags), sizeof( ((aasTrace_t *)0)->travelFlags ) },
	{ "int", "maxAreas", (int)(&((aasTrace_t *)0)->maxAreas), sizeof( ((aasTrace_t *)0)->maxAreas ) },
	{ "int", "getOutOfSolid", (int)(&((aasTrace_t *)0)->getOutOfSolid), sizeof( ((aasTrace_t *)0)->getOutOfSolid ) },
	{ "float", "fraction", (int)(&((aasTrace_t *)0)->fraction), sizeof( ((aasTrace_t *)0)->fraction ) },
	{ "idVec3", "endpos", (int)(&((aasTrace_t *)0)->endpos), sizeof( ((aasTrace_t *)0)->endpos ) },
	{ "int", "planeNum", (int)(&((aasTrace_t *)0)->planeNum), sizeof( ((aasTrace_t *)0)->planeNum ) },
	{ "int", "lastAreaNum", (int)(&((aasTrace_t *)0)->lastAreaNum), sizeof( ((aasTrace_t *)0)->lastAreaNum ) },
	{ "int", "blockingAreaNum", (int)(&((aasTrace_t *)0)->blockingAreaNum), sizeof( ((aasTrace_t *)0)->blockingAreaNum ) },
	{ "int", "numAreas", (int)(&((aasTrace_t *)0)->numAreas), sizeof( ((aasTrace_t *)0)->numAreas ) },
	{ "int *", "areas", (int)(&((aasTrace_t *)0)->areas), sizeof( ((aasTrace_t *)0)->areas ) },
	{ "idVec3 *", "points", (int)(&((aasTrace_t *)0)->points), sizeof( ((aasTrace_t *)0)->points ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASSettings_typeInfo[] = {
	{ ": int", "numBoundingBoxes", (int)(&((idAASSettings *)0)->numBoundingBoxes), sizeof( ((idAASSettings *)0)->numBoundingBoxes ) },
	{ "idBounds[4]", "boundingBoxes", (int)(&((idAASSettings *)0)->boundingBoxes), sizeof( ((idAASSettings *)0)->boundingBoxes ) },
	{ "bool", "usePatches", (int)(&((idAASSettings *)0)->usePatches), sizeof( ((idAASSettings *)0)->usePatches ) },
	{ "bool", "writeBrushMap", (int)(&((idAASSettings *)0)->writeBrushMap), sizeof( ((idAASSettings *)0)->writeBrushMap ) },
	{ "bool", "playerFlood", (int)(&((idAASSettings *)0)->playerFlood), sizeof( ((idAASSettings *)0)->playerFlood ) },
	{ "bool", "noOptimize", (int)(&((idAASSettings *)0)->noOptimize), sizeof( ((idAASSettings *)0)->noOptimize ) },
	{ "bool", "allowSwimReachabilities", (int)(&((idAASSettings *)0)->allowSwimReachabilities), sizeof( ((idAASSettings *)0)->allowSwimReachabilities ) },
	{ "bool", "allowFlyReachabilities", (int)(&((idAASSettings *)0)->allowFlyReachabilities), sizeof( ((idAASSettings *)0)->allowFlyReachabilities ) },
	{ "idStr", "fileExtension", (int)(&((idAASSettings *)0)->fileExtension), sizeof( ((idAASSettings *)0)->fileExtension ) },
	{ "idVec3", "gravity", (int)(&((idAASSettings *)0)->gravity), sizeof( ((idAASSettings *)0)->gravity ) },
	{ "idVec3", "gravityDir", (int)(&((idAASSettings *)0)->gravityDir), sizeof( ((idAASSettings *)0)->gravityDir ) },
	{ "idVec3", "invGravityDir", (int)(&((idAASSettings *)0)->invGravityDir), sizeof( ((idAASSettings *)0)->invGravityDir ) },
	{ "float", "gravityValue", (int)(&((idAASSettings *)0)->gravityValue), sizeof( ((idAASSettings *)0)->gravityValue ) },
	{ "float", "maxStepHeight", (int)(&((idAASSettings *)0)->maxStepHeight), sizeof( ((idAASSettings *)0)->maxStepHeight ) },
	{ "float", "maxBarrierHeight", (int)(&((idAASSettings *)0)->maxBarrierHeight), sizeof( ((idAASSettings *)0)->maxBarrierHeight ) },
	{ "float", "maxWaterJumpHeight", (int)(&((idAASSettings *)0)->maxWaterJumpHeight), sizeof( ((idAASSettings *)0)->maxWaterJumpHeight ) },
	{ "float", "maxFallHeight", (int)(&((idAASSettings *)0)->maxFallHeight), sizeof( ((idAASSettings *)0)->maxFallHeight ) },
	{ "float", "minFloorCos", (int)(&((idAASSettings *)0)->minFloorCos), sizeof( ((idAASSettings *)0)->minFloorCos ) },
	{ "int", "tt_barrierJump", (int)(&((idAASSettings *)0)->tt_barrierJump), sizeof( ((idAASSettings *)0)->tt_barrierJump ) },
	{ "int", "tt_startCrouching", (int)(&((idAASSettings *)0)->tt_startCrouching), sizeof( ((idAASSettings *)0)->tt_startCrouching ) },
	{ "int", "tt_waterJump", (int)(&((idAASSettings *)0)->tt_waterJump), sizeof( ((idAASSettings *)0)->tt_waterJump ) },
	{ "int", "tt_startWalkOffLedge", (int)(&((idAASSettings *)0)->tt_startWalkOffLedge), sizeof( ((idAASSettings *)0)->tt_startWalkOffLedge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFile_typeInfo[] = {
	{ ": idStr", "name", (int)(&((idAASFile *)0)->name), sizeof( ((idAASFile *)0)->name ) },
	{ "unsigned int", "crc", (int)(&((idAASFile *)0)->crc), sizeof( ((idAASFile *)0)->crc ) },
	{ "idPlaneSet", "planeList", (int)(&((idAASFile *)0)->planeList), sizeof( ((idAASFile *)0)->planeList ) },
	{ "idList < aasVertex_t , TAG_AAS >", "vertices", (int)(&((idAASFile *)0)->vertices), sizeof( ((idAASFile *)0)->vertices ) },
	{ "idList < aasEdge_t , TAG_AAS >", "edges", (int)(&((idAASFile *)0)->edges), sizeof( ((idAASFile *)0)->edges ) },
	{ "idList < aasIndex_t , TAG_AAS >", "edgeIndex", (int)(&((idAASFile *)0)->edgeIndex), sizeof( ((idAASFile *)0)->edgeIndex ) },
	{ "idList < aasFace_t , TAG_AAS >", "faces", (int)(&((idAASFile *)0)->faces), sizeof( ((idAASFile *)0)->faces ) },
	{ "idList < aasIndex_t , TAG_AAS >", "faceIndex", (int)(&((idAASFile *)0)->faceIndex), sizeof( ((idAASFile *)0)->faceIndex ) },
	{ "idList < aasArea_t , TAG_AAS >", "areas", (int)(&((idAASFile *)0)->areas), sizeof( ((idAASFile *)0)->areas ) },
	{ "idList < aasNode_t , TAG_AAS >", "nodes", (int)(&((idAASFile *)0)->nodes), sizeof( ((idAASFile *)0)->nodes ) },
	{ "idList < aasPortal_t , TAG_AAS >", "portals", (int)(&((idAASFile *)0)->portals), sizeof( ((idAASFile *)0)->portals ) },
	{ "idList < aasIndex_t , TAG_AAS >", "portalIndex", (int)(&((idAASFile *)0)->portalIndex), sizeof( ((idAASFile *)0)->portalIndex ) },
	{ "idList < aasCluster_t , TAG_AAS >", "clusters", (int)(&((idAASFile *)0)->clusters), sizeof( ((idAASFile *)0)->clusters ) },
	{ "idAASSettings", "settings", (int)(&((idAASFile *)0)->settings), sizeof( ((idAASFile *)0)->settings ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFileManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t aasPath_t_typeInfo[] = {
	{ "int", "type", (int)(&((aasPath_t *)0)->type), sizeof( ((aasPath_t *)0)->type ) },
	{ "idVec3", "moveGoal", (int)(&((aasPath_t *)0)->moveGoal), sizeof( ((aasPath_t *)0)->moveGoal ) },
	{ "int", "moveAreaNum", (int)(&((aasPath_t *)0)->moveAreaNum), sizeof( ((aasPath_t *)0)->moveAreaNum ) },
	{ "idVec3", "secondaryGoal", (int)(&((aasPath_t *)0)->secondaryGoal), sizeof( ((aasPath_t *)0)->secondaryGoal ) },
	{ "const idReachability *", "reachability", (int)(&((aasPath_t *)0)->reachability), sizeof( ((aasPath_t *)0)->reachability ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasGoal_t_typeInfo[] = {
	{ "int", "areaNum", (int)(&((aasGoal_t *)0)->areaNum), sizeof( ((aasGoal_t *)0)->areaNum ) },
	{ "idVec3", "origin", (int)(&((aasGoal_t *)0)->origin), sizeof( ((aasGoal_t *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasObstacle_t_typeInfo[] = {
	{ "idBounds", "absBounds", (int)(&((aasObstacle_t *)0)->absBounds), sizeof( ((aasObstacle_t *)0)->absBounds ) },
	{ "idBounds", "expAbsBounds", (int)(&((aasObstacle_t *)0)->expAbsBounds), sizeof( ((aasObstacle_t *)0)->expAbsBounds ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASCallback_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAAS_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idClipModel_typeInfo[] = {
	{ ": bool", "enabled", (int)(&((idClipModel *)0)->enabled), sizeof( ((idClipModel *)0)->enabled ) },
	{ "idEntity *", "entity", (int)(&((idClipModel *)0)->entity), sizeof( ((idClipModel *)0)->entity ) },
	{ "int", "id", (int)(&((idClipModel *)0)->id), sizeof( ((idClipModel *)0)->id ) },
	{ "idEntity *", "owner", (int)(&((idClipModel *)0)->owner), sizeof( ((idClipModel *)0)->owner ) },
	{ "idVec3", "origin", (int)(&((idClipModel *)0)->origin), sizeof( ((idClipModel *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((idClipModel *)0)->axis), sizeof( ((idClipModel *)0)->axis ) },
	{ "idBounds", "bounds", (int)(&((idClipModel *)0)->bounds), sizeof( ((idClipModel *)0)->bounds ) },
	{ "idBounds", "absBounds", (int)(&((idClipModel *)0)->absBounds), sizeof( ((idClipModel *)0)->absBounds ) },
	{ "const idMaterial *", "material", (int)(&((idClipModel *)0)->material), sizeof( ((idClipModel *)0)->material ) },
	{ "int", "contents", (int)(&((idClipModel *)0)->contents), sizeof( ((idClipModel *)0)->contents ) },
	{ "cmHandle_t", "collisionModelHandle", (int)(&((idClipModel *)0)->collisionModelHandle), sizeof( ((idClipModel *)0)->collisionModelHandle ) },
	{ "int", "traceModelIndex", (int)(&((idClipModel *)0)->traceModelIndex), sizeof( ((idClipModel *)0)->traceModelIndex ) },
	{ "int", "renderModelHandle", (int)(&((idClipModel *)0)->renderModelHandle), sizeof( ((idClipModel *)0)->renderModelHandle ) },
	{ "clipLink_s *", "clipLinks", (int)(&((idClipModel *)0)->clipLinks), sizeof( ((idClipModel *)0)->clipLinks ) },
	{ "int", "touchCount", (int)(&((idClipModel *)0)->touchCount), sizeof( ((idClipModel *)0)->touchCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t idClip_typeInfo[] = {
	{ ": int", "numClipSectors", (int)(&((idClip *)0)->numClipSectors), sizeof( ((idClip *)0)->numClipSectors ) },
	{ "clipSector_s *", "clipSectors", (int)(&((idClip *)0)->clipSectors), sizeof( ((idClip *)0)->clipSectors ) },
	{ "idBounds", "worldBounds", (int)(&((idClip *)0)->worldBounds), sizeof( ((idClip *)0)->worldBounds ) },
	{ "idClipModel", "temporaryClipModel", (int)(&((idClip *)0)->temporaryClipModel), sizeof( ((idClip *)0)->temporaryClipModel ) },
	{ "idClipModel", "defaultClipModel", (int)(&((idClip *)0)->defaultClipModel), sizeof( ((idClip *)0)->defaultClipModel ) },
	{ "mutable int", "touchCount", (int)(&((idClip *)0)->touchCount), sizeof( ((idClip *)0)->touchCount ) },
	{ "int", "numTranslations", (int)(&((idClip *)0)->numTranslations), sizeof( ((idClip *)0)->numTranslations ) },
	{ "int", "numRotations", (int)(&((idClip *)0)->numRotations), sizeof( ((idClip *)0)->numRotations ) },
	{ "int", "numMotions", (int)(&((idClip *)0)->numMotions), sizeof( ((idClip *)0)->numMotions ) },
	{ "int", "numRenderModelTraces", (int)(&((idClip *)0)->numRenderModelTraces), sizeof( ((idClip *)0)->numRenderModelTraces ) },
	{ "int", "numContents", (int)(&((idClip *)0)->numContents), sizeof( ((idClip *)0)->numContents ) },
	{ "int", "numContacts", (int)(&((idClip *)0)->numContacts), sizeof( ((idClip *)0)->numContacts ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushed_s_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((idPush::pushed_s *)0)->ent), sizeof( ((idPush::pushed_s *)0)->ent ) },
	{ "idAngles", "deltaViewAngles", (int)(&((idPush::pushed_s *)0)->deltaViewAngles), sizeof( ((idPush::pushed_s *)0)->deltaViewAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushedGroup_s_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((idPush::pushedGroup_s *)0)->ent), sizeof( ((idPush::pushedGroup_s *)0)->ent ) },
	{ "float", "fraction", (int)(&((idPush::pushedGroup_s *)0)->fraction), sizeof( ((idPush::pushedGroup_s *)0)->fraction ) },
	{ "bool", "groundContact", (int)(&((idPush::pushedGroup_s *)0)->groundContact), sizeof( ((idPush::pushedGroup_s *)0)->groundContact ) },
	{ "bool", "test", (int)(&((idPush::pushedGroup_s *)0)->test), sizeof( ((idPush::pushedGroup_s *)0)->test ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_typeInfo[] = {
	{ "idPush::pushed_s[4096]", "pushed", (int)(&((idPush *)0)->pushed), sizeof( ((idPush *)0)->pushed ) },
	{ "int", "numPushed", (int)(&((idPush *)0)->numPushed), sizeof( ((idPush *)0)->numPushed ) },
	{ "idPush::pushedGroup_s[4096]", "pushedGroup", (int)(&((idPush *)0)->pushedGroup), sizeof( ((idPush *)0)->pushedGroup ) },
	{ "int", "pushedGroupSize", (int)(&((idPush *)0)->pushedGroupSize), sizeof( ((idPush *)0)->pushedGroupSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsHandle_t_typeInfo[] = {
	{ "int", "i", (int)(&((pvsHandle_t *)0)->i), sizeof( ((pvsHandle_t *)0)->i ) },
	{ "unsigned int", "h", (int)(&((pvsHandle_t *)0)->h), sizeof( ((pvsHandle_t *)0)->h ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsCurrent_t_typeInfo[] = {
	{ "pvsHandle_t", "handle", (int)(&((pvsCurrent_t *)0)->handle), sizeof( ((pvsCurrent_t *)0)->handle ) },
	{ "byte *", "pvs", (int)(&((pvsCurrent_t *)0)->pvs), sizeof( ((pvsCurrent_t *)0)->pvs ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPVS_typeInfo[] = {
	{ ": int", "numAreas", (int)(&((idPVS *)0)->numAreas), sizeof( ((idPVS *)0)->numAreas ) },
	{ "int", "numPortals", (int)(&((idPVS *)0)->numPortals), sizeof( ((idPVS *)0)->numPortals ) },
	{ "bool *", "connectedAreas", (int)(&((idPVS *)0)->connectedAreas), sizeof( ((idPVS *)0)->connectedAreas ) },
	{ "int *", "areaQueue", (int)(&((idPVS *)0)->areaQueue), sizeof( ((idPVS *)0)->areaQueue ) },
	{ "byte *", "areaPVS", (int)(&((idPVS *)0)->areaPVS), sizeof( ((idPVS *)0)->areaPVS ) },
	{ "mutable pvsCurrent_t[64]", "currentPVS", (int)(&((idPVS *)0)->currentPVS), sizeof( ((idPVS *)0)->currentPVS ) },
	{ "int", "portalVisBytes", (int)(&((idPVS *)0)->portalVisBytes), sizeof( ((idPVS *)0)->portalVisBytes ) },
	{ "int", "portalVisLongs", (int)(&((idPVS *)0)->portalVisLongs), sizeof( ((idPVS *)0)->portalVisLongs ) },
	{ "int", "areaVisBytes", (int)(&((idPVS *)0)->areaVisBytes), sizeof( ((idPVS *)0)->areaVisBytes ) },
	{ "int", "areaVisLongs", (int)(&((idPVS *)0)->areaVisLongs), sizeof( ((idPVS *)0)->areaVisLongs ) },
	{ "pvsPortal_s *", "pvsPortals", (int)(&((idPVS *)0)->pvsPortals), sizeof( ((idPVS *)0)->pvsPortals ) },
	{ "pvsArea_s *", "pvsAreas", (int)(&((idPVS *)0)->pvsAreas), sizeof( ((idPVS *)0)->pvsAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t leaderboardStats_t_typeInfo[] = {
	{ "int", "frags", (int)(&((leaderboardStats_t *)0)->frags), sizeof( ((leaderboardStats_t *)0)->frags ) },
	{ "int", "wins", (int)(&((leaderboardStats_t *)0)->wins), sizeof( ((leaderboardStats_t *)0)->wins ) },
	{ "int", "teamfrags", (int)(&((leaderboardStats_t *)0)->teamfrags), sizeof( ((leaderboardStats_t *)0)->teamfrags ) },
	{ "int", "deaths", (int)(&((leaderboardStats_t *)0)->deaths), sizeof( ((leaderboardStats_t *)0)->deaths ) },
	{ NULL, 0 }
};

static classVariableInfo_t columnGameMode_t_typeInfo[] = {
	{ "columnDef_t *", "columnDef", (int)(&((columnGameMode_t *)0)->columnDef), sizeof( ((columnGameMode_t *)0)->columnDef ) },
	{ "int", "numColumns", (int)(&((columnGameMode_t *)0)->numColumns), sizeof( ((columnGameMode_t *)0)->numColumns ) },
	{ "rankOrder_t", "rankOrder", (int)(&((columnGameMode_t *)0)->rankOrder), sizeof( ((columnGameMode_t *)0)->rankOrder ) },
	{ "bool", "supportsAttachments", (int)(&((columnGameMode_t *)0)->supportsAttachments), sizeof( ((columnGameMode_t *)0)->supportsAttachments ) },
	{ "bool", "checkAgainstCurrent", (int)(&((columnGameMode_t *)0)->checkAgainstCurrent), sizeof( ((columnGameMode_t *)0)->checkAgainstCurrent ) },
	{ "const char *", "abrevName", (int)(&((columnGameMode_t *)0)->abrevName), sizeof( ((columnGameMode_t *)0)->abrevName ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpPlayerState_t_typeInfo[] = {
	{ "int", "ping", (int)(&((mpPlayerState_t *)0)->ping), sizeof( ((mpPlayerState_t *)0)->ping ) },
	{ "int", "fragCount", (int)(&((mpPlayerState_t *)0)->fragCount), sizeof( ((mpPlayerState_t *)0)->fragCount ) },
	{ "int", "teamFragCount", (int)(&((mpPlayerState_t *)0)->teamFragCount), sizeof( ((mpPlayerState_t *)0)->teamFragCount ) },
	{ "int", "wins", (int)(&((mpPlayerState_t *)0)->wins), sizeof( ((mpPlayerState_t *)0)->wins ) },
	{ "bool", "scoreBoardUp", (int)(&((mpPlayerState_t *)0)->scoreBoardUp), sizeof( ((mpPlayerState_t *)0)->scoreBoardUp ) },
	{ "int", "deaths", (int)(&((mpPlayerState_t *)0)->deaths), sizeof( ((mpPlayerState_t *)0)->deaths ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpChatLine_t_typeInfo[] = {
	{ "idStr", "line", (int)(&((mpChatLine_t *)0)->line), sizeof( ((mpChatLine_t *)0)->line ) },
	{ "short", "fade", (int)(&((mpChatLine_t *)0)->fade), sizeof( ((mpChatLine_t *)0)->fade ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMultiplayerGame_typeInfo[] = {
	{ "int", "player_red_flag", (int)(&((idMultiplayerGame *)0)->player_red_flag), sizeof( ((idMultiplayerGame *)0)->player_red_flag ) },
	{ "int", "player_blue_flag", (int)(&((idMultiplayerGame *)0)->player_blue_flag), sizeof( ((idMultiplayerGame *)0)->player_blue_flag ) },
	{ "gameState_t", "gameState", (int)(&((idMultiplayerGame *)0)->gameState), sizeof( ((idMultiplayerGame *)0)->gameState ) },
	{ "gameState_t", "nextState", (int)(&((idMultiplayerGame *)0)->nextState), sizeof( ((idMultiplayerGame *)0)->nextState ) },
	{ "mpPlayerState_t[1]", "playerState", (int)(&((idMultiplayerGame *)0)->playerState), sizeof( ((idMultiplayerGame *)0)->playerState ) },
	{ "int", "nextStateSwitch", (int)(&((idMultiplayerGame *)0)->nextStateSwitch), sizeof( ((idMultiplayerGame *)0)->nextStateSwitch ) },
	{ "int", "warmupEndTime", (int)(&((idMultiplayerGame *)0)->warmupEndTime), sizeof( ((idMultiplayerGame *)0)->warmupEndTime ) },
	{ "int", "matchStartedTime", (int)(&((idMultiplayerGame *)0)->matchStartedTime), sizeof( ((idMultiplayerGame *)0)->matchStartedTime ) },
	{ "int[2]", "currentTourneyPlayer", (int)(&((idMultiplayerGame *)0)->currentTourneyPlayer), sizeof( ((idMultiplayerGame *)0)->currentTourneyPlayer ) },
	{ "int", "lastWinner", (int)(&((idMultiplayerGame *)0)->lastWinner), sizeof( ((idMultiplayerGame *)0)->lastWinner ) },
	{ "bool", "one", (int)(&((idMultiplayerGame *)0)->one), sizeof( ((idMultiplayerGame *)0)->one ) },
	{ "bool", "two", (int)(&((idMultiplayerGame *)0)->two), sizeof( ((idMultiplayerGame *)0)->two ) },
	{ "bool", "three", (int)(&((idMultiplayerGame *)0)->three), sizeof( ((idMultiplayerGame *)0)->three ) },
	{ "idMenuHandler_Scoreboard *", "scoreboardManager", (int)(&((idMultiplayerGame *)0)->scoreboardManager), sizeof( ((idMultiplayerGame *)0)->scoreboardManager ) },
	{ "mpChatLine_t[5]", "chatHistory", (int)(&((idMultiplayerGame *)0)->chatHistory), sizeof( ((idMultiplayerGame *)0)->chatHistory ) },
	{ "int", "chatHistoryIndex", (int)(&((idMultiplayerGame *)0)->chatHistoryIndex), sizeof( ((idMultiplayerGame *)0)->chatHistoryIndex ) },
	{ "int", "chatHistorySize", (int)(&((idMultiplayerGame *)0)->chatHistorySize), sizeof( ((idMultiplayerGame *)0)->chatHistorySize ) },
	{ "bool", "chatDataUpdated", (int)(&((idMultiplayerGame *)0)->chatDataUpdated), sizeof( ((idMultiplayerGame *)0)->chatDataUpdated ) },
	{ "int", "lastChatLineTime", (int)(&((idMultiplayerGame *)0)->lastChatLineTime), sizeof( ((idMultiplayerGame *)0)->lastChatLineTime ) },
	{ "int", "numRankedPlayers", (int)(&((idMultiplayerGame *)0)->numRankedPlayers), sizeof( ((idMultiplayerGame *)0)->numRankedPlayers ) },
	{ "idPlayer *[1]", "rankedPlayers", (int)(&((idMultiplayerGame *)0)->rankedPlayers), sizeof( ((idMultiplayerGame *)0)->rankedPlayers ) },
	{ "bool", "pureReady", (int)(&((idMultiplayerGame *)0)->pureReady), sizeof( ((idMultiplayerGame *)0)->pureReady ) },
	{ "int", "fragLimitTimeout", (int)(&((idMultiplayerGame *)0)->fragLimitTimeout), sizeof( ((idMultiplayerGame *)0)->fragLimitTimeout ) },
	{ "int", "voiceChatThrottle", (int)(&((idMultiplayerGame *)0)->voiceChatThrottle), sizeof( ((idMultiplayerGame *)0)->voiceChatThrottle ) },
	{ "int", "startFragLimit", (int)(&((idMultiplayerGame *)0)->startFragLimit), sizeof( ((idMultiplayerGame *)0)->startFragLimit ) },
	{ "idItemTeam *[2]", "teamFlags", (int)(&((idMultiplayerGame *)0)->teamFlags), sizeof( ((idMultiplayerGame *)0)->teamFlags ) },
	{ "int[2]", "teamPoints", (int)(&((idMultiplayerGame *)0)->teamPoints), sizeof( ((idMultiplayerGame *)0)->teamPoints ) },
	{ "bool", "flagMsgOn", (int)(&((idMultiplayerGame *)0)->flagMsgOn), sizeof( ((idMultiplayerGame *)0)->flagMsgOn ) },
	{ NULL, 0 }
};

static classVariableInfo_t entityNetEvent_t_typeInfo[] = {
	{ "int", "spawnId", (int)(&((entityNetEvent_t *)0)->spawnId), sizeof( ((entityNetEvent_t *)0)->spawnId ) },
	{ "int", "event", (int)(&((entityNetEvent_t *)0)->event), sizeof( ((entityNetEvent_t *)0)->event ) },
	{ "int", "time", (int)(&((entityNetEvent_t *)0)->time), sizeof( ((entityNetEvent_t *)0)->time ) },
	{ "int", "paramsSize", (int)(&((entityNetEvent_t *)0)->paramsSize), sizeof( ((entityNetEvent_t *)0)->paramsSize ) },
	{ "byte[128]", "paramsBuf", (int)(&((entityNetEvent_t *)0)->paramsBuf), sizeof( ((entityNetEvent_t *)0)->paramsBuf ) },
	{ "entityNetEvent_s *", "next", (int)(&((entityNetEvent_t *)0)->next), sizeof( ((entityNetEvent_t *)0)->next ) },
	{ "entityNetEvent_s *", "prev", (int)(&((entityNetEvent_t *)0)->prev), sizeof( ((entityNetEvent_t *)0)->prev ) },
	{ NULL, 0 }
};

static classVariableInfo_t spawnSpot_t_typeInfo[] = {
	{ "idEntity *", "ent", (int)(&((spawnSpot_t *)0)->ent), sizeof( ((spawnSpot_t *)0)->ent ) },
	{ "int", "dist", (int)(&((spawnSpot_t *)0)->dist), sizeof( ((spawnSpot_t *)0)->dist ) },
	{ "int", "team", (int)(&((spawnSpot_t *)0)->team), sizeof( ((spawnSpot_t *)0)->team ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventQueue_typeInfo[] = {
	{ ": entityNetEvent_t *", "start", (int)(&((idEventQueue *)0)->start), sizeof( ((idEventQueue *)0)->start ) },
	{ "entityNetEvent_t *", "end", (int)(&((idEventQueue *)0)->end), sizeof( ((idEventQueue *)0)->end ) },
	{ "idBlockAlloc < entityNetEvent_t , 32 >", "eventAllocator", (int)(&((idEventQueue *)0)->eventAllocator), sizeof( ((idEventQueue *)0)->eventAllocator ) },
	{ NULL, 0 }
};

static classVariableInfo_t timeState_t_typeInfo[] = {
	{ "int", "time", (int)(&((timeState_t *)0)->time), sizeof( ((timeState_t *)0)->time ) },
	{ "int", "previousTime", (int)(&((timeState_t *)0)->previousTime), sizeof( ((timeState_t *)0)->previousTime ) },
	{ "int", "realClientTime", (int)(&((timeState_t *)0)->realClientTime), sizeof( ((timeState_t *)0)->realClientTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t rvmGameDelayRemoveEntry_t_typeInfo[] = {
	{ "int32_t", "removeTime", (int)(&((rvmGameDelayRemoveEntry_t *)0)->removeTime), sizeof( ((rvmGameDelayRemoveEntry_t *)0)->removeTime ) },
	{ "idEntity *", "entity", (int)(&((rvmGameDelayRemoveEntry_t *)0)->entity), sizeof( ((rvmGameDelayRemoveEntry_t *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t netInterpolationInfo_t_typeInfo[] = {
	{ "float", "pct", (int)(&((netInterpolationInfo_t *)0)->pct), sizeof( ((netInterpolationInfo_t *)0)->pct ) },
	{ "int", "serverGameMs", (int)(&((netInterpolationInfo_t *)0)->serverGameMs), sizeof( ((netInterpolationInfo_t *)0)->serverGameMs ) },
	{ "int", "previousServerGameMs", (int)(&((netInterpolationInfo_t *)0)->previousServerGameMs), sizeof( ((netInterpolationInfo_t *)0)->previousServerGameMs ) },
	{ "int", "ssStartTime", (int)(&((netInterpolationInfo_t *)0)->ssStartTime), sizeof( ((netInterpolationInfo_t *)0)->ssStartTime ) },
	{ "int", "ssEndTime", (int)(&((netInterpolationInfo_t *)0)->ssEndTime), sizeof( ((netInterpolationInfo_t *)0)->ssEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameLocal_typeInfo[] = {
	{ ": int", "previousServerTime", (int)(&((idGameLocal *)0)->previousServerTime), sizeof( ((idGameLocal *)0)->previousServerTime ) },
	{ "int", "serverTime", (int)(&((idGameLocal *)0)->serverTime), sizeof( ((idGameLocal *)0)->serverTime ) },
	{ "idDict", "serverInfo", (int)(&((idGameLocal *)0)->serverInfo), sizeof( ((idGameLocal *)0)->serverInfo ) },
	{ "int", "numClients", (int)(&((idGameLocal *)0)->numClients), sizeof( ((idGameLocal *)0)->numClients ) },
	{ "idArray < lobbyUserID_t , MAX_CLIENTS >", "lobbyUserIDs", (int)(&((idGameLocal *)0)->lobbyUserIDs), sizeof( ((idGameLocal *)0)->lobbyUserIDs ) },
	{ "idDict[1]", "persistentPlayerInfo", (int)(&((idGameLocal *)0)->persistentPlayerInfo), sizeof( ((idGameLocal *)0)->persistentPlayerInfo ) },
	{ "idEntity *[4096]", "entities", (int)(&((idGameLocal *)0)->entities), sizeof( ((idGameLocal *)0)->entities ) },
	{ "int[4096]", "spawnIds", (int)(&((idGameLocal *)0)->spawnIds), sizeof( ((idGameLocal *)0)->spawnIds ) },
	{ "idArray < int , 2 >", "firstFreeEntityIndex", (int)(&((idGameLocal *)0)->firstFreeEntityIndex), sizeof( ((idGameLocal *)0)->firstFreeEntityIndex ) },
	{ "int", "num_entities", (int)(&((idGameLocal *)0)->num_entities), sizeof( ((idGameLocal *)0)->num_entities ) },
	{ "idHashIndex", "entityHash", (int)(&((idGameLocal *)0)->entityHash), sizeof( ((idGameLocal *)0)->entityHash ) },
	{ "idWorldspawn *", "world", (int)(&((idGameLocal *)0)->world), sizeof( ((idGameLocal *)0)->world ) },
	{ "idLinkList < idEntity >", "spawnedEntities", (int)(&((idGameLocal *)0)->spawnedEntities), sizeof( ((idGameLocal *)0)->spawnedEntities ) },
	{ "idLinkList < idEntity >", "activeEntities", (int)(&((idGameLocal *)0)->activeEntities), sizeof( ((idGameLocal *)0)->activeEntities ) },
	{ "idLinkList < idEntity >", "aimAssistEntities", (int)(&((idGameLocal *)0)->aimAssistEntities), sizeof( ((idGameLocal *)0)->aimAssistEntities ) },
	{ "int", "numEntitiesToDeactivate", (int)(&((idGameLocal *)0)->numEntitiesToDeactivate), sizeof( ((idGameLocal *)0)->numEntitiesToDeactivate ) },
	{ "bool", "sortPushers", (int)(&((idGameLocal *)0)->sortPushers), sizeof( ((idGameLocal *)0)->sortPushers ) },
	{ "bool", "sortTeamMasters", (int)(&((idGameLocal *)0)->sortTeamMasters), sizeof( ((idGameLocal *)0)->sortTeamMasters ) },
	{ "idDict", "persistentLevelInfo", (int)(&((idGameLocal *)0)->persistentLevelInfo), sizeof( ((idGameLocal *)0)->persistentLevelInfo ) },
	{ "float[1]", "globalShaderParms", (int)(&((idGameLocal *)0)->globalShaderParms), sizeof( ((idGameLocal *)0)->globalShaderParms ) },
	{ "idRandom", "random", (int)(&((idGameLocal *)0)->random), sizeof( ((idGameLocal *)0)->random ) },
	{ "idProgram", "program", (int)(&((idGameLocal *)0)->program), sizeof( ((idGameLocal *)0)->program ) },
	{ "idThread *", "frameCommandThread", (int)(&((idGameLocal *)0)->frameCommandThread), sizeof( ((idGameLocal *)0)->frameCommandThread ) },
	{ "idClip", "clip", (int)(&((idGameLocal *)0)->clip), sizeof( ((idGameLocal *)0)->clip ) },
	{ "idPush", "push", (int)(&((idGameLocal *)0)->push), sizeof( ((idGameLocal *)0)->push ) },
	{ "idPVS", "pvs", (int)(&((idGameLocal *)0)->pvs), sizeof( ((idGameLocal *)0)->pvs ) },
	{ "idTestModel *", "testmodel", (int)(&((idGameLocal *)0)->testmodel), sizeof( ((idGameLocal *)0)->testmodel ) },
	{ "idEntityFx *", "testFx", (int)(&((idGameLocal *)0)->testFx), sizeof( ((idGameLocal *)0)->testFx ) },
	{ "idStr", "sessionCommand", (int)(&((idGameLocal *)0)->sessionCommand), sizeof( ((idGameLocal *)0)->sessionCommand ) },
	{ "idMultiplayerGame", "mpGame", (int)(&((idGameLocal *)0)->mpGame), sizeof( ((idGameLocal *)0)->mpGame ) },
	{ "idSmokeParticles *", "smokeParticles", (int)(&((idGameLocal *)0)->smokeParticles), sizeof( ((idGameLocal *)0)->smokeParticles ) },
	{ "idEditEntities *", "editEntities", (int)(&((idGameLocal *)0)->editEntities), sizeof( ((idGameLocal *)0)->editEntities ) },
	{ "bool", "inCinematic", (int)(&((idGameLocal *)0)->inCinematic), sizeof( ((idGameLocal *)0)->inCinematic ) },
	{ "int", "framenum", (int)(&((idGameLocal *)0)->framenum), sizeof( ((idGameLocal *)0)->framenum ) },
	{ "int", "time", (int)(&((idGameLocal *)0)->time), sizeof( ((idGameLocal *)0)->time ) },
	{ "int", "previousTime", (int)(&((idGameLocal *)0)->previousTime), sizeof( ((idGameLocal *)0)->previousTime ) },
	{ "int", "vacuumAreaNum", (int)(&((idGameLocal *)0)->vacuumAreaNum), sizeof( ((idGameLocal *)0)->vacuumAreaNum ) },
	{ "gameType_t", "gameType", (int)(&((idGameLocal *)0)->gameType), sizeof( ((idGameLocal *)0)->gameType ) },
	{ "idLinkList < idEntity >", "snapshotEntities", (int)(&((idGameLocal *)0)->snapshotEntities), sizeof( ((idGameLocal *)0)->snapshotEntities ) },
	{ "int", "realClientTime", (int)(&((idGameLocal *)0)->realClientTime), sizeof( ((idGameLocal *)0)->realClientTime ) },
	{ "bool", "isNewFrame", (int)(&((idGameLocal *)0)->isNewFrame), sizeof( ((idGameLocal *)0)->isNewFrame ) },
	{ "float", "clientSmoothing", (int)(&((idGameLocal *)0)->clientSmoothing), sizeof( ((idGameLocal *)0)->clientSmoothing ) },
	{ "int", "entityDefBits", (int)(&((idGameLocal *)0)->entityDefBits), sizeof( ((idGameLocal *)0)->entityDefBits ) },
	{ "idEntityPtr < idEntity >", "lastGUIEnt", (int)(&((idGameLocal *)0)->lastGUIEnt), sizeof( ((idGameLocal *)0)->lastGUIEnt ) },
	{ "int", "lastGUI", (int)(&((idGameLocal *)0)->lastGUI), sizeof( ((idGameLocal *)0)->lastGUI ) },
	{ "idEntityPtr < idPlayer >", "playerActivateFragChamber", (int)(&((idGameLocal *)0)->playerActivateFragChamber), sizeof( ((idGameLocal *)0)->playerActivateFragChamber ) },
	{ "idEntityPtr < idEntity >", "portalSkyEnt", (int)(&((idGameLocal *)0)->portalSkyEnt), sizeof( ((idGameLocal *)0)->portalSkyEnt ) },
	{ "bool", "portalSkyActive", (int)(&((idGameLocal *)0)->portalSkyActive), sizeof( ((idGameLocal *)0)->portalSkyActive ) },
	{ "timeState_t", "fast", (int)(&((idGameLocal *)0)->fast), sizeof( ((idGameLocal *)0)->fast ) },
	{ "timeState_t", "slow", (int)(&((idGameLocal *)0)->slow), sizeof( ((idGameLocal *)0)->slow ) },
	{ "int", "selectedGroup", (int)(&((idGameLocal *)0)->selectedGroup), sizeof( ((idGameLocal *)0)->selectedGroup ) },
	{ "slowmoState_t", "slowmoState", (int)(&((idGameLocal *)0)->slowmoState), sizeof( ((idGameLocal *)0)->slowmoState ) },
	{ "float", "slowmoScale", (int)(&((idGameLocal *)0)->slowmoScale), sizeof( ((idGameLocal *)0)->slowmoScale ) },
	{ "bool", "quickSlowmoReset", (int)(&((idGameLocal *)0)->quickSlowmoReset), sizeof( ((idGameLocal *)0)->quickSlowmoReset ) },
	{ "idStr", "mapFileName", (int)(&((idGameLocal *)0)->mapFileName), sizeof( ((idGameLocal *)0)->mapFileName ) },
	{ "idMapFile *", "mapFile", (int)(&((idGameLocal *)0)->mapFile), sizeof( ((idGameLocal *)0)->mapFile ) },
	{ "bool", "mapCycleLoaded", (int)(&((idGameLocal *)0)->mapCycleLoaded), sizeof( ((idGameLocal *)0)->mapCycleLoaded ) },
	{ "int", "spawnCount", (int)(&((idGameLocal *)0)->spawnCount), sizeof( ((idGameLocal *)0)->spawnCount ) },
	{ "int", "mapSpawnCount", (int)(&((idGameLocal *)0)->mapSpawnCount), sizeof( ((idGameLocal *)0)->mapSpawnCount ) },
	{ "idLocationEntity * *", "locationEntities", (int)(&((idGameLocal *)0)->locationEntities), sizeof( ((idGameLocal *)0)->locationEntities ) },
	{ "idCamera *", "camera", (int)(&((idGameLocal *)0)->camera), sizeof( ((idGameLocal *)0)->camera ) },
	{ "const idMaterial *", "globalMaterial", (int)(&((idGameLocal *)0)->globalMaterial), sizeof( ((idGameLocal *)0)->globalMaterial ) },
	{ "idList < idAAS * >", "aasList", (int)(&((idGameLocal *)0)->aasList), sizeof( ((idGameLocal *)0)->aasList ) },
	{ "idMenuHandler_Shell *", "shellHandler", (int)(&((idGameLocal *)0)->shellHandler), sizeof( ((idGameLocal *)0)->shellHandler ) },
	{ "idStrList", "aasNames", (int)(&((idGameLocal *)0)->aasNames), sizeof( ((idGameLocal *)0)->aasNames ) },
	{ "idEntityPtr < idActor >", "lastAIAlertEntity", (int)(&((idGameLocal *)0)->lastAIAlertEntity), sizeof( ((idGameLocal *)0)->lastAIAlertEntity ) },
	{ "int", "lastAIAlertTime", (int)(&((idGameLocal *)0)->lastAIAlertTime), sizeof( ((idGameLocal *)0)->lastAIAlertTime ) },
	{ "idDict", "spawnArgs", (int)(&((idGameLocal *)0)->spawnArgs), sizeof( ((idGameLocal *)0)->spawnArgs ) },
	{ "pvsHandle_t", "playerPVS", (int)(&((idGameLocal *)0)->playerPVS), sizeof( ((idGameLocal *)0)->playerPVS ) },
	{ "pvsHandle_t", "playerConnectedAreas", (int)(&((idGameLocal *)0)->playerConnectedAreas), sizeof( ((idGameLocal *)0)->playerConnectedAreas ) },
	{ "idVec3", "gravity", (int)(&((idGameLocal *)0)->gravity), sizeof( ((idGameLocal *)0)->gravity ) },
	{ "gameState_t", "gamestate", (int)(&((idGameLocal *)0)->gamestate), sizeof( ((idGameLocal *)0)->gamestate ) },
	{ "bool", "influenceActive", (int)(&((idGameLocal *)0)->influenceActive), sizeof( ((idGameLocal *)0)->influenceActive ) },
	{ "int", "nextGibTime", (int)(&((idGameLocal *)0)->nextGibTime), sizeof( ((idGameLocal *)0)->nextGibTime ) },
	{ "idEventQueue", "eventQueue", (int)(&((idGameLocal *)0)->eventQueue), sizeof( ((idGameLocal *)0)->eventQueue ) },
	{ "idEventQueue", "savedEventQueue", (int)(&((idGameLocal *)0)->savedEventQueue), sizeof( ((idGameLocal *)0)->savedEventQueue ) },
	{ "idStaticList < spawnSpot_t , MAX_GENTITIES >", "spawnSpots", (int)(&((idGameLocal *)0)->spawnSpots), sizeof( ((idGameLocal *)0)->spawnSpots ) },
	{ "idStaticList < idEntity * , MAX_GENTITIES >", "initialSpots", (int)(&((idGameLocal *)0)->initialSpots), sizeof( ((idGameLocal *)0)->initialSpots ) },
	{ "int", "currentInitialSpot", (int)(&((idGameLocal *)0)->currentInitialSpot), sizeof( ((idGameLocal *)0)->currentInitialSpot ) },
	{ "idStaticList < spawnSpot_t , MAX_GENTITIES >[2]", "teamSpawnSpots", (int)(&((idGameLocal *)0)->teamSpawnSpots), sizeof( ((idGameLocal *)0)->teamSpawnSpots ) },
	{ "idStaticList < idEntity * , MAX_GENTITIES >[2]", "teamInitialSpots", (int)(&((idGameLocal *)0)->teamInitialSpots), sizeof( ((idGameLocal *)0)->teamInitialSpots ) },
	{ "int[2]", "teamCurrentInitialSpot", (int)(&((idGameLocal *)0)->teamCurrentInitialSpot), sizeof( ((idGameLocal *)0)->teamCurrentInitialSpot ) },
	{ "netInterpolationInfo_t", "netInterpolationInfo", (int)(&((idGameLocal *)0)->netInterpolationInfo), sizeof( ((idGameLocal *)0)->netInterpolationInfo ) },
	{ "idDict", "newInfo", (int)(&((idGameLocal *)0)->newInfo), sizeof( ((idGameLocal *)0)->newInfo ) },
	{ "idArray < int , MAX_PLAYERS >", "usercmdLastClientMilliseconds", (int)(&((idGameLocal *)0)->usercmdLastClientMilliseconds), sizeof( ((idGameLocal *)0)->usercmdLastClientMilliseconds ) },
	{ "idArray < int , MAX_PLAYERS >", "lastCmdRunTimeOnClient", (int)(&((idGameLocal *)0)->lastCmdRunTimeOnClient), sizeof( ((idGameLocal *)0)->lastCmdRunTimeOnClient ) },
	{ "idArray < int , MAX_PLAYERS >", "lastCmdRunTimeOnServer", (int)(&((idGameLocal *)0)->lastCmdRunTimeOnServer), sizeof( ((idGameLocal *)0)->lastCmdRunTimeOnServer ) },
	{ "idList < rvmGameDelayRemoveEntry_t >", "delayRemoveEntities", (int)(&((idGameLocal *)0)->delayRemoveEntities), sizeof( ((idGameLocal *)0)->delayRemoveEntities ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameError_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idForce::Invoke(idForce *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	return 0;

};

static classVariableInfo_t idForce_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idForce_Constant::Invoke(idForce_Constant *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	return 0;

};

static classVariableInfo_t idForce_Constant_typeInfo[] = {
	{ ": idVec3", "force", (int)(&((idForce_Constant *)0)->force), sizeof( ((idForce_Constant *)0)->force ) },
	{ "idPhysics *", "physics", (int)(&((idForce_Constant *)0)->physics), sizeof( ((idForce_Constant *)0)->physics ) },
	{ "int", "id", (int)(&((idForce_Constant *)0)->id), sizeof( ((idForce_Constant *)0)->id ) },
	{ "idVec3", "point", (int)(&((idForce_Constant *)0)->point), sizeof( ((idForce_Constant *)0)->point ) },
	{ NULL, 0 }
};

intptr_t idForce_Drag::Invoke(idForce_Drag *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 192385) { // GetDragPosition
		cls->GetDragPosition();
		return 0;
	};
	if(functionNameHash == 233549) { // GetDraggedPosition
		cls->GetDraggedPosition();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idForce_Drag_typeInfo[] = {
	{ ": float", "damping", (int)(&((idForce_Drag *)0)->damping), sizeof( ((idForce_Drag *)0)->damping ) },
	{ "idPhysics *", "physics", (int)(&((idForce_Drag *)0)->physics), sizeof( ((idForce_Drag *)0)->physics ) },
	{ "int", "id", (int)(&((idForce_Drag *)0)->id), sizeof( ((idForce_Drag *)0)->id ) },
	{ "idVec3", "p", (int)(&((idForce_Drag *)0)->p), sizeof( ((idForce_Drag *)0)->p ) },
	{ "idVec3", "dragPosition", (int)(&((idForce_Drag *)0)->dragPosition), sizeof( ((idForce_Drag *)0)->dragPosition ) },
	{ NULL, 0 }
};

intptr_t idForce_Grab::Invoke(idForce_Grab *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 213643) { // GetDistanceToGoal
		cls->GetDistanceToGoal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idForce_Grab_typeInfo[] = {
	{ ": float", "damping", (int)(&((idForce_Grab *)0)->damping), sizeof( ((idForce_Grab *)0)->damping ) },
	{ "idVec3", "goalPosition", (int)(&((idForce_Grab *)0)->goalPosition), sizeof( ((idForce_Grab *)0)->goalPosition ) },
	{ "float", "distanceToGoal", (int)(&((idForce_Grab *)0)->distanceToGoal), sizeof( ((idForce_Grab *)0)->distanceToGoal ) },
	{ "idPhysics *", "physics", (int)(&((idForce_Grab *)0)->physics), sizeof( ((idForce_Grab *)0)->physics ) },
	{ "int", "id", (int)(&((idForce_Grab *)0)->id), sizeof( ((idForce_Grab *)0)->id ) },
	{ NULL, 0 }
};

intptr_t idForce_Field::Invoke(idForce_Field *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	return 0;

};

static classVariableInfo_t idForce_Field_typeInfo[] = {
	{ ": forceFieldType", "type", (int)(&((idForce_Field *)0)->type), sizeof( ((idForce_Field *)0)->type ) },
	{ "forceFieldApplyType", "applyType", (int)(&((idForce_Field *)0)->applyType), sizeof( ((idForce_Field *)0)->applyType ) },
	{ "float", "magnitude", (int)(&((idForce_Field *)0)->magnitude), sizeof( ((idForce_Field *)0)->magnitude ) },
	{ "idVec3", "dir", (int)(&((idForce_Field *)0)->dir), sizeof( ((idForce_Field *)0)->dir ) },
	{ "float", "randomTorque", (int)(&((idForce_Field *)0)->randomTorque), sizeof( ((idForce_Field *)0)->randomTorque ) },
	{ "bool", "playerOnly", (int)(&((idForce_Field *)0)->playerOnly), sizeof( ((idForce_Field *)0)->playerOnly ) },
	{ "bool", "monsterOnly", (int)(&((idForce_Field *)0)->monsterOnly), sizeof( ((idForce_Field *)0)->monsterOnly ) },
	{ "idClipModel *", "clipModel", (int)(&((idForce_Field *)0)->clipModel), sizeof( ((idForce_Field *)0)->clipModel ) },
	{ NULL, 0 }
};

intptr_t idForce_Spring::Invoke(idForce_Spring *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	return 0;

};

static classVariableInfo_t idForce_Spring_typeInfo[] = {
	{ ": float", "Kstretch", (int)(&((idForce_Spring *)0)->Kstretch), sizeof( ((idForce_Spring *)0)->Kstretch ) },
	{ "float", "Kcompress", (int)(&((idForce_Spring *)0)->Kcompress), sizeof( ((idForce_Spring *)0)->Kcompress ) },
	{ "float", "damping", (int)(&((idForce_Spring *)0)->damping), sizeof( ((idForce_Spring *)0)->damping ) },
	{ "float", "restLength", (int)(&((idForce_Spring *)0)->restLength), sizeof( ((idForce_Spring *)0)->restLength ) },
	{ "idPhysics *", "physics1", (int)(&((idForce_Spring *)0)->physics1), sizeof( ((idForce_Spring *)0)->physics1 ) },
	{ "int", "id1", (int)(&((idForce_Spring *)0)->id1), sizeof( ((idForce_Spring *)0)->id1 ) },
	{ "idVec3", "p1", (int)(&((idForce_Spring *)0)->p1), sizeof( ((idForce_Spring *)0)->p1 ) },
	{ "idPhysics *", "physics2", (int)(&((idForce_Spring *)0)->physics2), sizeof( ((idForce_Spring *)0)->physics2 ) },
	{ "int", "id2", (int)(&((idForce_Spring *)0)->id2), sizeof( ((idForce_Spring *)0)->id2 ) },
	{ "idVec3", "p2", (int)(&((idForce_Spring *)0)->p2), sizeof( ((idForce_Spring *)0)->p2 ) },
	{ NULL, 0 }
};

static classVariableInfo_t impactInfo_t_typeInfo[] = {
	{ "float", "invMass", (int)(&((impactInfo_t *)0)->invMass), sizeof( ((impactInfo_t *)0)->invMass ) },
	{ "idMat3", "invInertiaTensor", (int)(&((impactInfo_t *)0)->invInertiaTensor), sizeof( ((impactInfo_t *)0)->invInertiaTensor ) },
	{ "idVec3", "position", (int)(&((impactInfo_t *)0)->position), sizeof( ((impactInfo_t *)0)->position ) },
	{ "idVec3", "velocity", (int)(&((impactInfo_t *)0)->velocity), sizeof( ((impactInfo_t *)0)->velocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t staticPState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((staticPState_t *)0)->origin), sizeof( ((staticPState_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((staticPState_t *)0)->axis), sizeof( ((staticPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (int)(&((staticPState_t *)0)->localOrigin), sizeof( ((staticPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((staticPState_t *)0)->localAxis), sizeof( ((staticPState_t *)0)->localAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t staticInterpolatePState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((staticInterpolatePState_t *)0)->origin), sizeof( ((staticInterpolatePState_t *)0)->origin ) },
	{ "idQuat", "axis", (int)(&((staticInterpolatePState_t *)0)->axis), sizeof( ((staticInterpolatePState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (int)(&((staticInterpolatePState_t *)0)->localOrigin), sizeof( ((staticInterpolatePState_t *)0)->localOrigin ) },
	{ "idQuat", "localAxis", (int)(&((staticInterpolatePState_t *)0)->localAxis), sizeof( ((staticInterpolatePState_t *)0)->localAxis ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Static::Invoke(idPhysics_Static *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 127517) { // GetGravity
		cls->GetGravity();
		return 0;
	};
	if(functionNameHash == 208704) { // GetGravityNormal
		cls->GetGravityNormal();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	if(functionNameHash == 178966) { // GetNumContacts
		return (intptr_t)cls->GetNumContacts();
	};
	if(functionNameHash == 165117) { // ClearContacts
		cls->ClearContacts();
		return 0;
	};
	if(functionNameHash == 221187) { // HasGroundContacts
		cls->HasGroundContacts();
		return 0;
	};
	if(functionNameHash == 188391) { // GetBlockingInfo
		return (intptr_t)cls->GetBlockingInfo();
	};
	if(functionNameHash == 220800) { // GetBlockingEntity
		return (intptr_t)cls->GetBlockingEntity();
	};
	if(functionNameHash == 198674) { // GetLinearEndTime
		return (intptr_t)cls->GetLinearEndTime();
	};
	if(functionNameHash == 213576) { // GetAngularEndTime
		return (intptr_t)cls->GetAngularEndTime();
	};
	return 0;

};

static classVariableInfo_t idPhysics_Static_typeInfo[] = {
	{ ": idEntity *", "self", (int)(&((idPhysics_Static *)0)->self), sizeof( ((idPhysics_Static *)0)->self ) },
	{ "staticPState_t", "current", (int)(&((idPhysics_Static *)0)->current), sizeof( ((idPhysics_Static *)0)->current ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_Static *)0)->clipModel), sizeof( ((idPhysics_Static *)0)->clipModel ) },
	{ "staticInterpolatePState_t", "previous", (int)(&((idPhysics_Static *)0)->previous), sizeof( ((idPhysics_Static *)0)->previous ) },
	{ "staticInterpolatePState_t", "next", (int)(&((idPhysics_Static *)0)->next), sizeof( ((idPhysics_Static *)0)->next ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_Static *)0)->hasMaster), sizeof( ((idPhysics_Static *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_Static *)0)->isOrientated), sizeof( ((idPhysics_Static *)0)->isOrientated ) },
	{ NULL, 0 }
};

intptr_t idPhysics_StaticMulti::Invoke(idPhysics_StaticMulti *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 127517) { // GetGravity
		cls->GetGravity();
		return 0;
	};
	if(functionNameHash == 208704) { // GetGravityNormal
		cls->GetGravityNormal();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	if(functionNameHash == 178966) { // GetNumContacts
		return (intptr_t)cls->GetNumContacts();
	};
	if(functionNameHash == 165117) { // ClearContacts
		cls->ClearContacts();
		return 0;
	};
	if(functionNameHash == 221187) { // HasGroundContacts
		cls->HasGroundContacts();
		return 0;
	};
	if(functionNameHash == 188391) { // GetBlockingInfo
		return (intptr_t)cls->GetBlockingInfo();
	};
	if(functionNameHash == 220800) { // GetBlockingEntity
		return (intptr_t)cls->GetBlockingEntity();
	};
	if(functionNameHash == 198674) { // GetLinearEndTime
		return (intptr_t)cls->GetLinearEndTime();
	};
	if(functionNameHash == 213576) { // GetAngularEndTime
		return (intptr_t)cls->GetAngularEndTime();
	};
	return 0;

};

static classVariableInfo_t idPhysics_StaticMulti_typeInfo[] = {
	{ ": idEntity *", "self", (int)(&((idPhysics_StaticMulti *)0)->self), sizeof( ((idPhysics_StaticMulti *)0)->self ) },
	{ "idList < staticPState_t , TAG_IDLIB_LIST_PHYSICS >", "current", (int)(&((idPhysics_StaticMulti *)0)->current), sizeof( ((idPhysics_StaticMulti *)0)->current ) },
	{ "idList < idClipModel * , TAG_IDLIB_LIST_PHYSICS >", "clipModels", (int)(&((idPhysics_StaticMulti *)0)->clipModels), sizeof( ((idPhysics_StaticMulti *)0)->clipModels ) },
	{ "idList < staticInterpolatePState_t , TAG_IDLIB_LIST_PHYSICS >", "previous", (int)(&((idPhysics_StaticMulti *)0)->previous), sizeof( ((idPhysics_StaticMulti *)0)->previous ) },
	{ "idList < staticInterpolatePState_t , TAG_IDLIB_LIST_PHYSICS >", "next", (int)(&((idPhysics_StaticMulti *)0)->next), sizeof( ((idPhysics_StaticMulti *)0)->next ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_StaticMulti *)0)->hasMaster), sizeof( ((idPhysics_StaticMulti *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_StaticMulti *)0)->isOrientated), sizeof( ((idPhysics_StaticMulti *)0)->isOrientated ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Base::Invoke(idPhysics_Base *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 127517) { // GetGravity
		cls->GetGravity();
		return 0;
	};
	if(functionNameHash == 208704) { // GetGravityNormal
		cls->GetGravityNormal();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	if(functionNameHash == 178966) { // GetNumContacts
		return (intptr_t)cls->GetNumContacts();
	};
	if(functionNameHash == 165117) { // ClearContacts
		cls->ClearContacts();
		return 0;
	};
	if(functionNameHash == 221187) { // HasGroundContacts
		cls->HasGroundContacts();
		return 0;
	};
	if(functionNameHash == 188391) { // GetBlockingInfo
		return (intptr_t)cls->GetBlockingInfo();
	};
	if(functionNameHash == 220800) { // GetBlockingEntity
		return (intptr_t)cls->GetBlockingEntity();
	};
	if(functionNameHash == 198674) { // GetLinearEndTime
		return (intptr_t)cls->GetLinearEndTime();
	};
	if(functionNameHash == 213576) { // GetAngularEndTime
		return (intptr_t)cls->GetAngularEndTime();
	};
	if(functionNameHash == 392632) { // AddContactEntitiesForContacts
		cls->AddContactEntitiesForContacts();
		return 0;
	};
	if(functionNameHash == 308634) { // ActivateContactEntities
		cls->ActivateContactEntities();
		return 0;
	};
	if(functionNameHash == 181023) { // IsOutsideWorld
		cls->IsOutsideWorld();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_Base_typeInfo[] = {
	{ ": idEntity *", "self", (int)(&((idPhysics_Base *)0)->self), sizeof( ((idPhysics_Base *)0)->self ) },
	{ "int", "clipMask", (int)(&((idPhysics_Base *)0)->clipMask), sizeof( ((idPhysics_Base *)0)->clipMask ) },
	{ "idVec3", "gravityVector", (int)(&((idPhysics_Base *)0)->gravityVector), sizeof( ((idPhysics_Base *)0)->gravityVector ) },
	{ "idVec3", "gravityNormal", (int)(&((idPhysics_Base *)0)->gravityNormal), sizeof( ((idPhysics_Base *)0)->gravityNormal ) },
	{ "idList < contactInfo_t , TAG_IDLIB_LIST_PHYSICS >", "contacts", (int)(&((idPhysics_Base *)0)->contacts), sizeof( ((idPhysics_Base *)0)->contacts ) },
	{ "idList < idEntityPtr < idEntity > , TAG_IDLIB_LIST_PHYSICS >", "contactEntities", (int)(&((idPhysics_Base *)0)->contactEntities), sizeof( ((idPhysics_Base *)0)->contactEntities ) },
	{ NULL, 0 }
};

static classVariableInfo_t physicsInterpolationState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((physicsInterpolationState_t *)0)->origin), sizeof( ((physicsInterpolationState_t *)0)->origin ) },
	{ "idQuat", "axis", (int)(&((physicsInterpolationState_t *)0)->axis), sizeof( ((physicsInterpolationState_t *)0)->axis ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Actor::Invoke(idPhysics_Actor *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 216567) { // GetMasterDeltaYaw
		cls->GetMasterDeltaYaw();
		return 0;
	};
	if(functionNameHash == 195500) { // GetGroundEntity
		return (intptr_t)cls->GetGroundEntity();
	};
	if(functionNameHash == 201909) { // SetClipModelAxis
		cls->SetClipModelAxis();
		return 0;
	};
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 180437) { // GetGravityAxis
		cls->GetGravityAxis();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_Actor_typeInfo[] = {
	{ ": idClipModel *", "clipModel", (int)(&((idPhysics_Actor *)0)->clipModel), sizeof( ((idPhysics_Actor *)0)->clipModel ) },
	{ "idMat3", "clipModelAxis", (int)(&((idPhysics_Actor *)0)->clipModelAxis), sizeof( ((idPhysics_Actor *)0)->clipModelAxis ) },
	{ "float", "mass", (int)(&((idPhysics_Actor *)0)->mass), sizeof( ((idPhysics_Actor *)0)->mass ) },
	{ "float", "invMass", (int)(&((idPhysics_Actor *)0)->invMass), sizeof( ((idPhysics_Actor *)0)->invMass ) },
	{ "idEntity *", "masterEntity", (int)(&((idPhysics_Actor *)0)->masterEntity), sizeof( ((idPhysics_Actor *)0)->masterEntity ) },
	{ "float", "masterYaw", (int)(&((idPhysics_Actor *)0)->masterYaw), sizeof( ((idPhysics_Actor *)0)->masterYaw ) },
	{ "float", "masterDeltaYaw", (int)(&((idPhysics_Actor *)0)->masterDeltaYaw), sizeof( ((idPhysics_Actor *)0)->masterDeltaYaw ) },
	{ "idEntityPtr < idEntity >", "groundEntityPtr", (int)(&((idPhysics_Actor *)0)->groundEntityPtr), sizeof( ((idPhysics_Actor *)0)->groundEntityPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t monsterPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((monsterPState_t *)0)->atRest), sizeof( ((monsterPState_t *)0)->atRest ) },
	{ "bool", "onGround", (int)(&((monsterPState_t *)0)->onGround), sizeof( ((monsterPState_t *)0)->onGround ) },
	{ "idVec3", "origin", (int)(&((monsterPState_t *)0)->origin), sizeof( ((monsterPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (int)(&((monsterPState_t *)0)->velocity), sizeof( ((monsterPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (int)(&((monsterPState_t *)0)->localOrigin), sizeof( ((monsterPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (int)(&((monsterPState_t *)0)->pushVelocity), sizeof( ((monsterPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Monster::Invoke(idPhysics_Monster *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 202109) { // GetMaxStepHeight
		cls->GetMaxStepHeight();
		return 0;
	};
	if(functionNameHash == 99611) { // OnGround
		cls->OnGround();
		return 0;
	};
	if(functionNameHash == 167117) { // GetMoveResult
		cls->GetMoveResult();
		return 0;
	};
	if(functionNameHash == 233773) { // GetSlideMoveEntity
		return (intptr_t)cls->GetSlideMoveEntity();
	};
	if(functionNameHash == 148262) { // EnableImpact
		cls->EnableImpact();
		return 0;
	};
	if(functionNameHash == 162468) { // DisableImpact
		cls->DisableImpact();
		return 0;
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 49945) { // Rest
		cls->Rest();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_Monster_typeInfo[] = {
	{ ": monsterPState_t", "current", (int)(&((idPhysics_Monster *)0)->current), sizeof( ((idPhysics_Monster *)0)->current ) },
	{ "monsterPState_t", "saved", (int)(&((idPhysics_Monster *)0)->saved), sizeof( ((idPhysics_Monster *)0)->saved ) },
	{ "monsterPState_t", "previous", (int)(&((idPhysics_Monster *)0)->previous), sizeof( ((idPhysics_Monster *)0)->previous ) },
	{ "monsterPState_t", "next", (int)(&((idPhysics_Monster *)0)->next), sizeof( ((idPhysics_Monster *)0)->next ) },
	{ "float", "maxStepHeight", (int)(&((idPhysics_Monster *)0)->maxStepHeight), sizeof( ((idPhysics_Monster *)0)->maxStepHeight ) },
	{ "float", "minFloorCosine", (int)(&((idPhysics_Monster *)0)->minFloorCosine), sizeof( ((idPhysics_Monster *)0)->minFloorCosine ) },
	{ "idVec3", "delta", (int)(&((idPhysics_Monster *)0)->delta), sizeof( ((idPhysics_Monster *)0)->delta ) },
	{ "bool", "forceDeltaMove", (int)(&((idPhysics_Monster *)0)->forceDeltaMove), sizeof( ((idPhysics_Monster *)0)->forceDeltaMove ) },
	{ "bool", "fly", (int)(&((idPhysics_Monster *)0)->fly), sizeof( ((idPhysics_Monster *)0)->fly ) },
	{ "bool", "useVelocityMove", (int)(&((idPhysics_Monster *)0)->useVelocityMove), sizeof( ((idPhysics_Monster *)0)->useVelocityMove ) },
	{ "bool", "noImpact", (int)(&((idPhysics_Monster *)0)->noImpact), sizeof( ((idPhysics_Monster *)0)->noImpact ) },
	{ "monsterMoveResult_t", "moveResult", (int)(&((idPhysics_Monster *)0)->moveResult), sizeof( ((idPhysics_Monster *)0)->moveResult ) },
	{ "idEntity *", "blockingEntity", (int)(&((idPhysics_Monster *)0)->blockingEntity), sizeof( ((idPhysics_Monster *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t playerPState_t_typeInfo[] = {
	{ "idVec3", "origin", (int)(&((playerPState_t *)0)->origin), sizeof( ((playerPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (int)(&((playerPState_t *)0)->velocity), sizeof( ((playerPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (int)(&((playerPState_t *)0)->localOrigin), sizeof( ((playerPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (int)(&((playerPState_t *)0)->pushVelocity), sizeof( ((playerPState_t *)0)->pushVelocity ) },
	{ "float", "stepUp", (int)(&((playerPState_t *)0)->stepUp), sizeof( ((playerPState_t *)0)->stepUp ) },
	{ "int", "movementType", (int)(&((playerPState_t *)0)->movementType), sizeof( ((playerPState_t *)0)->movementType ) },
	{ "int", "movementFlags", (int)(&((playerPState_t *)0)->movementFlags), sizeof( ((playerPState_t *)0)->movementFlags ) },
	{ "int", "movementTime", (int)(&((playerPState_t *)0)->movementTime), sizeof( ((playerPState_t *)0)->movementTime ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Player::Invoke(idPhysics_Player *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 202109) { // GetMaxStepHeight
		cls->GetMaxStepHeight();
		return 0;
	};
	if(functionNameHash == 163603) { // GetWaterLevel
		cls->GetWaterLevel();
		return 0;
	};
	if(functionNameHash == 152257) { // GetWaterType
		return (intptr_t)cls->GetWaterType();
	};
	if(functionNameHash == 110484) { // HasJumped
		cls->HasJumped();
		return 0;
	};
	if(functionNameHash == 150305) { // HasSteppedUp
		cls->HasSteppedUp();
		return 0;
	};
	if(functionNameHash == 110457) { // GetStepUp
		cls->GetStepUp();
		return 0;
	};
	if(functionNameHash == 138844) { // IsCrouching
		cls->IsCrouching();
		return 0;
	};
	if(functionNameHash == 95320) { // OnLadder
		cls->OnLadder();
		return 0;
	};
	if(functionNameHash == 192322) { // PlayerGetOrigin
		cls->PlayerGetOrigin();
		return 0;
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 250305) { // ClearPushedVelocity
		cls->ClearPushedVelocity();
		return 0;
	};
	if(functionNameHash == 192377) { // SnapToNextState
		cls->SnapToNextState();
		return 0;
	};
	if(functionNameHash == 101816) { // Friction
		cls->Friction();
		return 0;
	};
	if(functionNameHash == 166878) { // WaterJumpMove
		cls->WaterJumpMove();
		return 0;
	};
	if(functionNameHash == 113491) { // WaterMove
		cls->WaterMove();
		return 0;
	};
	if(functionNameHash == 86235) { // FlyMove
		cls->FlyMove();
		return 0;
	};
	if(functionNameHash == 84433) { // AirMove
		cls->AirMove();
		return 0;
	};
	if(functionNameHash == 98826) { // WalkMove
		cls->WalkMove();
		return 0;
	};
	if(functionNameHash == 94860) { // DeadMove
		cls->DeadMove();
		return 0;
	};
	if(functionNameHash == 126085) { // NoclipMove
		cls->NoclipMove();
		return 0;
	};
	if(functionNameHash == 169622) { // SpectatorMove
		cls->SpectatorMove();
		return 0;
	};
	if(functionNameHash == 123068) { // LadderMove
		cls->LadderMove();
		return 0;
	};
	if(functionNameHash == 136792) { // CheckGround
		cls->CheckGround();
		return 0;
	};
	if(functionNameHash == 107033) { // CheckDuck
		cls->CheckDuck();
		return 0;
	};
	if(functionNameHash == 132396) { // CheckLadder
		cls->CheckLadder();
		return 0;
	};
	if(functionNameHash == 109672) { // CheckJump
		cls->CheckJump();
		return 0;
	};
	if(functionNameHash == 176680) { // CheckWaterJump
		cls->CheckWaterJump();
		return 0;
	};
	if(functionNameHash == 165031) { // SetWaterLevel
		cls->SetWaterLevel();
		return 0;
	};
	if(functionNameHash == 127768) { // DropTimers
		cls->DropTimers();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_Player_typeInfo[] = {
	{ ": playerPState_t", "current", (int)(&((idPhysics_Player *)0)->current), sizeof( ((idPhysics_Player *)0)->current ) },
	{ "playerPState_t", "saved", (int)(&((idPhysics_Player *)0)->saved), sizeof( ((idPhysics_Player *)0)->saved ) },
	{ "playerPState_t", "previous", (int)(&((idPhysics_Player *)0)->previous), sizeof( ((idPhysics_Player *)0)->previous ) },
	{ "playerPState_t", "next", (int)(&((idPhysics_Player *)0)->next), sizeof( ((idPhysics_Player *)0)->next ) },
	{ "float", "walkSpeed", (int)(&((idPhysics_Player *)0)->walkSpeed), sizeof( ((idPhysics_Player *)0)->walkSpeed ) },
	{ "float", "crouchSpeed", (int)(&((idPhysics_Player *)0)->crouchSpeed), sizeof( ((idPhysics_Player *)0)->crouchSpeed ) },
	{ "float", "maxStepHeight", (int)(&((idPhysics_Player *)0)->maxStepHeight), sizeof( ((idPhysics_Player *)0)->maxStepHeight ) },
	{ "float", "maxJumpHeight", (int)(&((idPhysics_Player *)0)->maxJumpHeight), sizeof( ((idPhysics_Player *)0)->maxJumpHeight ) },
	{ "int", "debugLevel", (int)(&((idPhysics_Player *)0)->debugLevel), sizeof( ((idPhysics_Player *)0)->debugLevel ) },
	{ "usercmd_t", "command", (int)(&((idPhysics_Player *)0)->command), sizeof( ((idPhysics_Player *)0)->command ) },
	{ "idVec3", "commandForward", (int)(&((idPhysics_Player *)0)->commandForward), sizeof( ((idPhysics_Player *)0)->commandForward ) },
	{ "int", "framemsec", (int)(&((idPhysics_Player *)0)->framemsec), sizeof( ((idPhysics_Player *)0)->framemsec ) },
	{ "float", "frametime", (int)(&((idPhysics_Player *)0)->frametime), sizeof( ((idPhysics_Player *)0)->frametime ) },
	{ "float", "playerSpeed", (int)(&((idPhysics_Player *)0)->playerSpeed), sizeof( ((idPhysics_Player *)0)->playerSpeed ) },
	{ "idVec3", "viewForward", (int)(&((idPhysics_Player *)0)->viewForward), sizeof( ((idPhysics_Player *)0)->viewForward ) },
	{ "idVec3", "viewRight", (int)(&((idPhysics_Player *)0)->viewRight), sizeof( ((idPhysics_Player *)0)->viewRight ) },
	{ "bool", "walking", (int)(&((idPhysics_Player *)0)->walking), sizeof( ((idPhysics_Player *)0)->walking ) },
	{ "bool", "groundPlane", (int)(&((idPhysics_Player *)0)->groundPlane), sizeof( ((idPhysics_Player *)0)->groundPlane ) },
	{ "trace_t", "groundTrace", (int)(&((idPhysics_Player *)0)->groundTrace), sizeof( ((idPhysics_Player *)0)->groundTrace ) },
	{ "const idMaterial *", "groundMaterial", (int)(&((idPhysics_Player *)0)->groundMaterial), sizeof( ((idPhysics_Player *)0)->groundMaterial ) },
	{ "bool", "ladder", (int)(&((idPhysics_Player *)0)->ladder), sizeof( ((idPhysics_Player *)0)->ladder ) },
	{ "idVec3", "ladderNormal", (int)(&((idPhysics_Player *)0)->ladderNormal), sizeof( ((idPhysics_Player *)0)->ladderNormal ) },
	{ "waterLevel_t", "waterLevel", (int)(&((idPhysics_Player *)0)->waterLevel), sizeof( ((idPhysics_Player *)0)->waterLevel ) },
	{ "int", "waterType", (int)(&((idPhysics_Player *)0)->waterType), sizeof( ((idPhysics_Player *)0)->waterType ) },
	{ "bool", "clientPusherLocked", (int)(&((idPhysics_Player *)0)->clientPusherLocked), sizeof( ((idPhysics_Player *)0)->clientPusherLocked ) },
	{ NULL, 0 }
};

static classVariableInfo_t parametricPState_t_typeInfo[] = {
	{ "int", "time", (int)(&((parametricPState_t *)0)->time), sizeof( ((parametricPState_t *)0)->time ) },
	{ "int", "atRest", (int)(&((parametricPState_t *)0)->atRest), sizeof( ((parametricPState_t *)0)->atRest ) },
	{ "idVec3", "origin", (int)(&((parametricPState_t *)0)->origin), sizeof( ((parametricPState_t *)0)->origin ) },
	{ "idAngles", "angles", (int)(&((parametricPState_t *)0)->angles), sizeof( ((parametricPState_t *)0)->angles ) },
	{ "idMat3", "axis", (int)(&((parametricPState_t *)0)->axis), sizeof( ((parametricPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (int)(&((parametricPState_t *)0)->localOrigin), sizeof( ((parametricPState_t *)0)->localOrigin ) },
	{ "idAngles", "localAngles", (int)(&((parametricPState_t *)0)->localAngles), sizeof( ((parametricPState_t *)0)->localAngles ) },
	{ "idExtrapolate < idVec3 >", "linearExtrapolation", (int)(&((parametricPState_t *)0)->linearExtrapolation), sizeof( ((parametricPState_t *)0)->linearExtrapolation ) },
	{ "idExtrapolate < idAngles >", "angularExtrapolation", (int)(&((parametricPState_t *)0)->angularExtrapolation), sizeof( ((parametricPState_t *)0)->angularExtrapolation ) },
	{ "idInterpolateAccelDecelLinear < idVec3 >", "linearInterpolation", (int)(&((parametricPState_t *)0)->linearInterpolation), sizeof( ((parametricPState_t *)0)->linearInterpolation ) },
	{ "idInterpolateAccelDecelLinear < idAngles >", "angularInterpolation", (int)(&((parametricPState_t *)0)->angularInterpolation), sizeof( ((parametricPState_t *)0)->angularInterpolation ) },
	{ "idCurve_Spline < idVec3 > *", "spline", (int)(&((parametricPState_t *)0)->spline), sizeof( ((parametricPState_t *)0)->spline ) },
	{ "idInterpolateAccelDecelLinear < float >", "splineInterpolate", (int)(&((parametricPState_t *)0)->splineInterpolate), sizeof( ((parametricPState_t *)0)->splineInterpolate ) },
	{ "bool", "useSplineAngles", (int)(&((parametricPState_t *)0)->useSplineAngles), sizeof( ((parametricPState_t *)0)->useSplineAngles ) },
	{ NULL, 0 }
};

intptr_t idPhysics_Parametric::Invoke(idPhysics_Parametric *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 100471) { // IsPusher
		cls->IsPusher();
		return 0;
	};
	if(functionNameHash == 355226) { // GetLinearExtrapolationType
		cls->GetLinearExtrapolationType();
		return 0;
	};
	if(functionNameHash == 371254) { // GetAngularExtrapolationType
		cls->GetAngularExtrapolationType();
		return 0;
	};
	if(functionNameHash == 111711) { // GetSpline
		return (intptr_t)cls->GetSpline();
	};
	if(functionNameHash == 275732) { // GetSplineAcceleration
		return (intptr_t)cls->GetSplineAcceleration();
	};
	if(functionNameHash == 276374) { // GetSplineDeceleration
		return (intptr_t)cls->GetSplineDeceleration();
	};
	if(functionNameHash == 220932) { // UsingSplineAngles
		cls->UsingSplineAngles();
		return 0;
	};
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 188391) { // GetBlockingInfo
		return (intptr_t)cls->GetBlockingInfo();
	};
	if(functionNameHash == 220800) { // GetBlockingEntity
		return (intptr_t)cls->GetBlockingEntity();
	};
	if(functionNameHash == 198674) { // GetLinearEndTime
		return (intptr_t)cls->GetLinearEndTime();
	};
	if(functionNameHash == 213576) { // GetAngularEndTime
		return (intptr_t)cls->GetAngularEndTime();
	};
	if(functionNameHash == 49945) { // Rest
		cls->Rest();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_Parametric_typeInfo[] = {
	{ ": parametricPState_t", "current", (int)(&((idPhysics_Parametric *)0)->current), sizeof( ((idPhysics_Parametric *)0)->current ) },
	{ "parametricPState_t", "saved", (int)(&((idPhysics_Parametric *)0)->saved), sizeof( ((idPhysics_Parametric *)0)->saved ) },
	{ "physicsInterpolationState_t", "previous", (int)(&((idPhysics_Parametric *)0)->previous), sizeof( ((idPhysics_Parametric *)0)->previous ) },
	{ "physicsInterpolationState_t", "next", (int)(&((idPhysics_Parametric *)0)->next), sizeof( ((idPhysics_Parametric *)0)->next ) },
	{ "bool", "isPusher", (int)(&((idPhysics_Parametric *)0)->isPusher), sizeof( ((idPhysics_Parametric *)0)->isPusher ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_Parametric *)0)->clipModel), sizeof( ((idPhysics_Parametric *)0)->clipModel ) },
	{ "int", "pushFlags", (int)(&((idPhysics_Parametric *)0)->pushFlags), sizeof( ((idPhysics_Parametric *)0)->pushFlags ) },
	{ "trace_t", "pushResults", (int)(&((idPhysics_Parametric *)0)->pushResults), sizeof( ((idPhysics_Parametric *)0)->pushResults ) },
	{ "bool", "isBlocked", (int)(&((idPhysics_Parametric *)0)->isBlocked), sizeof( ((idPhysics_Parametric *)0)->isBlocked ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_Parametric *)0)->hasMaster), sizeof( ((idPhysics_Parametric *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_Parametric *)0)->isOrientated), sizeof( ((idPhysics_Parametric *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyIState_t_typeInfo[] = {
	{ "idVec3", "position", (int)(&((rigidBodyIState_t *)0)->position), sizeof( ((rigidBodyIState_t *)0)->position ) },
	{ "idMat3", "orientation", (int)(&((rigidBodyIState_t *)0)->orientation), sizeof( ((rigidBodyIState_t *)0)->orientation ) },
	{ "idVec3", "linearMomentum", (int)(&((rigidBodyIState_t *)0)->linearMomentum), sizeof( ((rigidBodyIState_t *)0)->linearMomentum ) },
	{ "idVec3", "angularMomentum", (int)(&((rigidBodyIState_t *)0)->angularMomentum), sizeof( ((rigidBodyIState_t *)0)->angularMomentum ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((rigidBodyPState_t *)0)->atRest), sizeof( ((rigidBodyPState_t *)0)->atRest ) },
	{ "float", "lastTimeStep", (int)(&((rigidBodyPState_t *)0)->lastTimeStep), sizeof( ((rigidBodyPState_t *)0)->lastTimeStep ) },
	{ "idVec3", "localOrigin", (int)(&((rigidBodyPState_t *)0)->localOrigin), sizeof( ((rigidBodyPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((rigidBodyPState_t *)0)->localAxis), sizeof( ((rigidBodyPState_t *)0)->localAxis ) },
	{ "idVec6", "pushVelocity", (int)(&((rigidBodyPState_t *)0)->pushVelocity), sizeof( ((rigidBodyPState_t *)0)->pushVelocity ) },
	{ "idVec3", "externalForce", (int)(&((rigidBodyPState_t *)0)->externalForce), sizeof( ((rigidBodyPState_t *)0)->externalForce ) },
	{ "idVec3", "externalTorque", (int)(&((rigidBodyPState_t *)0)->externalTorque), sizeof( ((rigidBodyPState_t *)0)->externalTorque ) },
	{ "rigidBodyIState_t", "i", (int)(&((rigidBodyPState_t *)0)->i), sizeof( ((rigidBodyPState_t *)0)->i ) },
	{ NULL, 0 }
};

intptr_t idPhysics_RigidBody::Invoke(idPhysics_RigidBody *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 138332) { // DropToFloor
		cls->DropToFloor();
		return 0;
	};
	if(functionNameHash == 111496) { // NoContact
		cls->NoContact();
		return 0;
	};
	if(functionNameHash == 148262) { // EnableImpact
		cls->EnableImpact();
		return 0;
	};
	if(functionNameHash == 162468) { // DisableImpact
		cls->DisableImpact();
		return 0;
	};
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	if(functionNameHash == 230133) { // DropToFloorAndRest
		cls->DropToFloorAndRest();
		return 0;
	};
	if(functionNameHash == 147808) { // TestIfAtRest
		cls->TestIfAtRest();
		return 0;
	};
	if(functionNameHash == 49945) { // Rest
		cls->Rest();
		return 0;
	};
	if(functionNameHash == 109030) { // DebugDraw
		cls->DebugDraw();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_RigidBody_typeInfo[] = {
	{ ": rigidBodyPState_t", "current", (int)(&((idPhysics_RigidBody *)0)->current), sizeof( ((idPhysics_RigidBody *)0)->current ) },
	{ "rigidBodyPState_t", "saved", (int)(&((idPhysics_RigidBody *)0)->saved), sizeof( ((idPhysics_RigidBody *)0)->saved ) },
	{ "rigidBodyPState_t", "previous", (int)(&((idPhysics_RigidBody *)0)->previous), sizeof( ((idPhysics_RigidBody *)0)->previous ) },
	{ "rigidBodyPState_t", "next", (int)(&((idPhysics_RigidBody *)0)->next), sizeof( ((idPhysics_RigidBody *)0)->next ) },
	{ "float", "linearFriction", (int)(&((idPhysics_RigidBody *)0)->linearFriction), sizeof( ((idPhysics_RigidBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idPhysics_RigidBody *)0)->angularFriction), sizeof( ((idPhysics_RigidBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idPhysics_RigidBody *)0)->contactFriction), sizeof( ((idPhysics_RigidBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idPhysics_RigidBody *)0)->bouncyness), sizeof( ((idPhysics_RigidBody *)0)->bouncyness ) },
	{ "idClipModel *", "clipModel", (int)(&((idPhysics_RigidBody *)0)->clipModel), sizeof( ((idPhysics_RigidBody *)0)->clipModel ) },
	{ "float", "mass", (int)(&((idPhysics_RigidBody *)0)->mass), sizeof( ((idPhysics_RigidBody *)0)->mass ) },
	{ "float", "inverseMass", (int)(&((idPhysics_RigidBody *)0)->inverseMass), sizeof( ((idPhysics_RigidBody *)0)->inverseMass ) },
	{ "idVec3", "centerOfMass", (int)(&((idPhysics_RigidBody *)0)->centerOfMass), sizeof( ((idPhysics_RigidBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (int)(&((idPhysics_RigidBody *)0)->inertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (int)(&((idPhysics_RigidBody *)0)->inverseInertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inverseInertiaTensor ) },
	{ "idODE *", "integrator", (int)(&((idPhysics_RigidBody *)0)->integrator), sizeof( ((idPhysics_RigidBody *)0)->integrator ) },
	{ "bool", "dropToFloor", (int)(&((idPhysics_RigidBody *)0)->dropToFloor), sizeof( ((idPhysics_RigidBody *)0)->dropToFloor ) },
	{ "bool", "testSolid", (int)(&((idPhysics_RigidBody *)0)->testSolid), sizeof( ((idPhysics_RigidBody *)0)->testSolid ) },
	{ "bool", "noImpact", (int)(&((idPhysics_RigidBody *)0)->noImpact), sizeof( ((idPhysics_RigidBody *)0)->noImpact ) },
	{ "bool", "noContact", (int)(&((idPhysics_RigidBody *)0)->noContact), sizeof( ((idPhysics_RigidBody *)0)->noContact ) },
	{ "bool", "hasMaster", (int)(&((idPhysics_RigidBody *)0)->hasMaster), sizeof( ((idPhysics_RigidBody *)0)->hasMaster ) },
	{ "bool", "isOrientated", (int)(&((idPhysics_RigidBody *)0)->isOrientated), sizeof( ((idPhysics_RigidBody *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_constraintFlags_s_typeInfo[] = {
//	{ "bool", "allowPrimary", (int)(&((idAFConstraint::constraintFlags_s *)0)->allowPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->allowPrimary ) },
//	{ "bool", "frameConstraint", (int)(&((idAFConstraint::constraintFlags_s *)0)->frameConstraint), sizeof( ((idAFConstraint::constraintFlags_s *)0)->frameConstraint ) },
//	{ "bool", "noCollision", (int)(&((idAFConstraint::constraintFlags_s *)0)->noCollision), sizeof( ((idAFConstraint::constraintFlags_s *)0)->noCollision ) },
//	{ "bool", "isPrimary", (int)(&((idAFConstraint::constraintFlags_s *)0)->isPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isPrimary ) },
//	{ "bool", "isZero", (int)(&((idAFConstraint::constraintFlags_s *)0)->isZero), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_typeInfo[] = {
	{ ": constraintType_t", "type", (int)(&((idAFConstraint *)0)->type), sizeof( ((idAFConstraint *)0)->type ) },
	{ "idStr", "name", (int)(&((idAFConstraint *)0)->name), sizeof( ((idAFConstraint *)0)->name ) },
	{ "idAFBody *", "body1", (int)(&((idAFConstraint *)0)->body1), sizeof( ((idAFConstraint *)0)->body1 ) },
	{ "idAFBody *", "body2", (int)(&((idAFConstraint *)0)->body2), sizeof( ((idAFConstraint *)0)->body2 ) },
	{ "idPhysics_AF *", "physics", (int)(&((idAFConstraint *)0)->physics), sizeof( ((idAFConstraint *)0)->physics ) },
	{ "idMatX", "J1", (int)(&((idAFConstraint *)0)->J1), sizeof( ((idAFConstraint *)0)->J1 ) },
	{ "idMatX", "J2", (int)(&((idAFConstraint *)0)->J2), sizeof( ((idAFConstraint *)0)->J2 ) },
	{ "idVecX", "c1", (int)(&((idAFConstraint *)0)->c1), sizeof( ((idAFConstraint *)0)->c1 ) },
	{ "idVecX", "c2", (int)(&((idAFConstraint *)0)->c2), sizeof( ((idAFConstraint *)0)->c2 ) },
	{ "idVecX", "lo", (int)(&((idAFConstraint *)0)->lo), sizeof( ((idAFConstraint *)0)->lo ) },
	{ "idVecX", "hi", (int)(&((idAFConstraint *)0)->hi), sizeof( ((idAFConstraint *)0)->hi ) },
	{ "idVecX", "e", (int)(&((idAFConstraint *)0)->e), sizeof( ((idAFConstraint *)0)->e ) },
	{ "idAFConstraint *", "boxConstraint", (int)(&((idAFConstraint *)0)->boxConstraint), sizeof( ((idAFConstraint *)0)->boxConstraint ) },
	{ "int[6]", "boxIndex", (int)(&((idAFConstraint *)0)->boxIndex), sizeof( ((idAFConstraint *)0)->boxIndex ) },
	{ "idMatX", "invI", (int)(&((idAFConstraint *)0)->invI), sizeof( ((idAFConstraint *)0)->invI ) },
	{ "idMatX", "J", (int)(&((idAFConstraint *)0)->J), sizeof( ((idAFConstraint *)0)->J ) },
	{ "idVecX", "s", (int)(&((idAFConstraint *)0)->s), sizeof( ((idAFConstraint *)0)->s ) },
	{ "idVecX", "lm", (int)(&((idAFConstraint *)0)->lm), sizeof( ((idAFConstraint *)0)->lm ) },
	{ "int", "firstIndex", (int)(&((idAFConstraint *)0)->firstIndex), sizeof( ((idAFConstraint *)0)->firstIndex ) },
	{ "idAFConstraint::constraintFlags_s", "fl", (int)(&((idAFConstraint *)0)->fl), sizeof( ((idAFConstraint *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Fixed_typeInfo[] = {
	{ ": idVec3", "offset", (int)(&((idAFConstraint_Fixed *)0)->offset), sizeof( ((idAFConstraint_Fixed *)0)->offset ) },
	{ "idMat3", "relAxis", (int)(&((idAFConstraint_Fixed *)0)->relAxis), sizeof( ((idAFConstraint_Fixed *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJoint_typeInfo[] = {
	{ ": idVec3", "anchor1", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor1), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor2), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor2 ) },
	{ "float", "friction", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->friction), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->coneLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_BallAndSocketJointFriction *", "fc", (int)(&((idAFConstraint_BallAndSocketJoint *)0)->fc), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJointFriction_typeInfo[] = {
	{ ": idAFConstraint_BallAndSocketJoint *", "joint", (int)(&((idAFConstraint_BallAndSocketJointFriction *)0)->joint), sizeof( ((idAFConstraint_BallAndSocketJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJoint_typeInfo[] = {
	{ ": idVec3", "anchor1", (int)(&((idAFConstraint_UniversalJoint *)0)->anchor1), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_UniversalJoint *)0)->anchor2), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor2 ) },
	{ "idVec3", "shaft1", (int)(&((idAFConstraint_UniversalJoint *)0)->shaft1), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft1 ) },
	{ "idVec3", "shaft2", (int)(&((idAFConstraint_UniversalJoint *)0)->shaft2), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft2 ) },
	{ "idVec3", "axis1", (int)(&((idAFConstraint_UniversalJoint *)0)->axis1), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis1 ) },
	{ "idVec3", "axis2", (int)(&((idAFConstraint_UniversalJoint *)0)->axis2), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis2 ) },
	{ "float", "friction", (int)(&((idAFConstraint_UniversalJoint *)0)->friction), sizeof( ((idAFConstraint_UniversalJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_UniversalJoint *)0)->coneLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (int)(&((idAFConstraint_UniversalJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_UniversalJointFriction *", "fc", (int)(&((idAFConstraint_UniversalJoint *)0)->fc), sizeof( ((idAFConstraint_UniversalJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJointFriction_typeInfo[] = {
	{ ": idAFConstraint_UniversalJoint *", "joint", (int)(&((idAFConstraint_UniversalJointFriction *)0)->joint), sizeof( ((idAFConstraint_UniversalJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_CylindricalJoint_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Hinge_typeInfo[] = {
	{ ": idVec3", "anchor1", (int)(&((idAFConstraint_Hinge *)0)->anchor1), sizeof( ((idAFConstraint_Hinge *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Hinge *)0)->anchor2), sizeof( ((idAFConstraint_Hinge *)0)->anchor2 ) },
	{ "idVec3", "axis1", (int)(&((idAFConstraint_Hinge *)0)->axis1), sizeof( ((idAFConstraint_Hinge *)0)->axis1 ) },
	{ "idVec3", "axis2", (int)(&((idAFConstraint_Hinge *)0)->axis2), sizeof( ((idAFConstraint_Hinge *)0)->axis2 ) },
	{ "idMat3", "initialAxis", (int)(&((idAFConstraint_Hinge *)0)->initialAxis), sizeof( ((idAFConstraint_Hinge *)0)->initialAxis ) },
	{ "float", "friction", (int)(&((idAFConstraint_Hinge *)0)->friction), sizeof( ((idAFConstraint_Hinge *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (int)(&((idAFConstraint_Hinge *)0)->coneLimit), sizeof( ((idAFConstraint_Hinge *)0)->coneLimit ) },
	{ "idAFConstraint_HingeSteering *", "steering", (int)(&((idAFConstraint_Hinge *)0)->steering), sizeof( ((idAFConstraint_Hinge *)0)->steering ) },
	{ "idAFConstraint_HingeFriction *", "fc", (int)(&((idAFConstraint_Hinge *)0)->fc), sizeof( ((idAFConstraint_Hinge *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeFriction_typeInfo[] = {
	{ ": idAFConstraint_Hinge *", "hinge", (int)(&((idAFConstraint_HingeFriction *)0)->hinge), sizeof( ((idAFConstraint_HingeFriction *)0)->hinge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeSteering_typeInfo[] = {
	{ ": idAFConstraint_Hinge *", "hinge", (int)(&((idAFConstraint_HingeSteering *)0)->hinge), sizeof( ((idAFConstraint_HingeSteering *)0)->hinge ) },
	{ "float", "steerAngle", (int)(&((idAFConstraint_HingeSteering *)0)->steerAngle), sizeof( ((idAFConstraint_HingeSteering *)0)->steerAngle ) },
	{ "float", "steerSpeed", (int)(&((idAFConstraint_HingeSteering *)0)->steerSpeed), sizeof( ((idAFConstraint_HingeSteering *)0)->steerSpeed ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_HingeSteering *)0)->epsilon), sizeof( ((idAFConstraint_HingeSteering *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Slider_typeInfo[] = {
	{ ": idVec3", "axis", (int)(&((idAFConstraint_Slider *)0)->axis), sizeof( ((idAFConstraint_Slider *)0)->axis ) },
	{ "idVec3", "offset", (int)(&((idAFConstraint_Slider *)0)->offset), sizeof( ((idAFConstraint_Slider *)0)->offset ) },
	{ "idMat3", "relAxis", (int)(&((idAFConstraint_Slider *)0)->relAxis), sizeof( ((idAFConstraint_Slider *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Line_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Plane_typeInfo[] = {
	{ ": idVec3", "anchor1", (int)(&((idAFConstraint_Plane *)0)->anchor1), sizeof( ((idAFConstraint_Plane *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Plane *)0)->anchor2), sizeof( ((idAFConstraint_Plane *)0)->anchor2 ) },
	{ "idVec3", "planeNormal", (int)(&((idAFConstraint_Plane *)0)->planeNormal), sizeof( ((idAFConstraint_Plane *)0)->planeNormal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Spring_typeInfo[] = {
	{ ": idVec3", "anchor1", (int)(&((idAFConstraint_Spring *)0)->anchor1), sizeof( ((idAFConstraint_Spring *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (int)(&((idAFConstraint_Spring *)0)->anchor2), sizeof( ((idAFConstraint_Spring *)0)->anchor2 ) },
	{ "float", "kstretch", (int)(&((idAFConstraint_Spring *)0)->kstretch), sizeof( ((idAFConstraint_Spring *)0)->kstretch ) },
	{ "float", "kcompress", (int)(&((idAFConstraint_Spring *)0)->kcompress), sizeof( ((idAFConstraint_Spring *)0)->kcompress ) },
	{ "float", "damping", (int)(&((idAFConstraint_Spring *)0)->damping), sizeof( ((idAFConstraint_Spring *)0)->damping ) },
	{ "float", "restLength", (int)(&((idAFConstraint_Spring *)0)->restLength), sizeof( ((idAFConstraint_Spring *)0)->restLength ) },
	{ "float", "minLength", (int)(&((idAFConstraint_Spring *)0)->minLength), sizeof( ((idAFConstraint_Spring *)0)->minLength ) },
	{ "float", "maxLength", (int)(&((idAFConstraint_Spring *)0)->maxLength), sizeof( ((idAFConstraint_Spring *)0)->maxLength ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Contact_typeInfo[] = {
	{ ": contactInfo_t", "contact", (int)(&((idAFConstraint_Contact *)0)->contact), sizeof( ((idAFConstraint_Contact *)0)->contact ) },
	{ "idAFConstraint_ContactFriction *", "fc", (int)(&((idAFConstraint_Contact *)0)->fc), sizeof( ((idAFConstraint_Contact *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ContactFriction_typeInfo[] = {
	{ ": idAFConstraint_Contact *", "cc", (int)(&((idAFConstraint_ContactFriction *)0)->cc), sizeof( ((idAFConstraint_ContactFriction *)0)->cc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ConeLimit_typeInfo[] = {
	{ ": idVec3", "coneAnchor", (int)(&((idAFConstraint_ConeLimit *)0)->coneAnchor), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAnchor ) },
	{ "idVec3", "coneAxis", (int)(&((idAFConstraint_ConeLimit *)0)->coneAxis), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAxis ) },
	{ "idVec3", "body1Axis", (int)(&((idAFConstraint_ConeLimit *)0)->body1Axis), sizeof( ((idAFConstraint_ConeLimit *)0)->body1Axis ) },
	{ "float", "cosAngle", (int)(&((idAFConstraint_ConeLimit *)0)->cosAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosAngle ) },
	{ "float", "sinHalfAngle", (int)(&((idAFConstraint_ConeLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->sinHalfAngle ) },
	{ "float", "cosHalfAngle", (int)(&((idAFConstraint_ConeLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_ConeLimit *)0)->epsilon), sizeof( ((idAFConstraint_ConeLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_PyramidLimit_typeInfo[] = {
	{ ": idVec3", "pyramidAnchor", (int)(&((idAFConstraint_PyramidLimit *)0)->pyramidAnchor), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidAnchor ) },
	{ "idMat3", "pyramidBasis", (int)(&((idAFConstraint_PyramidLimit *)0)->pyramidBasis), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidBasis ) },
	{ "idVec3", "body1Axis", (int)(&((idAFConstraint_PyramidLimit *)0)->body1Axis), sizeof( ((idAFConstraint_PyramidLimit *)0)->body1Axis ) },
	{ "float[2]", "cosAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->cosAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosAngle ) },
	{ "float[2]", "sinHalfAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->sinHalfAngle ) },
	{ "float[2]", "cosHalfAngle", (int)(&((idAFConstraint_PyramidLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_PyramidLimit *)0)->epsilon), sizeof( ((idAFConstraint_PyramidLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Suspension_typeInfo[] = {
	{ ": idVec3", "localOrigin", (int)(&((idAFConstraint_Suspension *)0)->localOrigin), sizeof( ((idAFConstraint_Suspension *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (int)(&((idAFConstraint_Suspension *)0)->localAxis), sizeof( ((idAFConstraint_Suspension *)0)->localAxis ) },
	{ "float", "suspensionUp", (int)(&((idAFConstraint_Suspension *)0)->suspensionUp), sizeof( ((idAFConstraint_Suspension *)0)->suspensionUp ) },
	{ "float", "suspensionDown", (int)(&((idAFConstraint_Suspension *)0)->suspensionDown), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDown ) },
	{ "float", "suspensionKCompress", (int)(&((idAFConstraint_Suspension *)0)->suspensionKCompress), sizeof( ((idAFConstraint_Suspension *)0)->suspensionKCompress ) },
	{ "float", "suspensionDamping", (int)(&((idAFConstraint_Suspension *)0)->suspensionDamping), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDamping ) },
	{ "float", "steerAngle", (int)(&((idAFConstraint_Suspension *)0)->steerAngle), sizeof( ((idAFConstraint_Suspension *)0)->steerAngle ) },
	{ "float", "friction", (int)(&((idAFConstraint_Suspension *)0)->friction), sizeof( ((idAFConstraint_Suspension *)0)->friction ) },
	{ "bool", "motorEnabled", (int)(&((idAFConstraint_Suspension *)0)->motorEnabled), sizeof( ((idAFConstraint_Suspension *)0)->motorEnabled ) },
	{ "float", "motorForce", (int)(&((idAFConstraint_Suspension *)0)->motorForce), sizeof( ((idAFConstraint_Suspension *)0)->motorForce ) },
	{ "float", "motorVelocity", (int)(&((idAFConstraint_Suspension *)0)->motorVelocity), sizeof( ((idAFConstraint_Suspension *)0)->motorVelocity ) },
	{ "idClipModel *", "wheelModel", (int)(&((idAFConstraint_Suspension *)0)->wheelModel), sizeof( ((idAFConstraint_Suspension *)0)->wheelModel ) },
	{ "idVec3", "wheelOffset", (int)(&((idAFConstraint_Suspension *)0)->wheelOffset), sizeof( ((idAFConstraint_Suspension *)0)->wheelOffset ) },
	{ "trace_t", "trace", (int)(&((idAFConstraint_Suspension *)0)->trace), sizeof( ((idAFConstraint_Suspension *)0)->trace ) },
	{ "float", "epsilon", (int)(&((idAFConstraint_Suspension *)0)->epsilon), sizeof( ((idAFConstraint_Suspension *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFBodyPState_t_typeInfo[] = {
	{ "idVec3", "worldOrigin", (int)(&((AFBodyPState_t *)0)->worldOrigin), sizeof( ((AFBodyPState_t *)0)->worldOrigin ) },
	{ "idMat3", "worldAxis", (int)(&((AFBodyPState_t *)0)->worldAxis), sizeof( ((AFBodyPState_t *)0)->worldAxis ) },
	{ "idVec6", "spatialVelocity", (int)(&((AFBodyPState_t *)0)->spatialVelocity), sizeof( ((AFBodyPState_t *)0)->spatialVelocity ) },
	{ "idVec6", "externalForce", (int)(&((AFBodyPState_t *)0)->externalForce), sizeof( ((AFBodyPState_t *)0)->externalForce ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_bodyFlags_s_typeInfo[] = {
//	{ "bool", "clipMaskSet", (int)(&((idAFBody::bodyFlags_s *)0)->clipMaskSet), sizeof( ((idAFBody::bodyFlags_s *)0)->clipMaskSet ) },
//	{ "bool", "selfCollision", (int)(&((idAFBody::bodyFlags_s *)0)->selfCollision), sizeof( ((idAFBody::bodyFlags_s *)0)->selfCollision ) },
//	{ "bool", "spatialInertiaSparse", (int)(&((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse), sizeof( ((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse ) },
//	{ "bool", "useFrictionDir", (int)(&((idAFBody::bodyFlags_s *)0)->useFrictionDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useFrictionDir ) },
//	{ "bool", "useContactMotorDir", (int)(&((idAFBody::bodyFlags_s *)0)->useContactMotorDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useContactMotorDir ) },
//	{ "bool", "isZero", (int)(&((idAFBody::bodyFlags_s *)0)->isZero), sizeof( ((idAFBody::bodyFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_typeInfo[] = {
	{ ": idStr", "name", (int)(&((idAFBody *)0)->name), sizeof( ((idAFBody *)0)->name ) },
	{ "idAFBody *", "parent", (int)(&((idAFBody *)0)->parent), sizeof( ((idAFBody *)0)->parent ) },
	{ "idList < idAFBody * , TAG_IDLIB_LIST_PHYSICS >", "children", (int)(&((idAFBody *)0)->children), sizeof( ((idAFBody *)0)->children ) },
	{ "idClipModel *", "clipModel", (int)(&((idAFBody *)0)->clipModel), sizeof( ((idAFBody *)0)->clipModel ) },
	{ "idAFConstraint *", "primaryConstraint", (int)(&((idAFBody *)0)->primaryConstraint), sizeof( ((idAFBody *)0)->primaryConstraint ) },
	{ "idList < idAFConstraint * , TAG_IDLIB_LIST_PHYSICS >", "constraints", (int)(&((idAFBody *)0)->constraints), sizeof( ((idAFBody *)0)->constraints ) },
	{ "idAFTree *", "tree", (int)(&((idAFBody *)0)->tree), sizeof( ((idAFBody *)0)->tree ) },
	{ "float", "linearFriction", (int)(&((idAFBody *)0)->linearFriction), sizeof( ((idAFBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idAFBody *)0)->angularFriction), sizeof( ((idAFBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idAFBody *)0)->contactFriction), sizeof( ((idAFBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idAFBody *)0)->bouncyness), sizeof( ((idAFBody *)0)->bouncyness ) },
	{ "int", "clipMask", (int)(&((idAFBody *)0)->clipMask), sizeof( ((idAFBody *)0)->clipMask ) },
	{ "idVec3", "frictionDir", (int)(&((idAFBody *)0)->frictionDir), sizeof( ((idAFBody *)0)->frictionDir ) },
	{ "idVec3", "contactMotorDir", (int)(&((idAFBody *)0)->contactMotorDir), sizeof( ((idAFBody *)0)->contactMotorDir ) },
	{ "float", "contactMotorVelocity", (int)(&((idAFBody *)0)->contactMotorVelocity), sizeof( ((idAFBody *)0)->contactMotorVelocity ) },
	{ "float", "contactMotorForce", (int)(&((idAFBody *)0)->contactMotorForce), sizeof( ((idAFBody *)0)->contactMotorForce ) },
	{ "float", "mass", (int)(&((idAFBody *)0)->mass), sizeof( ((idAFBody *)0)->mass ) },
	{ "float", "invMass", (int)(&((idAFBody *)0)->invMass), sizeof( ((idAFBody *)0)->invMass ) },
	{ "idVec3", "centerOfMass", (int)(&((idAFBody *)0)->centerOfMass), sizeof( ((idAFBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (int)(&((idAFBody *)0)->inertiaTensor), sizeof( ((idAFBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (int)(&((idAFBody *)0)->inverseInertiaTensor), sizeof( ((idAFBody *)0)->inverseInertiaTensor ) },
	{ "AFBodyPState_t[2]", "state", (int)(&((idAFBody *)0)->state), sizeof( ((idAFBody *)0)->state ) },
	{ "AFBodyPState_t *", "current", (int)(&((idAFBody *)0)->current), sizeof( ((idAFBody *)0)->current ) },
	{ "AFBodyPState_t *", "next", (int)(&((idAFBody *)0)->next), sizeof( ((idAFBody *)0)->next ) },
	{ "AFBodyPState_t", "saved", (int)(&((idAFBody *)0)->saved), sizeof( ((idAFBody *)0)->saved ) },
	{ "idVec3", "atRestOrigin", (int)(&((idAFBody *)0)->atRestOrigin), sizeof( ((idAFBody *)0)->atRestOrigin ) },
	{ "idMat3", "atRestAxis", (int)(&((idAFBody *)0)->atRestAxis), sizeof( ((idAFBody *)0)->atRestAxis ) },
	{ "idMatX", "inverseWorldSpatialInertia", (int)(&((idAFBody *)0)->inverseWorldSpatialInertia), sizeof( ((idAFBody *)0)->inverseWorldSpatialInertia ) },
	{ "idMatX", "I", (int)(&((idAFBody *)0)->I), sizeof( ((idAFBody *)0)->I ) },
	{ "idMatX", "invI", (int)(&((idAFBody *)0)->invI), sizeof( ((idAFBody *)0)->invI ) },
	{ "idMatX", "J", (int)(&((idAFBody *)0)->J), sizeof( ((idAFBody *)0)->J ) },
	{ "idVecX", "s", (int)(&((idAFBody *)0)->s), sizeof( ((idAFBody *)0)->s ) },
	{ "idVecX", "totalForce", (int)(&((idAFBody *)0)->totalForce), sizeof( ((idAFBody *)0)->totalForce ) },
	{ "idVecX", "auxForce", (int)(&((idAFBody *)0)->auxForce), sizeof( ((idAFBody *)0)->auxForce ) },
	{ "idVecX", "acceleration", (int)(&((idAFBody *)0)->acceleration), sizeof( ((idAFBody *)0)->acceleration ) },
	{ "float *", "response", (int)(&((idAFBody *)0)->response), sizeof( ((idAFBody *)0)->response ) },
	{ "int *", "responseIndex", (int)(&((idAFBody *)0)->responseIndex), sizeof( ((idAFBody *)0)->responseIndex ) },
	{ "int", "numResponses", (int)(&((idAFBody *)0)->numResponses), sizeof( ((idAFBody *)0)->numResponses ) },
	{ "int", "maxAuxiliaryIndex", (int)(&((idAFBody *)0)->maxAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxAuxiliaryIndex ) },
	{ "int", "maxSubTreeAuxiliaryIndex", (int)(&((idAFBody *)0)->maxSubTreeAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxSubTreeAuxiliaryIndex ) },
	{ "idAFBody::bodyFlags_s", "fl", (int)(&((idAFBody *)0)->fl), sizeof( ((idAFBody *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFTree_typeInfo[] = {
	{ ": idList < idAFBody * , TAG_IDLIB_LIST_PHYSICS >", "sortedBodies", (int)(&((idAFTree *)0)->sortedBodies), sizeof( ((idAFTree *)0)->sortedBodies ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFPState_t_typeInfo[] = {
	{ "int", "atRest", (int)(&((AFPState_t *)0)->atRest), sizeof( ((AFPState_t *)0)->atRest ) },
	{ "float", "noMoveTime", (int)(&((AFPState_t *)0)->noMoveTime), sizeof( ((AFPState_t *)0)->noMoveTime ) },
	{ "float", "activateTime", (int)(&((AFPState_t *)0)->activateTime), sizeof( ((AFPState_t *)0)->activateTime ) },
	{ "float", "lastTimeStep", (int)(&((AFPState_t *)0)->lastTimeStep), sizeof( ((AFPState_t *)0)->lastTimeStep ) },
	{ "idVec6", "pushVelocity", (int)(&((AFPState_t *)0)->pushVelocity), sizeof( ((AFPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFCollision_t_typeInfo[] = {
	{ "trace_t", "trace", (int)(&((AFCollision_t *)0)->trace), sizeof( ((AFCollision_t *)0)->trace ) },
	{ "idAFBody *", "body", (int)(&((AFCollision_t *)0)->body), sizeof( ((AFCollision_t *)0)->body ) },
	{ NULL, 0 }
};

intptr_t idPhysics_AF::Invoke(idPhysics_AF *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 148383) { // GetNumBodies
		return (intptr_t)cls->GetNumBodies();
	};
	if(functionNameHash == 225129) { // GetNumConstraints
		return (intptr_t)cls->GetNumConstraints();
	};
	if(functionNameHash == 163512) { // GetMasterBody
		return (intptr_t)cls->GetMasterBody();
	};
	if(functionNameHash == 274029) { // GetJointFrictionScale
		cls->GetJointFrictionScale();
		return 0;
	};
	if(functionNameHash == 302208) { // GetContactFrictionScale
		cls->GetContactFrictionScale();
		return 0;
	};
	if(functionNameHash == 121382) { // SetChanged
		cls->SetChanged();
		return 0;
	};
	if(functionNameHash == 148262) { // EnableImpact
		cls->EnableImpact();
		return 0;
	};
	if(functionNameHash == 162468) { // DisableImpact
		cls->DisableImpact();
		return 0;
	};
	if(functionNameHash == 204504) { // UpdateClipModels
		cls->UpdateClipModels();
		return 0;
	};
	if(functionNameHash == 202251) { // GetNumClipModels
		return (intptr_t)cls->GetNumClipModels();
	};
	if(functionNameHash == 83909) { // GetTime
		return (intptr_t)cls->GetTime();
	};
	if(functionNameHash == 96105) { // IsAtRest
		cls->IsAtRest();
		return 0;
	};
	if(functionNameHash == 206079) { // GetRestStartTime
		return (intptr_t)cls->GetRestStartTime();
	};
	if(functionNameHash == 100229) { // Activate
		cls->Activate();
		return 0;
	};
	if(functionNameHash == 113512) { // PutToRest
		cls->PutToRest();
		return 0;
	};
	if(functionNameHash == 124599) { // IsPushable
		cls->IsPushable();
		return 0;
	};
	if(functionNameHash == 112278) { // SaveState
		cls->SaveState();
		return 0;
	};
	if(functionNameHash == 156059) { // RestoreState
		cls->RestoreState();
		return 0;
	};
	if(functionNameHash == 134558) { // DisableClip
		cls->DisableClip();
		return 0;
	};
	if(functionNameHash == 120566) { // EnableClip
		cls->EnableClip();
		return 0;
	};
	if(functionNameHash == 125645) { // UnlinkClip
		cls->UnlinkClip();
		return 0;
	};
	if(functionNameHash == 96878) { // LinkClip
		cls->LinkClip();
		return 0;
	};
	if(functionNameHash == 209529) { // EvaluateContacts
		cls->EvaluateContacts();
		return 0;
	};
	if(functionNameHash == 168534) { // PrimaryFactor
		cls->PrimaryFactor();
		return 0;
	};
	if(functionNameHash == 248229) { // AddFrameConstraints
		cls->AddFrameConstraints();
		return 0;
	};
	if(functionNameHash == 297042) { // RemoveFrameConstraints
		cls->RemoveFrameConstraints();
		return 0;
	};
	if(functionNameHash == 329599) { // VerifyContactConstraints
		cls->VerifyContactConstraints();
		return 0;
	};
	if(functionNameHash == 315282) { // SetupContactConstraints
		cls->SetupContactConstraints();
		return 0;
	};
	if(functionNameHash == 235353) { // ApplyContactForces
		cls->ApplyContactForces();
		return 0;
	};
	if(functionNameHash == 231929) { // ClearExternalForce
		cls->ClearExternalForce();
		return 0;
	};
	if(functionNameHash == 124747) { // AddGravity
		cls->AddGravity();
		return 0;
	};
	if(functionNameHash == 128439) { // SwapStates
		cls->SwapStates();
		return 0;
	};
	if(functionNameHash == 49945) { // Rest
		cls->Rest();
		return 0;
	};
	if(functionNameHash == 109030) { // DebugDraw
		cls->DebugDraw();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhysics_AF_typeInfo[] = {
	{ ": idList < idAFTree * , TAG_IDLIB_LIST_PHYSICS >", "trees", (int)(&((idPhysics_AF *)0)->trees), sizeof( ((idPhysics_AF *)0)->trees ) },
	{ "idList < idAFBody * , TAG_IDLIB_LIST_PHYSICS >", "bodies", (int)(&((idPhysics_AF *)0)->bodies), sizeof( ((idPhysics_AF *)0)->bodies ) },
	{ "idList < idAFConstraint * , TAG_IDLIB_LIST_PHYSICS >", "constraints", (int)(&((idPhysics_AF *)0)->constraints), sizeof( ((idPhysics_AF *)0)->constraints ) },
	{ "idList < idAFConstraint * , TAG_IDLIB_LIST_PHYSICS >", "primaryConstraints", (int)(&((idPhysics_AF *)0)->primaryConstraints), sizeof( ((idPhysics_AF *)0)->primaryConstraints ) },
	{ "idList < idAFConstraint * , TAG_IDLIB_LIST_PHYSICS >", "auxiliaryConstraints", (int)(&((idPhysics_AF *)0)->auxiliaryConstraints), sizeof( ((idPhysics_AF *)0)->auxiliaryConstraints ) },
	{ "idList < idAFConstraint * , TAG_IDLIB_LIST_PHYSICS >", "frameConstraints", (int)(&((idPhysics_AF *)0)->frameConstraints), sizeof( ((idPhysics_AF *)0)->frameConstraints ) },
	{ "idList < idAFConstraint_Contact * , TAG_IDLIB_LIST_PHYSICS >", "contactConstraints", (int)(&((idPhysics_AF *)0)->contactConstraints), sizeof( ((idPhysics_AF *)0)->contactConstraints ) },
	{ "idList < int , TAG_IDLIB_LIST_PHYSICS >", "contactBodies", (int)(&((idPhysics_AF *)0)->contactBodies), sizeof( ((idPhysics_AF *)0)->contactBodies ) },
	{ "idList < AFCollision_t , TAG_IDLIB_LIST_PHYSICS >", "collisions", (int)(&((idPhysics_AF *)0)->collisions), sizeof( ((idPhysics_AF *)0)->collisions ) },
	{ "bool", "changedAF", (int)(&((idPhysics_AF *)0)->changedAF), sizeof( ((idPhysics_AF *)0)->changedAF ) },
	{ "float", "linearFriction", (int)(&((idPhysics_AF *)0)->linearFriction), sizeof( ((idPhysics_AF *)0)->linearFriction ) },
	{ "float", "angularFriction", (int)(&((idPhysics_AF *)0)->angularFriction), sizeof( ((idPhysics_AF *)0)->angularFriction ) },
	{ "float", "contactFriction", (int)(&((idPhysics_AF *)0)->contactFriction), sizeof( ((idPhysics_AF *)0)->contactFriction ) },
	{ "float", "bouncyness", (int)(&((idPhysics_AF *)0)->bouncyness), sizeof( ((idPhysics_AF *)0)->bouncyness ) },
	{ "float", "totalMass", (int)(&((idPhysics_AF *)0)->totalMass), sizeof( ((idPhysics_AF *)0)->totalMass ) },
	{ "float", "forceTotalMass", (int)(&((idPhysics_AF *)0)->forceTotalMass), sizeof( ((idPhysics_AF *)0)->forceTotalMass ) },
	{ "idVec2", "suspendVelocity", (int)(&((idPhysics_AF *)0)->suspendVelocity), sizeof( ((idPhysics_AF *)0)->suspendVelocity ) },
	{ "idVec2", "suspendAcceleration", (int)(&((idPhysics_AF *)0)->suspendAcceleration), sizeof( ((idPhysics_AF *)0)->suspendAcceleration ) },
	{ "float", "noMoveTime", (int)(&((idPhysics_AF *)0)->noMoveTime), sizeof( ((idPhysics_AF *)0)->noMoveTime ) },
	{ "float", "noMoveTranslation", (int)(&((idPhysics_AF *)0)->noMoveTranslation), sizeof( ((idPhysics_AF *)0)->noMoveTranslation ) },
	{ "float", "noMoveRotation", (int)(&((idPhysics_AF *)0)->noMoveRotation), sizeof( ((idPhysics_AF *)0)->noMoveRotation ) },
	{ "float", "minMoveTime", (int)(&((idPhysics_AF *)0)->minMoveTime), sizeof( ((idPhysics_AF *)0)->minMoveTime ) },
	{ "float", "maxMoveTime", (int)(&((idPhysics_AF *)0)->maxMoveTime), sizeof( ((idPhysics_AF *)0)->maxMoveTime ) },
	{ "float", "impulseThreshold", (int)(&((idPhysics_AF *)0)->impulseThreshold), sizeof( ((idPhysics_AF *)0)->impulseThreshold ) },
	{ "float", "timeScale", (int)(&((idPhysics_AF *)0)->timeScale), sizeof( ((idPhysics_AF *)0)->timeScale ) },
	{ "float", "timeScaleRampStart", (int)(&((idPhysics_AF *)0)->timeScaleRampStart), sizeof( ((idPhysics_AF *)0)->timeScaleRampStart ) },
	{ "float", "timeScaleRampEnd", (int)(&((idPhysics_AF *)0)->timeScaleRampEnd), sizeof( ((idPhysics_AF *)0)->timeScaleRampEnd ) },
	{ "float", "jointFrictionScale", (int)(&((idPhysics_AF *)0)->jointFrictionScale), sizeof( ((idPhysics_AF *)0)->jointFrictionScale ) },
	{ "float", "jointFrictionDent", (int)(&((idPhysics_AF *)0)->jointFrictionDent), sizeof( ((idPhysics_AF *)0)->jointFrictionDent ) },
	{ "float", "jointFrictionDentStart", (int)(&((idPhysics_AF *)0)->jointFrictionDentStart), sizeof( ((idPhysics_AF *)0)->jointFrictionDentStart ) },
	{ "float", "jointFrictionDentEnd", (int)(&((idPhysics_AF *)0)->jointFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->jointFrictionDentEnd ) },
	{ "float", "jointFrictionDentScale", (int)(&((idPhysics_AF *)0)->jointFrictionDentScale), sizeof( ((idPhysics_AF *)0)->jointFrictionDentScale ) },
	{ "float", "contactFrictionScale", (int)(&((idPhysics_AF *)0)->contactFrictionScale), sizeof( ((idPhysics_AF *)0)->contactFrictionScale ) },
	{ "float", "contactFrictionDent", (int)(&((idPhysics_AF *)0)->contactFrictionDent), sizeof( ((idPhysics_AF *)0)->contactFrictionDent ) },
	{ "float", "contactFrictionDentStart", (int)(&((idPhysics_AF *)0)->contactFrictionDentStart), sizeof( ((idPhysics_AF *)0)->contactFrictionDentStart ) },
	{ "float", "contactFrictionDentEnd", (int)(&((idPhysics_AF *)0)->contactFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->contactFrictionDentEnd ) },
	{ "float", "contactFrictionDentScale", (int)(&((idPhysics_AF *)0)->contactFrictionDentScale), sizeof( ((idPhysics_AF *)0)->contactFrictionDentScale ) },
	{ "bool", "enableCollision", (int)(&((idPhysics_AF *)0)->enableCollision), sizeof( ((idPhysics_AF *)0)->enableCollision ) },
	{ "bool", "selfCollision", (int)(&((idPhysics_AF *)0)->selfCollision), sizeof( ((idPhysics_AF *)0)->selfCollision ) },
	{ "bool", "comeToRest", (int)(&((idPhysics_AF *)0)->comeToRest), sizeof( ((idPhysics_AF *)0)->comeToRest ) },
	{ "bool", "linearTime", (int)(&((idPhysics_AF *)0)->linearTime), sizeof( ((idPhysics_AF *)0)->linearTime ) },
	{ "bool", "noImpact", (int)(&((idPhysics_AF *)0)->noImpact), sizeof( ((idPhysics_AF *)0)->noImpact ) },
	{ "bool", "worldConstraintsLocked", (int)(&((idPhysics_AF *)0)->worldConstraintsLocked), sizeof( ((idPhysics_AF *)0)->worldConstraintsLocked ) },
	{ "bool", "forcePushable", (int)(&((idPhysics_AF *)0)->forcePushable), sizeof( ((idPhysics_AF *)0)->forcePushable ) },
	{ "AFPState_t", "current", (int)(&((idPhysics_AF *)0)->current), sizeof( ((idPhysics_AF *)0)->current ) },
	{ "AFPState_t", "saved", (int)(&((idPhysics_AF *)0)->saved), sizeof( ((idPhysics_AF *)0)->saved ) },
	{ "idAFBody *", "masterBody", (int)(&((idPhysics_AF *)0)->masterBody), sizeof( ((idPhysics_AF *)0)->masterBody ) },
	{ "idLCP *", "lcp", (int)(&((idPhysics_AF *)0)->lcp), sizeof( ((idPhysics_AF *)0)->lcp ) },
	{ NULL, 0 }
};

static classVariableInfo_t singleSmoke_t_typeInfo[] = {
	{ "singleSmoke_s *", "next", (int)(&((singleSmoke_t *)0)->next), sizeof( ((singleSmoke_t *)0)->next ) },
	{ "int", "privateStartTime", (int)(&((singleSmoke_t *)0)->privateStartTime), sizeof( ((singleSmoke_t *)0)->privateStartTime ) },
	{ "int", "index", (int)(&((singleSmoke_t *)0)->index), sizeof( ((singleSmoke_t *)0)->index ) },
	{ "idRandom", "random", (int)(&((singleSmoke_t *)0)->random), sizeof( ((singleSmoke_t *)0)->random ) },
	{ "idVec3", "origin", (int)(&((singleSmoke_t *)0)->origin), sizeof( ((singleSmoke_t *)0)->origin ) },
	{ "idMat3", "axis", (int)(&((singleSmoke_t *)0)->axis), sizeof( ((singleSmoke_t *)0)->axis ) },
	{ "int", "timeGroup", (int)(&((singleSmoke_t *)0)->timeGroup), sizeof( ((singleSmoke_t *)0)->timeGroup ) },
	{ NULL, 0 }
};

static classVariableInfo_t activeSmokeStage_t_typeInfo[] = {
	{ "const idParticleStage *", "stage", (int)(&((activeSmokeStage_t *)0)->stage), sizeof( ((activeSmokeStage_t *)0)->stage ) },
	{ "singleSmoke_t *", "smokes", (int)(&((activeSmokeStage_t *)0)->smokes), sizeof( ((activeSmokeStage_t *)0)->smokes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSmokeParticles_typeInfo[] = {
	{ ": bool", "initialized", (int)(&((idSmokeParticles *)0)->initialized), sizeof( ((idSmokeParticles *)0)->initialized ) },
	{ "renderEntity_t", "renderEntity", (int)(&((idSmokeParticles *)0)->renderEntity), sizeof( ((idSmokeParticles *)0)->renderEntity ) },
	{ "int", "renderEntityHandle", (int)(&((idSmokeParticles *)0)->renderEntityHandle), sizeof( ((idSmokeParticles *)0)->renderEntityHandle ) },
	{ "singleSmoke_t[10000]", "smokes", (int)(&((idSmokeParticles *)0)->smokes), sizeof( ((idSmokeParticles *)0)->smokes ) },
	{ "idList < activeSmokeStage_t , TAG_PARTICLE >", "activeStages", (int)(&((idSmokeParticles *)0)->activeStages), sizeof( ((idSmokeParticles *)0)->activeStages ) },
	{ "singleSmoke_t *", "freeSmokes", (int)(&((idSmokeParticles *)0)->freeSmokes), sizeof( ((idSmokeParticles *)0)->freeSmokes ) },
	{ "int", "numActiveSmokes", (int)(&((idSmokeParticles *)0)->numActiveSmokes), sizeof( ((idSmokeParticles *)0)->numActiveSmokes ) },
	{ "int", "currentParticleTime", (int)(&((idSmokeParticles *)0)->currentParticleTime), sizeof( ((idSmokeParticles *)0)->currentParticleTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t signal_t_typeInfo[] = {
	{ "int", "threadnum", (int)(&((signal_t *)0)->threadnum), sizeof( ((signal_t *)0)->threadnum ) },
	{ "const function_t *", "function", (int)(&((signal_t *)0)->function), sizeof( ((signal_t *)0)->function ) },
	{ NULL, 0 }
};

static classVariableInfo_t signalList_t_typeInfo[] = {
	{ ": idList < signal_t , TAG_ENTITY >[10]", "signal", (int)(&((signalList_t *)0)->signal), sizeof( ((signalList_t *)0)->signal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_entityFlags_s_typeInfo[] = {
//	{ "bool", "notarget", (int)(&((idEntity::entityFlags_s *)0)->notarget), sizeof( ((idEntity::entityFlags_s *)0)->notarget ) },
//	{ "bool", "noknockback", (int)(&((idEntity::entityFlags_s *)0)->noknockback), sizeof( ((idEntity::entityFlags_s *)0)->noknockback ) },
//	{ "bool", "takedamage", (int)(&((idEntity::entityFlags_s *)0)->takedamage), sizeof( ((idEntity::entityFlags_s *)0)->takedamage ) },
//	{ "bool", "hidden", (int)(&((idEntity::entityFlags_s *)0)->hidden), sizeof( ((idEntity::entityFlags_s *)0)->hidden ) },
//	{ "bool", "bindOrientated", (int)(&((idEntity::entityFlags_s *)0)->bindOrientated), sizeof( ((idEntity::entityFlags_s *)0)->bindOrientated ) },
//	{ "bool", "solidForTeam", (int)(&((idEntity::entityFlags_s *)0)->solidForTeam), sizeof( ((idEntity::entityFlags_s *)0)->solidForTeam ) },
//	{ "bool", "forcePhysicsUpdate", (int)(&((idEntity::entityFlags_s *)0)->forcePhysicsUpdate), sizeof( ((idEntity::entityFlags_s *)0)->forcePhysicsUpdate ) },
//	{ "bool", "selected", (int)(&((idEntity::entityFlags_s *)0)->selected), sizeof( ((idEntity::entityFlags_s *)0)->selected ) },
//	{ "bool", "neverDormant", (int)(&((idEntity::entityFlags_s *)0)->neverDormant), sizeof( ((idEntity::entityFlags_s *)0)->neverDormant ) },
//	{ "bool", "isDormant", (int)(&((idEntity::entityFlags_s *)0)->isDormant), sizeof( ((idEntity::entityFlags_s *)0)->isDormant ) },
//	{ "bool", "hasAwakened", (int)(&((idEntity::entityFlags_s *)0)->hasAwakened), sizeof( ((idEntity::entityFlags_s *)0)->hasAwakened ) },
//	{ "bool", "networkSync", (int)(&((idEntity::entityFlags_s *)0)->networkSync), sizeof( ((idEntity::entityFlags_s *)0)->networkSync ) },
//	{ "bool", "grabbed", (int)(&((idEntity::entityFlags_s *)0)->grabbed), sizeof( ((idEntity::entityFlags_s *)0)->grabbed ) },
//	{ "bool", "skipReplication", (int)(&((idEntity::entityFlags_s *)0)->skipReplication), sizeof( ((idEntity::entityFlags_s *)0)->skipReplication ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_typeInfo[] = {
	{ "int", "entityNumber", (int)(&((idEntity *)0)->entityNumber), sizeof( ((idEntity *)0)->entityNumber ) },
	{ "int", "entityDefNumber", (int)(&((idEntity *)0)->entityDefNumber), sizeof( ((idEntity *)0)->entityDefNumber ) },
	{ "idLinkList < idEntity >", "spawnNode", (int)(&((idEntity *)0)->spawnNode), sizeof( ((idEntity *)0)->spawnNode ) },
	{ "idLinkList < idEntity >", "activeNode", (int)(&((idEntity *)0)->activeNode), sizeof( ((idEntity *)0)->activeNode ) },
	{ "idLinkList < idEntity >", "aimAssistNode", (int)(&((idEntity *)0)->aimAssistNode), sizeof( ((idEntity *)0)->aimAssistNode ) },
	{ "idLinkList < idEntity >", "snapshotNode", (int)(&((idEntity *)0)->snapshotNode), sizeof( ((idEntity *)0)->snapshotNode ) },
	{ "int", "snapshotChanged", (int)(&((idEntity *)0)->snapshotChanged), sizeof( ((idEntity *)0)->snapshotChanged ) },
	{ "int", "snapshotBits", (int)(&((idEntity *)0)->snapshotBits), sizeof( ((idEntity *)0)->snapshotBits ) },
	{ "bool", "snapshotStale", (int)(&((idEntity *)0)->snapshotStale), sizeof( ((idEntity *)0)->snapshotStale ) },
	{ "idStr", "name", (int)(&((idEntity *)0)->name), sizeof( ((idEntity *)0)->name ) },
	{ "idDict", "spawnArgs", (int)(&((idEntity *)0)->spawnArgs), sizeof( ((idEntity *)0)->spawnArgs ) },
	{ "idScriptObject", "scriptObject", (int)(&((idEntity *)0)->scriptObject), sizeof( ((idEntity *)0)->scriptObject ) },
	{ "int", "thinkFlags", (int)(&((idEntity *)0)->thinkFlags), sizeof( ((idEntity *)0)->thinkFlags ) },
	{ "int", "dormantStart", (int)(&((idEntity *)0)->dormantStart), sizeof( ((idEntity *)0)->dormantStart ) },
	{ "bool", "cinematic", (int)(&((idEntity *)0)->cinematic), sizeof( ((idEntity *)0)->cinematic ) },
	{ "renderView_t *", "renderView", (int)(&((idEntity *)0)->renderView), sizeof( ((idEntity *)0)->renderView ) },
	{ "idEntity *", "cameraTarget", (int)(&((idEntity *)0)->cameraTarget), sizeof( ((idEntity *)0)->cameraTarget ) },
	{ "idList < idEntityPtr < idEntity > , TAG_ENTITY >", "targets", (int)(&((idEntity *)0)->targets), sizeof( ((idEntity *)0)->targets ) },
	{ "int", "health", (int)(&((idEntity *)0)->health), sizeof( ((idEntity *)0)->health ) },
	{ "idEntity::entityFlags_s", "fl", (int)(&((idEntity *)0)->fl), sizeof( ((idEntity *)0)->fl ) },
	{ "int", "timeGroup", (int)(&((idEntity *)0)->timeGroup), sizeof( ((idEntity *)0)->timeGroup ) },
	{ "bool", "noGrab", (int)(&((idEntity *)0)->noGrab), sizeof( ((idEntity *)0)->noGrab ) },
	{ "renderEntity_t", "xrayEntity", (int)(&((idEntity *)0)->xrayEntity), sizeof( ((idEntity *)0)->xrayEntity ) },
	{ "qhandle_t", "xrayEntityHandle", (int)(&((idEntity *)0)->xrayEntityHandle), sizeof( ((idEntity *)0)->xrayEntityHandle ) },
	{ "const idDeclSkin *", "xraySkin", (int)(&((idEntity *)0)->xraySkin), sizeof( ((idEntity *)0)->xraySkin ) },
	{ ": renderEntity_t", "renderEntity", (int)(&((idEntity *)0)->renderEntity), sizeof( ((idEntity *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (int)(&((idEntity *)0)->modelDefHandle), sizeof( ((idEntity *)0)->modelDefHandle ) },
	{ "refSound_t", "refSound", (int)(&((idEntity *)0)->refSound), sizeof( ((idEntity *)0)->refSound ) },
	{ ": idPhysics_Static", "defaultPhysicsObj", (int)(&((idEntity *)0)->defaultPhysicsObj), sizeof( ((idEntity *)0)->defaultPhysicsObj ) },
	{ "idPhysics *", "physics", (int)(&((idEntity *)0)->physics), sizeof( ((idEntity *)0)->physics ) },
	{ "idEntity *", "bindMaster", (int)(&((idEntity *)0)->bindMaster), sizeof( ((idEntity *)0)->bindMaster ) },
	{ "jointHandle_t", "bindJoint", (int)(&((idEntity *)0)->bindJoint), sizeof( ((idEntity *)0)->bindJoint ) },
	{ "int", "bindBody", (int)(&((idEntity *)0)->bindBody), sizeof( ((idEntity *)0)->bindBody ) },
	{ "idEntity *", "teamMaster", (int)(&((idEntity *)0)->teamMaster), sizeof( ((idEntity *)0)->teamMaster ) },
	{ "idEntity *", "teamChain", (int)(&((idEntity *)0)->teamChain), sizeof( ((idEntity *)0)->teamChain ) },
	{ "bool", "useClientInterpolation", (int)(&((idEntity *)0)->useClientInterpolation), sizeof( ((idEntity *)0)->useClientInterpolation ) },
	{ "int", "numPVSAreas", (int)(&((idEntity *)0)->numPVSAreas), sizeof( ((idEntity *)0)->numPVSAreas ) },
	{ "int[4]", "PVSAreas", (int)(&((idEntity *)0)->PVSAreas), sizeof( ((idEntity *)0)->PVSAreas ) },
	{ "signalList_t *", "signals", (int)(&((idEntity *)0)->signals), sizeof( ((idEntity *)0)->signals ) },
	{ "int", "mpGUIState", (int)(&((idEntity *)0)->mpGUIState), sizeof( ((idEntity *)0)->mpGUIState ) },
	{ "uint32", "predictionKey", (int)(&((idEntity *)0)->predictionKey), sizeof( ((idEntity *)0)->predictionKey ) },
	{ "idVec3", "originDelta", (int)(&((idEntity *)0)->originDelta), sizeof( ((idEntity *)0)->originDelta ) },
	{ "idMat3", "axisDelta", (int)(&((idEntity *)0)->axisDelta), sizeof( ((idEntity *)0)->axisDelta ) },
	{ "interpolationBehavior_t", "interpolationBehavior", (int)(&((idEntity *)0)->interpolationBehavior), sizeof( ((idEntity *)0)->interpolationBehavior ) },
	{ "unsigned int", "snapshotsReceived", (int)(&((idEntity *)0)->snapshotsReceived), sizeof( ((idEntity *)0)->snapshotsReceived ) },
	{ NULL, 0 }
};

static classVariableInfo_t damageEffect_t_typeInfo[] = {
	{ "jointHandle_t", "jointNum", (int)(&((damageEffect_t *)0)->jointNum), sizeof( ((damageEffect_t *)0)->jointNum ) },
	{ "idVec3", "localOrigin", (int)(&((damageEffect_t *)0)->localOrigin), sizeof( ((damageEffect_t *)0)->localOrigin ) },
	{ "idVec3", "localNormal", (int)(&((damageEffect_t *)0)->localNormal), sizeof( ((damageEffect_t *)0)->localNormal ) },
	{ "int", "time", (int)(&((damageEffect_t *)0)->time), sizeof( ((damageEffect_t *)0)->time ) },
	{ "const idDeclParticle *", "type", (int)(&((damageEffect_t *)0)->type), sizeof( ((damageEffect_t *)0)->type ) },
	{ "damageEffect_s *", "next", (int)(&((damageEffect_t *)0)->next), sizeof( ((damageEffect_t *)0)->next ) },
	{ NULL, 0 }
};

intptr_t idAnimatedEntity::Invoke(idAnimatedEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 194183) { // UpdateAnimation
		cls->UpdateAnimation();
		return 0;
	};
	if(functionNameHash == 138578) { // GetAnimator
		return (intptr_t)cls->GetAnimator();
	};
	if(functionNameHash == 275016) { // GetDefaultSurfaceType
		cls->GetDefaultSurfaceType();
		return 0;
	};
	if(functionNameHash == 242178) { // UpdateDamageEffects
		cls->UpdateDamageEffects();
		return 0;
	};
	if(functionNameHash == 258459) { // Event_ClearAllJoints
		cls->Event_ClearAllJoints();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAnimatedEntity_typeInfo[] = {
	{ ": idAnimator", "animator", (int)(&((idAnimatedEntity *)0)->animator), sizeof( ((idAnimatedEntity *)0)->animator ) },
	{ "damageEffect_t *", "damageEffects", (int)(&((idAnimatedEntity *)0)->damageEffects), sizeof( ((idAnimatedEntity *)0)->damageEffects ) },
	{ NULL, 0 }
};

static classVariableInfo_t SetTimeState_typeInfo[] = {
	{ ": bool", "activated", (int)(&((SetTimeState *)0)->activated), sizeof( ((SetTimeState *)0)->activated ) },
	{ "bool", "previousFast", (int)(&((SetTimeState *)0)->previousFast), sizeof( ((SetTimeState *)0)->previousFast ) },
	{ "bool", "fast", (int)(&((SetTimeState *)0)->fast), sizeof( ((SetTimeState *)0)->fast ) },
	{ NULL, 0 }
};

intptr_t idCursor3D::Invoke(idCursor3D *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idCursor3D_typeInfo[] = {
	{ "idForce_Drag", "drag", (int)(&((idCursor3D *)0)->drag), sizeof( ((idCursor3D *)0)->drag ) },
	{ "idVec3", "draggedPosition", (int)(&((idCursor3D *)0)->draggedPosition), sizeof( ((idCursor3D *)0)->draggedPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDragEntity_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "dragEnt", (int)(&((idDragEntity *)0)->dragEnt), sizeof( ((idDragEntity *)0)->dragEnt ) },
	{ "jointHandle_t", "joint", (int)(&((idDragEntity *)0)->joint), sizeof( ((idDragEntity *)0)->joint ) },
	{ "int", "id", (int)(&((idDragEntity *)0)->id), sizeof( ((idDragEntity *)0)->id ) },
	{ "idVec3", "localEntityPoint", (int)(&((idDragEntity *)0)->localEntityPoint), sizeof( ((idDragEntity *)0)->localEntityPoint ) },
	{ "idVec3", "localPlayerPoint", (int)(&((idDragEntity *)0)->localPlayerPoint), sizeof( ((idDragEntity *)0)->localPlayerPoint ) },
	{ "idStr", "bodyName", (int)(&((idDragEntity *)0)->bodyName), sizeof( ((idDragEntity *)0)->bodyName ) },
	{ "idCursor3D *", "cursor", (int)(&((idDragEntity *)0)->cursor), sizeof( ((idDragEntity *)0)->cursor ) },
	{ "idEntityPtr < idEntity >", "selected", (int)(&((idDragEntity *)0)->selected), sizeof( ((idDragEntity *)0)->selected ) },
	{ NULL, 0 }
};

static classVariableInfo_t selectedTypeInfo_t_typeInfo[] = {
	{ "idTypeInfo *", "typeInfo", (int)(&((selectedTypeInfo_t *)0)->typeInfo), sizeof( ((selectedTypeInfo_t *)0)->typeInfo ) },
	{ "idStr", "textKey", (int)(&((selectedTypeInfo_t *)0)->textKey), sizeof( ((selectedTypeInfo_t *)0)->textKey ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEditEntities_typeInfo[] = {
	{ ": int", "nextSelectTime", (int)(&((idEditEntities *)0)->nextSelectTime), sizeof( ((idEditEntities *)0)->nextSelectTime ) },
	{ "idList < selectedTypeInfo_t >", "selectableEntityClasses", (int)(&((idEditEntities *)0)->selectableEntityClasses), sizeof( ((idEditEntities *)0)->selectableEntityClasses ) },
	{ "idList < idEntity * >", "selectedEntities", (int)(&((idEditEntities *)0)->selectedEntities), sizeof( ((idEditEntities *)0)->selectedEntities ) },
	{ NULL, 0 }
};

intptr_t idGrabber::Invoke(idGrabber *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 128839) { // Initialize
		cls->Initialize();
		return 0;
	};
	if(functionNameHash == 136363) { // UpdateBeams
		cls->UpdateBeams();
		return 0;
	};
	if(functionNameHash == 124817) { // ApplyShake
		cls->ApplyShake();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idGrabber_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "dragEnt", (int)(&((idGrabber *)0)->dragEnt), sizeof( ((idGrabber *)0)->dragEnt ) },
	{ "idForce_Grab", "drag", (int)(&((idGrabber *)0)->drag), sizeof( ((idGrabber *)0)->drag ) },
	{ "idVec3", "saveGravity", (int)(&((idGrabber *)0)->saveGravity), sizeof( ((idGrabber *)0)->saveGravity ) },
	{ "int", "id", (int)(&((idGrabber *)0)->id), sizeof( ((idGrabber *)0)->id ) },
	{ "idVec3", "localPlayerPoint", (int)(&((idGrabber *)0)->localPlayerPoint), sizeof( ((idGrabber *)0)->localPlayerPoint ) },
	{ "idEntityPtr < idPlayer >", "owner", (int)(&((idGrabber *)0)->owner), sizeof( ((idGrabber *)0)->owner ) },
	{ "int", "oldImpulseSequence", (int)(&((idGrabber *)0)->oldImpulseSequence), sizeof( ((idGrabber *)0)->oldImpulseSequence ) },
	{ "bool", "holdingAF", (int)(&((idGrabber *)0)->holdingAF), sizeof( ((idGrabber *)0)->holdingAF ) },
	{ "bool", "shakeForceFlip", (int)(&((idGrabber *)0)->shakeForceFlip), sizeof( ((idGrabber *)0)->shakeForceFlip ) },
	{ "int", "endTime", (int)(&((idGrabber *)0)->endTime), sizeof( ((idGrabber *)0)->endTime ) },
	{ "int", "lastFiredTime", (int)(&((idGrabber *)0)->lastFiredTime), sizeof( ((idGrabber *)0)->lastFiredTime ) },
	{ "int", "dragFailTime", (int)(&((idGrabber *)0)->dragFailTime), sizeof( ((idGrabber *)0)->dragFailTime ) },
	{ "int", "startDragTime", (int)(&((idGrabber *)0)->startDragTime), sizeof( ((idGrabber *)0)->startDragTime ) },
	{ "float", "dragTraceDist", (int)(&((idGrabber *)0)->dragTraceDist), sizeof( ((idGrabber *)0)->dragTraceDist ) },
	{ "int", "savedContents", (int)(&((idGrabber *)0)->savedContents), sizeof( ((idGrabber *)0)->savedContents ) },
	{ "int", "savedClipmask", (int)(&((idGrabber *)0)->savedClipmask), sizeof( ((idGrabber *)0)->savedClipmask ) },
	{ "idBeam *", "beam", (int)(&((idGrabber *)0)->beam), sizeof( ((idGrabber *)0)->beam ) },
	{ "idBeam *", "beamTarget", (int)(&((idGrabber *)0)->beamTarget), sizeof( ((idGrabber *)0)->beamTarget ) },
	{ "int", "warpId", (int)(&((idGrabber *)0)->warpId), sizeof( ((idGrabber *)0)->warpId ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointConversion_t_typeInfo[] = {
	{ "int", "bodyId", (int)(&((jointConversion_t *)0)->bodyId), sizeof( ((jointConversion_t *)0)->bodyId ) },
	{ "jointHandle_t", "jointHandle", (int)(&((jointConversion_t *)0)->jointHandle), sizeof( ((jointConversion_t *)0)->jointHandle ) },
	{ "AFJointModType_t", "jointMod", (int)(&((jointConversion_t *)0)->jointMod), sizeof( ((jointConversion_t *)0)->jointMod ) },
	{ "idVec3", "jointBodyOrigin", (int)(&((jointConversion_t *)0)->jointBodyOrigin), sizeof( ((jointConversion_t *)0)->jointBodyOrigin ) },
	{ "idMat3", "jointBodyAxis", (int)(&((jointConversion_t *)0)->jointBodyAxis), sizeof( ((jointConversion_t *)0)->jointBodyAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t afTouch_t_typeInfo[] = {
	{ "idEntity *", "touchedEnt", (int)(&((afTouch_t *)0)->touchedEnt), sizeof( ((afTouch_t *)0)->touchedEnt ) },
	{ "idClipModel *", "touchedClipModel", (int)(&((afTouch_t *)0)->touchedClipModel), sizeof( ((afTouch_t *)0)->touchedClipModel ) },
	{ "idAFBody *", "touchedByBody", (int)(&((afTouch_t *)0)->touchedByBody), sizeof( ((afTouch_t *)0)->touchedByBody ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAF_typeInfo[] = {
	{ ": idStr", "name", (int)(&((idAF *)0)->name), sizeof( ((idAF *)0)->name ) },
	{ "idPhysics_AF", "physicsObj", (int)(&((idAF *)0)->physicsObj), sizeof( ((idAF *)0)->physicsObj ) },
	{ "idEntity *", "self", (int)(&((idAF *)0)->self), sizeof( ((idAF *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idAF *)0)->animator), sizeof( ((idAF *)0)->animator ) },
	{ "int", "modifiedAnim", (int)(&((idAF *)0)->modifiedAnim), sizeof( ((idAF *)0)->modifiedAnim ) },
	{ "idVec3", "baseOrigin", (int)(&((idAF *)0)->baseOrigin), sizeof( ((idAF *)0)->baseOrigin ) },
	{ "idMat3", "baseAxis", (int)(&((idAF *)0)->baseAxis), sizeof( ((idAF *)0)->baseAxis ) },
	{ "idList < jointConversion_t , TAG_AF >", "jointMods", (int)(&((idAF *)0)->jointMods), sizeof( ((idAF *)0)->jointMods ) },
	{ "idList < int , TAG_AF >", "jointBody", (int)(&((idAF *)0)->jointBody), sizeof( ((idAF *)0)->jointBody ) },
	{ "int", "poseTime", (int)(&((idAF *)0)->poseTime), sizeof( ((idAF *)0)->poseTime ) },
	{ "int", "restStartTime", (int)(&((idAF *)0)->restStartTime), sizeof( ((idAF *)0)->restStartTime ) },
	{ "bool", "isLoaded", (int)(&((idAF *)0)->isLoaded), sizeof( ((idAF *)0)->isLoaded ) },
	{ "bool", "isActive", (int)(&((idAF *)0)->isActive), sizeof( ((idAF *)0)->isActive ) },
	{ "bool", "hasBindConstraints", (int)(&((idAF *)0)->hasBindConstraints), sizeof( ((idAF *)0)->hasBindConstraints ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_typeInfo[] = {
	{ ": bool", "initialized", (int)(&((idIK *)0)->initialized), sizeof( ((idIK *)0)->initialized ) },
	{ "bool", "ik_activate", (int)(&((idIK *)0)->ik_activate), sizeof( ((idIK *)0)->ik_activate ) },
	{ "idEntity *", "self", (int)(&((idIK *)0)->self), sizeof( ((idIK *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idIK *)0)->animator), sizeof( ((idIK *)0)->animator ) },
	{ "int", "modifiedAnim", (int)(&((idIK *)0)->modifiedAnim), sizeof( ((idIK *)0)->modifiedAnim ) },
	{ "idVec3", "modelOffset", (int)(&((idIK *)0)->modelOffset), sizeof( ((idIK *)0)->modelOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Walk_typeInfo[] = {
	{ "idClipModel *", "footModel", (int)(&((idIK_Walk *)0)->footModel), sizeof( ((idIK_Walk *)0)->footModel ) },
	{ "int", "numLegs", (int)(&((idIK_Walk *)0)->numLegs), sizeof( ((idIK_Walk *)0)->numLegs ) },
	{ "int", "enabledLegs", (int)(&((idIK_Walk *)0)->enabledLegs), sizeof( ((idIK_Walk *)0)->enabledLegs ) },
	{ "jointHandle_t[8]", "footJoints", (int)(&((idIK_Walk *)0)->footJoints), sizeof( ((idIK_Walk *)0)->footJoints ) },
	{ "jointHandle_t[8]", "ankleJoints", (int)(&((idIK_Walk *)0)->ankleJoints), sizeof( ((idIK_Walk *)0)->ankleJoints ) },
	{ "jointHandle_t[8]", "kneeJoints", (int)(&((idIK_Walk *)0)->kneeJoints), sizeof( ((idIK_Walk *)0)->kneeJoints ) },
	{ "jointHandle_t[8]", "hipJoints", (int)(&((idIK_Walk *)0)->hipJoints), sizeof( ((idIK_Walk *)0)->hipJoints ) },
	{ "jointHandle_t[8]", "dirJoints", (int)(&((idIK_Walk *)0)->dirJoints), sizeof( ((idIK_Walk *)0)->dirJoints ) },
	{ "jointHandle_t", "waistJoint", (int)(&((idIK_Walk *)0)->waistJoint), sizeof( ((idIK_Walk *)0)->waistJoint ) },
	{ "idVec3[8]", "hipForward", (int)(&((idIK_Walk *)0)->hipForward), sizeof( ((idIK_Walk *)0)->hipForward ) },
	{ "idVec3[8]", "kneeForward", (int)(&((idIK_Walk *)0)->kneeForward), sizeof( ((idIK_Walk *)0)->kneeForward ) },
	{ "float[8]", "upperLegLength", (int)(&((idIK_Walk *)0)->upperLegLength), sizeof( ((idIK_Walk *)0)->upperLegLength ) },
	{ "float[8]", "lowerLegLength", (int)(&((idIK_Walk *)0)->lowerLegLength), sizeof( ((idIK_Walk *)0)->lowerLegLength ) },
	{ "idMat3[8]", "upperLegToHipJoint", (int)(&((idIK_Walk *)0)->upperLegToHipJoint), sizeof( ((idIK_Walk *)0)->upperLegToHipJoint ) },
	{ "idMat3[8]", "lowerLegToKneeJoint", (int)(&((idIK_Walk *)0)->lowerLegToKneeJoint), sizeof( ((idIK_Walk *)0)->lowerLegToKneeJoint ) },
	{ "float", "smoothing", (int)(&((idIK_Walk *)0)->smoothing), sizeof( ((idIK_Walk *)0)->smoothing ) },
	{ "float", "waistSmoothing", (int)(&((idIK_Walk *)0)->waistSmoothing), sizeof( ((idIK_Walk *)0)->waistSmoothing ) },
	{ "float", "footShift", (int)(&((idIK_Walk *)0)->footShift), sizeof( ((idIK_Walk *)0)->footShift ) },
	{ "float", "waistShift", (int)(&((idIK_Walk *)0)->waistShift), sizeof( ((idIK_Walk *)0)->waistShift ) },
	{ "float", "minWaistFloorDist", (int)(&((idIK_Walk *)0)->minWaistFloorDist), sizeof( ((idIK_Walk *)0)->minWaistFloorDist ) },
	{ "float", "minWaistAnkleDist", (int)(&((idIK_Walk *)0)->minWaistAnkleDist), sizeof( ((idIK_Walk *)0)->minWaistAnkleDist ) },
	{ "float", "footUpTrace", (int)(&((idIK_Walk *)0)->footUpTrace), sizeof( ((idIK_Walk *)0)->footUpTrace ) },
	{ "float", "footDownTrace", (int)(&((idIK_Walk *)0)->footDownTrace), sizeof( ((idIK_Walk *)0)->footDownTrace ) },
	{ "bool", "tiltWaist", (int)(&((idIK_Walk *)0)->tiltWaist), sizeof( ((idIK_Walk *)0)->tiltWaist ) },
	{ "bool", "usePivot", (int)(&((idIK_Walk *)0)->usePivot), sizeof( ((idIK_Walk *)0)->usePivot ) },
	{ "int", "pivotFoot", (int)(&((idIK_Walk *)0)->pivotFoot), sizeof( ((idIK_Walk *)0)->pivotFoot ) },
	{ "float", "pivotYaw", (int)(&((idIK_Walk *)0)->pivotYaw), sizeof( ((idIK_Walk *)0)->pivotYaw ) },
	{ "idVec3", "pivotPos", (int)(&((idIK_Walk *)0)->pivotPos), sizeof( ((idIK_Walk *)0)->pivotPos ) },
	{ "bool", "oldHeightsValid", (int)(&((idIK_Walk *)0)->oldHeightsValid), sizeof( ((idIK_Walk *)0)->oldHeightsValid ) },
	{ "float", "oldWaistHeight", (int)(&((idIK_Walk *)0)->oldWaistHeight), sizeof( ((idIK_Walk *)0)->oldWaistHeight ) },
	{ "float[8]", "oldAnkleHeights", (int)(&((idIK_Walk *)0)->oldAnkleHeights), sizeof( ((idIK_Walk *)0)->oldAnkleHeights ) },
	{ "idVec3", "waistOffset", (int)(&((idIK_Walk *)0)->waistOffset), sizeof( ((idIK_Walk *)0)->waistOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Reach_typeInfo[] = {
	{ "int", "numArms", (int)(&((idIK_Reach *)0)->numArms), sizeof( ((idIK_Reach *)0)->numArms ) },
	{ "int", "enabledArms", (int)(&((idIK_Reach *)0)->enabledArms), sizeof( ((idIK_Reach *)0)->enabledArms ) },
	{ "jointHandle_t[2]", "handJoints", (int)(&((idIK_Reach *)0)->handJoints), sizeof( ((idIK_Reach *)0)->handJoints ) },
	{ "jointHandle_t[2]", "elbowJoints", (int)(&((idIK_Reach *)0)->elbowJoints), sizeof( ((idIK_Reach *)0)->elbowJoints ) },
	{ "jointHandle_t[2]", "shoulderJoints", (int)(&((idIK_Reach *)0)->shoulderJoints), sizeof( ((idIK_Reach *)0)->shoulderJoints ) },
	{ "jointHandle_t[2]", "dirJoints", (int)(&((idIK_Reach *)0)->dirJoints), sizeof( ((idIK_Reach *)0)->dirJoints ) },
	{ "idVec3[2]", "shoulderForward", (int)(&((idIK_Reach *)0)->shoulderForward), sizeof( ((idIK_Reach *)0)->shoulderForward ) },
	{ "idVec3[2]", "elbowForward", (int)(&((idIK_Reach *)0)->elbowForward), sizeof( ((idIK_Reach *)0)->elbowForward ) },
	{ "float[2]", "upperArmLength", (int)(&((idIK_Reach *)0)->upperArmLength), sizeof( ((idIK_Reach *)0)->upperArmLength ) },
	{ "float[2]", "lowerArmLength", (int)(&((idIK_Reach *)0)->lowerArmLength), sizeof( ((idIK_Reach *)0)->lowerArmLength ) },
	{ "idMat3[2]", "upperArmToShoulderJoint", (int)(&((idIK_Reach *)0)->upperArmToShoulderJoint), sizeof( ((idIK_Reach *)0)->upperArmToShoulderJoint ) },
	{ "idMat3[2]", "lowerArmToElbowJoint", (int)(&((idIK_Reach *)0)->lowerArmToElbowJoint), sizeof( ((idIK_Reach *)0)->lowerArmToElbowJoint ) },
	{ NULL, 0 }
};

intptr_t idMultiModelAF::Invoke(idMultiModelAF *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMultiModelAF_typeInfo[] = {
	{ ": idPhysics_AF", "physicsObj", (int)(&((idMultiModelAF *)0)->physicsObj), sizeof( ((idMultiModelAF *)0)->physicsObj ) },
	{ ": idList < idRenderModel * , TAG_AF >", "modelHandles", (int)(&((idMultiModelAF *)0)->modelHandles), sizeof( ((idMultiModelAF *)0)->modelHandles ) },
	{ "idList < int , TAG_AF >", "modelDefHandles", (int)(&((idMultiModelAF *)0)->modelDefHandles), sizeof( ((idMultiModelAF *)0)->modelDefHandles ) },
	{ NULL, 0 }
};

intptr_t idChain::Invoke(idChain *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idChain_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idAFAttachment::Invoke(idAFAttachment *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 109036) { // ClearBody
		cls->ClearBody();
		return 0;
	};
	if(functionNameHash == 83835) { // GetBody
		return (intptr_t)cls->GetBody();
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 175242) { // SetCombatModel
		cls->SetCombatModel();
		return 0;
	};
	if(functionNameHash == 173814) { // GetCombatModel
		return (intptr_t)cls->GetCombatModel();
	};
	if(functionNameHash == 123153) { // LinkCombat
		cls->LinkCombat();
		return 0;
	};
	if(functionNameHash == 152332) { // UnlinkCombat
		cls->UnlinkCombat();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFAttachment_typeInfo[] = {
	{ ": idEntity *", "body", (int)(&((idAFAttachment *)0)->body), sizeof( ((idAFAttachment *)0)->body ) },
	{ "idClipModel *", "combatModel", (int)(&((idAFAttachment *)0)->combatModel), sizeof( ((idAFAttachment *)0)->combatModel ) },
	{ "int", "idleAnim", (int)(&((idAFAttachment *)0)->idleAnim), sizeof( ((idAFAttachment *)0)->idleAnim ) },
	{ "jointHandle_t", "attachJoint", (int)(&((idAFAttachment *)0)->attachJoint), sizeof( ((idAFAttachment *)0)->attachJoint ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_Base::Invoke(idAFEntity_Base *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 357711) { // UpdateAnimationControllers
		cls->UpdateAnimationControllers();
		return 0;
	};
	if(functionNameHash == 143723) { // FreeModelDef
		cls->FreeModelDef();
		return 0;
	};
	if(functionNameHash == 62976) { // LoadAF
		cls->LoadAF();
		return 0;
	};
	if(functionNameHash == 114409) { // IsActiveAF
		cls->IsActiveAF();
		return 0;
	};
	if(functionNameHash == 99503) { // GetAFName
		return (intptr_t)cls->GetAFName();
	};
	if(functionNameHash == 145077) { // GetAFPhysics
		return (intptr_t)cls->GetAFPhysics();
	};
	if(functionNameHash == 175242) { // SetCombatModel
		cls->SetCombatModel();
		return 0;
	};
	if(functionNameHash == 173814) { // GetCombatModel
		return (intptr_t)cls->GetCombatModel();
	};
	if(functionNameHash == 123153) { // LinkCombat
		cls->LinkCombat();
		return 0;
	};
	if(functionNameHash == 152332) { // UnlinkCombat
		cls->UnlinkCombat();
		return 0;
	};
	if(functionNameHash == 233219) { // AddBindConstraints
		cls->AddBindConstraints();
		return 0;
	};
	if(functionNameHash == 281702) { // RemoveBindConstraints
		cls->RemoveBindConstraints();
		return 0;
	};
	if(functionNameHash == 218178) { // ShowEditingDialog
		cls->ShowEditingDialog();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_Base_typeInfo[] = {
	{ ": idAF", "af", (int)(&((idAFEntity_Base *)0)->af), sizeof( ((idAFEntity_Base *)0)->af ) },
	{ "idClipModel *", "combatModel", (int)(&((idAFEntity_Base *)0)->combatModel), sizeof( ((idAFEntity_Base *)0)->combatModel ) },
	{ "int", "combatModelContents", (int)(&((idAFEntity_Base *)0)->combatModelContents), sizeof( ((idAFEntity_Base *)0)->combatModelContents ) },
	{ "idVec3", "spawnOrigin", (int)(&((idAFEntity_Base *)0)->spawnOrigin), sizeof( ((idAFEntity_Base *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (int)(&((idAFEntity_Base *)0)->spawnAxis), sizeof( ((idAFEntity_Base *)0)->spawnAxis ) },
	{ "int", "nextSoundTime", (int)(&((idAFEntity_Base *)0)->nextSoundTime), sizeof( ((idAFEntity_Base *)0)->nextSoundTime ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_Gibbable::Invoke(idAFEntity_Gibbable *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 93319) { // IsGibbed
		cls->IsGibbed();
		return 0;
	};
	if(functionNameHash == 220901) { // InitSkeletonModel
		cls->InitSkeletonModel();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_Gibbable_typeInfo[] = {
	{ ": idRenderModel *", "skeletonModel", (int)(&((idAFEntity_Gibbable *)0)->skeletonModel), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModel ) },
	{ "int", "skeletonModelDefHandle", (int)(&((idAFEntity_Gibbable *)0)->skeletonModelDefHandle), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModelDefHandle ) },
	{ "bool", "gibbed", (int)(&((idAFEntity_Gibbable *)0)->gibbed), sizeof( ((idAFEntity_Gibbable *)0)->gibbed ) },
	{ "bool", "wasThrown", (int)(&((idAFEntity_Gibbable *)0)->wasThrown), sizeof( ((idAFEntity_Gibbable *)0)->wasThrown ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_Generic::Invoke(idAFEntity_Generic *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 238202) { // KeepRunningPhysics
		cls->KeepRunningPhysics();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_Generic_typeInfo[] = {
	{ "bool", "keepRunningPhysics", (int)(&((idAFEntity_Generic *)0)->keepRunningPhysics), sizeof( ((idAFEntity_Generic *)0)->keepRunningPhysics ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_WithAttachedHead::Invoke(idAFEntity_WithAttachedHead *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 110558) { // SetupHead
		cls->SetupHead();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 123153) { // LinkCombat
		cls->LinkCombat();
		return 0;
	};
	if(functionNameHash == 152332) { // UnlinkCombat
		cls->UnlinkCombat();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_WithAttachedHead_typeInfo[] = {
	{ ": idEntityPtr < idAFAttachment >", "head", (int)(&((idAFEntity_WithAttachedHead *)0)->head), sizeof( ((idAFEntity_WithAttachedHead *)0)->head ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_Vehicle::Invoke(idAFEntity_Vehicle *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 161405) { // GetSteerAngle
		cls->GetSteerAngle();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_Vehicle_typeInfo[] = {
	{ ": idPlayer *", "player", (int)(&((idAFEntity_Vehicle *)0)->player), sizeof( ((idAFEntity_Vehicle *)0)->player ) },
	{ "jointHandle_t", "eyesJoint", (int)(&((idAFEntity_Vehicle *)0)->eyesJoint), sizeof( ((idAFEntity_Vehicle *)0)->eyesJoint ) },
	{ "jointHandle_t", "steeringWheelJoint", (int)(&((idAFEntity_Vehicle *)0)->steeringWheelJoint), sizeof( ((idAFEntity_Vehicle *)0)->steeringWheelJoint ) },
	{ "float", "wheelRadius", (int)(&((idAFEntity_Vehicle *)0)->wheelRadius), sizeof( ((idAFEntity_Vehicle *)0)->wheelRadius ) },
	{ "float", "steerAngle", (int)(&((idAFEntity_Vehicle *)0)->steerAngle), sizeof( ((idAFEntity_Vehicle *)0)->steerAngle ) },
	{ "float", "steerSpeed", (int)(&((idAFEntity_Vehicle *)0)->steerSpeed), sizeof( ((idAFEntity_Vehicle *)0)->steerSpeed ) },
	{ "const idDeclParticle *", "dustSmoke", (int)(&((idAFEntity_Vehicle *)0)->dustSmoke), sizeof( ((idAFEntity_Vehicle *)0)->dustSmoke ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_VehicleSimple::Invoke(idAFEntity_VehicleSimple *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_VehicleSimple_typeInfo[] = {
	{ ": idClipModel *", "wheelModel", (int)(&((idAFEntity_VehicleSimple *)0)->wheelModel), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelModel ) },
	{ "idAFConstraint_Suspension *[4]", "suspension", (int)(&((idAFEntity_VehicleSimple *)0)->suspension), sizeof( ((idAFEntity_VehicleSimple *)0)->suspension ) },
	{ "jointHandle_t[4]", "wheelJoints", (int)(&((idAFEntity_VehicleSimple *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (int)(&((idAFEntity_VehicleSimple *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelAngles ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_VehicleFourWheels::Invoke(idAFEntity_VehicleFourWheels *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_VehicleFourWheels_typeInfo[] = {
	{ ": idAFBody *[4]", "wheels", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[2]", "steering", (int)(&((idAFEntity_VehicleFourWheels *)0)->steering), sizeof( ((idAFEntity_VehicleFourWheels *)0)->steering ) },
	{ "jointHandle_t[4]", "wheelJoints", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (int)(&((idAFEntity_VehicleFourWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_VehicleSixWheels::Invoke(idAFEntity_VehicleSixWheels *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_VehicleSixWheels_typeInfo[] = {
	{ "float", "force", (int)(&((idAFEntity_VehicleSixWheels *)0)->force), sizeof( ((idAFEntity_VehicleSixWheels *)0)->force ) },
	{ "float", "velocity", (int)(&((idAFEntity_VehicleSixWheels *)0)->velocity), sizeof( ((idAFEntity_VehicleSixWheels *)0)->velocity ) },
	{ "float", "steerAngle", (int)(&((idAFEntity_VehicleSixWheels *)0)->steerAngle), sizeof( ((idAFEntity_VehicleSixWheels *)0)->steerAngle ) },
	{ ": idAFBody *[6]", "wheels", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[4]", "steering", (int)(&((idAFEntity_VehicleSixWheels *)0)->steering), sizeof( ((idAFEntity_VehicleSixWheels *)0)->steering ) },
	{ "jointHandle_t[6]", "wheelJoints", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelJoints ) },
	{ "float[6]", "wheelAngles", (int)(&((idAFEntity_VehicleSixWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_VehicleAutomated::Invoke(idAFEntity_VehicleAutomated *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 116093) { // PostSpawn
		cls->PostSpawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_VehicleAutomated_typeInfo[] = {
	{ ": idEntity *", "waypoint", (int)(&((idAFEntity_VehicleAutomated *)0)->waypoint), sizeof( ((idAFEntity_VehicleAutomated *)0)->waypoint ) },
	{ "float", "steeringSpeed", (int)(&((idAFEntity_VehicleAutomated *)0)->steeringSpeed), sizeof( ((idAFEntity_VehicleAutomated *)0)->steeringSpeed ) },
	{ "float", "currentSteering", (int)(&((idAFEntity_VehicleAutomated *)0)->currentSteering), sizeof( ((idAFEntity_VehicleAutomated *)0)->currentSteering ) },
	{ "float", "idealSteering", (int)(&((idAFEntity_VehicleAutomated *)0)->idealSteering), sizeof( ((idAFEntity_VehicleAutomated *)0)->idealSteering ) },
	{ "float", "originHeight", (int)(&((idAFEntity_VehicleAutomated *)0)->originHeight), sizeof( ((idAFEntity_VehicleAutomated *)0)->originHeight ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_SteamPipe::Invoke(idAFEntity_SteamPipe *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 278530) { // InitSteamRenderEntity
		cls->InitSteamRenderEntity();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_SteamPipe_typeInfo[] = {
	{ ": int", "steamBody", (int)(&((idAFEntity_SteamPipe *)0)->steamBody), sizeof( ((idAFEntity_SteamPipe *)0)->steamBody ) },
	{ "float", "steamForce", (int)(&((idAFEntity_SteamPipe *)0)->steamForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamForce ) },
	{ "float", "steamUpForce", (int)(&((idAFEntity_SteamPipe *)0)->steamUpForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamUpForce ) },
	{ "idForce_Constant", "force", (int)(&((idAFEntity_SteamPipe *)0)->force), sizeof( ((idAFEntity_SteamPipe *)0)->force ) },
	{ "renderEntity_t", "steamRenderEntity", (int)(&((idAFEntity_SteamPipe *)0)->steamRenderEntity), sizeof( ((idAFEntity_SteamPipe *)0)->steamRenderEntity ) },
	{ "qhandle_t", "steamModelDefHandle", (int)(&((idAFEntity_SteamPipe *)0)->steamModelDefHandle), sizeof( ((idAFEntity_SteamPipe *)0)->steamModelDefHandle ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_ClawFourFingers::Invoke(idAFEntity_ClawFourFingers *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 222404) { // Event_StopFingers
		cls->Event_StopFingers();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_ClawFourFingers_typeInfo[] = {
	{ ": idAFConstraint_Hinge *[4]", "fingers", (int)(&((idAFEntity_ClawFourFingers *)0)->fingers), sizeof( ((idAFEntity_ClawFourFingers *)0)->fingers ) },
	{ NULL, 0 }
};

intptr_t idHarvestable::Invoke(idHarvestable *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 32907) { // Gib
		cls->Gib();
		return 0;
	};
	if(functionNameHash == 78457) { // BeginFX
		cls->BeginFX();
		return 0;
	};
	if(functionNameHash == 339354) { // Event_SpawnHarvestTrigger
		cls->Event_SpawnHarvestTrigger();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idHarvestable_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "parentEnt", (int)(&((idHarvestable *)0)->parentEnt), sizeof( ((idHarvestable *)0)->parentEnt ) },
	{ "float", "triggersize", (int)(&((idHarvestable *)0)->triggersize), sizeof( ((idHarvestable *)0)->triggersize ) },
	{ "idClipModel *", "trigger", (int)(&((idHarvestable *)0)->trigger), sizeof( ((idHarvestable *)0)->trigger ) },
	{ "float", "giveDelay", (int)(&((idHarvestable *)0)->giveDelay), sizeof( ((idHarvestable *)0)->giveDelay ) },
	{ "float", "removeDelay", (int)(&((idHarvestable *)0)->removeDelay), sizeof( ((idHarvestable *)0)->removeDelay ) },
	{ "bool", "given", (int)(&((idHarvestable *)0)->given), sizeof( ((idHarvestable *)0)->given ) },
	{ "idEntityPtr < idPlayer >", "player", (int)(&((idHarvestable *)0)->player), sizeof( ((idHarvestable *)0)->player ) },
	{ "int", "startTime", (int)(&((idHarvestable *)0)->startTime), sizeof( ((idHarvestable *)0)->startTime ) },
	{ "bool", "fxFollowPlayer", (int)(&((idHarvestable *)0)->fxFollowPlayer), sizeof( ((idHarvestable *)0)->fxFollowPlayer ) },
	{ "idEntityPtr < idEntityFx >", "fx", (int)(&((idHarvestable *)0)->fx), sizeof( ((idHarvestable *)0)->fx ) },
	{ "idStr", "fxOrient", (int)(&((idHarvestable *)0)->fxOrient), sizeof( ((idHarvestable *)0)->fxOrient ) },
	{ NULL, 0 }
};

intptr_t idAFEntity_Harvest::Invoke(idAFEntity_Harvest *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAFEntity_Harvest_typeInfo[] = {
	{ ": idEntityPtr < idHarvestable >", "harvestEnt", (int)(&((idAFEntity_Harvest *)0)->harvestEnt), sizeof( ((idAFEntity_Harvest *)0)->harvestEnt ) },
	{ NULL, 0 }
};

intptr_t idSpawnableEntity::Invoke(idSpawnableEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSpawnableEntity_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idPlayerStart::Invoke(idPlayerStart *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPlayerStart_typeInfo[] = {
	{ ": int", "teleportStage", (int)(&((idPlayerStart *)0)->teleportStage), sizeof( ((idPlayerStart *)0)->teleportStage ) },
	{ NULL, 0 }
};

intptr_t idActivator::Invoke(idActivator *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idActivator_typeInfo[] = {
	{ ": bool", "stay_on", (int)(&((idActivator *)0)->stay_on), sizeof( ((idActivator *)0)->stay_on ) },
	{ NULL, 0 }
};

intptr_t idPathCorner::Invoke(idPathCorner *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPathCorner_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idDamagable::Invoke(idDamagable *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 288410) { // Event_RestoreDamagable
		cls->Event_RestoreDamagable();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idDamagable_typeInfo[] = {
	{ ": int", "count", (int)(&((idDamagable *)0)->count), sizeof( ((idDamagable *)0)->count ) },
	{ "int", "nextTriggerTime", (int)(&((idDamagable *)0)->nextTriggerTime), sizeof( ((idDamagable *)0)->nextTriggerTime ) },
	{ NULL, 0 }
};

intptr_t idExplodable::Invoke(idExplodable *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idExplodable_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idSpring::Invoke(idSpring *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 206949) { // Event_LinkSpring
		cls->Event_LinkSpring();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSpring_typeInfo[] = {
	{ ": idEntity *", "ent1", (int)(&((idSpring *)0)->ent1), sizeof( ((idSpring *)0)->ent1 ) },
	{ "idEntity *", "ent2", (int)(&((idSpring *)0)->ent2), sizeof( ((idSpring *)0)->ent2 ) },
	{ "int", "id1", (int)(&((idSpring *)0)->id1), sizeof( ((idSpring *)0)->id1 ) },
	{ "int", "id2", (int)(&((idSpring *)0)->id2), sizeof( ((idSpring *)0)->id2 ) },
	{ "idVec3", "p1", (int)(&((idSpring *)0)->p1), sizeof( ((idSpring *)0)->p1 ) },
	{ "idVec3", "p2", (int)(&((idSpring *)0)->p2), sizeof( ((idSpring *)0)->p2 ) },
	{ "idForce_Spring", "spring", (int)(&((idSpring *)0)->spring), sizeof( ((idSpring *)0)->spring ) },
	{ NULL, 0 }
};

intptr_t idForceField::Invoke(idForceField *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 74153) { // Toggle
		cls->Toggle();
		return 0;
	};
	if(functionNameHash == 151873) { // Event_Toggle
		cls->Event_Toggle();
		return 0;
	};
	if(functionNameHash == 219288) { // Event_FindTargets
		cls->Event_FindTargets();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idForceField_typeInfo[] = {
	{ ": idForce_Field", "forceField", (int)(&((idForceField *)0)->forceField), sizeof( ((idForceField *)0)->forceField ) },
	{ NULL, 0 }
};

intptr_t idAnimated::Invoke(idAnimated *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 62976) { // LoadAF
		cls->LoadAF();
		return 0;
	};
	if(functionNameHash == 153861) { // StartRagdoll
		cls->StartRagdoll();
		return 0;
	};
	if(functionNameHash == 150763) { // PlayNextAnim
		cls->PlayNextAnim();
		return 0;
	};
	if(functionNameHash == 140926) { // Event_Start
		cls->Event_Start();
		return 0;
	};
	if(functionNameHash == 235331) { // Event_StartRagdoll
		cls->Event_StartRagdoll();
		return 0;
	};
	if(functionNameHash == 183671) { // Event_Footstep
		cls->Event_Footstep();
		return 0;
	};
	if(functionNameHash == 318263) { // Event_GetAnimationLength
		cls->Event_GetAnimationLength();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAnimated_typeInfo[] = {
	{ ": int", "num_anims", (int)(&((idAnimated *)0)->num_anims), sizeof( ((idAnimated *)0)->num_anims ) },
	{ "int", "current_anim_index", (int)(&((idAnimated *)0)->current_anim_index), sizeof( ((idAnimated *)0)->current_anim_index ) },
	{ "int", "anim", (int)(&((idAnimated *)0)->anim), sizeof( ((idAnimated *)0)->anim ) },
	{ "int", "blendFrames", (int)(&((idAnimated *)0)->blendFrames), sizeof( ((idAnimated *)0)->blendFrames ) },
	{ "jointHandle_t", "soundJoint", (int)(&((idAnimated *)0)->soundJoint), sizeof( ((idAnimated *)0)->soundJoint ) },
	{ "idEntityPtr < idEntity >", "activator", (int)(&((idAnimated *)0)->activator), sizeof( ((idAnimated *)0)->activator ) },
	{ "bool", "activated", (int)(&((idAnimated *)0)->activated), sizeof( ((idAnimated *)0)->activated ) },
	{ "int", "achievement", (int)(&((idAnimated *)0)->achievement), sizeof( ((idAnimated *)0)->achievement ) },
	{ NULL, 0 }
};

intptr_t idStaticEntity::Invoke(idStaticEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 218178) { // ShowEditingDialog
		cls->ShowEditingDialog();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idStaticEntity_typeInfo[] = {
	{ "int", "spawnTime", (int)(&((idStaticEntity *)0)->spawnTime), sizeof( ((idStaticEntity *)0)->spawnTime ) },
	{ "bool", "active", (int)(&((idStaticEntity *)0)->active), sizeof( ((idStaticEntity *)0)->active ) },
	{ "idVec4", "fadeFrom", (int)(&((idStaticEntity *)0)->fadeFrom), sizeof( ((idStaticEntity *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (int)(&((idStaticEntity *)0)->fadeTo), sizeof( ((idStaticEntity *)0)->fadeTo ) },
	{ "int", "fadeStart", (int)(&((idStaticEntity *)0)->fadeStart), sizeof( ((idStaticEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idStaticEntity *)0)->fadeEnd), sizeof( ((idStaticEntity *)0)->fadeEnd ) },
	{ "bool", "runGui", (int)(&((idStaticEntity *)0)->runGui), sizeof( ((idStaticEntity *)0)->runGui ) },
	{ NULL, 0 }
};

intptr_t idFuncEmitter::Invoke(idFuncEmitter *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncEmitter_typeInfo[] = {
	{ ": bool", "hidden", (int)(&((idFuncEmitter *)0)->hidden), sizeof( ((idFuncEmitter *)0)->hidden ) },
	{ NULL, 0 }
};

intptr_t idFuncShootProjectile::Invoke(idFuncShootProjectile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncShootProjectile_typeInfo[] = {
	{ ": int", "mRespawnDelay", (int)(&((idFuncShootProjectile *)0)->mRespawnDelay), sizeof( ((idFuncShootProjectile *)0)->mRespawnDelay ) },
	{ "int", "mRespawnTime", (int)(&((idFuncShootProjectile *)0)->mRespawnTime), sizeof( ((idFuncShootProjectile *)0)->mRespawnTime ) },
	{ "float", "mShootSpeed", (int)(&((idFuncShootProjectile *)0)->mShootSpeed), sizeof( ((idFuncShootProjectile *)0)->mShootSpeed ) },
	{ "idVec3", "mShootDir", (int)(&((idFuncShootProjectile *)0)->mShootDir), sizeof( ((idFuncShootProjectile *)0)->mShootDir ) },
	{ "idStr", "mEntityDefName", (int)(&((idFuncShootProjectile *)0)->mEntityDefName), sizeof( ((idFuncShootProjectile *)0)->mEntityDefName ) },
	{ "idEntityPtr < idEntity >", "mLastProjectile", (int)(&((idFuncShootProjectile *)0)->mLastProjectile), sizeof( ((idFuncShootProjectile *)0)->mLastProjectile ) },
	{ NULL, 0 }
};

intptr_t idFuncSmoke::Invoke(idFuncSmoke *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncSmoke_typeInfo[] = {
	{ ": int", "smokeTime", (int)(&((idFuncSmoke *)0)->smokeTime), sizeof( ((idFuncSmoke *)0)->smokeTime ) },
	{ "const idDeclParticle *", "smoke", (int)(&((idFuncSmoke *)0)->smoke), sizeof( ((idFuncSmoke *)0)->smoke ) },
	{ "bool", "restart", (int)(&((idFuncSmoke *)0)->restart), sizeof( ((idFuncSmoke *)0)->restart ) },
	{ NULL, 0 }
};

intptr_t idFuncSplat::Invoke(idFuncSplat *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 139643) { // Event_Splat
		cls->Event_Splat();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncSplat_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTextEntity::Invoke(idTextEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTextEntity_typeInfo[] = {
	{ ": idStr", "text", (int)(&((idTextEntity *)0)->text), sizeof( ((idTextEntity *)0)->text ) },
	{ "bool", "playerOriented", (int)(&((idTextEntity *)0)->playerOriented), sizeof( ((idTextEntity *)0)->playerOriented ) },
	{ NULL, 0 }
};

intptr_t idLocationEntity::Invoke(idLocationEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 138280) { // GetLocation
		return (intptr_t)cls->GetLocation();
	};
	return 0;

};

static classVariableInfo_t idLocationEntity_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idLocationSeparatorEntity::Invoke(idLocationSeparatorEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idLocationSeparatorEntity_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idVacuumSeparatorEntity::Invoke(idVacuumSeparatorEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idVacuumSeparatorEntity_typeInfo[] = {
	{ ": qhandle_t", "portal", (int)(&((idVacuumSeparatorEntity *)0)->portal), sizeof( ((idVacuumSeparatorEntity *)0)->portal ) },
	{ NULL, 0 }
};

intptr_t idVacuumEntity::Invoke(idVacuumEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idVacuumEntity_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idBeam::Invoke(idBeam *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idBeam_typeInfo[] = {
	{ "idEntityPtr < idBeam >", "target", (int)(&((idBeam *)0)->target), sizeof( ((idBeam *)0)->target ) },
	{ "idEntityPtr < idBeam >", "master", (int)(&((idBeam *)0)->master), sizeof( ((idBeam *)0)->master ) },
	{ NULL, 0 }
};

intptr_t idLiquid::Invoke(idLiquid *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idLiquid_typeInfo[] = {
	{ "idRenderModelLiquid *", "model", (int)(&((idLiquid *)0)->model), sizeof( ((idLiquid *)0)->model ) },
	{ NULL, 0 }
};

intptr_t idShaking::Invoke(idShaking *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 148900) { // BeginShaking
		cls->BeginShaking();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idShaking_typeInfo[] = {
	{ ": idPhysics_Parametric", "physicsObj", (int)(&((idShaking *)0)->physicsObj), sizeof( ((idShaking *)0)->physicsObj ) },
	{ "bool", "active", (int)(&((idShaking *)0)->active), sizeof( ((idShaking *)0)->active ) },
	{ NULL, 0 }
};

intptr_t idEarthQuake::Invoke(idEarthQuake *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idEarthQuake_typeInfo[] = {
	{ ": int", "nextTriggerTime", (int)(&((idEarthQuake *)0)->nextTriggerTime), sizeof( ((idEarthQuake *)0)->nextTriggerTime ) },
	{ "int", "shakeStopTime", (int)(&((idEarthQuake *)0)->shakeStopTime), sizeof( ((idEarthQuake *)0)->shakeStopTime ) },
	{ "float", "wait", (int)(&((idEarthQuake *)0)->wait), sizeof( ((idEarthQuake *)0)->wait ) },
	{ "float", "random", (int)(&((idEarthQuake *)0)->random), sizeof( ((idEarthQuake *)0)->random ) },
	{ "bool", "triggered", (int)(&((idEarthQuake *)0)->triggered), sizeof( ((idEarthQuake *)0)->triggered ) },
	{ "bool", "playerOriented", (int)(&((idEarthQuake *)0)->playerOriented), sizeof( ((idEarthQuake *)0)->playerOriented ) },
	{ "bool", "disabled", (int)(&((idEarthQuake *)0)->disabled), sizeof( ((idEarthQuake *)0)->disabled ) },
	{ "float", "shakeTime", (int)(&((idEarthQuake *)0)->shakeTime), sizeof( ((idEarthQuake *)0)->shakeTime ) },
	{ NULL, 0 }
};

intptr_t idFuncPortal::Invoke(idFuncPortal *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncPortal_typeInfo[] = {
	{ ": qhandle_t", "portal", (int)(&((idFuncPortal *)0)->portal), sizeof( ((idFuncPortal *)0)->portal ) },
	{ "bool", "state", (int)(&((idFuncPortal *)0)->state), sizeof( ((idFuncPortal *)0)->state ) },
	{ NULL, 0 }
};

intptr_t idFuncAASPortal::Invoke(idFuncAASPortal *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncAASPortal_typeInfo[] = {
	{ ": bool", "state", (int)(&((idFuncAASPortal *)0)->state), sizeof( ((idFuncAASPortal *)0)->state ) },
	{ NULL, 0 }
};

intptr_t idFuncAASObstacle::Invoke(idFuncAASObstacle *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncAASObstacle_typeInfo[] = {
	{ ": bool", "state", (int)(&((idFuncAASObstacle *)0)->state), sizeof( ((idFuncAASObstacle *)0)->state ) },
	{ NULL, 0 }
};

intptr_t idFuncRadioChatter::Invoke(idFuncRadioChatter *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncRadioChatter_typeInfo[] = {
	{ ": float", "time", (int)(&((idFuncRadioChatter *)0)->time), sizeof( ((idFuncRadioChatter *)0)->time ) },
	{ NULL, 0 }
};

intptr_t idPhantomObjects::Invoke(idPhantomObjects *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 141701) { // Event_Throw
		cls->Event_Throw();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPhantomObjects_typeInfo[] = {
	{ "int", "end_time", (int)(&((idPhantomObjects *)0)->end_time), sizeof( ((idPhantomObjects *)0)->end_time ) },
	{ "float", "throw_time", (int)(&((idPhantomObjects *)0)->throw_time), sizeof( ((idPhantomObjects *)0)->throw_time ) },
	{ "float", "shake_time", (int)(&((idPhantomObjects *)0)->shake_time), sizeof( ((idPhantomObjects *)0)->shake_time ) },
	{ "idVec3", "shake_ang", (int)(&((idPhantomObjects *)0)->shake_ang), sizeof( ((idPhantomObjects *)0)->shake_ang ) },
	{ "float", "speed", (int)(&((idPhantomObjects *)0)->speed), sizeof( ((idPhantomObjects *)0)->speed ) },
	{ "int", "min_wait", (int)(&((idPhantomObjects *)0)->min_wait), sizeof( ((idPhantomObjects *)0)->min_wait ) },
	{ "int", "max_wait", (int)(&((idPhantomObjects *)0)->max_wait), sizeof( ((idPhantomObjects *)0)->max_wait ) },
	{ "idEntityPtr < idActor >", "target", (int)(&((idPhantomObjects *)0)->target), sizeof( ((idPhantomObjects *)0)->target ) },
	{ "idList < int >", "targetTime", (int)(&((idPhantomObjects *)0)->targetTime), sizeof( ((idPhantomObjects *)0)->targetTime ) },
	{ "idList < idVec3 >", "lastTargetPos", (int)(&((idPhantomObjects *)0)->lastTargetPos), sizeof( ((idPhantomObjects *)0)->lastTargetPos ) },
	{ NULL, 0 }
};

intptr_t idShockwave::Invoke(idShockwave *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idShockwave_typeInfo[] = {
	{ "bool", "isActive", (int)(&((idShockwave *)0)->isActive), sizeof( ((idShockwave *)0)->isActive ) },
	{ "int", "startTime", (int)(&((idShockwave *)0)->startTime), sizeof( ((idShockwave *)0)->startTime ) },
	{ "int", "duration", (int)(&((idShockwave *)0)->duration), sizeof( ((idShockwave *)0)->duration ) },
	{ "float", "startSize", (int)(&((idShockwave *)0)->startSize), sizeof( ((idShockwave *)0)->startSize ) },
	{ "float", "endSize", (int)(&((idShockwave *)0)->endSize), sizeof( ((idShockwave *)0)->endSize ) },
	{ "float", "currentSize", (int)(&((idShockwave *)0)->currentSize), sizeof( ((idShockwave *)0)->currentSize ) },
	{ "float", "magnitude", (int)(&((idShockwave *)0)->magnitude), sizeof( ((idShockwave *)0)->magnitude ) },
	{ "float", "height", (int)(&((idShockwave *)0)->height), sizeof( ((idShockwave *)0)->height ) },
	{ "bool", "playerDamaged", (int)(&((idShockwave *)0)->playerDamaged), sizeof( ((idShockwave *)0)->playerDamaged ) },
	{ "float", "playerDamageSize", (int)(&((idShockwave *)0)->playerDamageSize), sizeof( ((idShockwave *)0)->playerDamageSize ) },
	{ NULL, 0 }
};

intptr_t idFuncMountedObject::Invoke(idFuncMountedObject *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncMountedObject_typeInfo[] = {
	{ ": int", "harc", (int)(&((idFuncMountedObject *)0)->harc), sizeof( ((idFuncMountedObject *)0)->harc ) },
	{ "int", "varc", (int)(&((idFuncMountedObject *)0)->varc), sizeof( ((idFuncMountedObject *)0)->varc ) },
	{ ": bool", "isMounted", (int)(&((idFuncMountedObject *)0)->isMounted), sizeof( ((idFuncMountedObject *)0)->isMounted ) },
	{ "function_t *", "scriptFunction", (int)(&((idFuncMountedObject *)0)->scriptFunction), sizeof( ((idFuncMountedObject *)0)->scriptFunction ) },
	{ "idPlayer *", "mountedPlayer", (int)(&((idFuncMountedObject *)0)->mountedPlayer), sizeof( ((idFuncMountedObject *)0)->mountedPlayer ) },
	{ NULL, 0 }
};

intptr_t idFuncMountedWeapon::Invoke(idFuncMountedWeapon *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 195811) { // Event_PostSpawn
		cls->Event_PostSpawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idFuncMountedWeapon_typeInfo[] = {
	{ ": idEntity *", "turret", (int)(&((idFuncMountedWeapon *)0)->turret), sizeof( ((idFuncMountedWeapon *)0)->turret ) },
	{ "idVec3", "muzzleOrigin", (int)(&((idFuncMountedWeapon *)0)->muzzleOrigin), sizeof( ((idFuncMountedWeapon *)0)->muzzleOrigin ) },
	{ "idMat3", "muzzleAxis", (int)(&((idFuncMountedWeapon *)0)->muzzleAxis), sizeof( ((idFuncMountedWeapon *)0)->muzzleAxis ) },
	{ "float", "weaponLastFireTime", (int)(&((idFuncMountedWeapon *)0)->weaponLastFireTime), sizeof( ((idFuncMountedWeapon *)0)->weaponLastFireTime ) },
	{ "float", "weaponFireDelay", (int)(&((idFuncMountedWeapon *)0)->weaponFireDelay), sizeof( ((idFuncMountedWeapon *)0)->weaponFireDelay ) },
	{ "const idDict *", "projectile", (int)(&((idFuncMountedWeapon *)0)->projectile), sizeof( ((idFuncMountedWeapon *)0)->projectile ) },
	{ "const idSoundShader *", "soundFireWeapon", (int)(&((idFuncMountedWeapon *)0)->soundFireWeapon), sizeof( ((idFuncMountedWeapon *)0)->soundFireWeapon ) },
	{ NULL, 0 }
};

intptr_t idPortalSky::Invoke(idPortalSky *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 195811) { // Event_PostSpawn
		cls->Event_PostSpawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPortalSky_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAnimState_typeInfo[] = {
	{ ": bool", "idleAnim", (int)(&((idAnimState *)0)->idleAnim), sizeof( ((idAnimState *)0)->idleAnim ) },
	{ "idStr", "state", (int)(&((idAnimState *)0)->state), sizeof( ((idAnimState *)0)->state ) },
	{ "int", "animBlendFrames", (int)(&((idAnimState *)0)->animBlendFrames), sizeof( ((idAnimState *)0)->animBlendFrames ) },
	{ "int", "lastAnimBlendFrames", (int)(&((idAnimState *)0)->lastAnimBlendFrames), sizeof( ((idAnimState *)0)->lastAnimBlendFrames ) },
	{ ": idActor *", "self", (int)(&((idAnimState *)0)->self), sizeof( ((idAnimState *)0)->self ) },
	{ "idAnimator *", "animator", (int)(&((idAnimState *)0)->animator), sizeof( ((idAnimState *)0)->animator ) },
	{ "idThread *", "thread", (int)(&((idAnimState *)0)->thread), sizeof( ((idAnimState *)0)->thread ) },
	{ "int", "channel", (int)(&((idAnimState *)0)->channel), sizeof( ((idAnimState *)0)->channel ) },
	{ "bool", "disabled", (int)(&((idAnimState *)0)->disabled), sizeof( ((idAnimState *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAttachInfo_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "ent", (int)(&((idAttachInfo *)0)->ent), sizeof( ((idAttachInfo *)0)->ent ) },
	{ "int", "channel", (int)(&((idAttachInfo *)0)->channel), sizeof( ((idAttachInfo *)0)->channel ) },
	{ NULL, 0 }
};

static classVariableInfo_t copyJoints_t_typeInfo[] = {
	{ "jointModTransform_t", "mod", (int)(&((copyJoints_t *)0)->mod), sizeof( ((copyJoints_t *)0)->mod ) },
	{ "jointHandle_t", "from", (int)(&((copyJoints_t *)0)->from), sizeof( ((copyJoints_t *)0)->from ) },
	{ "jointHandle_t", "to", (int)(&((copyJoints_t *)0)->to), sizeof( ((copyJoints_t *)0)->to ) },
	{ NULL, 0 }
};

intptr_t idActor::Invoke(idActor *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 90512) { // Restart
		cls->Restart();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 275016) { // GetDefaultSurfaceType
		cls->GetDefaultSurfaceType();
		return 0;
	};
	if(functionNameHash == 62976) { // LoadAF
		cls->LoadAF();
		return 0;
	};
	if(functionNameHash == 114109) { // SetupBody
		cls->SetupBody();
		return 0;
	};
	if(functionNameHash == 120493) { // CheckBlink
		cls->CheckBlink();
		return 0;
	};
	if(functionNameHash == 198483) { // ShutdownThreads
		cls->ShutdownThreads();
		return 0;
	};
	if(functionNameHash == 476562) { // ShouldConstructScriptObjectAtSpawn
		cls->ShouldConstructScriptObjectAtSpawn();
		return 0;
	};
	if(functionNameHash == 282905) { // ConstructScriptObject
		return (intptr_t)cls->ConstructScriptObject();
	};
	if(functionNameHash == 154576) { // UpdateScript
		cls->UpdateScript();
		return 0;
	};
	if(functionNameHash == 109890) { // EyeHeight
		cls->EyeHeight();
		return 0;
	};
	if(functionNameHash == 111617) { // EyeOffset
		cls->EyeOffset();
		return 0;
	};
	if(functionNameHash == 180136) { // GetEyePosition
		cls->GetEyePosition();
		return 0;
	};
	if(functionNameHash == 221816) { // SetupDamageGroups
		cls->SetupDamageGroups();
		return 0;
	};
	if(functionNameHash == 108255) { // ClearPain
		cls->ClearPain();
		return 0;
	};
	if(functionNameHash == 175242) { // SetCombatModel
		cls->SetCombatModel();
		return 0;
	};
	if(functionNameHash == 173814) { // GetCombatModel
		return (intptr_t)cls->GetCombatModel();
	};
	if(functionNameHash == 123153) { // LinkCombat
		cls->LinkCombat();
		return 0;
	};
	if(functionNameHash == 152332) { // UnlinkCombat
		cls->UnlinkCombat();
		return 0;
	};
	if(functionNameHash == 153861) { // StartRagdoll
		cls->StartRagdoll();
		return 0;
	};
	if(functionNameHash == 140334) { // StopRagdoll
		cls->StopRagdoll();
		return 0;
	};
	if(functionNameHash == 357711) { // UpdateAnimationControllers
		cls->UpdateAnimationControllers();
		return 0;
	};
	if(functionNameHash == 228780) { // GetDeltaViewAngles
		cls->GetDeltaViewAngles();
		return 0;
	};
	if(functionNameHash == 122997) { // HasEnemies
		cls->HasEnemies();
		return 0;
	};
	if(functionNameHash == 248410) { // EnemyWithMostHealth
		return (intptr_t)cls->EnemyWithMostHealth();
	};
	if(functionNameHash == 95320) { // OnLadder
		cls->OnLadder();
		return 0;
	};
	if(functionNameHash == 163648) { // GetRenderView
		return (intptr_t)cls->GetRenderView();
	};
	if(functionNameHash == 190792) { // UpdateAnimState
		cls->UpdateAnimState();
		return 0;
	};
	if(functionNameHash == 113011) { // WaitState
		return (intptr_t)cls->WaitState();
	};
	if(functionNameHash == 162328) { // GetHeadEntity
		return (intptr_t)cls->GetHeadEntity();
	};
	if(functionNameHash == 225137) { // RemoveAttachments
		cls->RemoveAttachments();
		return 0;
	};
	if(functionNameHash == 314148) { // CopyJointsFromBodyToHead
		cls->CopyJointsFromBodyToHead();
		return 0;
	};
	if(functionNameHash == 141348) { // FinishSetup
		cls->FinishSetup();
		return 0;
	};
	if(functionNameHash == 110558) { // SetupHead
		cls->SetupHead();
		return 0;
	};
	if(functionNameHash == 222148) { // PlayFootStepSound
		cls->PlayFootStepSound();
		return 0;
	};
	if(functionNameHash == 256642) { // Event_EnableEyeFocus
		cls->Event_EnableEyeFocus();
		return 0;
	};
	if(functionNameHash == 271699) { // Event_DisableEyeFocus
		cls->Event_DisableEyeFocus();
		return 0;
	};
	if(functionNameHash == 183671) { // Event_Footstep
		cls->Event_Footstep();
		return 0;
	};
	if(functionNameHash == 221428) { // Event_EnableWalkIK
		cls->Event_EnableWalkIK();
		return 0;
	};
	if(functionNameHash == 236229) { // Event_DisableWalkIK
		cls->Event_DisableWalkIK();
		return 0;
	};
	if(functionNameHash == 215105) { // Event_DisablePain
		cls->Event_DisablePain();
		return 0;
	};
	if(functionNameHash == 200459) { // Event_EnablePain
		cls->Event_EnablePain();
		return 0;
	};
	if(functionNameHash == 213201) { // Event_GetPainAnim
		cls->Event_GetPainAnim();
		return 0;
	};
	if(functionNameHash == 203021) { // Event_HasEnemies
		cls->Event_HasEnemies();
		return 0;
	};
	if(functionNameHash == 177119) { // Event_GetState
		cls->Event_GetState();
		return 0;
	};
	if(functionNameHash == 158348) { // Event_GetHead
		cls->Event_GetHead();
		return 0;
	};
	if(functionNameHash == 231666) { // Event_GetWaitState
		cls->Event_GetWaitState();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idActor_typeInfo[] = {
	{ "int", "team", (int)(&((idActor *)0)->team), sizeof( ((idActor *)0)->team ) },
	{ "int", "rank", (int)(&((idActor *)0)->rank), sizeof( ((idActor *)0)->rank ) },
	{ "idMat3", "viewAxis", (int)(&((idActor *)0)->viewAxis), sizeof( ((idActor *)0)->viewAxis ) },
	{ "idLinkList < idActor >", "enemyNode", (int)(&((idActor *)0)->enemyNode), sizeof( ((idActor *)0)->enemyNode ) },
	{ "idLinkList < idActor >", "enemyList", (int)(&((idActor *)0)->enemyList), sizeof( ((idActor *)0)->enemyList ) },
	{ "float", "fovDot", (int)(&((idActor *)0)->fovDot), sizeof( ((idActor *)0)->fovDot ) },
	{ "idVec3", "eyeOffset", (int)(&((idActor *)0)->eyeOffset), sizeof( ((idActor *)0)->eyeOffset ) },
	{ "idVec3", "modelOffset", (int)(&((idActor *)0)->modelOffset), sizeof( ((idActor *)0)->modelOffset ) },
	{ "idAngles", "deltaViewAngles", (int)(&((idActor *)0)->deltaViewAngles), sizeof( ((idActor *)0)->deltaViewAngles ) },
	{ "int", "pain_debounce_time", (int)(&((idActor *)0)->pain_debounce_time), sizeof( ((idActor *)0)->pain_debounce_time ) },
	{ "int", "pain_delay", (int)(&((idActor *)0)->pain_delay), sizeof( ((idActor *)0)->pain_delay ) },
	{ "int", "pain_threshold", (int)(&((idActor *)0)->pain_threshold), sizeof( ((idActor *)0)->pain_threshold ) },
	{ "idStrList", "damageGroups", (int)(&((idActor *)0)->damageGroups), sizeof( ((idActor *)0)->damageGroups ) },
	{ "idList < float , TAG_ACTOR >", "damageScale", (int)(&((idActor *)0)->damageScale), sizeof( ((idActor *)0)->damageScale ) },
	{ "bool", "use_combat_bbox", (int)(&((idActor *)0)->use_combat_bbox), sizeof( ((idActor *)0)->use_combat_bbox ) },
	{ "idEntityPtr < idAFAttachment >", "head", (int)(&((idActor *)0)->head), sizeof( ((idActor *)0)->head ) },
	{ "idList < copyJoints_t , TAG_ACTOR >", "copyJoints", (int)(&((idActor *)0)->copyJoints), sizeof( ((idActor *)0)->copyJoints ) },
	{ "const function_t *", "state", (int)(&((idActor *)0)->state), sizeof( ((idActor *)0)->state ) },
	{ "const function_t *", "idealState", (int)(&((idActor *)0)->idealState), sizeof( ((idActor *)0)->idealState ) },
	{ "jointHandle_t", "leftEyeJoint", (int)(&((idActor *)0)->leftEyeJoint), sizeof( ((idActor *)0)->leftEyeJoint ) },
	{ "jointHandle_t", "rightEyeJoint", (int)(&((idActor *)0)->rightEyeJoint), sizeof( ((idActor *)0)->rightEyeJoint ) },
	{ "jointHandle_t", "soundJoint", (int)(&((idActor *)0)->soundJoint), sizeof( ((idActor *)0)->soundJoint ) },
	{ "idIK_Walk", "walkIK", (int)(&((idActor *)0)->walkIK), sizeof( ((idActor *)0)->walkIK ) },
	{ "idStr", "animPrefix", (int)(&((idActor *)0)->animPrefix), sizeof( ((idActor *)0)->animPrefix ) },
	{ "idStr", "painAnim", (int)(&((idActor *)0)->painAnim), sizeof( ((idActor *)0)->painAnim ) },
	{ "int", "blink_anim", (int)(&((idActor *)0)->blink_anim), sizeof( ((idActor *)0)->blink_anim ) },
	{ "int", "blink_time", (int)(&((idActor *)0)->blink_time), sizeof( ((idActor *)0)->blink_time ) },
	{ "int", "blink_min", (int)(&((idActor *)0)->blink_min), sizeof( ((idActor *)0)->blink_min ) },
	{ "int", "blink_max", (int)(&((idActor *)0)->blink_max), sizeof( ((idActor *)0)->blink_max ) },
	{ "idThread *", "scriptThread", (int)(&((idActor *)0)->scriptThread), sizeof( ((idActor *)0)->scriptThread ) },
	{ "idStr", "waitState", (int)(&((idActor *)0)->waitState), sizeof( ((idActor *)0)->waitState ) },
	{ "idAnimState", "headAnim", (int)(&((idActor *)0)->headAnim), sizeof( ((idActor *)0)->headAnim ) },
	{ "idAnimState", "torsoAnim", (int)(&((idActor *)0)->torsoAnim), sizeof( ((idActor *)0)->torsoAnim ) },
	{ "idAnimState", "legsAnim", (int)(&((idActor *)0)->legsAnim), sizeof( ((idActor *)0)->legsAnim ) },
	{ "bool", "allowPain", (int)(&((idActor *)0)->allowPain), sizeof( ((idActor *)0)->allowPain ) },
	{ "bool", "allowEyeFocus", (int)(&((idActor *)0)->allowEyeFocus), sizeof( ((idActor *)0)->allowEyeFocus ) },
	{ "bool", "finalBoss", (int)(&((idActor *)0)->finalBoss), sizeof( ((idActor *)0)->finalBoss ) },
	{ "int", "painTime", (int)(&((idActor *)0)->painTime), sizeof( ((idActor *)0)->painTime ) },
	{ "bool", "damageNotByFists", (int)(&((idActor *)0)->damageNotByFists), sizeof( ((idActor *)0)->damageNotByFists ) },
	{ "idList < idAttachInfo , TAG_ACTOR >", "attachments", (int)(&((idActor *)0)->attachments), sizeof( ((idActor *)0)->attachments ) },
	{ "int", "damageCap", (int)(&((idActor *)0)->damageCap), sizeof( ((idActor *)0)->damageCap ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_simulatedProjectile_t_typeInfo[] = {
	{ "idProjectile *", "projectile", (int)(&((idProjectile::simulatedProjectile_t *)0)->projectile), sizeof( ((idProjectile::simulatedProjectile_t *)0)->projectile ) },
	{ "int", "startTime", (int)(&((idProjectile::simulatedProjectile_t *)0)->startTime), sizeof( ((idProjectile::simulatedProjectile_t *)0)->startTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_projectileFlags_s_typeInfo[] = {
//	{ "bool", "detonate_on_world", (int)(&((idProjectile::projectileFlags_s *)0)->detonate_on_world), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_world ) },
//	{ "bool", "detonate_on_actor", (int)(&((idProjectile::projectileFlags_s *)0)->detonate_on_actor), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_actor ) },
//	{ "bool", "randomShaderSpin", (int)(&((idProjectile::projectileFlags_s *)0)->randomShaderSpin), sizeof( ((idProjectile::projectileFlags_s *)0)->randomShaderSpin ) },
//	{ "bool", "isTracer", (int)(&((idProjectile::projectileFlags_s *)0)->isTracer), sizeof( ((idProjectile::projectileFlags_s *)0)->isTracer ) },
//	{ "bool", "noSplashDamage", (int)(&((idProjectile::projectileFlags_s *)0)->noSplashDamage), sizeof( ((idProjectile::projectileFlags_s *)0)->noSplashDamage ) },
	{ NULL, 0 }
};

intptr_t idProjectile::Invoke(idProjectile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 144625) { // FreeLightDef
		cls->FreeLightDef();
		return 0;
	};
	if(functionNameHash == 99509) { // GetOwner
		return (intptr_t)cls->GetOwner();
	};
	if(functionNameHash == 235142) { // GetProjectileState
		return (intptr_t)cls->GetProjectileState();
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 76384) { // Fizzle
		cls->Fizzle();
		return 0;
	};
	if(functionNameHash == 283804) { // GetLaunchedFromGrabber
		cls->GetLaunchedFromGrabber();
		return 0;
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 254726) { // AddParticlesAndLight
		cls->AddParticlesAndLight();
		return 0;
	};
	if(functionNameHash == 166403) { // Event_Explode
		cls->Event_Explode();
		return 0;
	};
	if(functionNameHash == 154212) { // Event_Fizzle
		cls->Event_Fizzle();
		return 0;
	};
	if(functionNameHash == 320254) { // Event_GetProjectileState
		cls->Event_GetProjectileState();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idProjectile_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "owner", (int)(&((idProjectile *)0)->owner), sizeof( ((idProjectile *)0)->owner ) },
	{ "idProjectile::projectileFlags_s", "projectileFlags", (int)(&((idProjectile *)0)->projectileFlags), sizeof( ((idProjectile *)0)->projectileFlags ) },
	{ "bool", "launchedFromGrabber", (int)(&((idProjectile *)0)->launchedFromGrabber), sizeof( ((idProjectile *)0)->launchedFromGrabber ) },
	{ "float", "thrust", (int)(&((idProjectile *)0)->thrust), sizeof( ((idProjectile *)0)->thrust ) },
	{ "int", "thrust_end", (int)(&((idProjectile *)0)->thrust_end), sizeof( ((idProjectile *)0)->thrust_end ) },
	{ "float", "damagePower", (int)(&((idProjectile *)0)->damagePower), sizeof( ((idProjectile *)0)->damagePower ) },
	{ "renderLight_t", "renderLight", (int)(&((idProjectile *)0)->renderLight), sizeof( ((idProjectile *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idProjectile *)0)->lightDefHandle), sizeof( ((idProjectile *)0)->lightDefHandle ) },
	{ "idVec3", "lightOffset", (int)(&((idProjectile *)0)->lightOffset), sizeof( ((idProjectile *)0)->lightOffset ) },
	{ "int", "lightStartTime", (int)(&((idProjectile *)0)->lightStartTime), sizeof( ((idProjectile *)0)->lightStartTime ) },
	{ "int", "lightEndTime", (int)(&((idProjectile *)0)->lightEndTime), sizeof( ((idProjectile *)0)->lightEndTime ) },
	{ "idVec3", "lightColor", (int)(&((idProjectile *)0)->lightColor), sizeof( ((idProjectile *)0)->lightColor ) },
	{ "idForce_Constant", "thruster", (int)(&((idProjectile *)0)->thruster), sizeof( ((idProjectile *)0)->thruster ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idProjectile *)0)->physicsObj), sizeof( ((idProjectile *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (int)(&((idProjectile *)0)->smokeFly), sizeof( ((idProjectile *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (int)(&((idProjectile *)0)->smokeFlyTime), sizeof( ((idProjectile *)0)->smokeFlyTime ) },
	{ "bool", "mNoExplodeDisappear", (int)(&((idProjectile *)0)->mNoExplodeDisappear), sizeof( ((idProjectile *)0)->mNoExplodeDisappear ) },
	{ "bool", "mTouchTriggers", (int)(&((idProjectile *)0)->mTouchTriggers), sizeof( ((idProjectile *)0)->mTouchTriggers ) },
	{ "int", "originalTimeGroup", (int)(&((idProjectile *)0)->originalTimeGroup), sizeof( ((idProjectile *)0)->originalTimeGroup ) },
	{ "projectileState_t", "state", (int)(&((idProjectile *)0)->state), sizeof( ((idProjectile *)0)->state ) },
	{ ": idVec3", "launchOrigin", (int)(&((idProjectile *)0)->launchOrigin), sizeof( ((idProjectile *)0)->launchOrigin ) },
	{ "idMat3", "launchAxis", (int)(&((idProjectile *)0)->launchAxis), sizeof( ((idProjectile *)0)->launchAxis ) },
	{ NULL, 0 }
};

intptr_t idGuidedProjectile::Invoke(idGuidedProjectile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idGuidedProjectile_typeInfo[] = {
	{ ": float", "speed", (int)(&((idGuidedProjectile *)0)->speed), sizeof( ((idGuidedProjectile *)0)->speed ) },
	{ "idEntityPtr < idEntity >", "enemy", (int)(&((idGuidedProjectile *)0)->enemy), sizeof( ((idGuidedProjectile *)0)->enemy ) },
	{ ": idAngles", "rndScale", (int)(&((idGuidedProjectile *)0)->rndScale), sizeof( ((idGuidedProjectile *)0)->rndScale ) },
	{ "idAngles", "rndAng", (int)(&((idGuidedProjectile *)0)->rndAng), sizeof( ((idGuidedProjectile *)0)->rndAng ) },
	{ "idAngles", "angles", (int)(&((idGuidedProjectile *)0)->angles), sizeof( ((idGuidedProjectile *)0)->angles ) },
	{ "int", "rndUpdateTime", (int)(&((idGuidedProjectile *)0)->rndUpdateTime), sizeof( ((idGuidedProjectile *)0)->rndUpdateTime ) },
	{ "float", "turn_max", (int)(&((idGuidedProjectile *)0)->turn_max), sizeof( ((idGuidedProjectile *)0)->turn_max ) },
	{ "float", "clamp_dist", (int)(&((idGuidedProjectile *)0)->clamp_dist), sizeof( ((idGuidedProjectile *)0)->clamp_dist ) },
	{ "bool", "burstMode", (int)(&((idGuidedProjectile *)0)->burstMode), sizeof( ((idGuidedProjectile *)0)->burstMode ) },
	{ "bool", "unGuided", (int)(&((idGuidedProjectile *)0)->unGuided), sizeof( ((idGuidedProjectile *)0)->unGuided ) },
	{ "float", "burstDist", (int)(&((idGuidedProjectile *)0)->burstDist), sizeof( ((idGuidedProjectile *)0)->burstDist ) },
	{ "float", "burstVelocity", (int)(&((idGuidedProjectile *)0)->burstVelocity), sizeof( ((idGuidedProjectile *)0)->burstVelocity ) },
	{ NULL, 0 }
};

intptr_t idSoulCubeMissile::Invoke(idSoulCubeMissile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 169855) { // ReturnToOwner
		cls->ReturnToOwner();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSoulCubeMissile_typeInfo[] = {
	{ ": idVec3", "startingVelocity", (int)(&((idSoulCubeMissile *)0)->startingVelocity), sizeof( ((idSoulCubeMissile *)0)->startingVelocity ) },
	{ "idVec3", "endingVelocity", (int)(&((idSoulCubeMissile *)0)->endingVelocity), sizeof( ((idSoulCubeMissile *)0)->endingVelocity ) },
	{ "float", "accelTime", (int)(&((idSoulCubeMissile *)0)->accelTime), sizeof( ((idSoulCubeMissile *)0)->accelTime ) },
	{ "int", "launchTime", (int)(&((idSoulCubeMissile *)0)->launchTime), sizeof( ((idSoulCubeMissile *)0)->launchTime ) },
	{ "bool", "killPhase", (int)(&((idSoulCubeMissile *)0)->killPhase), sizeof( ((idSoulCubeMissile *)0)->killPhase ) },
	{ "bool", "returnPhase", (int)(&((idSoulCubeMissile *)0)->returnPhase), sizeof( ((idSoulCubeMissile *)0)->returnPhase ) },
	{ "idVec3", "destOrg", (int)(&((idSoulCubeMissile *)0)->destOrg), sizeof( ((idSoulCubeMissile *)0)->destOrg ) },
	{ "idVec3", "orbitOrg", (int)(&((idSoulCubeMissile *)0)->orbitOrg), sizeof( ((idSoulCubeMissile *)0)->orbitOrg ) },
	{ "int", "orbitTime", (int)(&((idSoulCubeMissile *)0)->orbitTime), sizeof( ((idSoulCubeMissile *)0)->orbitTime ) },
	{ "int", "smokeKillTime", (int)(&((idSoulCubeMissile *)0)->smokeKillTime), sizeof( ((idSoulCubeMissile *)0)->smokeKillTime ) },
	{ "const idDeclParticle *", "smokeKill", (int)(&((idSoulCubeMissile *)0)->smokeKill), sizeof( ((idSoulCubeMissile *)0)->smokeKill ) },
	{ NULL, 0 }
};

static classVariableInfo_t beamTarget_t_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "target", (int)(&((beamTarget_t *)0)->target), sizeof( ((beamTarget_t *)0)->target ) },
	{ "renderEntity_t", "renderEntity", (int)(&((beamTarget_t *)0)->renderEntity), sizeof( ((beamTarget_t *)0)->renderEntity ) },
	{ "qhandle_t", "modelDefHandle", (int)(&((beamTarget_t *)0)->modelDefHandle), sizeof( ((beamTarget_t *)0)->modelDefHandle ) },
	{ NULL, 0 }
};

intptr_t idBFGProjectile::Invoke(idBFGProjectile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 107659) { // FreeBeams
		cls->FreeBeams();
		return 0;
	};
	if(functionNameHash == 218449) { // Event_RemoveBeams
		cls->Event_RemoveBeams();
		return 0;
	};
	if(functionNameHash == 135609) { // ApplyDamage
		cls->ApplyDamage();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idBFGProjectile_typeInfo[] = {
	{ ": idList < beamTarget_t , TAG_PROJECTILE >", "beamTargets", (int)(&((idBFGProjectile *)0)->beamTargets), sizeof( ((idBFGProjectile *)0)->beamTargets ) },
	{ "renderEntity_t", "secondModel", (int)(&((idBFGProjectile *)0)->secondModel), sizeof( ((idBFGProjectile *)0)->secondModel ) },
	{ "qhandle_t", "secondModelDefHandle", (int)(&((idBFGProjectile *)0)->secondModelDefHandle), sizeof( ((idBFGProjectile *)0)->secondModelDefHandle ) },
	{ "int", "nextDamageTime", (int)(&((idBFGProjectile *)0)->nextDamageTime), sizeof( ((idBFGProjectile *)0)->nextDamageTime ) },
	{ "idStr", "damageFreq", (int)(&((idBFGProjectile *)0)->damageFreq), sizeof( ((idBFGProjectile *)0)->damageFreq ) },
	{ NULL, 0 }
};

intptr_t idHomingProjectile::Invoke(idHomingProjectile *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idHomingProjectile_typeInfo[] = {
	{ ": float", "speed", (int)(&((idHomingProjectile *)0)->speed), sizeof( ((idHomingProjectile *)0)->speed ) },
	{ "idEntityPtr < idEntity >", "enemy", (int)(&((idHomingProjectile *)0)->enemy), sizeof( ((idHomingProjectile *)0)->enemy ) },
	{ "idVec3", "seekPos", (int)(&((idHomingProjectile *)0)->seekPos), sizeof( ((idHomingProjectile *)0)->seekPos ) },
	{ ": idAngles", "rndScale", (int)(&((idHomingProjectile *)0)->rndScale), sizeof( ((idHomingProjectile *)0)->rndScale ) },
	{ "idAngles", "rndAng", (int)(&((idHomingProjectile *)0)->rndAng), sizeof( ((idHomingProjectile *)0)->rndAng ) },
	{ "idAngles", "angles", (int)(&((idHomingProjectile *)0)->angles), sizeof( ((idHomingProjectile *)0)->angles ) },
	{ "float", "turn_max", (int)(&((idHomingProjectile *)0)->turn_max), sizeof( ((idHomingProjectile *)0)->turn_max ) },
	{ "float", "clamp_dist", (int)(&((idHomingProjectile *)0)->clamp_dist), sizeof( ((idHomingProjectile *)0)->clamp_dist ) },
	{ "bool", "burstMode", (int)(&((idHomingProjectile *)0)->burstMode), sizeof( ((idHomingProjectile *)0)->burstMode ) },
	{ "bool", "unGuided", (int)(&((idHomingProjectile *)0)->unGuided), sizeof( ((idHomingProjectile *)0)->unGuided ) },
	{ "float", "burstDist", (int)(&((idHomingProjectile *)0)->burstDist), sizeof( ((idHomingProjectile *)0)->burstDist ) },
	{ "float", "burstVelocity", (int)(&((idHomingProjectile *)0)->burstVelocity), sizeof( ((idHomingProjectile *)0)->burstVelocity ) },
	{ NULL, 0 }
};

intptr_t idDebris::Invoke(idDebris *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 73334) { // Launch
		cls->Launch();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 88017) { // Explode
		cls->Explode();
		return 0;
	};
	if(functionNameHash == 76384) { // Fizzle
		cls->Fizzle();
		return 0;
	};
	if(functionNameHash == 166403) { // Event_Explode
		cls->Event_Explode();
		return 0;
	};
	if(functionNameHash == 154212) { // Event_Fizzle
		cls->Event_Fizzle();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idDebris_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "owner", (int)(&((idDebris *)0)->owner), sizeof( ((idDebris *)0)->owner ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idDebris *)0)->physicsObj), sizeof( ((idDebris *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (int)(&((idDebris *)0)->smokeFly), sizeof( ((idDebris *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (int)(&((idDebris *)0)->smokeFlyTime), sizeof( ((idDebris *)0)->smokeFlyTime ) },
	{ "const idSoundShader *", "sndBounce", (int)(&((idDebris *)0)->sndBounce), sizeof( ((idDebris *)0)->sndBounce ) },
	{ NULL, 0 }
};

static classVariableInfo_t WeaponParticle_t_typeInfo[] = {
	{ "char[64]", "name", (int)(&((WeaponParticle_t *)0)->name), sizeof( ((WeaponParticle_t *)0)->name ) },
	{ "char[128]", "particlename", (int)(&((WeaponParticle_t *)0)->particlename), sizeof( ((WeaponParticle_t *)0)->particlename ) },
	{ "bool", "active", (int)(&((WeaponParticle_t *)0)->active), sizeof( ((WeaponParticle_t *)0)->active ) },
	{ "int", "startTime", (int)(&((WeaponParticle_t *)0)->startTime), sizeof( ((WeaponParticle_t *)0)->startTime ) },
	{ "jointHandle_t", "joint", (int)(&((WeaponParticle_t *)0)->joint), sizeof( ((WeaponParticle_t *)0)->joint ) },
	{ "bool", "smoke", (int)(&((WeaponParticle_t *)0)->smoke), sizeof( ((WeaponParticle_t *)0)->smoke ) },
	{ "const idDeclParticle *", "particle", (int)(&((WeaponParticle_t *)0)->particle), sizeof( ((WeaponParticle_t *)0)->particle ) },
	{ "idFuncEmitter *", "emitter", (int)(&((WeaponParticle_t *)0)->emitter), sizeof( ((WeaponParticle_t *)0)->emitter ) },
	{ NULL, 0 }
};

static classVariableInfo_t WeaponLight_t_typeInfo[] = {
	{ "char[64]", "name", (int)(&((WeaponLight_t *)0)->name), sizeof( ((WeaponLight_t *)0)->name ) },
	{ "bool", "active", (int)(&((WeaponLight_t *)0)->active), sizeof( ((WeaponLight_t *)0)->active ) },
	{ "int", "startTime", (int)(&((WeaponLight_t *)0)->startTime), sizeof( ((WeaponLight_t *)0)->startTime ) },
	{ "jointHandle_t", "joint", (int)(&((WeaponLight_t *)0)->joint), sizeof( ((WeaponLight_t *)0)->joint ) },
	{ "int", "lightHandle", (int)(&((WeaponLight_t *)0)->lightHandle), sizeof( ((WeaponLight_t *)0)->lightHandle ) },
	{ "renderLight_t", "light", (int)(&((WeaponLight_t *)0)->light), sizeof( ((WeaponLight_t *)0)->light ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponObject::Invoke(rvmWeaponObject *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 81139) { // CanFire
		cls->CanFire();
		return 0;
	};
	if(functionNameHash == 141892) { // ResetStates
		cls->ResetStates();
		return 0;
	};
	if(functionNameHash == 177614) { // CanSwitchState
		cls->CanSwitchState();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	if(functionNameHash == 139817) { // IsHolstered
		cls->IsHolstered();
		return 0;
	};
	if(functionNameHash == 85638) { // IsRisen
		cls->IsRisen();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponObject_typeInfo[] = {
	{ ": idWeapon *", "owner", (int)(&((rvmWeaponObject *)0)->owner), sizeof( ((rvmWeaponObject *)0)->owner ) },
	{ "bool", "isHolstered", (int)(&((rvmWeaponObject *)0)->isHolstered), sizeof( ((rvmWeaponObject *)0)->isHolstered ) },
	{ "bool", "isRisen", (int)(&((rvmWeaponObject *)0)->isRisen), sizeof( ((rvmWeaponObject *)0)->isRisen ) },
	{ ": int", "risingState", (int)(&((rvmWeaponObject *)0)->risingState), sizeof( ((rvmWeaponObject *)0)->risingState ) },
	{ "int", "loweringState", (int)(&((rvmWeaponObject *)0)->loweringState), sizeof( ((rvmWeaponObject *)0)->loweringState ) },
	{ "int", "idleState", (int)(&((rvmWeaponObject *)0)->idleState), sizeof( ((rvmWeaponObject *)0)->idleState ) },
	{ "int", "firingState", (int)(&((rvmWeaponObject *)0)->firingState), sizeof( ((rvmWeaponObject *)0)->firingState ) },
	{ "int", "reloadState", (int)(&((rvmWeaponObject *)0)->reloadState), sizeof( ((rvmWeaponObject *)0)->reloadState ) },
	{ "float", "waitDuration", (int)(&((rvmWeaponObject *)0)->waitDuration), sizeof( ((rvmWeaponObject *)0)->waitDuration ) },
	{ NULL, 0 }
};

intptr_t idWeapon::Invoke(idWeapon *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 99509) { // GetOwner
		return (intptr_t)cls->GetOwner();
	};
	if(functionNameHash == 476562) { // ShouldConstructScriptObjectAtSpawn
		cls->ShouldConstructScriptObjectAtSpawn();
		return 0;
	};
	if(functionNameHash == 59010) { // Clear
		cls->Clear();
		return 0;
	};
	if(functionNameHash == 216848) { // IsWorldModelReady
		cls->IsWorldModelReady();
		return 0;
	};
	if(functionNameHash == 47418) { // Icon
		return (intptr_t)cls->Icon();
	};
	if(functionNameHash == 103137) { // UpdateGUI
		cls->UpdateGUI();
		return 0;
	};
	if(functionNameHash == 81854) { // PdaIcon
		return (intptr_t)cls->PdaIcon();
	};
	if(functionNameHash == 137836) { // DisplayName
		return (intptr_t)cls->DisplayName();
	};
	if(functionNameHash == 143596) { // Description
		return (intptr_t)cls->Description();
	};
	if(functionNameHash == 125553) { // UpdateSkin
		cls->UpdateSkin();
		return 0;
	};
	if(functionNameHash == 97537) { // IsFiring
		cls->IsFiring();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 87316) { // PutAway
		cls->PutAway();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 141364) { // LowerWeapon
		cls->LowerWeapon();
		return 0;
	};
	if(functionNameHash == 138813) { // RaiseWeapon
		cls->RaiseWeapon();
		return 0;
	};
	if(functionNameHash == 123229) { // HideWeapon
		cls->HideWeapon();
		return 0;
	};
	if(functionNameHash == 127945) { // ShowWeapon
		cls->ShowWeapon();
		return 0;
	};
	if(functionNameHash == 175275) { // HideWorldModel
		cls->HideWorldModel();
		return 0;
	};
	if(functionNameHash == 179991) { // ShowWorldModel
		cls->ShowWorldModel();
		return 0;
	};
	if(functionNameHash == 110318) { // OwnerDied
		cls->OwnerDied();
		return 0;
	};
	if(functionNameHash == 134747) { // BeginAttack
		cls->BeginAttack();
		return 0;
	};
	if(functionNameHash == 108281) { // EndAttack
		cls->EndAttack();
		return 0;
	};
	if(functionNameHash == 84187) { // IsReady
		cls->IsReady();
		return 0;
	};
	if(functionNameHash == 137206) { // IsReloading
		cls->IsReloading();
		return 0;
	};
	if(functionNameHash == 139817) { // IsHolstered
		cls->IsHolstered();
		return 0;
	};
	if(functionNameHash == 170062) { // ShowCrosshair
		cls->ShowCrosshair();
		return 0;
	};
	if(functionNameHash == 83005) { // CanDrop
		cls->CanDrop();
		return 0;
	};
	if(functionNameHash == 155408) { // WeaponStolen
		cls->WeaponStolen();
		return 0;
	};
	if(functionNameHash == 184609) { // ForceAmmoInClip
		cls->ForceAmmoInClip();
		return 0;
	};
	if(functionNameHash == 114874) { // GetStatus
		cls->GetStatus();
		return 0;
	};
	if(functionNameHash == 124648) { // GetZoomFov
		return (intptr_t)cls->GetZoomFov();
	};
	if(functionNameHash == 151891) { // FlashlightOn
		cls->FlashlightOn();
		return 0;
	};
	if(functionNameHash == 164213) { // FlashlightOff
		cls->FlashlightOff();
		return 0;
	};
	if(functionNameHash == 136649) { // GetAmmoType
		cls->GetAmmoType();
		return 0;
	};
	if(functionNameHash == 161573) { // AmmoAvailable
		return (intptr_t)cls->AmmoAvailable();
	};
	if(functionNameHash == 119819) { // AmmoInClip
		return (intptr_t)cls->AmmoInClip();
	};
	if(functionNameHash == 162729) { // ResetAmmoClip
		cls->ResetAmmoClip();
		return 0;
	};
	if(functionNameHash == 98507) { // ClipSize
		return (intptr_t)cls->ClipSize();
	};
	if(functionNameHash == 85491) { // LowAmmo
		return (intptr_t)cls->LowAmmo();
	};
	if(functionNameHash == 152979) { // AmmoRequired
		return (intptr_t)cls->AmmoRequired();
	};
	if(functionNameHash == 112768) { // AmmoCount
		return (intptr_t)cls->AmmoCount();
	};
	if(functionNameHash == 188573) { // GetGrabberState
		return (intptr_t)cls->GetGrabberState();
	};
	if(functionNameHash == 163273) { // GetWorldModel
		return (intptr_t)cls->GetWorldModel();
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 208077) { // MuzzleFlashLight
		cls->MuzzleFlashLight();
		return 0;
	};
	if(functionNameHash == 297946) { // RemoveMuzzleFlashlight
		cls->RemoveMuzzleFlashlight();
		return 0;
	};
	if(functionNameHash == 199165) { // GetDeclEntityDef
		return (intptr_t)cls->GetDeclEntityDef();
	};
	if(functionNameHash == 135992) { // Event_Clear
		cls->Event_Clear();
		return 0;
	};
	if(functionNameHash == 178435) { // Event_GetOwner
		cls->Event_GetOwner();
		return 0;
	};
	if(functionNameHash == 219645) { // Event_WeaponReady
		cls->Event_WeaponReady();
		return 0;
	};
	if(functionNameHash == 272756) { // Event_WeaponOutOfAmmo
		cls->Event_WeaponOutOfAmmo();
		return 0;
	};
	if(functionNameHash == 276824) { // Event_WeaponReloading
		cls->Event_WeaponReloading();
		return 0;
	};
	if(functionNameHash == 279645) { // Event_WeaponHolstered
		cls->Event_WeaponHolstered();
		return 0;
	};
	if(functionNameHash == 235760) { // Event_WeaponRising
		cls->Event_WeaponRising();
		return 0;
	};
	if(functionNameHash == 265858) { // Event_WeaponLowering
		cls->Event_WeaponLowering();
		return 0;
	};
	if(functionNameHash == 199693) { // Event_AmmoInClip
		cls->Event_AmmoInClip();
		return 0;
	};
	if(functionNameHash == 243379) { // Event_AmmoAvailable
		cls->Event_AmmoAvailable();
		return 0;
	};
	if(functionNameHash == 262459) { // Event_TotalAmmoCount
		cls->Event_TotalAmmoCount();
		return 0;
	};
	if(functionNameHash == 177385) { // Event_ClipSize
		cls->Event_ClipSize();
		return 0;
	};
	if(functionNameHash == 126624) { // Event_Next
		cls->Event_Next();
		return 0;
	};
	if(functionNameHash == 291264) { // Event_CreateProjectile
		cls->Event_CreateProjectile();
		return 0;
	};
	if(functionNameHash == 203527) { // Event_EjectBrass
		cls->Event_EjectBrass();
		return 0;
	};
	if(functionNameHash == 136084) { // Event_Melee
		cls->Event_Melee();
		return 0;
	};
	if(functionNameHash == 245163) { // Event_GetWorldModel
		cls->Event_GetWorldModel();
		return 0;
	};
	if(functionNameHash == 204676) { // Event_AutoReload
		cls->Event_AutoReload();
		return 0;
	};
	if(functionNameHash == 189478) { // Event_NetReload
		cls->Event_NetReload();
		return 0;
	};
	if(functionNameHash == 219964) { // Event_IsInvisible
		cls->Event_IsInvisible();
		return 0;
	};
	if(functionNameHash == 227297) { // Event_NetEndReload
		cls->Event_NetEndReload();
		return 0;
	};
	if(functionNameHash == 178279) { // EnterCinematic
		cls->EnterCinematic();
		return 0;
	};
	if(functionNameHash == 165047) { // ExitCinematic
		cls->ExitCinematic();
		return 0;
	};
	if(functionNameHash == 124601) { // NetCatchup
		cls->NetCatchup();
		return 0;
	};
	if(functionNameHash == 96516) { // IsLinked
		cls->IsLinked();
		return 0;
	};
	if(functionNameHash == 170742) { // AlertMonsters
		cls->AlertMonsters();
		return 0;
	};
	if(functionNameHash == 181199) { // UpdateNozzleFx
		cls->UpdateNozzleFx();
		return 0;
	};
	if(functionNameHash == 251065) { // UpdateFlashPosition
		cls->UpdateFlashPosition();
		return 0;
	};
	if(functionNameHash == 285326) { // Event_GrabberHasTarget
		return (intptr_t)cls->Event_GrabberHasTarget();
	};
	if(functionNameHash == 293443) { // Event_StartWeaponSmoke
		cls->Event_StartWeaponSmoke();
		return 0;
	};
	if(functionNameHash == 278872) { // Event_StopWeaponSmoke
		cls->Event_StopWeaponSmoke();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idWeapon_typeInfo[] = {
	{ ": weaponStatus_t", "status", (int)(&((idWeapon *)0)->status), sizeof( ((idWeapon *)0)->status ) },
	{ "weaponStatus_t", "state", (int)(&((idWeapon *)0)->state), sizeof( ((idWeapon *)0)->state ) },
	{ "weaponStatus_t", "idealState", (int)(&((idWeapon *)0)->idealState), sizeof( ((idWeapon *)0)->idealState ) },
	{ "int", "animBlendFrames", (int)(&((idWeapon *)0)->animBlendFrames), sizeof( ((idWeapon *)0)->animBlendFrames ) },
	{ "int", "animDoneTime", (int)(&((idWeapon *)0)->animDoneTime), sizeof( ((idWeapon *)0)->animDoneTime ) },
	{ "bool", "isPlayerFlashlight", (int)(&((idWeapon *)0)->isPlayerFlashlight), sizeof( ((idWeapon *)0)->isPlayerFlashlight ) },
	{ "bool", "isLinked", (int)(&((idWeapon *)0)->isLinked), sizeof( ((idWeapon *)0)->isLinked ) },
	{ "idEntity *", "projectileEnt", (int)(&((idWeapon *)0)->projectileEnt), sizeof( ((idWeapon *)0)->projectileEnt ) },
	{ "idPlayer *", "owner", (int)(&((idWeapon *)0)->owner), sizeof( ((idWeapon *)0)->owner ) },
	{ "idEntityPtr < idAnimatedEntity >", "worldModel", (int)(&((idWeapon *)0)->worldModel), sizeof( ((idWeapon *)0)->worldModel ) },
	{ "int", "hideTime", (int)(&((idWeapon *)0)->hideTime), sizeof( ((idWeapon *)0)->hideTime ) },
	{ "float", "hideDistance", (int)(&((idWeapon *)0)->hideDistance), sizeof( ((idWeapon *)0)->hideDistance ) },
	{ "int", "hideStartTime", (int)(&((idWeapon *)0)->hideStartTime), sizeof( ((idWeapon *)0)->hideStartTime ) },
	{ "float", "hideStart", (int)(&((idWeapon *)0)->hideStart), sizeof( ((idWeapon *)0)->hideStart ) },
	{ "float", "hideEnd", (int)(&((idWeapon *)0)->hideEnd), sizeof( ((idWeapon *)0)->hideEnd ) },
	{ "float", "hideOffset", (int)(&((idWeapon *)0)->hideOffset), sizeof( ((idWeapon *)0)->hideOffset ) },
	{ "bool", "hide", (int)(&((idWeapon *)0)->hide), sizeof( ((idWeapon *)0)->hide ) },
	{ "bool", "disabled", (int)(&((idWeapon *)0)->disabled), sizeof( ((idWeapon *)0)->disabled ) },
	{ "int", "berserk", (int)(&((idWeapon *)0)->berserk), sizeof( ((idWeapon *)0)->berserk ) },
	{ "idVec3", "playerViewOrigin", (int)(&((idWeapon *)0)->playerViewOrigin), sizeof( ((idWeapon *)0)->playerViewOrigin ) },
	{ "idMat3", "playerViewAxis", (int)(&((idWeapon *)0)->playerViewAxis), sizeof( ((idWeapon *)0)->playerViewAxis ) },
	{ "idVec3", "viewWeaponOrigin", (int)(&((idWeapon *)0)->viewWeaponOrigin), sizeof( ((idWeapon *)0)->viewWeaponOrigin ) },
	{ "idMat3", "viewWeaponAxis", (int)(&((idWeapon *)0)->viewWeaponAxis), sizeof( ((idWeapon *)0)->viewWeaponAxis ) },
	{ "idVec3", "muzzleOrigin", (int)(&((idWeapon *)0)->muzzleOrigin), sizeof( ((idWeapon *)0)->muzzleOrigin ) },
	{ "idMat3", "muzzleAxis", (int)(&((idWeapon *)0)->muzzleAxis), sizeof( ((idWeapon *)0)->muzzleAxis ) },
	{ "idVec3", "pushVelocity", (int)(&((idWeapon *)0)->pushVelocity), sizeof( ((idWeapon *)0)->pushVelocity ) },
	{ "const idDeclEntityDef *", "weaponDef", (int)(&((idWeapon *)0)->weaponDef), sizeof( ((idWeapon *)0)->weaponDef ) },
	{ "const idDeclEntityDef *", "meleeDef", (int)(&((idWeapon *)0)->meleeDef), sizeof( ((idWeapon *)0)->meleeDef ) },
	{ "idDict", "projectileDict", (int)(&((idWeapon *)0)->projectileDict), sizeof( ((idWeapon *)0)->projectileDict ) },
	{ "float", "meleeDistance", (int)(&((idWeapon *)0)->meleeDistance), sizeof( ((idWeapon *)0)->meleeDistance ) },
	{ "idStr", "meleeDefName", (int)(&((idWeapon *)0)->meleeDefName), sizeof( ((idWeapon *)0)->meleeDefName ) },
	{ "idDict", "brassDict", (int)(&((idWeapon *)0)->brassDict), sizeof( ((idWeapon *)0)->brassDict ) },
	{ "int", "brassDelay", (int)(&((idWeapon *)0)->brassDelay), sizeof( ((idWeapon *)0)->brassDelay ) },
	{ "idStr", "icon", (int)(&((idWeapon *)0)->icon), sizeof( ((idWeapon *)0)->icon ) },
	{ "idStr", "pdaIcon", (int)(&((idWeapon *)0)->pdaIcon), sizeof( ((idWeapon *)0)->pdaIcon ) },
	{ "idStr", "displayName", (int)(&((idWeapon *)0)->displayName), sizeof( ((idWeapon *)0)->displayName ) },
	{ "idStr", "itemDesc", (int)(&((idWeapon *)0)->itemDesc), sizeof( ((idWeapon *)0)->itemDesc ) },
	{ "renderLight_t", "guiLight", (int)(&((idWeapon *)0)->guiLight), sizeof( ((idWeapon *)0)->guiLight ) },
	{ "int", "guiLightHandle", (int)(&((idWeapon *)0)->guiLightHandle), sizeof( ((idWeapon *)0)->guiLightHandle ) },
	{ "renderLight_t", "muzzleFlash", (int)(&((idWeapon *)0)->muzzleFlash), sizeof( ((idWeapon *)0)->muzzleFlash ) },
	{ "int", "muzzleFlashHandle", (int)(&((idWeapon *)0)->muzzleFlashHandle), sizeof( ((idWeapon *)0)->muzzleFlashHandle ) },
	{ "renderLight_t", "worldMuzzleFlash", (int)(&((idWeapon *)0)->worldMuzzleFlash), sizeof( ((idWeapon *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (int)(&((idWeapon *)0)->worldMuzzleFlashHandle), sizeof( ((idWeapon *)0)->worldMuzzleFlashHandle ) },
	{ "float", "fraccos", (int)(&((idWeapon *)0)->fraccos), sizeof( ((idWeapon *)0)->fraccos ) },
	{ "float", "fraccos2", (int)(&((idWeapon *)0)->fraccos2), sizeof( ((idWeapon *)0)->fraccos2 ) },
	{ "idVec3", "flashColor", (int)(&((idWeapon *)0)->flashColor), sizeof( ((idWeapon *)0)->flashColor ) },
	{ "int", "muzzleFlashEnd", (int)(&((idWeapon *)0)->muzzleFlashEnd), sizeof( ((idWeapon *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (int)(&((idWeapon *)0)->flashTime), sizeof( ((idWeapon *)0)->flashTime ) },
	{ "bool", "lightOn", (int)(&((idWeapon *)0)->lightOn), sizeof( ((idWeapon *)0)->lightOn ) },
	{ "bool", "silent_fire", (int)(&((idWeapon *)0)->silent_fire), sizeof( ((idWeapon *)0)->silent_fire ) },
	{ "bool", "allowDrop", (int)(&((idWeapon *)0)->allowDrop), sizeof( ((idWeapon *)0)->allowDrop ) },
	{ "bool", "hasBloodSplat", (int)(&((idWeapon *)0)->hasBloodSplat), sizeof( ((idWeapon *)0)->hasBloodSplat ) },
	{ "int", "kick_endtime", (int)(&((idWeapon *)0)->kick_endtime), sizeof( ((idWeapon *)0)->kick_endtime ) },
	{ "int", "muzzle_kick_time", (int)(&((idWeapon *)0)->muzzle_kick_time), sizeof( ((idWeapon *)0)->muzzle_kick_time ) },
	{ "int", "muzzle_kick_maxtime", (int)(&((idWeapon *)0)->muzzle_kick_maxtime), sizeof( ((idWeapon *)0)->muzzle_kick_maxtime ) },
	{ "idAngles", "muzzle_kick_angles", (int)(&((idWeapon *)0)->muzzle_kick_angles), sizeof( ((idWeapon *)0)->muzzle_kick_angles ) },
	{ "idVec3", "muzzle_kick_offset", (int)(&((idWeapon *)0)->muzzle_kick_offset), sizeof( ((idWeapon *)0)->muzzle_kick_offset ) },
	{ "ammo_t", "ammoType", (int)(&((idWeapon *)0)->ammoType), sizeof( ((idWeapon *)0)->ammoType ) },
	{ "int", "ammoRequired", (int)(&((idWeapon *)0)->ammoRequired), sizeof( ((idWeapon *)0)->ammoRequired ) },
	{ "int", "clipSize", (int)(&((idWeapon *)0)->clipSize), sizeof( ((idWeapon *)0)->clipSize ) },
	{ "idPredictedValue < int >", "ammoClip", (int)(&((idWeapon *)0)->ammoClip), sizeof( ((idWeapon *)0)->ammoClip ) },
	{ "int", "lowAmmo", (int)(&((idWeapon *)0)->lowAmmo), sizeof( ((idWeapon *)0)->lowAmmo ) },
	{ "bool", "powerAmmo", (int)(&((idWeapon *)0)->powerAmmo), sizeof( ((idWeapon *)0)->powerAmmo ) },
	{ "bool", "isFiring", (int)(&((idWeapon *)0)->isFiring), sizeof( ((idWeapon *)0)->isFiring ) },
	{ "int", "zoomFov", (int)(&((idWeapon *)0)->zoomFov), sizeof( ((idWeapon *)0)->zoomFov ) },
	{ "jointHandle_t", "barrelJointView", (int)(&((idWeapon *)0)->barrelJointView), sizeof( ((idWeapon *)0)->barrelJointView ) },
	{ "jointHandle_t", "flashJointView", (int)(&((idWeapon *)0)->flashJointView), sizeof( ((idWeapon *)0)->flashJointView ) },
	{ "jointHandle_t", "ejectJointView", (int)(&((idWeapon *)0)->ejectJointView), sizeof( ((idWeapon *)0)->ejectJointView ) },
	{ "jointHandle_t", "guiLightJointView", (int)(&((idWeapon *)0)->guiLightJointView), sizeof( ((idWeapon *)0)->guiLightJointView ) },
	{ "jointHandle_t", "ventLightJointView", (int)(&((idWeapon *)0)->ventLightJointView), sizeof( ((idWeapon *)0)->ventLightJointView ) },
	{ "jointHandle_t", "flashJointWorld", (int)(&((idWeapon *)0)->flashJointWorld), sizeof( ((idWeapon *)0)->flashJointWorld ) },
	{ "jointHandle_t", "barrelJointWorld", (int)(&((idWeapon *)0)->barrelJointWorld), sizeof( ((idWeapon *)0)->barrelJointWorld ) },
	{ "jointHandle_t", "ejectJointWorld", (int)(&((idWeapon *)0)->ejectJointWorld), sizeof( ((idWeapon *)0)->ejectJointWorld ) },
	{ "jointHandle_t", "smokeJointView", (int)(&((idWeapon *)0)->smokeJointView), sizeof( ((idWeapon *)0)->smokeJointView ) },
	{ "idHashTable < WeaponParticle_t >", "weaponParticles", (int)(&((idWeapon *)0)->weaponParticles), sizeof( ((idWeapon *)0)->weaponParticles ) },
	{ "idHashTable < WeaponLight_t >", "weaponLights", (int)(&((idWeapon *)0)->weaponLights), sizeof( ((idWeapon *)0)->weaponLights ) },
	{ "const idSoundShader *", "sndHum", (int)(&((idWeapon *)0)->sndHum), sizeof( ((idWeapon *)0)->sndHum ) },
	{ "const idDeclParticle *", "weaponSmoke", (int)(&((idWeapon *)0)->weaponSmoke), sizeof( ((idWeapon *)0)->weaponSmoke ) },
	{ "int", "weaponSmokeStartTime", (int)(&((idWeapon *)0)->weaponSmokeStartTime), sizeof( ((idWeapon *)0)->weaponSmokeStartTime ) },
	{ "bool", "continuousSmoke", (int)(&((idWeapon *)0)->continuousSmoke), sizeof( ((idWeapon *)0)->continuousSmoke ) },
	{ "const idDeclParticle *", "strikeSmoke", (int)(&((idWeapon *)0)->strikeSmoke), sizeof( ((idWeapon *)0)->strikeSmoke ) },
	{ "int", "strikeSmokeStartTime", (int)(&((idWeapon *)0)->strikeSmokeStartTime), sizeof( ((idWeapon *)0)->strikeSmokeStartTime ) },
	{ "idVec3", "strikePos", (int)(&((idWeapon *)0)->strikePos), sizeof( ((idWeapon *)0)->strikePos ) },
	{ "idMat3", "strikeAxis", (int)(&((idWeapon *)0)->strikeAxis), sizeof( ((idWeapon *)0)->strikeAxis ) },
	{ "int", "nextStrikeFx", (int)(&((idWeapon *)0)->nextStrikeFx), sizeof( ((idWeapon *)0)->nextStrikeFx ) },
	{ "bool", "nozzleFx", (int)(&((idWeapon *)0)->nozzleFx), sizeof( ((idWeapon *)0)->nozzleFx ) },
	{ "int", "nozzleFxFade", (int)(&((idWeapon *)0)->nozzleFxFade), sizeof( ((idWeapon *)0)->nozzleFxFade ) },
	{ "int", "lastAttack", (int)(&((idWeapon *)0)->lastAttack), sizeof( ((idWeapon *)0)->lastAttack ) },
	{ "renderLight_t", "nozzleGlow", (int)(&((idWeapon *)0)->nozzleGlow), sizeof( ((idWeapon *)0)->nozzleGlow ) },
	{ "int", "nozzleGlowHandle", (int)(&((idWeapon *)0)->nozzleGlowHandle), sizeof( ((idWeapon *)0)->nozzleGlowHandle ) },
	{ "idVec3", "nozzleGlowColor", (int)(&((idWeapon *)0)->nozzleGlowColor), sizeof( ((idWeapon *)0)->nozzleGlowColor ) },
	{ "const idMaterial *", "nozzleGlowShader", (int)(&((idWeapon *)0)->nozzleGlowShader), sizeof( ((idWeapon *)0)->nozzleGlowShader ) },
	{ "float", "nozzleGlowRadius", (int)(&((idWeapon *)0)->nozzleGlowRadius), sizeof( ((idWeapon *)0)->nozzleGlowRadius ) },
	{ "int", "weaponAngleOffsetAverages", (int)(&((idWeapon *)0)->weaponAngleOffsetAverages), sizeof( ((idWeapon *)0)->weaponAngleOffsetAverages ) },
	{ "float", "weaponAngleOffsetScale", (int)(&((idWeapon *)0)->weaponAngleOffsetScale), sizeof( ((idWeapon *)0)->weaponAngleOffsetScale ) },
	{ "float", "weaponAngleOffsetMax", (int)(&((idWeapon *)0)->weaponAngleOffsetMax), sizeof( ((idWeapon *)0)->weaponAngleOffsetMax ) },
	{ "float", "weaponOffsetTime", (int)(&((idWeapon *)0)->weaponOffsetTime), sizeof( ((idWeapon *)0)->weaponOffsetTime ) },
	{ "float", "weaponOffsetScale", (int)(&((idWeapon *)0)->weaponOffsetScale), sizeof( ((idWeapon *)0)->weaponOffsetScale ) },
	{ "idGrabber", "grabber", (int)(&((idWeapon *)0)->grabber), sizeof( ((idWeapon *)0)->grabber ) },
	{ "int", "grabberState", (int)(&((idWeapon *)0)->grabberState), sizeof( ((idWeapon *)0)->grabberState ) },
	{ ": rvmWeaponObject *", "currentWeaponObject", (int)(&((idWeapon *)0)->currentWeaponObject), sizeof( ((idWeapon *)0)->currentWeaponObject ) },
	{ NULL, 0 }
};

intptr_t idLight::Invoke(idLight *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 144625) { // FreeLightDef
		cls->FreeLightDef();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 146975) { // GetBaseColor
		cls->GetBaseColor();
		return 0;
	};
	if(functionNameHash == 22601) { // On
		cls->On();
		return 0;
	};
	if(functionNameHash == 33983) { // Off
		cls->Off();
		return 0;
	};
	if(functionNameHash == 209896) { // GetLightDefHandle
		cls->GetLightDefHandle();
		return 0;
	};
	if(functionNameHash == 163688) { // SetLightLevel
		cls->SetLightLevel();
		return 0;
	};
	if(functionNameHash == 218178) { // ShowEditingDialog
		cls->ShowEditingDialog();
		return 0;
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 269021) { // PresentModelDefChange
		cls->PresentModelDefChange();
		return 0;
	};
	if(functionNameHash == 121918) { // Event_Hide
		cls->Event_Hide();
		return 0;
	};
	if(functionNameHash == 126868) { // Event_Show
		cls->Event_Show();
		return 0;
	};
	if(functionNameHash == 97795) { // Event_On
		cls->Event_On();
		return 0;
	};
	if(functionNameHash == 109741) { // Event_Off
		cls->Event_Off();
		return 0;
	};
	if(functionNameHash == 275399) { // Event_SetSoundHandles
		cls->Event_SetSoundHandles();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idLight_typeInfo[] = {
	{ ": renderLight_t", "renderLight", (int)(&((idLight *)0)->renderLight), sizeof( ((idLight *)0)->renderLight ) },
	{ "idVec3", "localLightOrigin", (int)(&((idLight *)0)->localLightOrigin), sizeof( ((idLight *)0)->localLightOrigin ) },
	{ "idMat3", "localLightAxis", (int)(&((idLight *)0)->localLightAxis), sizeof( ((idLight *)0)->localLightAxis ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idLight *)0)->lightDefHandle), sizeof( ((idLight *)0)->lightDefHandle ) },
	{ "idStr", "brokenModel", (int)(&((idLight *)0)->brokenModel), sizeof( ((idLight *)0)->brokenModel ) },
	{ "int", "levels", (int)(&((idLight *)0)->levels), sizeof( ((idLight *)0)->levels ) },
	{ "int", "currentLevel", (int)(&((idLight *)0)->currentLevel), sizeof( ((idLight *)0)->currentLevel ) },
	{ "idVec3", "baseColor", (int)(&((idLight *)0)->baseColor), sizeof( ((idLight *)0)->baseColor ) },
	{ "idVec3", "previousBaseColor", (int)(&((idLight *)0)->previousBaseColor), sizeof( ((idLight *)0)->previousBaseColor ) },
	{ "idVec3", "nextBaseColor", (int)(&((idLight *)0)->nextBaseColor), sizeof( ((idLight *)0)->nextBaseColor ) },
	{ "bool", "breakOnTrigger", (int)(&((idLight *)0)->breakOnTrigger), sizeof( ((idLight *)0)->breakOnTrigger ) },
	{ "int", "count", (int)(&((idLight *)0)->count), sizeof( ((idLight *)0)->count ) },
	{ "int", "triggercount", (int)(&((idLight *)0)->triggercount), sizeof( ((idLight *)0)->triggercount ) },
	{ "idEntity *", "lightParent", (int)(&((idLight *)0)->lightParent), sizeof( ((idLight *)0)->lightParent ) },
	{ "idVec4", "fadeFrom", (int)(&((idLight *)0)->fadeFrom), sizeof( ((idLight *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (int)(&((idLight *)0)->fadeTo), sizeof( ((idLight *)0)->fadeTo ) },
	{ "int", "fadeStart", (int)(&((idLight *)0)->fadeStart), sizeof( ((idLight *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idLight *)0)->fadeEnd), sizeof( ((idLight *)0)->fadeEnd ) },
	{ "bool", "soundWasPlaying", (int)(&((idLight *)0)->soundWasPlaying), sizeof( ((idLight *)0)->soundWasPlaying ) },
	{ NULL, 0 }
};

intptr_t idWorldspawn::Invoke(idWorldspawn *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idWorldspawn_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idItem::Invoke(idItem *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 219076) { // Event_DropToFloor
		cls->Event_DropToFloor();
		return 0;
	};
	if(functionNameHash == 168370) { // Event_Respawn
		cls->Event_Respawn();
		return 0;
	};
	if(functionNameHash == 193570) { // Event_RespawnFx
		cls->Event_RespawnFx();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idItem_typeInfo[] = {
	{ ": idVec3", "orgOrigin", (int)(&((idItem *)0)->orgOrigin), sizeof( ((idItem *)0)->orgOrigin ) },
	{ "bool", "spin", (int)(&((idItem *)0)->spin), sizeof( ((idItem *)0)->spin ) },
	{ "bool", "pulse", (int)(&((idItem *)0)->pulse), sizeof( ((idItem *)0)->pulse ) },
	{ "bool", "canPickUp", (int)(&((idItem *)0)->canPickUp), sizeof( ((idItem *)0)->canPickUp ) },
	{ "int", "itemShellHandle", (int)(&((idItem *)0)->itemShellHandle), sizeof( ((idItem *)0)->itemShellHandle ) },
	{ "const idMaterial *", "shellMaterial", (int)(&((idItem *)0)->shellMaterial), sizeof( ((idItem *)0)->shellMaterial ) },
	{ "mutable bool", "inView", (int)(&((idItem *)0)->inView), sizeof( ((idItem *)0)->inView ) },
	{ "mutable int", "inViewTime", (int)(&((idItem *)0)->inViewTime), sizeof( ((idItem *)0)->inViewTime ) },
	{ "mutable int", "lastCycle", (int)(&((idItem *)0)->lastCycle), sizeof( ((idItem *)0)->lastCycle ) },
	{ "mutable int", "lastRenderViewTime", (int)(&((idItem *)0)->lastRenderViewTime), sizeof( ((idItem *)0)->lastRenderViewTime ) },
	{ "int", "clientPredictPickupMilliseconds", (int)(&((idItem *)0)->clientPredictPickupMilliseconds), sizeof( ((idItem *)0)->clientPredictPickupMilliseconds ) },
	{ NULL, 0 }
};

intptr_t idItemPowerup::Invoke(idItemPowerup *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idItemPowerup_typeInfo[] = {
	{ ": int", "time", (int)(&((idItemPowerup *)0)->time), sizeof( ((idItemPowerup *)0)->time ) },
	{ "int", "type", (int)(&((idItemPowerup *)0)->type), sizeof( ((idItemPowerup *)0)->type ) },
	{ NULL, 0 }
};

intptr_t idObjective::Invoke(idObjective *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 232865) { // Event_GetPlayerPos
		cls->Event_GetPlayerPos();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idObjective_typeInfo[] = {
	{ ": idVec3", "playerPos", (int)(&((idObjective *)0)->playerPos), sizeof( ((idObjective *)0)->playerPos ) },
	{ "const idMaterial *", "screenshot", (int)(&((idObjective *)0)->screenshot), sizeof( ((idObjective *)0)->screenshot ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVideoCDItem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPDAItem_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idMoveableItem::Invoke(idMoveableItem *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 219076) { // Event_DropToFloor
		cls->Event_DropToFloor();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMoveableItem_typeInfo[] = {
	{ ": idPhysics_RigidBody", "physicsObj", (int)(&((idMoveableItem *)0)->physicsObj), sizeof( ((idMoveableItem *)0)->physicsObj ) },
	{ "idClipModel *", "trigger", (int)(&((idMoveableItem *)0)->trigger), sizeof( ((idMoveableItem *)0)->trigger ) },
	{ "const idDeclParticle *", "smoke", (int)(&((idMoveableItem *)0)->smoke), sizeof( ((idMoveableItem *)0)->smoke ) },
	{ "int", "smokeTime", (int)(&((idMoveableItem *)0)->smokeTime), sizeof( ((idMoveableItem *)0)->smokeTime ) },
	{ "int", "nextSoundTime", (int)(&((idMoveableItem *)0)->nextSoundTime), sizeof( ((idMoveableItem *)0)->nextSoundTime ) },
	{ "bool", "repeatSmoke", (int)(&((idMoveableItem *)0)->repeatSmoke), sizeof( ((idMoveableItem *)0)->repeatSmoke ) },
	{ NULL, 0 }
};

intptr_t idItemTeam::Invoke(idItemTeam *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 88469) { // Capture
		cls->Capture();
		return 0;
	};
	if(functionNameHash == 144625) { // FreeLightDef
		cls->FreeLightDef();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 217630) { // Event_FlagCapture
		cls->Event_FlagCapture();
		return 0;
	};
	if(functionNameHash == 171571) { // PrivateReturn
		cls->PrivateReturn();
		return 0;
	};
	if(functionNameHash == 125953) { // UpdateGuis
		cls->UpdateGuis();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idItemTeam_typeInfo[] = {
	{ ": int", "team", (int)(&((idItemTeam *)0)->team), sizeof( ((idItemTeam *)0)->team ) },
	{ "bool", "carried", (int)(&((idItemTeam *)0)->carried), sizeof( ((idItemTeam *)0)->carried ) },
	{ "bool", "dropped", (int)(&((idItemTeam *)0)->dropped), sizeof( ((idItemTeam *)0)->dropped ) },
	{ ": idVec3", "returnOrigin", (int)(&((idItemTeam *)0)->returnOrigin), sizeof( ((idItemTeam *)0)->returnOrigin ) },
	{ "idMat3", "returnAxis", (int)(&((idItemTeam *)0)->returnAxis), sizeof( ((idItemTeam *)0)->returnAxis ) },
	{ "int", "lastDrop", (int)(&((idItemTeam *)0)->lastDrop), sizeof( ((idItemTeam *)0)->lastDrop ) },
	{ "const idDeclSkin *", "skinDefault", (int)(&((idItemTeam *)0)->skinDefault), sizeof( ((idItemTeam *)0)->skinDefault ) },
	{ "const idDeclSkin *", "skinCarried", (int)(&((idItemTeam *)0)->skinCarried), sizeof( ((idItemTeam *)0)->skinCarried ) },
	{ "const function_t *", "scriptTaken", (int)(&((idItemTeam *)0)->scriptTaken), sizeof( ((idItemTeam *)0)->scriptTaken ) },
	{ "const function_t *", "scriptDropped", (int)(&((idItemTeam *)0)->scriptDropped), sizeof( ((idItemTeam *)0)->scriptDropped ) },
	{ "const function_t *", "scriptReturned", (int)(&((idItemTeam *)0)->scriptReturned), sizeof( ((idItemTeam *)0)->scriptReturned ) },
	{ "const function_t *", "scriptCaptured", (int)(&((idItemTeam *)0)->scriptCaptured), sizeof( ((idItemTeam *)0)->scriptCaptured ) },
	{ "renderLight_t", "itemGlow", (int)(&((idItemTeam *)0)->itemGlow), sizeof( ((idItemTeam *)0)->itemGlow ) },
	{ "int", "itemGlowHandle", (int)(&((idItemTeam *)0)->itemGlowHandle), sizeof( ((idItemTeam *)0)->itemGlowHandle ) },
	{ "int", "lastNuggetDrop", (int)(&((idItemTeam *)0)->lastNuggetDrop), sizeof( ((idItemTeam *)0)->lastNuggetDrop ) },
	{ "const char *", "nuggetName", (int)(&((idItemTeam *)0)->nuggetName), sizeof( ((idItemTeam *)0)->nuggetName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveablePDAItem_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idItemRemover::Invoke(idItemRemover *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idItemRemover_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idObjectiveComplete::Invoke(idObjectiveComplete *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 232865) { // Event_GetPlayerPos
		cls->Event_GetPlayerPos();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idObjectiveComplete_typeInfo[] = {
	{ ": idVec3", "playerPos", (int)(&((idObjectiveComplete *)0)->playerPos), sizeof( ((idObjectiveComplete *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t screenBlob_t_typeInfo[] = {
	{ "const idMaterial *", "material", (int)(&((screenBlob_t *)0)->material), sizeof( ((screenBlob_t *)0)->material ) },
	{ "float", "x", (int)(&((screenBlob_t *)0)->x), sizeof( ((screenBlob_t *)0)->x ) },
	{ "float", "y", (int)(&((screenBlob_t *)0)->y), sizeof( ((screenBlob_t *)0)->y ) },
	{ "float", "w", (int)(&((screenBlob_t *)0)->w), sizeof( ((screenBlob_t *)0)->w ) },
	{ "float", "h", (int)(&((screenBlob_t *)0)->h), sizeof( ((screenBlob_t *)0)->h ) },
	{ "float", "s1", (int)(&((screenBlob_t *)0)->s1), sizeof( ((screenBlob_t *)0)->s1 ) },
	{ "float", "t1", (int)(&((screenBlob_t *)0)->t1), sizeof( ((screenBlob_t *)0)->t1 ) },
	{ "float", "s2", (int)(&((screenBlob_t *)0)->s2), sizeof( ((screenBlob_t *)0)->s2 ) },
	{ "float", "t2", (int)(&((screenBlob_t *)0)->t2), sizeof( ((screenBlob_t *)0)->t2 ) },
	{ "int", "finishTime", (int)(&((screenBlob_t *)0)->finishTime), sizeof( ((screenBlob_t *)0)->finishTime ) },
	{ "int", "startFadeTime", (int)(&((screenBlob_t *)0)->startFadeTime), sizeof( ((screenBlob_t *)0)->startFadeTime ) },
	{ "float", "driftAmount", (int)(&((screenBlob_t *)0)->driftAmount), sizeof( ((screenBlob_t *)0)->driftAmount ) },
	{ NULL, 0 }
};

static classVariableInfo_t WarpPolygon_t_typeInfo[] = {
	{ ": idVec4", "outer1", (int)(&((WarpPolygon_t *)0)->outer1), sizeof( ((WarpPolygon_t *)0)->outer1 ) },
	{ "idVec4", "outer2", (int)(&((WarpPolygon_t *)0)->outer2), sizeof( ((WarpPolygon_t *)0)->outer2 ) },
	{ "idVec4", "center", (int)(&((WarpPolygon_t *)0)->center), sizeof( ((WarpPolygon_t *)0)->center ) },
	{ NULL, 0 }
};

static classVariableInfo_t Warp_t_typeInfo[] = {
	{ ": int", "id", (int)(&((Warp_t *)0)->id), sizeof( ((Warp_t *)0)->id ) },
	{ "bool", "active", (int)(&((Warp_t *)0)->active), sizeof( ((Warp_t *)0)->active ) },
	{ "int", "startTime", (int)(&((Warp_t *)0)->startTime), sizeof( ((Warp_t *)0)->startTime ) },
	{ "float", "initialRadius", (int)(&((Warp_t *)0)->initialRadius), sizeof( ((Warp_t *)0)->initialRadius ) },
	{ "idVec3", "worldOrigin", (int)(&((Warp_t *)0)->worldOrigin), sizeof( ((Warp_t *)0)->worldOrigin ) },
	{ "idVec2", "screenOrigin", (int)(&((Warp_t *)0)->screenOrigin), sizeof( ((Warp_t *)0)->screenOrigin ) },
	{ "int", "durationMsec", (int)(&((Warp_t *)0)->durationMsec), sizeof( ((Warp_t *)0)->durationMsec ) },
	{ "idList < WarpPolygon_t , TAG_IDLIB_LIST_PLAYER >", "polys", (int)(&((Warp_t *)0)->polys), sizeof( ((Warp_t *)0)->polys ) },
	{ NULL, 0 }
};

static classVariableInfo_t FxFader_typeInfo[] = {
	{ "int", "time", (int)(&((FxFader *)0)->time), sizeof( ((FxFader *)0)->time ) },
	{ "int", "state", (int)(&((FxFader *)0)->state), sizeof( ((FxFader *)0)->state ) },
	{ "float", "alpha", (int)(&((FxFader *)0)->alpha), sizeof( ((FxFader *)0)->alpha ) },
	{ "int", "msec", (int)(&((FxFader *)0)->msec), sizeof( ((FxFader *)0)->msec ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_typeInfo[] = {
	{ ": idStr", "name", (int)(&((FullscreenFX *)0)->name), sizeof( ((FullscreenFX *)0)->name ) },
	{ "FxFader", "fader", (int)(&((FullscreenFX *)0)->fader), sizeof( ((FullscreenFX *)0)->fader ) },
	{ "FullscreenFXManager *", "fxman", (int)(&((FullscreenFX *)0)->fxman), sizeof( ((FullscreenFX *)0)->fxman ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_Helltime_typeInfo[] = {
	{ ": const idMaterial *", "initMaterial", (int)(&((FullscreenFX_Helltime *)0)->initMaterial), sizeof( ((FullscreenFX_Helltime *)0)->initMaterial ) },
	{ "const idMaterial *[3]", "captureMaterials", (int)(&((FullscreenFX_Helltime *)0)->captureMaterials), sizeof( ((FullscreenFX_Helltime *)0)->captureMaterials ) },
	{ "const idMaterial *", "drawMaterial", (int)(&((FullscreenFX_Helltime *)0)->drawMaterial), sizeof( ((FullscreenFX_Helltime *)0)->drawMaterial ) },
	{ "bool", "clearAccumBuffer", (int)(&((FullscreenFX_Helltime *)0)->clearAccumBuffer), sizeof( ((FullscreenFX_Helltime *)0)->clearAccumBuffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_Multiplayer_typeInfo[] = {
	{ ": const idMaterial *", "initMaterial", (int)(&((FullscreenFX_Multiplayer *)0)->initMaterial), sizeof( ((FullscreenFX_Multiplayer *)0)->initMaterial ) },
	{ "const idMaterial *", "captureMaterial", (int)(&((FullscreenFX_Multiplayer *)0)->captureMaterial), sizeof( ((FullscreenFX_Multiplayer *)0)->captureMaterial ) },
	{ "const idMaterial *", "drawMaterial", (int)(&((FullscreenFX_Multiplayer *)0)->drawMaterial), sizeof( ((FullscreenFX_Multiplayer *)0)->drawMaterial ) },
	{ "bool", "clearAccumBuffer", (int)(&((FullscreenFX_Multiplayer *)0)->clearAccumBuffer), sizeof( ((FullscreenFX_Multiplayer *)0)->clearAccumBuffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_Warp_typeInfo[] = {
	{ ": const idMaterial *", "material", (int)(&((FullscreenFX_Warp *)0)->material), sizeof( ((FullscreenFX_Warp *)0)->material ) },
	{ "bool", "grabberEnabled", (int)(&((FullscreenFX_Warp *)0)->grabberEnabled), sizeof( ((FullscreenFX_Warp *)0)->grabberEnabled ) },
	{ "int", "startWarpTime", (int)(&((FullscreenFX_Warp *)0)->startWarpTime), sizeof( ((FullscreenFX_Warp *)0)->startWarpTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_EnviroSuit_typeInfo[] = {
	{ ": const idMaterial *", "material", (int)(&((FullscreenFX_EnviroSuit *)0)->material), sizeof( ((FullscreenFX_EnviroSuit *)0)->material ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_DoubleVision_typeInfo[] = {
	{ ": const idMaterial *", "material", (int)(&((FullscreenFX_DoubleVision *)0)->material), sizeof( ((FullscreenFX_DoubleVision *)0)->material ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_InfluenceVision_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFX_Bloom_typeInfo[] = {
	{ ": const idMaterial *", "drawMaterial", (int)(&((FullscreenFX_Bloom *)0)->drawMaterial), sizeof( ((FullscreenFX_Bloom *)0)->drawMaterial ) },
	{ "const idMaterial *", "initMaterial", (int)(&((FullscreenFX_Bloom *)0)->initMaterial), sizeof( ((FullscreenFX_Bloom *)0)->initMaterial ) },
	{ "float", "currentIntensity", (int)(&((FullscreenFX_Bloom *)0)->currentIntensity), sizeof( ((FullscreenFX_Bloom *)0)->currentIntensity ) },
	{ "float", "targetIntensity", (int)(&((FullscreenFX_Bloom *)0)->targetIntensity), sizeof( ((FullscreenFX_Bloom *)0)->targetIntensity ) },
	{ NULL, 0 }
};

static classVariableInfo_t FullscreenFXManager_typeInfo[] = {
	{ ": idList < FullscreenFX * , TAG_FX >", "fx", (int)(&((FullscreenFXManager *)0)->fx), sizeof( ((FullscreenFXManager *)0)->fx ) },
	{ "idPlayerView *", "playerView", (int)(&((FullscreenFXManager *)0)->playerView), sizeof( ((FullscreenFXManager *)0)->playerView ) },
	{ "const idMaterial *", "blendBackMaterial", (int)(&((FullscreenFXManager *)0)->blendBackMaterial), sizeof( ((FullscreenFXManager *)0)->blendBackMaterial ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerView_typeInfo[] = {
	{ "screenBlob_t[8]", "screenBlobs", (int)(&((idPlayerView *)0)->screenBlobs), sizeof( ((idPlayerView *)0)->screenBlobs ) },
	{ ": int", "dvFinishTime", (int)(&((idPlayerView *)0)->dvFinishTime), sizeof( ((idPlayerView *)0)->dvFinishTime ) },
	{ "int", "kickFinishTime", (int)(&((idPlayerView *)0)->kickFinishTime), sizeof( ((idPlayerView *)0)->kickFinishTime ) },
	{ "idAngles", "kickAngles", (int)(&((idPlayerView *)0)->kickAngles), sizeof( ((idPlayerView *)0)->kickAngles ) },
	{ "bool", "bfgVision", (int)(&((idPlayerView *)0)->bfgVision), sizeof( ((idPlayerView *)0)->bfgVision ) },
	{ "const idMaterial *", "tunnelMaterial", (int)(&((idPlayerView *)0)->tunnelMaterial), sizeof( ((idPlayerView *)0)->tunnelMaterial ) },
	{ "const idMaterial *", "armorMaterial", (int)(&((idPlayerView *)0)->armorMaterial), sizeof( ((idPlayerView *)0)->armorMaterial ) },
	{ "const idMaterial *", "berserkMaterial", (int)(&((idPlayerView *)0)->berserkMaterial), sizeof( ((idPlayerView *)0)->berserkMaterial ) },
	{ "const idMaterial *", "irGogglesMaterial", (int)(&((idPlayerView *)0)->irGogglesMaterial), sizeof( ((idPlayerView *)0)->irGogglesMaterial ) },
	{ "const idMaterial *", "bloodSprayMaterial", (int)(&((idPlayerView *)0)->bloodSprayMaterial), sizeof( ((idPlayerView *)0)->bloodSprayMaterial ) },
	{ "const idMaterial *", "bfgMaterial", (int)(&((idPlayerView *)0)->bfgMaterial), sizeof( ((idPlayerView *)0)->bfgMaterial ) },
	{ "float", "lastDamageTime", (int)(&((idPlayerView *)0)->lastDamageTime), sizeof( ((idPlayerView *)0)->lastDamageTime ) },
	{ "idVec4", "fadeColor", (int)(&((idPlayerView *)0)->fadeColor), sizeof( ((idPlayerView *)0)->fadeColor ) },
	{ "idVec4", "fadeToColor", (int)(&((idPlayerView *)0)->fadeToColor), sizeof( ((idPlayerView *)0)->fadeToColor ) },
	{ "idVec4", "fadeFromColor", (int)(&((idPlayerView *)0)->fadeFromColor), sizeof( ((idPlayerView *)0)->fadeFromColor ) },
	{ "float", "fadeRate", (int)(&((idPlayerView *)0)->fadeRate), sizeof( ((idPlayerView *)0)->fadeRate ) },
	{ "int", "fadeTime", (int)(&((idPlayerView *)0)->fadeTime), sizeof( ((idPlayerView *)0)->fadeTime ) },
	{ "idAngles", "shakeAng", (int)(&((idPlayerView *)0)->shakeAng), sizeof( ((idPlayerView *)0)->shakeAng ) },
	{ "idPlayer *", "player", (int)(&((idPlayerView *)0)->player), sizeof( ((idPlayerView *)0)->player ) },
	{ "renderView_t", "view", (int)(&((idPlayerView *)0)->view), sizeof( ((idPlayerView *)0)->view ) },
	{ "FullscreenFXManager *", "fxManager", (int)(&((idPlayerView *)0)->fxManager), sizeof( ((idPlayerView *)0)->fxManager ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerIcon_typeInfo[] = {
	{ ": playerIconType_t", "iconType", (int)(&((idPlayerIcon *)0)->iconType), sizeof( ((idPlayerIcon *)0)->iconType ) },
	{ "renderEntity_t", "renderEnt", (int)(&((idPlayerIcon *)0)->renderEnt), sizeof( ((idPlayerIcon *)0)->renderEnt ) },
	{ "qhandle_t", "iconHandle", (int)(&((idPlayerIcon *)0)->iconHandle), sizeof( ((idPlayerIcon *)0)->iconHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAchievementManager_typeInfo[] = {
	{ ": idEntityPtr < idPlayer >", "owner", (int)(&((idAchievementManager *)0)->owner), sizeof( ((idAchievementManager *)0)->owner ) },
	{ "idArray < int , ACHIEVEMENTS_NUM >", "counts", (int)(&((idAchievementManager *)0)->counts), sizeof( ((idAchievementManager *)0)->counts ) },
	{ "int", "lastPlayerKilledTime", (int)(&((idAchievementManager *)0)->lastPlayerKilledTime), sizeof( ((idAchievementManager *)0)->lastPlayerKilledTime ) },
	{ "int", "lastImpKilledTime", (int)(&((idAchievementManager *)0)->lastImpKilledTime), sizeof( ((idAchievementManager *)0)->lastImpKilledTime ) },
	{ "bool", "playerTookDamage", (int)(&((idAchievementManager *)0)->playerTookDamage), sizeof( ((idAchievementManager *)0)->playerTookDamage ) },
	{ "int", "currentHellTimeKills", (int)(&((idAchievementManager *)0)->currentHellTimeKills), sizeof( ((idAchievementManager *)0)->currentHellTimeKills ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAimAssist_typeInfo[] = {
	{ "idPlayer *", "player", (int)(&((idAimAssist *)0)->player), sizeof( ((idAimAssist *)0)->player ) },
	{ "idAngles", "angleCorrection", (int)(&((idAimAssist *)0)->angleCorrection), sizeof( ((idAimAssist *)0)->angleCorrection ) },
	{ "float", "frictionScalar", (int)(&((idAimAssist *)0)->frictionScalar), sizeof( ((idAimAssist *)0)->frictionScalar ) },
	{ "idEntityPtr < idEntity >", "targetEntity", (int)(&((idAimAssist *)0)->targetEntity), sizeof( ((idAimAssist *)0)->targetEntity ) },
	{ "idVec3", "lastTargetPos", (int)(&((idAimAssist *)0)->lastTargetPos), sizeof( ((idAimAssist *)0)->lastTargetPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idObjectiveInfo_typeInfo[] = {
	{ "idStr", "title", (int)(&((idObjectiveInfo *)0)->title), sizeof( ((idObjectiveInfo *)0)->title ) },
	{ "idStr", "text", (int)(&((idObjectiveInfo *)0)->text), sizeof( ((idObjectiveInfo *)0)->text ) },
	{ "const idMaterial *", "screenshot", (int)(&((idObjectiveInfo *)0)->screenshot), sizeof( ((idObjectiveInfo *)0)->screenshot ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLevelTriggerInfo_typeInfo[] = {
	{ "idStr", "levelName", (int)(&((idLevelTriggerInfo *)0)->levelName), sizeof( ((idLevelTriggerInfo *)0)->levelName ) },
	{ "idStr", "triggerName", (int)(&((idLevelTriggerInfo *)0)->triggerName), sizeof( ((idLevelTriggerInfo *)0)->triggerName ) },
	{ NULL, 0 }
};

static classVariableInfo_t RechargeAmmo_t_typeInfo[] = {
	{ "int", "ammo", (int)(&((RechargeAmmo_t *)0)->ammo), sizeof( ((RechargeAmmo_t *)0)->ammo ) },
	{ "int", "rechargeTime", (int)(&((RechargeAmmo_t *)0)->rechargeTime), sizeof( ((RechargeAmmo_t *)0)->rechargeTime ) },
	{ "char[128]", "ammoName", (int)(&((RechargeAmmo_t *)0)->ammoName), sizeof( ((RechargeAmmo_t *)0)->ammoName ) },
	{ NULL, 0 }
};

static classVariableInfo_t WeaponToggle_t_typeInfo[] = {
	{ "char[64]", "name", (int)(&((WeaponToggle_t *)0)->name), sizeof( ((WeaponToggle_t *)0)->name ) },
	{ "idList < int , TAG_IDLIB_LIST_PLAYER >", "toggleList", (int)(&((WeaponToggle_t *)0)->toggleList), sizeof( ((WeaponToggle_t *)0)->toggleList ) },
	{ "int", "lastUsed", (int)(&((WeaponToggle_t *)0)->lastUsed), sizeof( ((WeaponToggle_t *)0)->lastUsed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInventory_typeInfo[] = {
	{ ": int", "maxHealth", (int)(&((idInventory *)0)->maxHealth), sizeof( ((idInventory *)0)->maxHealth ) },
	{ "int", "weapons", (int)(&((idInventory *)0)->weapons), sizeof( ((idInventory *)0)->weapons ) },
	{ "int", "powerups", (int)(&((idInventory *)0)->powerups), sizeof( ((idInventory *)0)->powerups ) },
	{ "int", "armor", (int)(&((idInventory *)0)->armor), sizeof( ((idInventory *)0)->armor ) },
	{ "int", "maxarmor", (int)(&((idInventory *)0)->maxarmor), sizeof( ((idInventory *)0)->maxarmor ) },
	{ "int[8]", "powerupEndTime", (int)(&((idInventory *)0)->powerupEndTime), sizeof( ((idInventory *)0)->powerupEndTime ) },
	{ "RechargeAmmo_t[16]", "rechargeAmmo", (int)(&((idInventory *)0)->rechargeAmmo), sizeof( ((idInventory *)0)->rechargeAmmo ) },
	{ "int", "ammoPredictTime", (int)(&((idInventory *)0)->ammoPredictTime), sizeof( ((idInventory *)0)->ammoPredictTime ) },
	{ "int", "deplete_armor", (int)(&((idInventory *)0)->deplete_armor), sizeof( ((idInventory *)0)->deplete_armor ) },
	{ "float", "deplete_rate", (int)(&((idInventory *)0)->deplete_rate), sizeof( ((idInventory *)0)->deplete_rate ) },
	{ "int", "deplete_ammount", (int)(&((idInventory *)0)->deplete_ammount), sizeof( ((idInventory *)0)->deplete_ammount ) },
	{ "int", "nextArmorDepleteTime", (int)(&((idInventory *)0)->nextArmorDepleteTime), sizeof( ((idInventory *)0)->nextArmorDepleteTime ) },
	{ "int[4]", "pdasViewed", (int)(&((idInventory *)0)->pdasViewed), sizeof( ((idInventory *)0)->pdasViewed ) },
	{ "int", "selPDA", (int)(&((idInventory *)0)->selPDA), sizeof( ((idInventory *)0)->selPDA ) },
	{ "int", "selEMail", (int)(&((idInventory *)0)->selEMail), sizeof( ((idInventory *)0)->selEMail ) },
	{ "int", "selVideo", (int)(&((idInventory *)0)->selVideo), sizeof( ((idInventory *)0)->selVideo ) },
	{ "int", "selAudio", (int)(&((idInventory *)0)->selAudio), sizeof( ((idInventory *)0)->selAudio ) },
	{ "bool", "pdaOpened", (int)(&((idInventory *)0)->pdaOpened), sizeof( ((idInventory *)0)->pdaOpened ) },
	{ "idList < idDict * >", "items", (int)(&((idInventory *)0)->items), sizeof( ((idInventory *)0)->items ) },
	{ "idList < idStr >", "pdaSecurity", (int)(&((idInventory *)0)->pdaSecurity), sizeof( ((idInventory *)0)->pdaSecurity ) },
	{ "idList < const idDeclPDA * >", "pdas", (int)(&((idInventory *)0)->pdas), sizeof( ((idInventory *)0)->pdas ) },
	{ "idList < const idDeclVideo * >", "videos", (int)(&((idInventory *)0)->videos), sizeof( ((idInventory *)0)->videos ) },
	{ "idList < const idDeclEmail * >", "emails", (int)(&((idInventory *)0)->emails), sizeof( ((idInventory *)0)->emails ) },
	{ "bool", "ammoPulse", (int)(&((idInventory *)0)->ammoPulse), sizeof( ((idInventory *)0)->ammoPulse ) },
	{ "bool", "weaponPulse", (int)(&((idInventory *)0)->weaponPulse), sizeof( ((idInventory *)0)->weaponPulse ) },
	{ "bool", "armorPulse", (int)(&((idInventory *)0)->armorPulse), sizeof( ((idInventory *)0)->armorPulse ) },
	{ "int", "lastGiveTime", (int)(&((idInventory *)0)->lastGiveTime), sizeof( ((idInventory *)0)->lastGiveTime ) },
	{ "idList < idLevelTriggerInfo , TAG_IDLIB_LIST_PLAYER >", "levelTriggers", (int)(&((idInventory *)0)->levelTriggers), sizeof( ((idInventory *)0)->levelTriggers ) },
	{ "int", "nextItemPickup", (int)(&((idInventory *)0)->nextItemPickup), sizeof( ((idInventory *)0)->nextItemPickup ) },
	{ "int", "nextItemNum", (int)(&((idInventory *)0)->nextItemNum), sizeof( ((idInventory *)0)->nextItemNum ) },
	{ "int", "onePickupTime", (int)(&((idInventory *)0)->onePickupTime), sizeof( ((idInventory *)0)->onePickupTime ) },
	{ "idList < idStr >", "pickupItemNames", (int)(&((idInventory *)0)->pickupItemNames), sizeof( ((idInventory *)0)->pickupItemNames ) },
	{ "idList < idObjectiveInfo >", "objectiveNames", (int)(&((idInventory *)0)->objectiveNames), sizeof( ((idInventory *)0)->objectiveNames ) },
	{ ": idArray < idPredictedValue < int > , AMMO_NUMTYPES >", "ammo", (int)(&((idInventory *)0)->ammo), sizeof( ((idInventory *)0)->ammo ) },
	{ "idArray < idPredictedValue < int > , MAX_WEAPONS >", "clip", (int)(&((idInventory *)0)->clip), sizeof( ((idInventory *)0)->clip ) },
	{ NULL, 0 }
};

static classVariableInfo_t loggedAccel_t_typeInfo[] = {
	{ "int", "time", (int)(&((loggedAccel_t *)0)->time), sizeof( ((loggedAccel_t *)0)->time ) },
	{ "idVec3", "dir", (int)(&((loggedAccel_t *)0)->dir), sizeof( ((loggedAccel_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasLocation_t_typeInfo[] = {
	{ "int", "areaNum", (int)(&((aasLocation_t *)0)->areaNum), sizeof( ((aasLocation_t *)0)->areaNum ) },
	{ "idVec3", "pos", (int)(&((aasLocation_t *)0)->pos), sizeof( ((aasLocation_t *)0)->pos ) },
	{ NULL, 0 }
};

intptr_t idPlayer::Invoke(idPlayer *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 48744) { // Init
		cls->Init();
		return 0;
	};
	if(functionNameHash == 223208) { // PrepareForRestart
		cls->PrepareForRestart();
		return 0;
	};
	if(functionNameHash == 90512) { // Restart
		cls->Restart();
		return 0;
	};
	if(functionNameHash == 249647) { // LinkScriptVariables
		cls->LinkScriptVariables();
		return 0;
	};
	if(functionNameHash == 226876) { // SetupWeaponEntity
		cls->SetupWeaponEntity();
		return 0;
	};
	if(functionNameHash == 238460) { // SpawnFromSpawnSpot
		cls->SpawnFromSpawnSpot();
		return 0;
	};
	if(functionNameHash == 148179) { // SetClipModel
		cls->SetClipModel();
		return 0;
	};
	if(functionNameHash == 237887) { // SavePersistantInfo
		cls->SavePersistantInfo();
		return 0;
	};
	if(functionNameHash == 284524) { // RestorePersistantInfo
		cls->RestorePersistantInfo();
		return 0;
	};
	if(functionNameHash == 149910) { // CacheWeapons
		cls->CacheWeapons();
		return 0;
	};
	if(functionNameHash == 178279) { // EnterCinematic
		cls->EnterCinematic();
		return 0;
	};
	if(functionNameHash == 165047) { // ExitCinematic
		cls->ExitCinematic();
		return 0;
	};
	if(functionNameHash == 210484) { // UpdateConditions
		cls->UpdateConditions();
		return 0;
	};
	if(functionNameHash == 265702) { // ResetControllerShake
		cls->ResetControllerShake();
		return 0;
	};
	if(functionNameHash == 149541) { // GetAimAssist
		return (intptr_t)cls->GetAimAssist();
	};
	if(functionNameHash == 163648) { // GetRenderView
		return (intptr_t)cls->GetRenderView();
	};
	if(functionNameHash == 247267) { // CalculateRenderView
		cls->CalculateRenderView();
		return 0;
	};
	if(functionNameHash == 323196) { // CalculateFirstPersonView
		cls->CalculateFirstPersonView();
		return 0;
	};
	if(functionNameHash == 266853) { // UpdateSpectatingText
		cls->UpdateSpectatingText();
		return 0;
	};
	if(functionNameHash == 124692) { // DefaultFov
		cls->DefaultFov();
		return 0;
	};
	if(functionNameHash == 180136) { // GetEyePosition
		cls->GetEyePosition();
		return 0;
	};
	if(functionNameHash == 250140) { // GetPrimaryObjective
		return (intptr_t)cls->GetPrimaryObjective();
	};
	if(functionNameHash == 157534) { // GetInventory
		cls->GetInventory();
		return 0;
	};
	if(functionNameHash == 267860) { // GetNumInventoryItems
		return (intptr_t)cls->GetNumInventoryItems();
	};
	if(functionNameHash == 132490) { // EndAudioLog
		cls->EndAudioLog();
		return 0;
	};
	if(functionNameHash == 146750) { // EndVideoDisk
		cls->EndVideoDisk();
		return 0;
	};
	if(functionNameHash == 203479) { // GetVideoMaterial
		return (intptr_t)cls->GetVideoMaterial();
	};
	if(functionNameHash == 165808) { // ClearPowerUps
		cls->ClearPowerUps();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 127713) { // NextWeapon
		cls->NextWeapon();
		return 0;
	};
	if(functionNameHash == 179818) { // NextBestWeapon
		cls->NextBestWeapon();
		return 0;
	};
	if(functionNameHash == 127456) { // PrevWeapon
		cls->PrevWeapon();
		return 0;
	};
	if(functionNameHash == 141364) { // LowerWeapon
		cls->LowerWeapon();
		return 0;
	};
	if(functionNameHash == 138813) { // RaiseWeapon
		cls->RaiseWeapon();
		return 0;
	};
	if(functionNameHash == 289786) { // WeaponLoweringCallback
		cls->WeaponLoweringCallback();
		return 0;
	};
	if(functionNameHash == 259440) { // WeaponRisingCallback
		cls->WeaponRisingCallback();
		return 0;
	};
	if(functionNameHash == 381109) { // RemoveAllButEssentialWeapons
		cls->RemoveAllButEssentialWeapons();
		return 0;
	};
	if(functionNameHash == 291879) { // CanShowWeaponViewmodel
		cls->CanShowWeaponViewmodel();
		return 0;
	};
	if(functionNameHash == 98493) { // AddAIKill
		cls->AddAIKill();
		return 0;
	};
	if(functionNameHash == 247825) { // SetCurrentHeartRate
		cls->SetCurrentHeartRate();
		return 0;
	};
	if(functionNameHash == 198082) { // GetBaseHeartRate
		return (intptr_t)cls->GetBaseHeartRate();
	};
	if(functionNameHash == 110114) { // UpdateAir
		cls->UpdateAir();
		return 0;
	};
	if(functionNameHash == 209361) { // UpdatePowerupHud
		cls->UpdatePowerupHud();
		return 0;
	};
	if(functionNameHash == 110505) { // GuiActive
		cls->GuiActive();
		return 0;
	};
	if(functionNameHash == 100976) { // TogglePDA
		cls->TogglePDA();
		return 0;
	};
	if(functionNameHash == 110723) { // UpdateHud
		cls->UpdateHud();
		return 0;
	};
	if(functionNameHash == 60789) { // GetPDA
		return (intptr_t)cls->GetPDA();
	};
	if(functionNameHash == 111683) { // GetPDAOpen
		cls->GetPDAOpen();
		return 0;
	};
	if(functionNameHash == 217835) { // GetInfluenceLevel
		return (intptr_t)cls->GetInfluenceLevel();
	};
	if(functionNameHash == 259212) { // GetPrivateCameraView
		return (intptr_t)cls->GetPrivateCameraView();
	};
	if(functionNameHash == 218301) { // UpdateChattingHud
		cls->UpdateChattingHud();
		return 0;
	};
	if(functionNameHash == 231979) { // Event_StopAudioLog
		cls->Event_StopAudioLog();
		return 0;
	};
	if(functionNameHash == 82942) { // HideTip
		cls->HideTip();
		return 0;
	};
	if(functionNameHash == 150457) { // IsTipVisible
		cls->IsTipVisible();
		return 0;
	};
	if(functionNameHash == 162972) { // HideObjective
		cls->HideObjective();
		return 0;
	};
	if(functionNameHash == 154873) { // IsRespawning
		cls->IsRespawning();
		return 0;
	};
	if(functionNameHash == 152040) { // IsInTeleport
		cls->IsInTeleport();
		return 0;
	};
	if(functionNameHash == 149259) { // GetSkinIndex
		return (intptr_t)cls->GetSkinIndex();
	};
	if(functionNameHash == 235912) { // GetInfluenceEntity
		return (intptr_t)cls->GetInfluenceEntity();
	};
	if(functionNameHash == 260455) { // GetInfluenceMaterial
		return (intptr_t)cls->GetInfluenceMaterial();
	};
	if(functionNameHash == 233090) { // GetInfluenceRadius
		cls->GetInfluenceRadius();
		return 0;
	};
	if(functionNameHash == 208894) { // GetPlayerPhysics
		return (intptr_t)cls->GetPlayerPhysics();
	};
	if(functionNameHash == 95325) { // IsLeader
		cls->IsLeader();
		return 0;
	};
	if(functionNameHash == 194926) { // UpdateSkinSetup
		cls->UpdateSkinSetup();
		return 0;
	};
	if(functionNameHash == 95320) { // OnLadder
		cls->OnLadder();
		return 0;
	};
	if(functionNameHash == 221204) { // UpdatePlayerIcons
		cls->UpdatePlayerIcons();
		return 0;
	};
	if(functionNameHash == 192692) { // DrawPlayerIcons
		cls->DrawPlayerIcons();
		return 0;
	};
	if(functionNameHash == 190255) { // HidePlayerIcons
		cls->HidePlayerIcons();
		return 0;
	};
	if(functionNameHash == 109351) { // NeedsIcon
		cls->NeedsIcon();
		return 0;
	};
	if(functionNameHash == 232272) { // StopHealthRecharge
		cls->StopHealthRecharge();
		return 0;
	};
	if(functionNameHash == 208447) { // GetCurrentWeapon
		cls->GetCurrentWeapon();
		return 0;
	};
	if(functionNameHash == 265555) { // GetCurrentWeaponSlot
		return (intptr_t)cls->GetCurrentWeaponSlot();
	};
	if(functionNameHash == 174179) { // GetIdealWeapon
		return (intptr_t)cls->GetIdealWeapon();
	};
	if(functionNameHash == 206679) { // GetWeaponToggles
		cls->GetWeaponToggles();
		return 0;
	};
	if(functionNameHash == 280196) { // PlayHelltimeStopSound
		cls->PlayHelltimeStopSound();
		return 0;
	};
	if(functionNameHash == 95972) { // DropFlag
		cls->DropFlag();
		return 0;
	};
	if(functionNameHash == 125711) { // ReturnFlag
		cls->ReturnFlag();
		return 0;
	};
	if(functionNameHash == 143723) { // FreeModelDef
		cls->FreeModelDef();
		return 0;
	};
	if(functionNameHash == 127139) { // SelfSmooth
		cls->SelfSmooth();
		return 0;
	};
	if(functionNameHash == 199645) { // GetViewBobAngles
		cls->GetViewBobAngles();
		return 0;
	};
	if(functionNameHash == 120368) { // GetViewBob
		cls->GetViewBob();
		return 0;
	};
	if(functionNameHash == 273462) { // GetAchievementManager
		cls->GetAchievementManager();
		return 0;
	};
	if(functionNameHash == 273462) { // GetAchievementManager
		cls->GetAchievementManager();
		return 0;
	};
	if(functionNameHash == 161926) { // GetPlayedTime
		return (intptr_t)cls->GetPlayedTime();
	};
	if(functionNameHash == 230767) { // GetClientFireCount
		return (intptr_t)cls->GetClientFireCount();
	};
	if(functionNameHash == 235397) { // IncrementFireCount
		cls->IncrementFireCount();
		return 0;
	};
	if(functionNameHash == 277513) { // ShowRespawnHudMessage
		cls->ShowRespawnHudMessage();
		return 0;
	};
	if(functionNameHash == 272797) { // HideRespawnHudMessage
		cls->HideRespawnHudMessage();
		return 0;
	};
	if(functionNameHash == 250595) { // IsLocallyControlled
		cls->IsLocallyControlled();
		return 0;
	};
	if(functionNameHash == 209726) { // GetExpansionType
		cls->GetExpansionType();
		return 0;
	};
	if(functionNameHash == 232151) { // AddProjectileKills
		cls->AddProjectileKills();
		return 0;
	};
	if(functionNameHash == 234921) { // GetProjectileKills
		return (intptr_t)cls->GetProjectileKills();
	};
	if(functionNameHash == 265803) { // ResetProjectileKills
		cls->ResetProjectileKills();
		return 0;
	};
	if(functionNameHash == 165154) { // GetPrevWeapon
		return (intptr_t)cls->GetPrevWeapon();
	};
	if(functionNameHash == 127156) { // StopFiring
		cls->StopFiring();
		return 0;
	};
	if(functionNameHash == 124685) { // FireWeapon
		cls->FireWeapon();
		return 0;
	};
	if(functionNameHash == 163981) { // Weapon_Combat
		cls->Weapon_Combat();
		return 0;
	};
	if(functionNameHash == 115606) { // Weapon_NPC
		cls->Weapon_NPC();
		return 0;
	};
	if(functionNameHash == 116127) { // Weapon_GUI
		cls->Weapon_GUI();
		return 0;
	};
	if(functionNameHash == 153156) { // UpdateWeapon
		cls->UpdateWeapon();
		return 0;
	};
	if(functionNameHash == 207861) { // UpdateFlashlight
		cls->UpdateFlashlight();
		return 0;
	};
	if(functionNameHash == 151891) { // FlashlightOn
		cls->FlashlightOn();
		return 0;
	};
	if(functionNameHash == 164213) { // FlashlightOff
		cls->FlashlightOff();
		return 0;
	};
	if(functionNameHash == 209329) { // UpdateSpectating
		cls->UpdateSpectating();
		return 0;
	};
	if(functionNameHash == 165177) { // SpectateCycle
		cls->SpectateCycle();
		return 0;
	};
	if(functionNameHash == 209678) { // GunTurningOffset
		cls->GunTurningOffset();
		return 0;
	};
	if(functionNameHash == 275446) { // GunAcceleratingOffset
		cls->GunAcceleratingOffset();
		return 0;
	};
	if(functionNameHash == 125523) { // UseObjects
		cls->UseObjects();
		return 0;
	};
	if(functionNameHash == 205597) { // UpdateViewAngles
		cls->UpdateViewAngles();
		return 0;
	};
	if(functionNameHash == 212276) { // EvaluateControls
		cls->EvaluateControls();
		return 0;
	};
	if(functionNameHash == 138506) { // AdjustSpeed
		cls->AdjustSpeed();
		return 0;
	};
	if(functionNameHash == 205065) { // AdjustBodyAngles
		cls->AdjustBodyAngles();
		return 0;
	};
	if(functionNameHash == 182149) { // InitAASLocation
		cls->InitAASLocation();
		return 0;
	};
	if(functionNameHash == 168400) { // SetAASLocation
		cls->SetAASLocation();
		return 0;
	};
	if(functionNameHash == 49083) { // Move
		cls->Move();
		return 0;
	};
	if(functionNameHash == 461936) { // RunPhysics_RemoteClientCorrection
		cls->RunPhysics_RemoteClientCorrection();
		return 0;
	};
	if(functionNameHash == 181916) { // UpdatePowerUps
		cls->UpdatePowerUps();
		return 0;
	};
	if(functionNameHash == 221329) { // SetSpectateOrigin
		cls->SetSpectateOrigin();
		return 0;
	};
	if(functionNameHash == 293094) { // AllowClientAuthPhysics
		cls->AllowClientAuthPhysics();
		return 0;
	};
	if(functionNameHash == 234606) { // GetPhysicsTimeStep
		cls->GetPhysicsTimeStep();
		return 0;
	};
	if(functionNameHash == 123618) { // ClearFocus
		cls->ClearFocus();
		return 0;
	};
	if(functionNameHash == 139401) { // UpdateFocus
		cls->UpdateFocus();
		return 0;
	};
	if(functionNameHash == 180431) { // UpdateLocation
		cls->UpdateLocation();
		return 0;
	};
	if(functionNameHash == 110451) { // ActiveGui
		return (intptr_t)cls->ActiveGui();
	};
	if(functionNameHash == 179481) { // Respawn_Shared
		cls->Respawn_Shared();
		return 0;
	};
	if(functionNameHash == 124190) { // UseVehicle
		cls->UseVehicle();
		return 0;
	};
	if(functionNameHash == 163139) { // Event_GetMove
		cls->Event_GetMove();
		return 0;
	};
	if(functionNameHash == 244748) { // Event_GetViewAngles
		cls->Event_GetViewAngles();
		return 0;
	};
	if(functionNameHash == 191630) { // Event_StopFxFov
		cls->Event_StopFxFov();
		return 0;
	};
	if(functionNameHash == 231053) { // Event_EnableWeapon
		cls->Event_EnableWeapon();
		return 0;
	};
	if(functionNameHash == 245925) { // Event_DisableWeapon
		cls->Event_DisableWeapon();
		return 0;
	};
	if(functionNameHash == 292377) { // Event_GetCurrentWeapon
		cls->Event_GetCurrentWeapon();
		return 0;
	};
	if(functionNameHash == 309426) { // Event_GetPreviousWeapon
		cls->Event_GetPreviousWeapon();
		return 0;
	};
	if(functionNameHash == 278206) { // Event_GetWeaponEntity
		cls->Event_GetWeaponEntity();
		return 0;
	};
	if(functionNameHash == 152629) { // Event_OpenPDA
		cls->Event_OpenPDA();
		return 0;
	};
	if(functionNameHash == 219395) { // Event_PDAAvailable
		cls->Event_PDAAvailable();
		return 0;
	};
	if(functionNameHash == 124294) { // Event_InPDA
		cls->Event_InPDA();
		return 0;
	};
	if(functionNameHash == 267939) { // Event_ExitTeleporter
		cls->Event_ExitTeleporter();
		return 0;
	};
	if(functionNameHash == 161076) { // Event_HideTip
		cls->Event_HideTip();
		return 0;
	};
	if(functionNameHash == 234486) { // Event_LevelTrigger
		cls->Event_LevelTrigger();
		return 0;
	};
	if(functionNameHash == 147184) { // Event_Gibbed
		cls->Event_Gibbed();
		return 0;
	};
	if(functionNameHash == 256549) { // Event_GetIdealWeapon
		cls->Event_GetIdealWeapon();
		return 0;
	};
	if(functionNameHash == 194887) { // Event_StartWarp
		cls->Event_StartWarp();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPlayer_typeInfo[] = {
	{ "usercmd_t", "oldCmd", (int)(&((idPlayer *)0)->oldCmd), sizeof( ((idPlayer *)0)->oldCmd ) },
	{ "usercmd_t", "usercmd", (int)(&((idPlayer *)0)->usercmd), sizeof( ((idPlayer *)0)->usercmd ) },
	{ "idPlayerView", "playerView", (int)(&((idPlayer *)0)->playerView), sizeof( ((idPlayer *)0)->playerView ) },
	{ "bool", "noclip", (int)(&((idPlayer *)0)->noclip), sizeof( ((idPlayer *)0)->noclip ) },
	{ "bool", "godmode", (int)(&((idPlayer *)0)->godmode), sizeof( ((idPlayer *)0)->godmode ) },
	{ "bool", "spawnAnglesSet", (int)(&((idPlayer *)0)->spawnAnglesSet), sizeof( ((idPlayer *)0)->spawnAnglesSet ) },
	{ "idAngles", "spawnAngles", (int)(&((idPlayer *)0)->spawnAngles), sizeof( ((idPlayer *)0)->spawnAngles ) },
	{ "idAngles", "viewAngles", (int)(&((idPlayer *)0)->viewAngles), sizeof( ((idPlayer *)0)->viewAngles ) },
	{ "idAngles", "cmdAngles", (int)(&((idPlayer *)0)->cmdAngles), sizeof( ((idPlayer *)0)->cmdAngles ) },
	{ "float", "independentWeaponPitchAngle", (int)(&((idPlayer *)0)->independentWeaponPitchAngle), sizeof( ((idPlayer *)0)->independentWeaponPitchAngle ) },
	{ "idQuat", "previousViewQuat", (int)(&((idPlayer *)0)->previousViewQuat), sizeof( ((idPlayer *)0)->previousViewQuat ) },
	{ "idQuat", "nextViewQuat", (int)(&((idPlayer *)0)->nextViewQuat), sizeof( ((idPlayer *)0)->nextViewQuat ) },
	{ "int", "buttonMask", (int)(&((idPlayer *)0)->buttonMask), sizeof( ((idPlayer *)0)->buttonMask ) },
	{ "int", "oldButtons", (int)(&((idPlayer *)0)->oldButtons), sizeof( ((idPlayer *)0)->oldButtons ) },
	{ "int", "oldImpulseSequence", (int)(&((idPlayer *)0)->oldImpulseSequence), sizeof( ((idPlayer *)0)->oldImpulseSequence ) },
	{ "int", "lastHitTime", (int)(&((idPlayer *)0)->lastHitTime), sizeof( ((idPlayer *)0)->lastHitTime ) },
	{ "int", "lastSndHitTime", (int)(&((idPlayer *)0)->lastSndHitTime), sizeof( ((idPlayer *)0)->lastSndHitTime ) },
	{ "int", "lastSavingThrowTime", (int)(&((idPlayer *)0)->lastSavingThrowTime), sizeof( ((idPlayer *)0)->lastSavingThrowTime ) },
	{ "bool[100]", "pdaHasBeenRead", (int)(&((idPlayer *)0)->pdaHasBeenRead), sizeof( ((idPlayer *)0)->pdaHasBeenRead ) },
	{ "bool[100]", "videoHasBeenViewed", (int)(&((idPlayer *)0)->videoHasBeenViewed), sizeof( ((idPlayer *)0)->videoHasBeenViewed ) },
	{ "bool[200]", "audioHasBeenHeard", (int)(&((idPlayer *)0)->audioHasBeenHeard), sizeof( ((idPlayer *)0)->audioHasBeenHeard ) },
	{ "idScriptBool", "AI_FORWARD", (int)(&((idPlayer *)0)->AI_FORWARD), sizeof( ((idPlayer *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_BACKWARD", (int)(&((idPlayer *)0)->AI_BACKWARD), sizeof( ((idPlayer *)0)->AI_BACKWARD ) },
	{ "idScriptBool", "AI_STRAFE_LEFT", (int)(&((idPlayer *)0)->AI_STRAFE_LEFT), sizeof( ((idPlayer *)0)->AI_STRAFE_LEFT ) },
	{ "idScriptBool", "AI_STRAFE_RIGHT", (int)(&((idPlayer *)0)->AI_STRAFE_RIGHT), sizeof( ((idPlayer *)0)->AI_STRAFE_RIGHT ) },
	{ "idScriptBool", "AI_ATTACK_HELD", (int)(&((idPlayer *)0)->AI_ATTACK_HELD), sizeof( ((idPlayer *)0)->AI_ATTACK_HELD ) },
	{ "idScriptBool", "AI_WEAPON_FIRED", (int)(&((idPlayer *)0)->AI_WEAPON_FIRED), sizeof( ((idPlayer *)0)->AI_WEAPON_FIRED ) },
	{ "idScriptBool", "AI_JUMP", (int)(&((idPlayer *)0)->AI_JUMP), sizeof( ((idPlayer *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_CROUCH", (int)(&((idPlayer *)0)->AI_CROUCH), sizeof( ((idPlayer *)0)->AI_CROUCH ) },
	{ "idScriptBool", "AI_ONGROUND", (int)(&((idPlayer *)0)->AI_ONGROUND), sizeof( ((idPlayer *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ONLADDER", (int)(&((idPlayer *)0)->AI_ONLADDER), sizeof( ((idPlayer *)0)->AI_ONLADDER ) },
	{ "idScriptBool", "AI_DEAD", (int)(&((idPlayer *)0)->AI_DEAD), sizeof( ((idPlayer *)0)->AI_DEAD ) },
	{ "idScriptBool", "AI_RUN", (int)(&((idPlayer *)0)->AI_RUN), sizeof( ((idPlayer *)0)->AI_RUN ) },
	{ "idScriptBool", "AI_PAIN", (int)(&((idPlayer *)0)->AI_PAIN), sizeof( ((idPlayer *)0)->AI_PAIN ) },
	{ "idScriptBool", "AI_HARDLANDING", (int)(&((idPlayer *)0)->AI_HARDLANDING), sizeof( ((idPlayer *)0)->AI_HARDLANDING ) },
	{ "idScriptBool", "AI_SOFTLANDING", (int)(&((idPlayer *)0)->AI_SOFTLANDING), sizeof( ((idPlayer *)0)->AI_SOFTLANDING ) },
	{ "idScriptBool", "AI_RELOAD", (int)(&((idPlayer *)0)->AI_RELOAD), sizeof( ((idPlayer *)0)->AI_RELOAD ) },
	{ "idScriptBool", "AI_TELEPORT", (int)(&((idPlayer *)0)->AI_TELEPORT), sizeof( ((idPlayer *)0)->AI_TELEPORT ) },
	{ "idScriptBool", "AI_TURN_LEFT", (int)(&((idPlayer *)0)->AI_TURN_LEFT), sizeof( ((idPlayer *)0)->AI_TURN_LEFT ) },
	{ "idScriptBool", "AI_TURN_RIGHT", (int)(&((idPlayer *)0)->AI_TURN_RIGHT), sizeof( ((idPlayer *)0)->AI_TURN_RIGHT ) },
	{ "idInventory", "inventory", (int)(&((idPlayer *)0)->inventory), sizeof( ((idPlayer *)0)->inventory ) },
	{ "idTarget_SetPrimaryObjective *", "primaryObjective", (int)(&((idPlayer *)0)->primaryObjective), sizeof( ((idPlayer *)0)->primaryObjective ) },
	{ "int", "flashlightBattery", (int)(&((idPlayer *)0)->flashlightBattery), sizeof( ((idPlayer *)0)->flashlightBattery ) },
	{ "idEntityPtr < idWeapon >", "flashlight", (int)(&((idPlayer *)0)->flashlight), sizeof( ((idPlayer *)0)->flashlight ) },
	{ "idEntityPtr < idWeapon >", "weapon", (int)(&((idPlayer *)0)->weapon), sizeof( ((idPlayer *)0)->weapon ) },
	{ "idMenuHandler_HUD *", "hudManager", (int)(&((idPlayer *)0)->hudManager), sizeof( ((idPlayer *)0)->hudManager ) },
	{ "idMenuScreen_HUD *", "hud", (int)(&((idPlayer *)0)->hud), sizeof( ((idPlayer *)0)->hud ) },
	{ "idMenuHandler_PDA *", "pdaMenu", (int)(&((idPlayer *)0)->pdaMenu), sizeof( ((idPlayer *)0)->pdaMenu ) },
	{ "idSWF *", "mpMessages", (int)(&((idPlayer *)0)->mpMessages), sizeof( ((idPlayer *)0)->mpMessages ) },
	{ "bool", "objectiveSystemOpen", (int)(&((idPlayer *)0)->objectiveSystemOpen), sizeof( ((idPlayer *)0)->objectiveSystemOpen ) },
	{ "int[4]", "quickSlot", (int)(&((idPlayer *)0)->quickSlot), sizeof( ((idPlayer *)0)->quickSlot ) },
	{ "int", "weapon_soulcube", (int)(&((idPlayer *)0)->weapon_soulcube), sizeof( ((idPlayer *)0)->weapon_soulcube ) },
	{ "int", "weapon_pda", (int)(&((idPlayer *)0)->weapon_pda), sizeof( ((idPlayer *)0)->weapon_pda ) },
	{ "int", "weapon_fists", (int)(&((idPlayer *)0)->weapon_fists), sizeof( ((idPlayer *)0)->weapon_fists ) },
	{ "int", "weapon_flashlight", (int)(&((idPlayer *)0)->weapon_flashlight), sizeof( ((idPlayer *)0)->weapon_flashlight ) },
	{ "int", "weapon_chainsaw", (int)(&((idPlayer *)0)->weapon_chainsaw), sizeof( ((idPlayer *)0)->weapon_chainsaw ) },
	{ "int", "weapon_bloodstone", (int)(&((idPlayer *)0)->weapon_bloodstone), sizeof( ((idPlayer *)0)->weapon_bloodstone ) },
	{ "int", "weapon_bloodstone_active1", (int)(&((idPlayer *)0)->weapon_bloodstone_active1), sizeof( ((idPlayer *)0)->weapon_bloodstone_active1 ) },
	{ "int", "weapon_bloodstone_active2", (int)(&((idPlayer *)0)->weapon_bloodstone_active2), sizeof( ((idPlayer *)0)->weapon_bloodstone_active2 ) },
	{ "int", "weapon_bloodstone_active3", (int)(&((idPlayer *)0)->weapon_bloodstone_active3), sizeof( ((idPlayer *)0)->weapon_bloodstone_active3 ) },
	{ "bool", "harvest_lock", (int)(&((idPlayer *)0)->harvest_lock), sizeof( ((idPlayer *)0)->harvest_lock ) },
	{ "int", "heartRate", (int)(&((idPlayer *)0)->heartRate), sizeof( ((idPlayer *)0)->heartRate ) },
	{ "idInterpolate < float >", "heartInfo", (int)(&((idPlayer *)0)->heartInfo), sizeof( ((idPlayer *)0)->heartInfo ) },
	{ "int", "lastHeartAdjust", (int)(&((idPlayer *)0)->lastHeartAdjust), sizeof( ((idPlayer *)0)->lastHeartAdjust ) },
	{ "int", "lastHeartBeat", (int)(&((idPlayer *)0)->lastHeartBeat), sizeof( ((idPlayer *)0)->lastHeartBeat ) },
	{ "int", "lastDmgTime", (int)(&((idPlayer *)0)->lastDmgTime), sizeof( ((idPlayer *)0)->lastDmgTime ) },
	{ "int", "deathClearContentsTime", (int)(&((idPlayer *)0)->deathClearContentsTime), sizeof( ((idPlayer *)0)->deathClearContentsTime ) },
	{ "bool", "doingDeathSkin", (int)(&((idPlayer *)0)->doingDeathSkin), sizeof( ((idPlayer *)0)->doingDeathSkin ) },
	{ "int", "lastArmorPulse", (int)(&((idPlayer *)0)->lastArmorPulse), sizeof( ((idPlayer *)0)->lastArmorPulse ) },
	{ "float", "stamina", (int)(&((idPlayer *)0)->stamina), sizeof( ((idPlayer *)0)->stamina ) },
	{ "float", "healthPool", (int)(&((idPlayer *)0)->healthPool), sizeof( ((idPlayer *)0)->healthPool ) },
	{ "int", "nextHealthPulse", (int)(&((idPlayer *)0)->nextHealthPulse), sizeof( ((idPlayer *)0)->nextHealthPulse ) },
	{ "bool", "healthPulse", (int)(&((idPlayer *)0)->healthPulse), sizeof( ((idPlayer *)0)->healthPulse ) },
	{ "bool", "healthTake", (int)(&((idPlayer *)0)->healthTake), sizeof( ((idPlayer *)0)->healthTake ) },
	{ "int", "nextHealthTake", (int)(&((idPlayer *)0)->nextHealthTake), sizeof( ((idPlayer *)0)->nextHealthTake ) },
	{ "float[3]", "controllerShakeHighMag", (int)(&((idPlayer *)0)->controllerShakeHighMag), sizeof( ((idPlayer *)0)->controllerShakeHighMag ) },
	{ "float[3]", "controllerShakeLowMag", (int)(&((idPlayer *)0)->controllerShakeLowMag), sizeof( ((idPlayer *)0)->controllerShakeLowMag ) },
	{ "int[3]", "controllerShakeHighTime", (int)(&((idPlayer *)0)->controllerShakeHighTime), sizeof( ((idPlayer *)0)->controllerShakeHighTime ) },
	{ "int[3]", "controllerShakeLowTime", (int)(&((idPlayer *)0)->controllerShakeLowTime), sizeof( ((idPlayer *)0)->controllerShakeLowTime ) },
	{ "int", "controllerShakeTimeGroup", (int)(&((idPlayer *)0)->controllerShakeTimeGroup), sizeof( ((idPlayer *)0)->controllerShakeTimeGroup ) },
	{ "bool", "hiddenWeapon", (int)(&((idPlayer *)0)->hiddenWeapon), sizeof( ((idPlayer *)0)->hiddenWeapon ) },
	{ "idEntityPtr < idProjectile >", "soulCubeProjectile", (int)(&((idPlayer *)0)->soulCubeProjectile), sizeof( ((idPlayer *)0)->soulCubeProjectile ) },
	{ "idAimAssist", "aimAssist", (int)(&((idPlayer *)0)->aimAssist), sizeof( ((idPlayer *)0)->aimAssist ) },
	{ "int", "spectator", (int)(&((idPlayer *)0)->spectator), sizeof( ((idPlayer *)0)->spectator ) },
	{ "bool", "forceScoreBoard", (int)(&((idPlayer *)0)->forceScoreBoard), sizeof( ((idPlayer *)0)->forceScoreBoard ) },
	{ "bool", "forceRespawn", (int)(&((idPlayer *)0)->forceRespawn), sizeof( ((idPlayer *)0)->forceRespawn ) },
	{ "bool", "spectating", (int)(&((idPlayer *)0)->spectating), sizeof( ((idPlayer *)0)->spectating ) },
	{ "int", "lastSpectateTeleport", (int)(&((idPlayer *)0)->lastSpectateTeleport), sizeof( ((idPlayer *)0)->lastSpectateTeleport ) },
	{ "bool", "lastHitToggle", (int)(&((idPlayer *)0)->lastHitToggle), sizeof( ((idPlayer *)0)->lastHitToggle ) },
	{ "bool", "wantSpectate", (int)(&((idPlayer *)0)->wantSpectate), sizeof( ((idPlayer *)0)->wantSpectate ) },
	{ "bool", "weaponGone", (int)(&((idPlayer *)0)->weaponGone), sizeof( ((idPlayer *)0)->weaponGone ) },
	{ "bool", "useInitialSpawns", (int)(&((idPlayer *)0)->useInitialSpawns), sizeof( ((idPlayer *)0)->useInitialSpawns ) },
	{ "int", "tourneyRank", (int)(&((idPlayer *)0)->tourneyRank), sizeof( ((idPlayer *)0)->tourneyRank ) },
	{ "int", "tourneyLine", (int)(&((idPlayer *)0)->tourneyLine), sizeof( ((idPlayer *)0)->tourneyLine ) },
	{ "int", "spawnedTime", (int)(&((idPlayer *)0)->spawnedTime), sizeof( ((idPlayer *)0)->spawnedTime ) },
	{ "bool", "carryingFlag", (int)(&((idPlayer *)0)->carryingFlag), sizeof( ((idPlayer *)0)->carryingFlag ) },
	{ "idEntityPtr < idEntity >", "teleportEntity", (int)(&((idPlayer *)0)->teleportEntity), sizeof( ((idPlayer *)0)->teleportEntity ) },
	{ "int", "teleportKiller", (int)(&((idPlayer *)0)->teleportKiller), sizeof( ((idPlayer *)0)->teleportKiller ) },
	{ "bool", "lastManOver", (int)(&((idPlayer *)0)->lastManOver), sizeof( ((idPlayer *)0)->lastManOver ) },
	{ "bool", "lastManPlayAgain", (int)(&((idPlayer *)0)->lastManPlayAgain), sizeof( ((idPlayer *)0)->lastManPlayAgain ) },
	{ "bool", "lastManPresent", (int)(&((idPlayer *)0)->lastManPresent), sizeof( ((idPlayer *)0)->lastManPresent ) },
	{ "bool", "isLagged", (int)(&((idPlayer *)0)->isLagged), sizeof( ((idPlayer *)0)->isLagged ) },
	{ "int", "isChatting", (int)(&((idPlayer *)0)->isChatting), sizeof( ((idPlayer *)0)->isChatting ) },
	{ "int", "minRespawnTime", (int)(&((idPlayer *)0)->minRespawnTime), sizeof( ((idPlayer *)0)->minRespawnTime ) },
	{ "int", "maxRespawnTime", (int)(&((idPlayer *)0)->maxRespawnTime), sizeof( ((idPlayer *)0)->maxRespawnTime ) },
	{ "idVec3", "firstPersonViewOrigin", (int)(&((idPlayer *)0)->firstPersonViewOrigin), sizeof( ((idPlayer *)0)->firstPersonViewOrigin ) },
	{ "idMat3", "firstPersonViewAxis", (int)(&((idPlayer *)0)->firstPersonViewAxis), sizeof( ((idPlayer *)0)->firstPersonViewAxis ) },
	{ "idDragEntity", "dragEntity", (int)(&((idPlayer *)0)->dragEntity), sizeof( ((idPlayer *)0)->dragEntity ) },
	{ "idFuncMountedObject *", "mountedObject", (int)(&((idPlayer *)0)->mountedObject), sizeof( ((idPlayer *)0)->mountedObject ) },
	{ "idEntityPtr < idLight >", "enviroSuitLight", (int)(&((idPlayer *)0)->enviroSuitLight), sizeof( ((idPlayer *)0)->enviroSuitLight ) },
	{ "bool", "healthRecharge", (int)(&((idPlayer *)0)->healthRecharge), sizeof( ((idPlayer *)0)->healthRecharge ) },
	{ "int", "lastHealthRechargeTime", (int)(&((idPlayer *)0)->lastHealthRechargeTime), sizeof( ((idPlayer *)0)->lastHealthRechargeTime ) },
	{ "int", "rechargeSpeed", (int)(&((idPlayer *)0)->rechargeSpeed), sizeof( ((idPlayer *)0)->rechargeSpeed ) },
	{ "float", "new_g_damageScale", (int)(&((idPlayer *)0)->new_g_damageScale), sizeof( ((idPlayer *)0)->new_g_damageScale ) },
	{ "bool", "bloomEnabled", (int)(&((idPlayer *)0)->bloomEnabled), sizeof( ((idPlayer *)0)->bloomEnabled ) },
	{ "float", "bloomSpeed", (int)(&((idPlayer *)0)->bloomSpeed), sizeof( ((idPlayer *)0)->bloomSpeed ) },
	{ "float", "bloomIntensity", (int)(&((idPlayer *)0)->bloomIntensity), sizeof( ((idPlayer *)0)->bloomIntensity ) },
	{ ": idAchievementManager", "achievementManager", (int)(&((idPlayer *)0)->achievementManager), sizeof( ((idPlayer *)0)->achievementManager ) },
	{ "int", "playedTimeSecs", (int)(&((idPlayer *)0)->playedTimeSecs), sizeof( ((idPlayer *)0)->playedTimeSecs ) },
	{ "int", "playedTimeResidual", (int)(&((idPlayer *)0)->playedTimeResidual), sizeof( ((idPlayer *)0)->playedTimeResidual ) },
	{ "jointHandle_t", "hipJoint", (int)(&((idPlayer *)0)->hipJoint), sizeof( ((idPlayer *)0)->hipJoint ) },
	{ "jointHandle_t", "chestJoint", (int)(&((idPlayer *)0)->chestJoint), sizeof( ((idPlayer *)0)->chestJoint ) },
	{ "jointHandle_t", "headJoint", (int)(&((idPlayer *)0)->headJoint), sizeof( ((idPlayer *)0)->headJoint ) },
	{ "idPhysics_Player", "physicsObj", (int)(&((idPlayer *)0)->physicsObj), sizeof( ((idPlayer *)0)->physicsObj ) },
	{ "idList < aasLocation_t , TAG_IDLIB_LIST_PLAYER >", "aasLocation", (int)(&((idPlayer *)0)->aasLocation), sizeof( ((idPlayer *)0)->aasLocation ) },
	{ "int", "bobFoot", (int)(&((idPlayer *)0)->bobFoot), sizeof( ((idPlayer *)0)->bobFoot ) },
	{ "float", "bobFrac", (int)(&((idPlayer *)0)->bobFrac), sizeof( ((idPlayer *)0)->bobFrac ) },
	{ "float", "bobfracsin", (int)(&((idPlayer *)0)->bobfracsin), sizeof( ((idPlayer *)0)->bobfracsin ) },
	{ "int", "bobCycle", (int)(&((idPlayer *)0)->bobCycle), sizeof( ((idPlayer *)0)->bobCycle ) },
	{ "float", "xyspeed", (int)(&((idPlayer *)0)->xyspeed), sizeof( ((idPlayer *)0)->xyspeed ) },
	{ "int", "stepUpTime", (int)(&((idPlayer *)0)->stepUpTime), sizeof( ((idPlayer *)0)->stepUpTime ) },
	{ "float", "stepUpDelta", (int)(&((idPlayer *)0)->stepUpDelta), sizeof( ((idPlayer *)0)->stepUpDelta ) },
	{ "float", "idealLegsYaw", (int)(&((idPlayer *)0)->idealLegsYaw), sizeof( ((idPlayer *)0)->idealLegsYaw ) },
	{ "float", "legsYaw", (int)(&((idPlayer *)0)->legsYaw), sizeof( ((idPlayer *)0)->legsYaw ) },
	{ "bool", "legsForward", (int)(&((idPlayer *)0)->legsForward), sizeof( ((idPlayer *)0)->legsForward ) },
	{ "float", "oldViewYaw", (int)(&((idPlayer *)0)->oldViewYaw), sizeof( ((idPlayer *)0)->oldViewYaw ) },
	{ "idAngles", "viewBobAngles", (int)(&((idPlayer *)0)->viewBobAngles), sizeof( ((idPlayer *)0)->viewBobAngles ) },
	{ "idVec3", "viewBob", (int)(&((idPlayer *)0)->viewBob), sizeof( ((idPlayer *)0)->viewBob ) },
	{ "int", "landChange", (int)(&((idPlayer *)0)->landChange), sizeof( ((idPlayer *)0)->landChange ) },
	{ "int", "landTime", (int)(&((idPlayer *)0)->landTime), sizeof( ((idPlayer *)0)->landTime ) },
	{ "int", "currentWeapon", (int)(&((idPlayer *)0)->currentWeapon), sizeof( ((idPlayer *)0)->currentWeapon ) },
	{ "idPredictedValue < int >", "idealWeapon", (int)(&((idPlayer *)0)->idealWeapon), sizeof( ((idPlayer *)0)->idealWeapon ) },
	{ "int", "previousWeapon", (int)(&((idPlayer *)0)->previousWeapon), sizeof( ((idPlayer *)0)->previousWeapon ) },
	{ "int", "weaponSwitchTime", (int)(&((idPlayer *)0)->weaponSwitchTime), sizeof( ((idPlayer *)0)->weaponSwitchTime ) },
	{ "bool", "weaponEnabled", (int)(&((idPlayer *)0)->weaponEnabled), sizeof( ((idPlayer *)0)->weaponEnabled ) },
	{ "int", "skinIndex", (int)(&((idPlayer *)0)->skinIndex), sizeof( ((idPlayer *)0)->skinIndex ) },
	{ "const idDeclSkin *", "skin", (int)(&((idPlayer *)0)->skin), sizeof( ((idPlayer *)0)->skin ) },
	{ "const idDeclSkin *", "powerUpSkin", (int)(&((idPlayer *)0)->powerUpSkin), sizeof( ((idPlayer *)0)->powerUpSkin ) },
	{ "int", "numProjectilesFired", (int)(&((idPlayer *)0)->numProjectilesFired), sizeof( ((idPlayer *)0)->numProjectilesFired ) },
	{ "int", "numProjectileHits", (int)(&((idPlayer *)0)->numProjectileHits), sizeof( ((idPlayer *)0)->numProjectileHits ) },
	{ "int", "numProjectileKills", (int)(&((idPlayer *)0)->numProjectileKills), sizeof( ((idPlayer *)0)->numProjectileKills ) },
	{ "bool", "airless", (int)(&((idPlayer *)0)->airless), sizeof( ((idPlayer *)0)->airless ) },
	{ "int", "airMsec", (int)(&((idPlayer *)0)->airMsec), sizeof( ((idPlayer *)0)->airMsec ) },
	{ "int", "lastAirDamage", (int)(&((idPlayer *)0)->lastAirDamage), sizeof( ((idPlayer *)0)->lastAirDamage ) },
	{ "bool", "gibDeath", (int)(&((idPlayer *)0)->gibDeath), sizeof( ((idPlayer *)0)->gibDeath ) },
	{ "bool", "gibsLaunched", (int)(&((idPlayer *)0)->gibsLaunched), sizeof( ((idPlayer *)0)->gibsLaunched ) },
	{ "idVec3", "gibsDir", (int)(&((idPlayer *)0)->gibsDir), sizeof( ((idPlayer *)0)->gibsDir ) },
	{ "idInterpolate < float >", "zoomFov", (int)(&((idPlayer *)0)->zoomFov), sizeof( ((idPlayer *)0)->zoomFov ) },
	{ "idInterpolate < float >", "centerView", (int)(&((idPlayer *)0)->centerView), sizeof( ((idPlayer *)0)->centerView ) },
	{ "bool", "fxFov", (int)(&((idPlayer *)0)->fxFov), sizeof( ((idPlayer *)0)->fxFov ) },
	{ "float", "influenceFov", (int)(&((idPlayer *)0)->influenceFov), sizeof( ((idPlayer *)0)->influenceFov ) },
	{ "int", "influenceActive", (int)(&((idPlayer *)0)->influenceActive), sizeof( ((idPlayer *)0)->influenceActive ) },
	{ "idEntity *", "influenceEntity", (int)(&((idPlayer *)0)->influenceEntity), sizeof( ((idPlayer *)0)->influenceEntity ) },
	{ "const idMaterial *", "influenceMaterial", (int)(&((idPlayer *)0)->influenceMaterial), sizeof( ((idPlayer *)0)->influenceMaterial ) },
	{ "float", "influenceRadius", (int)(&((idPlayer *)0)->influenceRadius), sizeof( ((idPlayer *)0)->influenceRadius ) },
	{ "const idDeclSkin *", "influenceSkin", (int)(&((idPlayer *)0)->influenceSkin), sizeof( ((idPlayer *)0)->influenceSkin ) },
	{ "idCamera *", "privateCameraView", (int)(&((idPlayer *)0)->privateCameraView), sizeof( ((idPlayer *)0)->privateCameraView ) },
	{ "idAngles[64]", "loggedViewAngles", (int)(&((idPlayer *)0)->loggedViewAngles), sizeof( ((idPlayer *)0)->loggedViewAngles ) },
	{ "loggedAccel_t[16]", "loggedAccel", (int)(&((idPlayer *)0)->loggedAccel), sizeof( ((idPlayer *)0)->loggedAccel ) },
	{ "int", "currentLoggedAccel", (int)(&((idPlayer *)0)->currentLoggedAccel), sizeof( ((idPlayer *)0)->currentLoggedAccel ) },
	{ "idEntity *", "focusGUIent", (int)(&((idPlayer *)0)->focusGUIent), sizeof( ((idPlayer *)0)->focusGUIent ) },
	{ "idUserInterface *", "focusUI", (int)(&((idPlayer *)0)->focusUI), sizeof( ((idPlayer *)0)->focusUI ) },
	{ "idAI *", "focusCharacter", (int)(&((idPlayer *)0)->focusCharacter), sizeof( ((idPlayer *)0)->focusCharacter ) },
	{ "int", "talkCursor", (int)(&((idPlayer *)0)->talkCursor), sizeof( ((idPlayer *)0)->talkCursor ) },
	{ "int", "focusTime", (int)(&((idPlayer *)0)->focusTime), sizeof( ((idPlayer *)0)->focusTime ) },
	{ "idAFEntity_Vehicle *", "focusVehicle", (int)(&((idPlayer *)0)->focusVehicle), sizeof( ((idPlayer *)0)->focusVehicle ) },
	{ "idUserInterface *", "cursor", (int)(&((idPlayer *)0)->cursor), sizeof( ((idPlayer *)0)->cursor ) },
	{ "int", "oldMouseX", (int)(&((idPlayer *)0)->oldMouseX), sizeof( ((idPlayer *)0)->oldMouseX ) },
	{ "int", "oldMouseY", (int)(&((idPlayer *)0)->oldMouseY), sizeof( ((idPlayer *)0)->oldMouseY ) },
	{ "const idMaterial *", "pdaVideoMat", (int)(&((idPlayer *)0)->pdaVideoMat), sizeof( ((idPlayer *)0)->pdaVideoMat ) },
	{ "bool", "tipUp", (int)(&((idPlayer *)0)->tipUp), sizeof( ((idPlayer *)0)->tipUp ) },
	{ "bool", "objectiveUp", (int)(&((idPlayer *)0)->objectiveUp), sizeof( ((idPlayer *)0)->objectiveUp ) },
	{ "int", "lastDamageDef", (int)(&((idPlayer *)0)->lastDamageDef), sizeof( ((idPlayer *)0)->lastDamageDef ) },
	{ "idVec3", "lastDamageDir", (int)(&((idPlayer *)0)->lastDamageDir), sizeof( ((idPlayer *)0)->lastDamageDir ) },
	{ "int", "lastDamageLocation", (int)(&((idPlayer *)0)->lastDamageLocation), sizeof( ((idPlayer *)0)->lastDamageLocation ) },
	{ "int", "smoothedFrame", (int)(&((idPlayer *)0)->smoothedFrame), sizeof( ((idPlayer *)0)->smoothedFrame ) },
	{ "bool", "smoothedOriginUpdated", (int)(&((idPlayer *)0)->smoothedOriginUpdated), sizeof( ((idPlayer *)0)->smoothedOriginUpdated ) },
	{ "idVec3", "smoothedOrigin", (int)(&((idPlayer *)0)->smoothedOrigin), sizeof( ((idPlayer *)0)->smoothedOrigin ) },
	{ "idAngles", "smoothedAngles", (int)(&((idPlayer *)0)->smoothedAngles), sizeof( ((idPlayer *)0)->smoothedAngles ) },
	{ "idHashTable < WeaponToggle_t >", "weaponToggles", (int)(&((idPlayer *)0)->weaponToggles), sizeof( ((idPlayer *)0)->weaponToggles ) },
	{ "int", "hudPowerup", (int)(&((idPlayer *)0)->hudPowerup), sizeof( ((idPlayer *)0)->hudPowerup ) },
	{ "int", "lastHudPowerup", (int)(&((idPlayer *)0)->lastHudPowerup), sizeof( ((idPlayer *)0)->lastHudPowerup ) },
	{ "int", "hudPowerupDuration", (int)(&((idPlayer *)0)->hudPowerupDuration), sizeof( ((idPlayer *)0)->hudPowerupDuration ) },
	{ "bool", "respawning", (int)(&((idPlayer *)0)->respawning), sizeof( ((idPlayer *)0)->respawning ) },
	{ "bool", "leader", (int)(&((idPlayer *)0)->leader), sizeof( ((idPlayer *)0)->leader ) },
	{ "int", "lastSpectateChange", (int)(&((idPlayer *)0)->lastSpectateChange), sizeof( ((idPlayer *)0)->lastSpectateChange ) },
	{ "int", "lastTeleFX", (int)(&((idPlayer *)0)->lastTeleFX), sizeof( ((idPlayer *)0)->lastTeleFX ) },
	{ "bool", "weaponCatchup", (int)(&((idPlayer *)0)->weaponCatchup), sizeof( ((idPlayer *)0)->weaponCatchup ) },
	{ "int", "MPAim", (int)(&((idPlayer *)0)->MPAim), sizeof( ((idPlayer *)0)->MPAim ) },
	{ "int", "lastMPAim", (int)(&((idPlayer *)0)->lastMPAim), sizeof( ((idPlayer *)0)->lastMPAim ) },
	{ "int", "lastMPAimTime", (int)(&((idPlayer *)0)->lastMPAimTime), sizeof( ((idPlayer *)0)->lastMPAimTime ) },
	{ "int", "MPAimFadeTime", (int)(&((idPlayer *)0)->MPAimFadeTime), sizeof( ((idPlayer *)0)->MPAimFadeTime ) },
	{ "bool", "MPAimHighlight", (int)(&((idPlayer *)0)->MPAimHighlight), sizeof( ((idPlayer *)0)->MPAimHighlight ) },
	{ "bool", "isTelefragged", (int)(&((idPlayer *)0)->isTelefragged), sizeof( ((idPlayer *)0)->isTelefragged ) },
	{ "int", "serverOverridePositionTime", (int)(&((idPlayer *)0)->serverOverridePositionTime), sizeof( ((idPlayer *)0)->serverOverridePositionTime ) },
	{ "int", "clientFireCount", (int)(&((idPlayer *)0)->clientFireCount), sizeof( ((idPlayer *)0)->clientFireCount ) },
	{ "idPlayerIcon", "playerIcon", (int)(&((idPlayer *)0)->playerIcon), sizeof( ((idPlayer *)0)->playerIcon ) },
	{ "bool", "selfSmooth", (int)(&((idPlayer *)0)->selfSmooth), sizeof( ((idPlayer *)0)->selfSmooth ) },
	{ "netBoolEvent_t", "respawn_netEvent", (int)(&((idPlayer *)0)->respawn_netEvent), sizeof( ((idPlayer *)0)->respawn_netEvent ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_moveState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (int)(&((idMover::moveState_t *)0)->stage), sizeof( ((idMover::moveState_t *)0)->stage ) },
	{ "int", "acceleration", (int)(&((idMover::moveState_t *)0)->acceleration), sizeof( ((idMover::moveState_t *)0)->acceleration ) },
	{ "int", "movetime", (int)(&((idMover::moveState_t *)0)->movetime), sizeof( ((idMover::moveState_t *)0)->movetime ) },
	{ "int", "deceleration", (int)(&((idMover::moveState_t *)0)->deceleration), sizeof( ((idMover::moveState_t *)0)->deceleration ) },
	{ "idVec3", "dir", (int)(&((idMover::moveState_t *)0)->dir), sizeof( ((idMover::moveState_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_rotationState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (int)(&((idMover::rotationState_t *)0)->stage), sizeof( ((idMover::rotationState_t *)0)->stage ) },
	{ "int", "acceleration", (int)(&((idMover::rotationState_t *)0)->acceleration), sizeof( ((idMover::rotationState_t *)0)->acceleration ) },
	{ "int", "movetime", (int)(&((idMover::rotationState_t *)0)->movetime), sizeof( ((idMover::rotationState_t *)0)->movetime ) },
	{ "int", "deceleration", (int)(&((idMover::rotationState_t *)0)->deceleration), sizeof( ((idMover::rotationState_t *)0)->deceleration ) },
	{ "idAngles", "rot", (int)(&((idMover::rotationState_t *)0)->rot), sizeof( ((idMover::rotationState_t *)0)->rot ) },
	{ NULL, 0 }
};

intptr_t idMover::Invoke(idMover *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 207323) { // Event_OpenPortal
		cls->Event_OpenPortal();
		return 0;
	};
	if(functionNameHash == 220884) { // Event_ClosePortal
		cls->Event_ClosePortal();
		return 0;
	};
	if(functionNameHash == 177094) { // FindGuiTargets
		cls->FindGuiTargets();
		return 0;
	};
	if(functionNameHash == 125413) { // DoneMoving
		cls->DoneMoving();
		return 0;
	};
	if(functionNameHash == 153368) { // DoneRotating
		cls->DoneRotating();
		return 0;
	};
	if(functionNameHash == 214718) { // Event_SetCallback
		cls->Event_SetCallback();
		return 0;
	};
	if(functionNameHash == 209597) { // Event_StopMoving
		cls->Event_StopMoving();
		return 0;
	};
	if(functionNameHash == 238848) { // Event_StopRotating
		cls->Event_StopRotating();
		return 0;
	};
	if(functionNameHash == 205974) { // Event_UpdateMove
		cls->Event_UpdateMove();
		return 0;
	};
	if(functionNameHash == 266154) { // Event_UpdateRotation
		cls->Event_UpdateRotation();
		return 0;
	};
	if(functionNameHash == 259602) { // Event_FindGuiTargets
		cls->Event_FindGuiTargets();
		return 0;
	};
	if(functionNameHash == 262020) { // Event_InitGuiTargets
		cls->Event_InitGuiTargets();
		return 0;
	};
	if(functionNameHash == 315240) { // Event_EnableSplineAngles
		cls->Event_EnableSplineAngles();
		return 0;
	};
	if(functionNameHash == 330715) { // Event_DisableSplineAngles
		cls->Event_DisableSplineAngles();
		return 0;
	};
	if(functionNameHash == 424511) { // Event_RemoveInitialSplineAngles
		cls->Event_RemoveInitialSplineAngles();
		return 0;
	};
	if(functionNameHash == 208923) { // Event_StopSpline
		cls->Event_StopSpline();
		return 0;
	};
	if(functionNameHash == 178540) { // Event_IsMoving
		cls->Event_IsMoving();
		return 0;
	};
	if(functionNameHash == 207359) { // Event_IsRotating
		cls->Event_IsRotating();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMover_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idMover *)0)->physicsObj), sizeof( ((idMover *)0)->physicsObj ) },
	{ "moveState_t", "move", (int)(&((idMover *)0)->move), sizeof( ((idMover *)0)->move ) },
	{ ": rotationState_t", "rot", (int)(&((idMover *)0)->rot), sizeof( ((idMover *)0)->rot ) },
	{ "int", "move_thread", (int)(&((idMover *)0)->move_thread), sizeof( ((idMover *)0)->move_thread ) },
	{ "int", "rotate_thread", (int)(&((idMover *)0)->rotate_thread), sizeof( ((idMover *)0)->rotate_thread ) },
	{ "idAngles", "dest_angles", (int)(&((idMover *)0)->dest_angles), sizeof( ((idMover *)0)->dest_angles ) },
	{ "idAngles", "angle_delta", (int)(&((idMover *)0)->angle_delta), sizeof( ((idMover *)0)->angle_delta ) },
	{ "idVec3", "dest_position", (int)(&((idMover *)0)->dest_position), sizeof( ((idMover *)0)->dest_position ) },
	{ "idVec3", "move_delta", (int)(&((idMover *)0)->move_delta), sizeof( ((idMover *)0)->move_delta ) },
	{ "float", "move_speed", (int)(&((idMover *)0)->move_speed), sizeof( ((idMover *)0)->move_speed ) },
	{ "int", "move_time", (int)(&((idMover *)0)->move_time), sizeof( ((idMover *)0)->move_time ) },
	{ "int", "deceltime", (int)(&((idMover *)0)->deceltime), sizeof( ((idMover *)0)->deceltime ) },
	{ "int", "acceltime", (int)(&((idMover *)0)->acceltime), sizeof( ((idMover *)0)->acceltime ) },
	{ "bool", "stopRotation", (int)(&((idMover *)0)->stopRotation), sizeof( ((idMover *)0)->stopRotation ) },
	{ "bool", "useSplineAngles", (int)(&((idMover *)0)->useSplineAngles), sizeof( ((idMover *)0)->useSplineAngles ) },
	{ "idEntityPtr < idEntity >", "splineEnt", (int)(&((idMover *)0)->splineEnt), sizeof( ((idMover *)0)->splineEnt ) },
	{ "moverCommand_t", "lastCommand", (int)(&((idMover *)0)->lastCommand), sizeof( ((idMover *)0)->lastCommand ) },
	{ "float", "damage", (int)(&((idMover *)0)->damage), sizeof( ((idMover *)0)->damage ) },
	{ "qhandle_t", "areaPortal", (int)(&((idMover *)0)->areaPortal), sizeof( ((idMover *)0)->areaPortal ) },
	{ "idList < idEntityPtr < idEntity > , TAG_MOVER >", "guiTargets", (int)(&((idMover *)0)->guiTargets), sizeof( ((idMover *)0)->guiTargets ) },
	{ NULL, 0 }
};

intptr_t idSplinePath::Invoke(idSplinePath *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSplinePath_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t floorInfo_s_typeInfo[] = {
	{ "idVec3", "pos", (int)(&((floorInfo_s *)0)->pos), sizeof( ((floorInfo_s *)0)->pos ) },
	{ "idStr", "door", (int)(&((floorInfo_s *)0)->door), sizeof( ((floorInfo_s *)0)->door ) },
	{ "int", "floor", (int)(&((floorInfo_s *)0)->floor), sizeof( ((floorInfo_s *)0)->floor ) },
	{ NULL, 0 }
};

intptr_t idElevator::Invoke(idElevator *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 307104) { // GetLocalTriggerPosition
		cls->GetLocalTriggerPosition();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 164442) { // OpenInnerDoor
		cls->OpenInnerDoor();
		return 0;
	};
	if(functionNameHash == 163033) { // CloseAllDoors
		cls->CloseAllDoors();
		return 0;
	};
	if(functionNameHash == 188328) { // DisableAllDoors
		cls->DisableAllDoors();
		return 0;
	};
	if(functionNameHash == 220682) { // EnableProperDoors
		cls->EnableProperDoors();
		return 0;
	};
	if(functionNameHash == 293800) { // Event_PostFloorArrival
		cls->Event_PostFloorArrival();
		return 0;
	};
	if(functionNameHash == 233629) { // Event_SetGuiStates
		cls->Event_SetGuiStates();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idElevator_typeInfo[] = {
	{ "elevatorState_t", "state", (int)(&((idElevator *)0)->state), sizeof( ((idElevator *)0)->state ) },
	{ "idList < floorInfo_s , TAG_MOVER >", "floorInfo", (int)(&((idElevator *)0)->floorInfo), sizeof( ((idElevator *)0)->floorInfo ) },
	{ "int", "currentFloor", (int)(&((idElevator *)0)->currentFloor), sizeof( ((idElevator *)0)->currentFloor ) },
	{ "int", "pendingFloor", (int)(&((idElevator *)0)->pendingFloor), sizeof( ((idElevator *)0)->pendingFloor ) },
	{ "int", "lastFloor", (int)(&((idElevator *)0)->lastFloor), sizeof( ((idElevator *)0)->lastFloor ) },
	{ "bool", "controlsDisabled", (int)(&((idElevator *)0)->controlsDisabled), sizeof( ((idElevator *)0)->controlsDisabled ) },
	{ "float", "returnTime", (int)(&((idElevator *)0)->returnTime), sizeof( ((idElevator *)0)->returnTime ) },
	{ "int", "returnFloor", (int)(&((idElevator *)0)->returnFloor), sizeof( ((idElevator *)0)->returnFloor ) },
	{ "int", "lastTouchTime", (int)(&((idElevator *)0)->lastTouchTime), sizeof( ((idElevator *)0)->lastTouchTime ) },
	{ NULL, 0 }
};

intptr_t idMover_Binary::Invoke(idMover_Binary *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 82528) { // PreBind
		cls->PreBind();
		return 0;
	};
	if(functionNameHash == 98395) { // PostBind
		cls->PostBind();
		return 0;
	};
	if(functionNameHash == 163766) { // GotoPosition1
		cls->GotoPosition1();
		return 0;
	};
	if(functionNameHash == 163897) { // GotoPosition2
		cls->GotoPosition2();
		return 0;
	};
	if(functionNameHash == 201128) { // GetActivateChain
		return (intptr_t)cls->GetActivateChain();
	};
	if(functionNameHash == 164678) { // GetMoveMaster
		return (intptr_t)cls->GetMoveMaster();
	};
	if(functionNameHash == 108379) { // IsBlocked
		cls->IsBlocked();
		return 0;
	};
	if(functionNameHash == 153395) { // GetActivator
		return (intptr_t)cls->GetActivator();
	};
	if(functionNameHash == 165486) { // GetMoverState
		cls->GetMoverState();
		return 0;
	};
	if(functionNameHash == 177094) { // FindGuiTargets
		cls->FindGuiTargets();
		return 0;
	};
	if(functionNameHash == 214718) { // Event_SetCallback
		cls->Event_SetCallback();
		return 0;
	};
	if(functionNameHash == 229109) { // Event_ReturnToPos1
		cls->Event_ReturnToPos1();
		return 0;
	};
	if(functionNameHash == 330944) { // Event_Reached_BinaryMover
		cls->Event_Reached_BinaryMover();
		return 0;
	};
	if(functionNameHash == 148470) { // Event_Enable
		cls->Event_Enable();
		return 0;
	};
	if(functionNameHash == 162724) { // Event_Disable
		cls->Event_Disable();
		return 0;
	};
	if(functionNameHash == 207323) { // Event_OpenPortal
		cls->Event_OpenPortal();
		return 0;
	};
	if(functionNameHash == 220884) { // Event_ClosePortal
		cls->Event_ClosePortal();
		return 0;
	};
	if(functionNameHash == 259602) { // Event_FindGuiTargets
		cls->Event_FindGuiTargets();
		return 0;
	};
	if(functionNameHash == 262020) { // Event_InitGuiTargets
		cls->Event_InitGuiTargets();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMover_Binary_typeInfo[] = {
	{ ": idVec3", "pos1", (int)(&((idMover_Binary *)0)->pos1), sizeof( ((idMover_Binary *)0)->pos1 ) },
	{ "idVec3", "pos2", (int)(&((idMover_Binary *)0)->pos2), sizeof( ((idMover_Binary *)0)->pos2 ) },
	{ "moverState_t", "moverState", (int)(&((idMover_Binary *)0)->moverState), sizeof( ((idMover_Binary *)0)->moverState ) },
	{ "idMover_Binary *", "moveMaster", (int)(&((idMover_Binary *)0)->moveMaster), sizeof( ((idMover_Binary *)0)->moveMaster ) },
	{ "idMover_Binary *", "activateChain", (int)(&((idMover_Binary *)0)->activateChain), sizeof( ((idMover_Binary *)0)->activateChain ) },
	{ "int", "soundPos1", (int)(&((idMover_Binary *)0)->soundPos1), sizeof( ((idMover_Binary *)0)->soundPos1 ) },
	{ "int", "sound1to2", (int)(&((idMover_Binary *)0)->sound1to2), sizeof( ((idMover_Binary *)0)->sound1to2 ) },
	{ "int", "sound2to1", (int)(&((idMover_Binary *)0)->sound2to1), sizeof( ((idMover_Binary *)0)->sound2to1 ) },
	{ "int", "soundPos2", (int)(&((idMover_Binary *)0)->soundPos2), sizeof( ((idMover_Binary *)0)->soundPos2 ) },
	{ "int", "soundLoop", (int)(&((idMover_Binary *)0)->soundLoop), sizeof( ((idMover_Binary *)0)->soundLoop ) },
	{ "float", "wait", (int)(&((idMover_Binary *)0)->wait), sizeof( ((idMover_Binary *)0)->wait ) },
	{ "float", "damage", (int)(&((idMover_Binary *)0)->damage), sizeof( ((idMover_Binary *)0)->damage ) },
	{ "int", "duration", (int)(&((idMover_Binary *)0)->duration), sizeof( ((idMover_Binary *)0)->duration ) },
	{ "int", "accelTime", (int)(&((idMover_Binary *)0)->accelTime), sizeof( ((idMover_Binary *)0)->accelTime ) },
	{ "int", "decelTime", (int)(&((idMover_Binary *)0)->decelTime), sizeof( ((idMover_Binary *)0)->decelTime ) },
	{ "idEntityPtr < idEntity >", "activatedBy", (int)(&((idMover_Binary *)0)->activatedBy), sizeof( ((idMover_Binary *)0)->activatedBy ) },
	{ "int", "stateStartTime", (int)(&((idMover_Binary *)0)->stateStartTime), sizeof( ((idMover_Binary *)0)->stateStartTime ) },
	{ "idStr", "team", (int)(&((idMover_Binary *)0)->team), sizeof( ((idMover_Binary *)0)->team ) },
	{ "bool", "enabled", (int)(&((idMover_Binary *)0)->enabled), sizeof( ((idMover_Binary *)0)->enabled ) },
	{ "int", "move_thread", (int)(&((idMover_Binary *)0)->move_thread), sizeof( ((idMover_Binary *)0)->move_thread ) },
	{ "int", "updateStatus", (int)(&((idMover_Binary *)0)->updateStatus), sizeof( ((idMover_Binary *)0)->updateStatus ) },
	{ "idStrList", "buddies", (int)(&((idMover_Binary *)0)->buddies), sizeof( ((idMover_Binary *)0)->buddies ) },
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idMover_Binary *)0)->physicsObj), sizeof( ((idMover_Binary *)0)->physicsObj ) },
	{ "qhandle_t", "areaPortal", (int)(&((idMover_Binary *)0)->areaPortal), sizeof( ((idMover_Binary *)0)->areaPortal ) },
	{ "bool", "blocked", (int)(&((idMover_Binary *)0)->blocked), sizeof( ((idMover_Binary *)0)->blocked ) },
	{ "bool", "playerOnly", (int)(&((idMover_Binary *)0)->playerOnly), sizeof( ((idMover_Binary *)0)->playerOnly ) },
	{ "idList < idEntityPtr < idEntity > , TAG_MOVER >", "guiTargets", (int)(&((idMover_Binary *)0)->guiTargets), sizeof( ((idMover_Binary *)0)->guiTargets ) },
	{ NULL, 0 }
};

intptr_t idDoor::Invoke(idDoor *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 82528) { // PreBind
		cls->PreBind();
		return 0;
	};
	if(functionNameHash == 98395) { // PostBind
		cls->PostBind();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 71773) { // IsOpen
		cls->IsOpen();
		return 0;
	};
	if(functionNameHash == 109870) { // IsNoTouch
		cls->IsNoTouch();
		return 0;
	};
	if(functionNameHash == 95895) { // IsLocked
		return (intptr_t)cls->IsLocked();
	};
	if(functionNameHash == 60817) { // Close
		cls->Close();
		return 0;
	};
	if(functionNameHash == 48482) { // Open
		cls->Open();
		return 0;
	};
	if(functionNameHash == 330944) { // Event_Reached_BinaryMover
		cls->Event_Reached_BinaryMover();
		return 0;
	};
	if(functionNameHash == 193830) { // Event_StartOpen
		cls->Event_StartOpen();
		return 0;
	};
	if(functionNameHash == 292733) { // Event_SpawnDoorTrigger
		cls->Event_SpawnDoorTrigger();
		return 0;
	};
	if(functionNameHash == 309067) { // Event_SpawnSoundTrigger
		cls->Event_SpawnSoundTrigger();
		return 0;
	};
	if(functionNameHash == 137889) { // Event_Close
		cls->Event_Close();
		return 0;
	};
	if(functionNameHash == 124954) { // Event_Open
		cls->Event_Open();
		return 0;
	};
	if(functionNameHash == 149373) { // Event_IsOpen
		cls->Event_IsOpen();
		return 0;
	};
	if(functionNameHash == 149844) { // Event_Locked
		cls->Event_Locked();
		return 0;
	};
	if(functionNameHash == 207323) { // Event_OpenPortal
		cls->Event_OpenPortal();
		return 0;
	};
	if(functionNameHash == 220884) { // Event_ClosePortal
		cls->Event_ClosePortal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idDoor_typeInfo[] = {
	{ ": float", "triggersize", (int)(&((idDoor *)0)->triggersize), sizeof( ((idDoor *)0)->triggersize ) },
	{ "bool", "crusher", (int)(&((idDoor *)0)->crusher), sizeof( ((idDoor *)0)->crusher ) },
	{ "bool", "noTouch", (int)(&((idDoor *)0)->noTouch), sizeof( ((idDoor *)0)->noTouch ) },
	{ "bool", "aas_area_closed", (int)(&((idDoor *)0)->aas_area_closed), sizeof( ((idDoor *)0)->aas_area_closed ) },
	{ "idStr", "buddyStr", (int)(&((idDoor *)0)->buddyStr), sizeof( ((idDoor *)0)->buddyStr ) },
	{ "idClipModel *", "trigger", (int)(&((idDoor *)0)->trigger), sizeof( ((idDoor *)0)->trigger ) },
	{ "idClipModel *", "sndTrigger", (int)(&((idDoor *)0)->sndTrigger), sizeof( ((idDoor *)0)->sndTrigger ) },
	{ "int", "nextSndTriggerTime", (int)(&((idDoor *)0)->nextSndTriggerTime), sizeof( ((idDoor *)0)->nextSndTriggerTime ) },
	{ "idVec3", "localTriggerOrigin", (int)(&((idDoor *)0)->localTriggerOrigin), sizeof( ((idDoor *)0)->localTriggerOrigin ) },
	{ "idMat3", "localTriggerAxis", (int)(&((idDoor *)0)->localTriggerAxis), sizeof( ((idDoor *)0)->localTriggerAxis ) },
	{ "idStr", "requires", (int)(&((idDoor *)0)->requires), sizeof( ((idDoor *)0)->requires ) },
	{ "int", "removeItem", (int)(&((idDoor *)0)->removeItem), sizeof( ((idDoor *)0)->removeItem ) },
	{ "idStr", "syncLock", (int)(&((idDoor *)0)->syncLock), sizeof( ((idDoor *)0)->syncLock ) },
	{ "int", "normalAxisIndex", (int)(&((idDoor *)0)->normalAxisIndex), sizeof( ((idDoor *)0)->normalAxisIndex ) },
	{ "idDoor *", "companionDoor", (int)(&((idDoor *)0)->companionDoor), sizeof( ((idDoor *)0)->companionDoor ) },
	{ NULL, 0 }
};

intptr_t idPlat::Invoke(idPlat *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 276247) { // RunPhysics_NoBlocking
		cls->RunPhysics_NoBlocking();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 82528) { // PreBind
		cls->PreBind();
		return 0;
	};
	if(functionNameHash == 98395) { // PostBind
		cls->PostBind();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPlat_typeInfo[] = {
	{ ": idClipModel *", "trigger", (int)(&((idPlat *)0)->trigger), sizeof( ((idPlat *)0)->trigger ) },
	{ "idVec3", "localTriggerOrigin", (int)(&((idPlat *)0)->localTriggerOrigin), sizeof( ((idPlat *)0)->localTriggerOrigin ) },
	{ "idMat3", "localTriggerAxis", (int)(&((idPlat *)0)->localTriggerAxis), sizeof( ((idPlat *)0)->localTriggerAxis ) },
	{ NULL, 0 }
};

intptr_t idMover_Periodic::Invoke(idMover_Periodic *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMover_Periodic_typeInfo[] = {
	{ ": idPhysics_Parametric", "physicsObj", (int)(&((idMover_Periodic *)0)->physicsObj), sizeof( ((idMover_Periodic *)0)->physicsObj ) },
	{ "float", "damage", (int)(&((idMover_Periodic *)0)->damage), sizeof( ((idMover_Periodic *)0)->damage ) },
	{ NULL, 0 }
};

intptr_t idRotater::Invoke(idRotater *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idRotater_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "activatedBy", (int)(&((idRotater *)0)->activatedBy), sizeof( ((idRotater *)0)->activatedBy ) },
	{ NULL, 0 }
};

intptr_t idBobber::Invoke(idBobber *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idBobber_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idPendulum::Invoke(idPendulum *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idPendulum_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idRiser::Invoke(idRiser *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idRiser_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCamera_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idCameraView::Invoke(idCameraView *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 50892) { // Stop
		cls->Stop();
		return 0;
	};
	if(functionNameHash == 264827) { // Event_SetAttachments
		cls->Event_SetAttachments();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idCameraView_typeInfo[] = {
	{ "float", "fov", (int)(&((idCameraView *)0)->fov), sizeof( ((idCameraView *)0)->fov ) },
	{ "idEntity *", "attachedTo", (int)(&((idCameraView *)0)->attachedTo), sizeof( ((idCameraView *)0)->attachedTo ) },
	{ "idEntity *", "attachedView", (int)(&((idCameraView *)0)->attachedView), sizeof( ((idCameraView *)0)->attachedView ) },
	{ NULL, 0 }
};

static classVariableInfo_t cameraFrame_t_typeInfo[] = {
	{ "idCQuat", "q", (int)(&((cameraFrame_t *)0)->q), sizeof( ((cameraFrame_t *)0)->q ) },
	{ "idVec3", "t", (int)(&((cameraFrame_t *)0)->t), sizeof( ((cameraFrame_t *)0)->t ) },
	{ "float", "fov", (int)(&((cameraFrame_t *)0)->fov), sizeof( ((cameraFrame_t *)0)->fov ) },
	{ NULL, 0 }
};

intptr_t idCameraAnim::Invoke(idCameraAnim *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 63710) { // Start
		cls->Start();
		return 0;
	};
	if(functionNameHash == 50892) { // Stop
		cls->Stop();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 94795) { // LoadAnim
		cls->LoadAnim();
		return 0;
	};
	if(functionNameHash == 140926) { // Event_Start
		cls->Event_Start();
		return 0;
	};
	if(functionNameHash == 127484) { // Event_Stop
		cls->Event_Stop();
		return 0;
	};
	if(functionNameHash == 214718) { // Event_SetCallback
		cls->Event_SetCallback();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idCameraAnim_typeInfo[] = {
	{ ": int", "threadNum", (int)(&((idCameraAnim *)0)->threadNum), sizeof( ((idCameraAnim *)0)->threadNum ) },
	{ "idVec3", "offset", (int)(&((idCameraAnim *)0)->offset), sizeof( ((idCameraAnim *)0)->offset ) },
	{ "int", "frameRate", (int)(&((idCameraAnim *)0)->frameRate), sizeof( ((idCameraAnim *)0)->frameRate ) },
	{ "int", "starttime", (int)(&((idCameraAnim *)0)->starttime), sizeof( ((idCameraAnim *)0)->starttime ) },
	{ "int", "cycle", (int)(&((idCameraAnim *)0)->cycle), sizeof( ((idCameraAnim *)0)->cycle ) },
	{ "idList < int >", "cameraCuts", (int)(&((idCameraAnim *)0)->cameraCuts), sizeof( ((idCameraAnim *)0)->cameraCuts ) },
	{ "idList < cameraFrame_t >", "camera", (int)(&((idCameraAnim *)0)->camera), sizeof( ((idCameraAnim *)0)->camera ) },
	{ "idEntityPtr < idEntity >", "activator", (int)(&((idCameraAnim *)0)->activator), sizeof( ((idCameraAnim *)0)->activator ) },
	{ NULL, 0 }
};

intptr_t idMoveable::Invoke(idMoveable *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 113684) { // AllowStep
		cls->AllowStep();
		return 0;
	};
	if(functionNameHash == 137009) { // GetAttacker
		return (intptr_t)cls->GetAttacker();
	};
	if(functionNameHash == 286384) { // GetRenderModelMaterial
		return (intptr_t)cls->GetRenderModelMaterial();
	};
	if(functionNameHash == 175070) { // BecomeNonSolid
		cls->BecomeNonSolid();
		return 0;
	};
	if(functionNameHash == 306497) { // FollowInitialSplinePath
		cls->FollowInitialSplinePath();
		return 0;
	};
	if(functionNameHash == 257488) { // Event_BecomeNonSolid
		cls->Event_BecomeNonSolid();
		return 0;
	};
	if(functionNameHash == 363849) { // Event_SetOwnerFromSpawnArgs
		cls->Event_SetOwnerFromSpawnArgs();
		return 0;
	};
	if(functionNameHash == 174863) { // Event_IsAtRest
		cls->Event_IsAtRest();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idMoveable_typeInfo[] = {
	{ ": idPhysics_RigidBody", "physicsObj", (int)(&((idMoveable *)0)->physicsObj), sizeof( ((idMoveable *)0)->physicsObj ) },
	{ "idStr", "brokenModel", (int)(&((idMoveable *)0)->brokenModel), sizeof( ((idMoveable *)0)->brokenModel ) },
	{ "idStr", "damage", (int)(&((idMoveable *)0)->damage), sizeof( ((idMoveable *)0)->damage ) },
	{ "idStr", "monsterDamage", (int)(&((idMoveable *)0)->monsterDamage), sizeof( ((idMoveable *)0)->monsterDamage ) },
	{ "idEntity *", "attacker", (int)(&((idMoveable *)0)->attacker), sizeof( ((idMoveable *)0)->attacker ) },
	{ "idStr", "fxCollide", (int)(&((idMoveable *)0)->fxCollide), sizeof( ((idMoveable *)0)->fxCollide ) },
	{ "int", "nextCollideFxTime", (int)(&((idMoveable *)0)->nextCollideFxTime), sizeof( ((idMoveable *)0)->nextCollideFxTime ) },
	{ "float", "minDamageVelocity", (int)(&((idMoveable *)0)->minDamageVelocity), sizeof( ((idMoveable *)0)->minDamageVelocity ) },
	{ "float", "maxDamageVelocity", (int)(&((idMoveable *)0)->maxDamageVelocity), sizeof( ((idMoveable *)0)->maxDamageVelocity ) },
	{ "idCurve_Spline < idVec3 > *", "initialSpline", (int)(&((idMoveable *)0)->initialSpline), sizeof( ((idMoveable *)0)->initialSpline ) },
	{ "idVec3", "initialSplineDir", (int)(&((idMoveable *)0)->initialSplineDir), sizeof( ((idMoveable *)0)->initialSplineDir ) },
	{ "bool", "explode", (int)(&((idMoveable *)0)->explode), sizeof( ((idMoveable *)0)->explode ) },
	{ "bool", "unbindOnDeath", (int)(&((idMoveable *)0)->unbindOnDeath), sizeof( ((idMoveable *)0)->unbindOnDeath ) },
	{ "bool", "allowStep", (int)(&((idMoveable *)0)->allowStep), sizeof( ((idMoveable *)0)->allowStep ) },
	{ "bool", "canDamage", (int)(&((idMoveable *)0)->canDamage), sizeof( ((idMoveable *)0)->canDamage ) },
	{ "int", "nextDamageTime", (int)(&((idMoveable *)0)->nextDamageTime), sizeof( ((idMoveable *)0)->nextDamageTime ) },
	{ "int", "nextSoundTime", (int)(&((idMoveable *)0)->nextSoundTime), sizeof( ((idMoveable *)0)->nextSoundTime ) },
	{ NULL, 0 }
};

intptr_t idBarrel::Invoke(idBarrel *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 137833) { // BarrelThink
		cls->BarrelThink();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idBarrel_typeInfo[] = {
	{ ": float", "radius", (int)(&((idBarrel *)0)->radius), sizeof( ((idBarrel *)0)->radius ) },
	{ "int", "barrelAxis", (int)(&((idBarrel *)0)->barrelAxis), sizeof( ((idBarrel *)0)->barrelAxis ) },
	{ "idVec3", "lastOrigin", (int)(&((idBarrel *)0)->lastOrigin), sizeof( ((idBarrel *)0)->lastOrigin ) },
	{ "idMat3", "lastAxis", (int)(&((idBarrel *)0)->lastAxis), sizeof( ((idBarrel *)0)->lastAxis ) },
	{ "float", "additionalRotation", (int)(&((idBarrel *)0)->additionalRotation), sizeof( ((idBarrel *)0)->additionalRotation ) },
	{ "idMat3", "additionalAxis", (int)(&((idBarrel *)0)->additionalAxis), sizeof( ((idBarrel *)0)->additionalAxis ) },
	{ NULL, 0 }
};

intptr_t idExplodingBarrel::Invoke(idExplodingBarrel *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 96991) { // IsStable
		cls->IsStable();
		return 0;
	};
	if(functionNameHash == 155873) { // StartBurning
		cls->StartBurning();
		return 0;
	};
	if(functionNameHash == 142330) { // StopBurning
		cls->StopBurning();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 207845) { // ExplodingEffects
		cls->ExplodingEffects();
		return 0;
	};
	if(functionNameHash == 138368) { // UpdateLight
		cls->UpdateLight();
		return 0;
	};
	if(functionNameHash == 168370) { // Event_Respawn
		cls->Event_Respawn();
		return 0;
	};
	if(functionNameHash == 166403) { // Event_Explode
		cls->Event_Explode();
		return 0;
	};
	if(functionNameHash == 265462) { // Event_TriggerTargets
		cls->Event_TriggerTargets();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idExplodingBarrel_typeInfo[] = {
	{ "explode_state_t", "state", (int)(&((idExplodingBarrel *)0)->state), sizeof( ((idExplodingBarrel *)0)->state ) },
	{ "idVec3", "spawnOrigin", (int)(&((idExplodingBarrel *)0)->spawnOrigin), sizeof( ((idExplodingBarrel *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (int)(&((idExplodingBarrel *)0)->spawnAxis), sizeof( ((idExplodingBarrel *)0)->spawnAxis ) },
	{ "qhandle_t", "particleModelDefHandle", (int)(&((idExplodingBarrel *)0)->particleModelDefHandle), sizeof( ((idExplodingBarrel *)0)->particleModelDefHandle ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idExplodingBarrel *)0)->lightDefHandle), sizeof( ((idExplodingBarrel *)0)->lightDefHandle ) },
	{ "renderEntity_t", "particleRenderEntity", (int)(&((idExplodingBarrel *)0)->particleRenderEntity), sizeof( ((idExplodingBarrel *)0)->particleRenderEntity ) },
	{ "renderLight_t", "light", (int)(&((idExplodingBarrel *)0)->light), sizeof( ((idExplodingBarrel *)0)->light ) },
	{ "int", "particleTime", (int)(&((idExplodingBarrel *)0)->particleTime), sizeof( ((idExplodingBarrel *)0)->particleTime ) },
	{ "int", "lightTime", (int)(&((idExplodingBarrel *)0)->lightTime), sizeof( ((idExplodingBarrel *)0)->lightTime ) },
	{ "float", "time", (int)(&((idExplodingBarrel *)0)->time), sizeof( ((idExplodingBarrel *)0)->time ) },
	{ "bool", "isStable", (int)(&((idExplodingBarrel *)0)->isStable), sizeof( ((idExplodingBarrel *)0)->isStable ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Remove_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Show_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Damage_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SessionCommand_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EndLevel_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_WaitForButton::Invoke(idTarget_WaitForButton *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_WaitForButton_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetGlobalShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderParm_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_FadeEntity::Invoke(idTarget_FadeEntity *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_FadeEntity_typeInfo[] = {
	{ ": idVec4", "fadeFrom", (int)(&((idTarget_FadeEntity *)0)->fadeFrom), sizeof( ((idTarget_FadeEntity *)0)->fadeFrom ) },
	{ "int", "fadeStart", (int)(&((idTarget_FadeEntity *)0)->fadeStart), sizeof( ((idTarget_FadeEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (int)(&((idTarget_FadeEntity *)0)->fadeEnd), sizeof( ((idTarget_FadeEntity *)0)->fadeEnd ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeIn_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeOut_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_Give::Invoke(idTarget_Give *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_Give_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_GiveEmail_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_SetModel::Invoke(idTarget_SetModel *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_SetModel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t SavedGui_t_typeInfo[] = {
	{ "idUserInterface *[1]", "gui", (int)(&((SavedGui_t *)0)->gui), sizeof( ((SavedGui_t *)0)->gui ) },
	{ NULL, 0 }
};

intptr_t idTarget_SetInfluence::Invoke(idTarget_SetInfluence *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 294203) { // Event_RestoreInfluence
		cls->Event_RestoreInfluence();
		return 0;
	};
	if(functionNameHash == 263754) { // Event_GatherEntities
		cls->Event_GatherEntities();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_SetInfluence_typeInfo[] = {
	{ "idList < int , TAG_TARGET >", "lightList", (int)(&((idTarget_SetInfluence *)0)->lightList), sizeof( ((idTarget_SetInfluence *)0)->lightList ) },
	{ "idList < int , TAG_TARGET >", "guiList", (int)(&((idTarget_SetInfluence *)0)->guiList), sizeof( ((idTarget_SetInfluence *)0)->guiList ) },
	{ "idList < int , TAG_TARGET >", "soundList", (int)(&((idTarget_SetInfluence *)0)->soundList), sizeof( ((idTarget_SetInfluence *)0)->soundList ) },
	{ "idList < int , TAG_TARGET >", "genericList", (int)(&((idTarget_SetInfluence *)0)->genericList), sizeof( ((idTarget_SetInfluence *)0)->genericList ) },
	{ "float", "flashIn", (int)(&((idTarget_SetInfluence *)0)->flashIn), sizeof( ((idTarget_SetInfluence *)0)->flashIn ) },
	{ "float", "flashOut", (int)(&((idTarget_SetInfluence *)0)->flashOut), sizeof( ((idTarget_SetInfluence *)0)->flashOut ) },
	{ "float", "delay", (int)(&((idTarget_SetInfluence *)0)->delay), sizeof( ((idTarget_SetInfluence *)0)->delay ) },
	{ "idStr", "flashInSound", (int)(&((idTarget_SetInfluence *)0)->flashInSound), sizeof( ((idTarget_SetInfluence *)0)->flashInSound ) },
	{ "idStr", "flashOutSound", (int)(&((idTarget_SetInfluence *)0)->flashOutSound), sizeof( ((idTarget_SetInfluence *)0)->flashOutSound ) },
	{ "idEntity *", "switchToCamera", (int)(&((idTarget_SetInfluence *)0)->switchToCamera), sizeof( ((idTarget_SetInfluence *)0)->switchToCamera ) },
	{ "idInterpolate < float >", "fovSetting", (int)(&((idTarget_SetInfluence *)0)->fovSetting), sizeof( ((idTarget_SetInfluence *)0)->fovSetting ) },
	{ "bool", "soundFaded", (int)(&((idTarget_SetInfluence *)0)->soundFaded), sizeof( ((idTarget_SetInfluence *)0)->soundFaded ) },
	{ "bool", "restoreOnTrigger", (int)(&((idTarget_SetInfluence *)0)->restoreOnTrigger), sizeof( ((idTarget_SetInfluence *)0)->restoreOnTrigger ) },
	{ "idList < SavedGui_t , TAG_TARGET >", "savedGuiList", (int)(&((idTarget_SetInfluence *)0)->savedGuiList), sizeof( ((idTarget_SetInfluence *)0)->savedGuiList ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetKeyVal_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_SetFov::Invoke(idTarget_SetFov *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_SetFov_typeInfo[] = {
	{ ": idInterpolate < float >", "fovSetting", (int)(&((idTarget_SetFov *)0)->fovSetting), sizeof( ((idTarget_SetFov *)0)->fovSetting ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetPrimaryObjective_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LockDoor_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_CallObjectFunction_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EnableLevelWeapons_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_Tip::Invoke(idTarget_Tip *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 148544) { // Event_TipOff
		cls->Event_TipOff();
		return 0;
	};
	if(functionNameHash == 232865) { // Event_GetPlayerPos
		cls->Event_GetPlayerPos();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_Tip_typeInfo[] = {
	{ ": idVec3", "playerPos", (int)(&((idTarget_Tip *)0)->playerPos), sizeof( ((idTarget_Tip *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_GiveSecurity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_RemoveWeapons_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LevelTrigger_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Checkpoint_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EnableStamina_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTarget_FadeSoundClass::Invoke(idTarget_FadeSoundClass *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 253902) { // Event_RestoreVolume
		cls->Event_RestoreVolume();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTarget_FadeSoundClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_RumbleJoystick_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Achievement_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTrigger::Invoke(idTrigger *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 223336) { // GetScriptFunction
		return (intptr_t)cls->GetScriptFunction();
	};
	if(functionNameHash == 70912) { // Enable
		cls->Enable();
		return 0;
	};
	if(functionNameHash == 84512) { // Disable
		cls->Disable();
		return 0;
	};
	if(functionNameHash == 148470) { // Event_Enable
		cls->Event_Enable();
		return 0;
	};
	if(functionNameHash == 162724) { // Event_Disable
		cls->Event_Disable();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_typeInfo[] = {
	{ "const function_t *", "scriptFunction", (int)(&((idTrigger *)0)->scriptFunction), sizeof( ((idTrigger *)0)->scriptFunction ) },
	{ NULL, 0 }
};

intptr_t idTrigger_Multi::Invoke(idTrigger_Multi *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Multi_typeInfo[] = {
	{ ": float", "wait", (int)(&((idTrigger_Multi *)0)->wait), sizeof( ((idTrigger_Multi *)0)->wait ) },
	{ "float", "random", (int)(&((idTrigger_Multi *)0)->random), sizeof( ((idTrigger_Multi *)0)->random ) },
	{ "float", "delay", (int)(&((idTrigger_Multi *)0)->delay), sizeof( ((idTrigger_Multi *)0)->delay ) },
	{ "float", "random_delay", (int)(&((idTrigger_Multi *)0)->random_delay), sizeof( ((idTrigger_Multi *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (int)(&((idTrigger_Multi *)0)->nextTriggerTime), sizeof( ((idTrigger_Multi *)0)->nextTriggerTime ) },
	{ "idStr", "requires", (int)(&((idTrigger_Multi *)0)->requires), sizeof( ((idTrigger_Multi *)0)->requires ) },
	{ "int", "removeItem", (int)(&((idTrigger_Multi *)0)->removeItem), sizeof( ((idTrigger_Multi *)0)->removeItem ) },
	{ "bool", "touchClient", (int)(&((idTrigger_Multi *)0)->touchClient), sizeof( ((idTrigger_Multi *)0)->touchClient ) },
	{ "bool", "touchOther", (int)(&((idTrigger_Multi *)0)->touchOther), sizeof( ((idTrigger_Multi *)0)->touchOther ) },
	{ "bool", "triggerFirst", (int)(&((idTrigger_Multi *)0)->triggerFirst), sizeof( ((idTrigger_Multi *)0)->triggerFirst ) },
	{ "bool", "triggerWithSelf", (int)(&((idTrigger_Multi *)0)->triggerWithSelf), sizeof( ((idTrigger_Multi *)0)->triggerWithSelf ) },
	{ NULL, 0 }
};

intptr_t idTrigger_EntityName::Invoke(idTrigger_EntityName *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_EntityName_typeInfo[] = {
	{ ": float", "wait", (int)(&((idTrigger_EntityName *)0)->wait), sizeof( ((idTrigger_EntityName *)0)->wait ) },
	{ "float", "random", (int)(&((idTrigger_EntityName *)0)->random), sizeof( ((idTrigger_EntityName *)0)->random ) },
	{ "float", "delay", (int)(&((idTrigger_EntityName *)0)->delay), sizeof( ((idTrigger_EntityName *)0)->delay ) },
	{ "float", "random_delay", (int)(&((idTrigger_EntityName *)0)->random_delay), sizeof( ((idTrigger_EntityName *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (int)(&((idTrigger_EntityName *)0)->nextTriggerTime), sizeof( ((idTrigger_EntityName *)0)->nextTriggerTime ) },
	{ "bool", "triggerFirst", (int)(&((idTrigger_EntityName *)0)->triggerFirst), sizeof( ((idTrigger_EntityName *)0)->triggerFirst ) },
	{ "idStr", "entityName", (int)(&((idTrigger_EntityName *)0)->entityName), sizeof( ((idTrigger_EntityName *)0)->entityName ) },
	{ "bool", "testPartialName", (int)(&((idTrigger_EntityName *)0)->testPartialName), sizeof( ((idTrigger_EntityName *)0)->testPartialName ) },
	{ NULL, 0 }
};

intptr_t idTrigger_Timer::Invoke(idTrigger_Timer *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 70912) { // Enable
		cls->Enable();
		return 0;
	};
	if(functionNameHash == 84512) { // Disable
		cls->Disable();
		return 0;
	};
	if(functionNameHash == 139267) { // Event_Timer
		cls->Event_Timer();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Timer_typeInfo[] = {
	{ ": float", "random", (int)(&((idTrigger_Timer *)0)->random), sizeof( ((idTrigger_Timer *)0)->random ) },
	{ "float", "wait", (int)(&((idTrigger_Timer *)0)->wait), sizeof( ((idTrigger_Timer *)0)->wait ) },
	{ "bool", "on", (int)(&((idTrigger_Timer *)0)->on), sizeof( ((idTrigger_Timer *)0)->on ) },
	{ "float", "delay", (int)(&((idTrigger_Timer *)0)->delay), sizeof( ((idTrigger_Timer *)0)->delay ) },
	{ "idStr", "onName", (int)(&((idTrigger_Timer *)0)->onName), sizeof( ((idTrigger_Timer *)0)->onName ) },
	{ "idStr", "offName", (int)(&((idTrigger_Timer *)0)->offName), sizeof( ((idTrigger_Timer *)0)->offName ) },
	{ NULL, 0 }
};

intptr_t idTrigger_Count::Invoke(idTrigger_Count *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Count_typeInfo[] = {
	{ ": int", "goal", (int)(&((idTrigger_Count *)0)->goal), sizeof( ((idTrigger_Count *)0)->goal ) },
	{ "int", "count", (int)(&((idTrigger_Count *)0)->count), sizeof( ((idTrigger_Count *)0)->count ) },
	{ "float", "delay", (int)(&((idTrigger_Count *)0)->delay), sizeof( ((idTrigger_Count *)0)->delay ) },
	{ NULL, 0 }
};

intptr_t idTrigger_Hurt::Invoke(idTrigger_Hurt *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Hurt_typeInfo[] = {
	{ ": bool", "on", (int)(&((idTrigger_Hurt *)0)->on), sizeof( ((idTrigger_Hurt *)0)->on ) },
	{ "float", "delay", (int)(&((idTrigger_Hurt *)0)->delay), sizeof( ((idTrigger_Hurt *)0)->delay ) },
	{ "int", "nextTime", (int)(&((idTrigger_Hurt *)0)->nextTime), sizeof( ((idTrigger_Hurt *)0)->nextTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Fade_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idTrigger_Touch::Invoke(idTrigger_Touch *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 70912) { // Enable
		cls->Enable();
		return 0;
	};
	if(functionNameHash == 84512) { // Disable
		cls->Disable();
		return 0;
	};
	if(functionNameHash == 169188) { // TouchEntities
		cls->TouchEntities();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Touch_typeInfo[] = {
	{ ": idClipModel *", "clipModel", (int)(&((idTrigger_Touch *)0)->clipModel), sizeof( ((idTrigger_Touch *)0)->clipModel ) },
	{ NULL, 0 }
};

intptr_t idTrigger_Flag::Invoke(idTrigger_Flag *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTrigger_Flag_typeInfo[] = {
	{ ": int", "team", (int)(&((idTrigger_Flag *)0)->team), sizeof( ((idTrigger_Flag *)0)->team ) },
	{ "bool", "player", (int)(&((idTrigger_Flag *)0)->player), sizeof( ((idTrigger_Flag *)0)->player ) },
	{ "const idEventDef *", "eventFlag", (int)(&((idTrigger_Flag *)0)->eventFlag), sizeof( ((idTrigger_Flag *)0)->eventFlag ) },
	{ NULL, 0 }
};

intptr_t idSound::Invoke(idSound *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 218178) { // ShowEditingDialog
		cls->ShowEditingDialog();
		return 0;
	};
	if(functionNameHash == 139267) { // Event_Timer
		cls->Event_Timer();
		return 0;
	};
	if(functionNameHash == 97795) { // Event_On
		cls->Event_On();
		return 0;
	};
	if(functionNameHash == 109741) { // Event_Off
		cls->Event_Off();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSound_typeInfo[] = {
	{ ": float", "lastSoundVol", (int)(&((idSound *)0)->lastSoundVol), sizeof( ((idSound *)0)->lastSoundVol ) },
	{ "float", "soundVol", (int)(&((idSound *)0)->soundVol), sizeof( ((idSound *)0)->soundVol ) },
	{ "float", "random", (int)(&((idSound *)0)->random), sizeof( ((idSound *)0)->random ) },
	{ "float", "wait", (int)(&((idSound *)0)->wait), sizeof( ((idSound *)0)->wait ) },
	{ "bool", "timerOn", (int)(&((idSound *)0)->timerOn), sizeof( ((idSound *)0)->timerOn ) },
	{ "idVec3", "shakeTranslate", (int)(&((idSound *)0)->shakeTranslate), sizeof( ((idSound *)0)->shakeTranslate ) },
	{ "idAngles", "shakeRotate", (int)(&((idSound *)0)->shakeRotate), sizeof( ((idSound *)0)->shakeRotate ) },
	{ "int", "playingUntilTime", (int)(&((idSound *)0)->playingUntilTime), sizeof( ((idSound *)0)->playingUntilTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFXLocalAction_typeInfo[] = {
	{ "renderLight_t", "renderLight", (int)(&((idFXLocalAction *)0)->renderLight), sizeof( ((idFXLocalAction *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (int)(&((idFXLocalAction *)0)->lightDefHandle), sizeof( ((idFXLocalAction *)0)->lightDefHandle ) },
	{ "renderEntity_t", "renderEntity", (int)(&((idFXLocalAction *)0)->renderEntity), sizeof( ((idFXLocalAction *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (int)(&((idFXLocalAction *)0)->modelDefHandle), sizeof( ((idFXLocalAction *)0)->modelDefHandle ) },
	{ "float", "delay", (int)(&((idFXLocalAction *)0)->delay), sizeof( ((idFXLocalAction *)0)->delay ) },
	{ "int", "particleSystem", (int)(&((idFXLocalAction *)0)->particleSystem), sizeof( ((idFXLocalAction *)0)->particleSystem ) },
	{ "int", "start", (int)(&((idFXLocalAction *)0)->start), sizeof( ((idFXLocalAction *)0)->start ) },
	{ "bool", "soundStarted", (int)(&((idFXLocalAction *)0)->soundStarted), sizeof( ((idFXLocalAction *)0)->soundStarted ) },
	{ "bool", "shakeStarted", (int)(&((idFXLocalAction *)0)->shakeStarted), sizeof( ((idFXLocalAction *)0)->shakeStarted ) },
	{ "bool", "decalDropped", (int)(&((idFXLocalAction *)0)->decalDropped), sizeof( ((idFXLocalAction *)0)->decalDropped ) },
	{ "bool", "launched", (int)(&((idFXLocalAction *)0)->launched), sizeof( ((idFXLocalAction *)0)->launched ) },
	{ NULL, 0 }
};

intptr_t idEntityFx::Invoke(idEntityFx *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 50892) { // Stop
		cls->Stop();
		return 0;
	};
	if(functionNameHash == 102783) { // Duration
		cls->Duration();
		return 0;
	};
	if(functionNameHash == 120419) { // EffectName
		return (intptr_t)cls->EffectName();
	};
	if(functionNameHash == 62519) { // Joint
		return (intptr_t)cls->Joint();
	};
	if(functionNameHash == 47044) { // Done
		cls->Done();
		return 0;
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 160812) { // Event_ClearFx
		cls->Event_ClearFx();
		return 0;
	};
	if(functionNameHash == 83058) { // CleanUp
		cls->CleanUp();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idEntityFx_typeInfo[] = {
	{ "int", "started", (int)(&((idEntityFx *)0)->started), sizeof( ((idEntityFx *)0)->started ) },
	{ "int", "nextTriggerTime", (int)(&((idEntityFx *)0)->nextTriggerTime), sizeof( ((idEntityFx *)0)->nextTriggerTime ) },
	{ "const idDeclFX *", "fxEffect", (int)(&((idEntityFx *)0)->fxEffect), sizeof( ((idEntityFx *)0)->fxEffect ) },
	{ "idList < idFXLocalAction , TAG_FX >", "actions", (int)(&((idEntityFx *)0)->actions), sizeof( ((idEntityFx *)0)->actions ) },
	{ "idStr", "systemName", (int)(&((idEntityFx *)0)->systemName), sizeof( ((idEntityFx *)0)->systemName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTeleporter_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t idSecurityCamera::Invoke(idSecurityCamera *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 163648) { // GetRenderView
		return (intptr_t)cls->GetRenderView();
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 128766) { // StartSweep
		cls->StartSweep();
		return 0;
	};
	if(functionNameHash == 147260) { // CanSeePlayer
		cls->CanSeePlayer();
		return 0;
	};
	if(functionNameHash == 85151) { // DrawFov
		cls->DrawFov();
		return 0;
	};
	if(functionNameHash == 84690) { // GetAxis
		cls->GetAxis();
		return 0;
	};
	if(functionNameHash == 125121) { // SweepSpeed
		cls->SweepSpeed();
		return 0;
	};
	if(functionNameHash == 237021) { // Event_ReverseSweep
		cls->Event_ReverseSweep();
		return 0;
	};
	if(functionNameHash == 251443) { // Event_ContinueSweep
		cls->Event_ContinueSweep();
		return 0;
	};
	if(functionNameHash == 138890) { // Event_Pause
		cls->Event_Pause();
		return 0;
	};
	if(functionNameHash == 138176) { // Event_Alert
		cls->Event_Alert();
		return 0;
	};
	if(functionNameHash == 173084) { // Event_AddLight
		cls->Event_AddLight();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idSecurityCamera_typeInfo[] = {
	{ "float", "angle", (int)(&((idSecurityCamera *)0)->angle), sizeof( ((idSecurityCamera *)0)->angle ) },
	{ "float", "sweepAngle", (int)(&((idSecurityCamera *)0)->sweepAngle), sizeof( ((idSecurityCamera *)0)->sweepAngle ) },
	{ "int", "modelAxis", (int)(&((idSecurityCamera *)0)->modelAxis), sizeof( ((idSecurityCamera *)0)->modelAxis ) },
	{ "bool", "flipAxis", (int)(&((idSecurityCamera *)0)->flipAxis), sizeof( ((idSecurityCamera *)0)->flipAxis ) },
	{ "float", "scanDist", (int)(&((idSecurityCamera *)0)->scanDist), sizeof( ((idSecurityCamera *)0)->scanDist ) },
	{ "float", "scanFov", (int)(&((idSecurityCamera *)0)->scanFov), sizeof( ((idSecurityCamera *)0)->scanFov ) },
	{ "float", "sweepStart", (int)(&((idSecurityCamera *)0)->sweepStart), sizeof( ((idSecurityCamera *)0)->sweepStart ) },
	{ "float", "sweepEnd", (int)(&((idSecurityCamera *)0)->sweepEnd), sizeof( ((idSecurityCamera *)0)->sweepEnd ) },
	{ "bool", "negativeSweep", (int)(&((idSecurityCamera *)0)->negativeSweep), sizeof( ((idSecurityCamera *)0)->negativeSweep ) },
	{ "bool", "sweeping", (int)(&((idSecurityCamera *)0)->sweeping), sizeof( ((idSecurityCamera *)0)->sweeping ) },
	{ "int", "alertMode", (int)(&((idSecurityCamera *)0)->alertMode), sizeof( ((idSecurityCamera *)0)->alertMode ) },
	{ "float", "stopSweeping", (int)(&((idSecurityCamera *)0)->stopSweeping), sizeof( ((idSecurityCamera *)0)->stopSweeping ) },
	{ "float", "scanFovCos", (int)(&((idSecurityCamera *)0)->scanFovCos), sizeof( ((idSecurityCamera *)0)->scanFovCos ) },
	{ "idVec3", "viewOffset", (int)(&((idSecurityCamera *)0)->viewOffset), sizeof( ((idSecurityCamera *)0)->viewOffset ) },
	{ "int", "pvsArea", (int)(&((idSecurityCamera *)0)->pvsArea), sizeof( ((idSecurityCamera *)0)->pvsArea ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((idSecurityCamera *)0)->physicsObj), sizeof( ((idSecurityCamera *)0)->physicsObj ) },
	{ "idTraceModel", "trm", (int)(&((idSecurityCamera *)0)->trm), sizeof( ((idSecurityCamera *)0)->trm ) },
	{ NULL, 0 }
};

static classVariableInfo_t shard_t_typeInfo[] = {
	{ "idClipModel *", "clipModel", (int)(&((shard_t *)0)->clipModel), sizeof( ((shard_t *)0)->clipModel ) },
	{ "idFixedWinding", "winding", (int)(&((shard_t *)0)->winding), sizeof( ((shard_t *)0)->winding ) },
	{ "idList < idFixedWinding * , TAG_PHYSICS_BRITTLE >", "decals", (int)(&((shard_t *)0)->decals), sizeof( ((shard_t *)0)->decals ) },
	{ "idList < bool >", "edgeHasNeighbour", (int)(&((shard_t *)0)->edgeHasNeighbour), sizeof( ((shard_t *)0)->edgeHasNeighbour ) },
	{ "idList < struct shard_s * , TAG_PHYSICS_BRITTLE >", "neighbours", (int)(&((shard_t *)0)->neighbours), sizeof( ((shard_t *)0)->neighbours ) },
	{ "idPhysics_RigidBody", "physicsObj", (int)(&((shard_t *)0)->physicsObj), sizeof( ((shard_t *)0)->physicsObj ) },
	{ "int", "droppedTime", (int)(&((shard_t *)0)->droppedTime), sizeof( ((shard_t *)0)->droppedTime ) },
	{ "bool", "atEdge", (int)(&((shard_t *)0)->atEdge), sizeof( ((shard_t *)0)->atEdge ) },
	{ "int", "islandNum", (int)(&((shard_t *)0)->islandNum), sizeof( ((shard_t *)0)->islandNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBrittleFracture_fractureEvent_s_typeInfo[] = {
	{ "int", "eventType", (int)(&((idBrittleFracture::fractureEvent_s *)0)->eventType), sizeof( ((idBrittleFracture::fractureEvent_s *)0)->eventType ) },
	{ "idVec3", "point", (int)(&((idBrittleFracture::fractureEvent_s *)0)->point), sizeof( ((idBrittleFracture::fractureEvent_s *)0)->point ) },
	{ "idVec3", "vector", (int)(&((idBrittleFracture::fractureEvent_s *)0)->vector), sizeof( ((idBrittleFracture::fractureEvent_s *)0)->vector ) },
	{ NULL, 0 }
};

intptr_t idBrittleFracture::Invoke(idBrittleFracture *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 90014) { // Present
		cls->Present();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 97787) { // IsBroken
		cls->IsBroken();
		return 0;
	};
	if(functionNameHash == 278761) { // ClientPredictionThink
		cls->ClientPredictionThink();
		return 0;
	};
	if(functionNameHash == 58750) { // Break
		cls->Break();
		return 0;
	};
	if(functionNameHash == 180056) { // FindNeighbours
		cls->FindNeighbours();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idBrittleFracture_typeInfo[] = {
	{ ": const idMaterial *", "material", (int)(&((idBrittleFracture *)0)->material), sizeof( ((idBrittleFracture *)0)->material ) },
	{ "const idMaterial *", "decalMaterial", (int)(&((idBrittleFracture *)0)->decalMaterial), sizeof( ((idBrittleFracture *)0)->decalMaterial ) },
	{ "float", "decalSize", (int)(&((idBrittleFracture *)0)->decalSize), sizeof( ((idBrittleFracture *)0)->decalSize ) },
	{ "float", "maxShardArea", (int)(&((idBrittleFracture *)0)->maxShardArea), sizeof( ((idBrittleFracture *)0)->maxShardArea ) },
	{ "float", "maxShatterRadius", (int)(&((idBrittleFracture *)0)->maxShatterRadius), sizeof( ((idBrittleFracture *)0)->maxShatterRadius ) },
	{ "float", "minShatterRadius", (int)(&((idBrittleFracture *)0)->minShatterRadius), sizeof( ((idBrittleFracture *)0)->minShatterRadius ) },
	{ "float", "linearVelocityScale", (int)(&((idBrittleFracture *)0)->linearVelocityScale), sizeof( ((idBrittleFracture *)0)->linearVelocityScale ) },
	{ "float", "angularVelocityScale", (int)(&((idBrittleFracture *)0)->angularVelocityScale), sizeof( ((idBrittleFracture *)0)->angularVelocityScale ) },
	{ "float", "shardMass", (int)(&((idBrittleFracture *)0)->shardMass), sizeof( ((idBrittleFracture *)0)->shardMass ) },
	{ "float", "density", (int)(&((idBrittleFracture *)0)->density), sizeof( ((idBrittleFracture *)0)->density ) },
	{ "float", "friction", (int)(&((idBrittleFracture *)0)->friction), sizeof( ((idBrittleFracture *)0)->friction ) },
	{ "float", "bouncyness", (int)(&((idBrittleFracture *)0)->bouncyness), sizeof( ((idBrittleFracture *)0)->bouncyness ) },
	{ "idStr", "fxFracture", (int)(&((idBrittleFracture *)0)->fxFracture), sizeof( ((idBrittleFracture *)0)->fxFracture ) },
	{ "idList < fractureEvent_s >", "storedEvents", (int)(&((idBrittleFracture *)0)->storedEvents), sizeof( ((idBrittleFracture *)0)->storedEvents ) },
	{ "bool", "processStoredEvents", (int)(&((idBrittleFracture *)0)->processStoredEvents), sizeof( ((idBrittleFracture *)0)->processStoredEvents ) },
	{ "idRenderModel *", "defaultRenderModel", (int)(&((idBrittleFracture *)0)->defaultRenderModel), sizeof( ((idBrittleFracture *)0)->defaultRenderModel ) },
	{ "bool", "isXraySurface", (int)(&((idBrittleFracture *)0)->isXraySurface), sizeof( ((idBrittleFracture *)0)->isXraySurface ) },
	{ "idPhysics_StaticMulti", "physicsObj", (int)(&((idBrittleFracture *)0)->physicsObj), sizeof( ((idBrittleFracture *)0)->physicsObj ) },
	{ "idList < shard_t * , TAG_PHYSICS_BRITTLE >", "shards", (int)(&((idBrittleFracture *)0)->shards), sizeof( ((idBrittleFracture *)0)->shards ) },
	{ "idBounds", "bounds", (int)(&((idBrittleFracture *)0)->bounds), sizeof( ((idBrittleFracture *)0)->bounds ) },
	{ "bool", "disableFracture", (int)(&((idBrittleFracture *)0)->disableFracture), sizeof( ((idBrittleFracture *)0)->disableFracture ) },
	{ "mutable int", "lastRenderEntityUpdate", (int)(&((idBrittleFracture *)0)->lastRenderEntityUpdate), sizeof( ((idBrittleFracture *)0)->lastRenderEntityUpdate ) },
	{ "mutable bool", "changed", (int)(&((idBrittleFracture *)0)->changed), sizeof( ((idBrittleFracture *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t ballistics_t_typeInfo[] = {
	{ "float", "angle", (int)(&((ballistics_t *)0)->angle), sizeof( ((ballistics_t *)0)->angle ) },
	{ "float", "time", (int)(&((ballistics_t *)0)->time), sizeof( ((ballistics_t *)0)->time ) },
	{ NULL, 0 }
};

static classVariableInfo_t obstaclePath_t_typeInfo[] = {
	{ "idVec3", "seekPos", (int)(&((obstaclePath_t *)0)->seekPos), sizeof( ((obstaclePath_t *)0)->seekPos ) },
	{ "idEntity *", "firstObstacle", (int)(&((obstaclePath_t *)0)->firstObstacle), sizeof( ((obstaclePath_t *)0)->firstObstacle ) },
	{ "idVec3", "startPosOutsideObstacles", (int)(&((obstaclePath_t *)0)->startPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->startPosOutsideObstacles ) },
	{ "idEntity *", "startPosObstacle", (int)(&((obstaclePath_t *)0)->startPosObstacle), sizeof( ((obstaclePath_t *)0)->startPosObstacle ) },
	{ "idVec3", "seekPosOutsideObstacles", (int)(&((obstaclePath_t *)0)->seekPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->seekPosOutsideObstacles ) },
	{ "idEntity *", "seekPosObstacle", (int)(&((obstaclePath_t *)0)->seekPosObstacle), sizeof( ((obstaclePath_t *)0)->seekPosObstacle ) },
	{ NULL, 0 }
};

static classVariableInfo_t predictedPath_t_typeInfo[] = {
	{ "idVec3", "endPos", (int)(&((predictedPath_t *)0)->endPos), sizeof( ((predictedPath_t *)0)->endPos ) },
	{ "idVec3", "endVelocity", (int)(&((predictedPath_t *)0)->endVelocity), sizeof( ((predictedPath_t *)0)->endVelocity ) },
	{ "idVec3", "endNormal", (int)(&((predictedPath_t *)0)->endNormal), sizeof( ((predictedPath_t *)0)->endNormal ) },
	{ "int", "endTime", (int)(&((predictedPath_t *)0)->endTime), sizeof( ((predictedPath_t *)0)->endTime ) },
	{ "int", "endEvent", (int)(&((predictedPath_t *)0)->endEvent), sizeof( ((predictedPath_t *)0)->endEvent ) },
	{ "const idEntity *", "blockingEntity", (int)(&((predictedPath_t *)0)->blockingEntity), sizeof( ((predictedPath_t *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t particleEmitter_t_typeInfo[] = {
	{ "const idDeclParticle *", "particle", (int)(&((particleEmitter_t *)0)->particle), sizeof( ((particleEmitter_t *)0)->particle ) },
	{ "int", "time", (int)(&((particleEmitter_t *)0)->time), sizeof( ((particleEmitter_t *)0)->time ) },
	{ "jointHandle_t", "joint", (int)(&((particleEmitter_t *)0)->joint), sizeof( ((particleEmitter_t *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t funcEmitter_t_typeInfo[] = {
	{ "char[64]", "name", (int)(&((funcEmitter_t *)0)->name), sizeof( ((funcEmitter_t *)0)->name ) },
	{ "idFuncEmitter *", "particle", (int)(&((funcEmitter_t *)0)->particle), sizeof( ((funcEmitter_t *)0)->particle ) },
	{ "jointHandle_t", "joint", (int)(&((funcEmitter_t *)0)->joint), sizeof( ((funcEmitter_t *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveState_typeInfo[] = {
	{ "moveType_t", "moveType", (int)(&((idMoveState *)0)->moveType), sizeof( ((idMoveState *)0)->moveType ) },
	{ "moveCommand_t", "moveCommand", (int)(&((idMoveState *)0)->moveCommand), sizeof( ((idMoveState *)0)->moveCommand ) },
	{ "moveStatus_t", "moveStatus", (int)(&((idMoveState *)0)->moveStatus), sizeof( ((idMoveState *)0)->moveStatus ) },
	{ "idVec3", "moveDest", (int)(&((idMoveState *)0)->moveDest), sizeof( ((idMoveState *)0)->moveDest ) },
	{ "idVec3", "moveDir", (int)(&((idMoveState *)0)->moveDir), sizeof( ((idMoveState *)0)->moveDir ) },
	{ "idEntityPtr < idEntity >", "goalEntity", (int)(&((idMoveState *)0)->goalEntity), sizeof( ((idMoveState *)0)->goalEntity ) },
	{ "idVec3", "goalEntityOrigin", (int)(&((idMoveState *)0)->goalEntityOrigin), sizeof( ((idMoveState *)0)->goalEntityOrigin ) },
	{ "int", "toAreaNum", (int)(&((idMoveState *)0)->toAreaNum), sizeof( ((idMoveState *)0)->toAreaNum ) },
	{ "int", "startTime", (int)(&((idMoveState *)0)->startTime), sizeof( ((idMoveState *)0)->startTime ) },
	{ "int", "duration", (int)(&((idMoveState *)0)->duration), sizeof( ((idMoveState *)0)->duration ) },
	{ "float", "speed", (int)(&((idMoveState *)0)->speed), sizeof( ((idMoveState *)0)->speed ) },
	{ "float", "range", (int)(&((idMoveState *)0)->range), sizeof( ((idMoveState *)0)->range ) },
	{ "float", "wanderYaw", (int)(&((idMoveState *)0)->wanderYaw), sizeof( ((idMoveState *)0)->wanderYaw ) },
	{ "int", "nextWanderTime", (int)(&((idMoveState *)0)->nextWanderTime), sizeof( ((idMoveState *)0)->nextWanderTime ) },
	{ "int", "blockTime", (int)(&((idMoveState *)0)->blockTime), sizeof( ((idMoveState *)0)->blockTime ) },
	{ "idEntityPtr < idEntity >", "obstacle", (int)(&((idMoveState *)0)->obstacle), sizeof( ((idMoveState *)0)->obstacle ) },
	{ "idVec3", "lastMoveOrigin", (int)(&((idMoveState *)0)->lastMoveOrigin), sizeof( ((idMoveState *)0)->lastMoveOrigin ) },
	{ "int", "lastMoveTime", (int)(&((idMoveState *)0)->lastMoveTime), sizeof( ((idMoveState *)0)->lastMoveTime ) },
	{ "int", "anim", (int)(&((idMoveState *)0)->anim), sizeof( ((idMoveState *)0)->anim ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindCover_typeInfo[] = {
	{ ": pvsHandle_t", "hidePVS", (int)(&((idAASFindCover *)0)->hidePVS), sizeof( ((idAASFindCover *)0)->hidePVS ) },
	{ "int[4]", "PVSAreas", (int)(&((idAASFindCover *)0)->PVSAreas), sizeof( ((idAASFindCover *)0)->PVSAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAreaOutOfRange_typeInfo[] = {
	{ ": idVec3", "targetPos", (int)(&((idAASFindAreaOutOfRange *)0)->targetPos), sizeof( ((idAASFindAreaOutOfRange *)0)->targetPos ) },
	{ "float", "maxDistSqr", (int)(&((idAASFindAreaOutOfRange *)0)->maxDistSqr), sizeof( ((idAASFindAreaOutOfRange *)0)->maxDistSqr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAttackPosition_typeInfo[] = {
	{ ": const idAI *", "self", (int)(&((idAASFindAttackPosition *)0)->self), sizeof( ((idAASFindAttackPosition *)0)->self ) },
	{ "idEntity *", "target", (int)(&((idAASFindAttackPosition *)0)->target), sizeof( ((idAASFindAttackPosition *)0)->target ) },
	{ "idBounds", "excludeBounds", (int)(&((idAASFindAttackPosition *)0)->excludeBounds), sizeof( ((idAASFindAttackPosition *)0)->excludeBounds ) },
	{ "idVec3", "targetPos", (int)(&((idAASFindAttackPosition *)0)->targetPos), sizeof( ((idAASFindAttackPosition *)0)->targetPos ) },
	{ "idVec3", "fireOffset", (int)(&((idAASFindAttackPosition *)0)->fireOffset), sizeof( ((idAASFindAttackPosition *)0)->fireOffset ) },
	{ "idMat3", "gravityAxis", (int)(&((idAASFindAttackPosition *)0)->gravityAxis), sizeof( ((idAASFindAttackPosition *)0)->gravityAxis ) },
	{ "pvsHandle_t", "targetPVS", (int)(&((idAASFindAttackPosition *)0)->targetPVS), sizeof( ((idAASFindAttackPosition *)0)->targetPVS ) },
	{ "int[4]", "PVSAreas", (int)(&((idAASFindAttackPosition *)0)->PVSAreas), sizeof( ((idAASFindAttackPosition *)0)->PVSAreas ) },
	{ NULL, 0 }
};

intptr_t idAI::Invoke(idAI *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 97948) { // GetEnemy
		return (intptr_t)cls->GetEnemy();
	};
	if(functionNameHash == 149251) { // GetTalkState
		cls->GetTalkState();
		return 0;
	};
	if(functionNameHash == 62250) { // SetAAS
		cls->SetAAS();
		return 0;
	};
	if(functionNameHash == 150747) { // DormantBegin
		cls->DormantBegin();
		return 0;
	};
	if(functionNameHash == 124039) { // DormantEnd
		cls->DormantEnd();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 107792) { // EnemyDead
		cls->EnemyDead();
		return 0;
	};
	if(functionNameHash == 261747) { // CanPlayChatterSounds
		cls->CanPlayChatterSounds();
		return 0;
	};
	if(functionNameHash == 150248) { // SetChatSound
		cls->SetChatSound();
		return 0;
	};
	if(functionNameHash == 139223) { // PlayChatter
		cls->PlayChatter();
		return 0;
	};
	if(functionNameHash == 45590) { // Hide
		cls->Hide();
		return 0;
	};
	if(functionNameHash == 50306) { // Show
		cls->Show();
		return 0;
	};
	if(functionNameHash == 290625) { // CalculateAttackOffsets
		cls->CalculateAttackOffsets();
		return 0;
	};
	if(functionNameHash == 164558) { // PlayCinematic
		cls->PlayCinematic();
		return 0;
	};
	if(functionNameHash == 94860) { // DeadMove
		cls->DeadMove();
		return 0;
	};
	if(functionNameHash == 97649) { // AnimMove
		cls->AnimMove();
		return 0;
	};
	if(functionNameHash == 111283) { // SlideMove
		cls->SlideMove();
		return 0;
	};
	if(functionNameHash == 234590) { // AdjustFlyingAngles
		cls->AdjustFlyingAngles();
		return 0;
	};
	if(functionNameHash == 88456) { // FlyTurn
		cls->FlyTurn();
		return 0;
	};
	if(functionNameHash == 86235) { // FlyMove
		cls->FlyMove();
		return 0;
	};
	if(functionNameHash == 126402) { // StaticMove
		cls->StaticMove();
		return 0;
	};
	if(functionNameHash == 113945) { // DrawRoute
		cls->DrawRoute();
		return 0;
	};
	if(functionNameHash == 97687) { // MoveDone
		cls->MoveDone();
		return 0;
	};
	if(functionNameHash == 183413) { // BlockedFailSafe
		cls->BlockedFailSafe();
		return 0;
	};
	if(functionNameHash == 108124) { // FaceEnemy
		cls->FaceEnemy();
		return 0;
	};
	if(functionNameHash == 217798) { // MoveToEnemyHeight
		cls->MoveToEnemyHeight();
		return 0;
	};
	if(functionNameHash == 138052) { // MoveToEnemy
		cls->MoveToEnemy();
		return 0;
	};
	if(functionNameHash == 152814) { // WanderAround
		cls->WanderAround();
		return 0;
	};
	if(functionNameHash == 194063) { // ParticlesActive
		cls->ParticlesActive();
		return 0;
	};
	if(functionNameHash == 131961) { // FacingIdeal
		cls->FacingIdeal();
		return 0;
	};
	if(functionNameHash == 51250) { // Turn
		cls->Turn();
		return 0;
	};
	if(functionNameHash == 123373) { // ClearEnemy
		cls->ClearEnemy();
		return 0;
	};
	if(functionNameHash == 237166) { // EnemyPositionValid
		cls->EnemyPositionValid();
		return 0;
	};
	if(functionNameHash == 210788) { // SetEnemyPosition
		cls->SetEnemyPosition();
		return 0;
	};
	if(functionNameHash == 253125) { // UpdateEnemyPosition
		cls->UpdateEnemyPosition();
		return 0;
	};
	if(functionNameHash == 331085) { // CreateProjectileClipModel
		cls->CreateProjectileClipModel();
		return 0;
	};
	if(functionNameHash == 210529) { // RemoveProjectile
		cls->RemoveProjectile();
		return 0;
	};
	if(functionNameHash == 111231) { // TestMelee
		cls->TestMelee();
		return 0;
	};
	if(functionNameHash == 108281) { // EndAttack
		cls->EndAttack();
		return 0;
	};
	if(functionNameHash == 118703) { // PushWithAF
		cls->PushWithAF();
		return 0;
	};
	if(functionNameHash == 194778) { // InitMuzzleFlash
		cls->InitMuzzleFlash();
		return 0;
	};
	if(functionNameHash == 222597) { // UpdateMuzzleFlash
		cls->UpdateMuzzleFlash();
		return 0;
	};
	if(functionNameHash == 357711) { // UpdateAnimationControllers
		cls->UpdateAnimationControllers();
		return 0;
	};
	if(functionNameHash == 195019) { // UpdateParticles
		cls->UpdateParticles();
		return 0;
	};
	if(functionNameHash == 249647) { // LinkScriptVariables
		cls->LinkScriptVariables();
		return 0;
	};
	if(functionNameHash == 173157) { // UpdateAIScript
		cls->UpdateAIScript();
		return 0;
	};
	if(functionNameHash == 370058) { // Event_FindEnemyInCombatNodes
		cls->Event_FindEnemyInCombatNodes();
		return 0;
	};
	if(functionNameHash == 203415) { // Event_ClearEnemy
		cls->Event_ClearEnemy();
		return 0;
	};
	if(functionNameHash == 334229) { // Event_LaunchHomingMissile
		cls->Event_LaunchHomingMissile();
		return 0;
	};
	if(functionNameHash == 346298) { // Event_SetHomingMissileGoal
		cls->Event_SetHomingMissileGoal();
		return 0;
	};
	if(functionNameHash == 187615) { // Event_EndAttack
		cls->Event_EndAttack();
		return 0;
	};
	if(functionNameHash == 204439) { // Event_RandomPath
		cls->Event_RandomPath();
		return 0;
	};
	if(functionNameHash == 254316) { // Event_CanBecomeSolid
		cls->Event_CanBecomeSolid();
		return 0;
	};
	if(functionNameHash == 216467) { // Event_BecomeSolid
		cls->Event_BecomeSolid();
		return 0;
	};
	if(functionNameHash == 257488) { // Event_BecomeNonSolid
		cls->Event_BecomeNonSolid();
		return 0;
	};
	if(functionNameHash == 244122) { // Event_BecomeRagdoll
		cls->Event_BecomeRagdoll();
		return 0;
	};
	if(functionNameHash == 221180) { // Event_StopRagdoll
		cls->Event_StopRagdoll();
		return 0;
	};
	if(functionNameHash == 188540) { // Event_GetHealth
		cls->Event_GetHealth();
		return 0;
	};
	if(functionNameHash == 215341) { // Event_AllowDamage
		cls->Event_AllowDamage();
		return 0;
	};
	if(functionNameHash == 229025) { // Event_IgnoreDamage
		cls->Event_IgnoreDamage();
		return 0;
	};
	if(functionNameHash == 248832) { // Event_GetCurrentYaw
		cls->Event_GetCurrentYaw();
		return 0;
	};
	if(functionNameHash == 210362) { // Event_MoveStatus
		cls->Event_MoveStatus();
		return 0;
	};
	if(functionNameHash == 180637) { // Event_StopMove
		cls->Event_StopMove();
		return 0;
	};
	if(functionNameHash == 218898) { // Event_MoveToCover
		cls->Event_MoveToCover();
		return 0;
	};
	if(functionNameHash == 218784) { // Event_MoveToEnemy
		cls->Event_MoveToEnemy();
		return 0;
	};
	if(functionNameHash == 302136) { // Event_MoveToEnemyHeight
		cls->Event_MoveToEnemyHeight();
		return 0;
	};
	if(functionNameHash == 151776) { // Event_Wander
		cls->Event_Wander();
		return 0;
	};
	if(functionNameHash == 212399) { // Event_FacingIdeal
		cls->Event_FacingIdeal();
		return 0;
	};
	if(functionNameHash == 187446) { // Event_FaceEnemy
		cls->Event_FaceEnemy();
		return 0;
	};
	if(functionNameHash == 241402) { // Event_GetCombatNode
		cls->Event_GetCombatNode();
		return 0;
	};
	if(functionNameHash == 178493) { // Event_WaitMove
		cls->Event_WaitMove();
		return 0;
	};
	if(functionNameHash == 244513) { // Event_GetTalkTarget
		cls->Event_GetTalkTarget();
		return 0;
	};
	if(functionNameHash == 204053) { // Event_EnemyRange
		cls->Event_EnemyRange();
		return 0;
	};
	if(functionNameHash == 220051) { // Event_EnemyRange2D
		cls->Event_EnemyRange2D();
		return 0;
	};
	if(functionNameHash == 176796) { // Event_GetEnemy
		cls->Event_GetEnemy();
		return 0;
	};
	if(functionNameHash == 217835) { // Event_GetEnemyPos
		cls->Event_GetEnemyPos();
		return 0;
	};
	if(functionNameHash == 257779) { // Event_GetEnemyEyePos
		cls->Event_GetEnemyEyePos();
		return 0;
	};
	if(functionNameHash == 214401) { // Event_CanHitEnemy
		cls->Event_CanHitEnemy();
		return 0;
	};
	if(functionNameHash == 322380) { // Event_EnemyPositionValid
		cls->Event_EnemyPositionValid();
		return 0;
	};
	if(functionNameHash == 286460) { // Event_TestChargeAttack
		cls->Event_TestChargeAttack();
		return 0;
	};
	if(functionNameHash == 272685) { // Event_TestMeleeAttack
		cls->Event_TestMeleeAttack();
		return 0;
	};
	if(functionNameHash == 125610) { // Event_Burn
		cls->Event_Burn();
		return 0;
	};
	if(functionNameHash == 164022) { // Event_PreBurn
		cls->Event_PreBurn();
		return 0;
	};
	if(functionNameHash == 189577) { // Event_ClearBurn
		cls->Event_ClearBurn();
		return 0;
	};
	if(functionNameHash == 294369) { // Event_NumSmokeEmitters
		cls->Event_NumSmokeEmitters();
		return 0;
	};
	if(functionNameHash == 237274) { // Event_StopThinking
		cls->Event_StopThinking();
		return 0;
	};
	if(functionNameHash == 231201) { // Event_GetTurnDelta
		cls->Event_GetTurnDelta();
		return 0;
	};
	if(functionNameHash == 218963) { // Event_GetMoveType
		cls->Event_GetMoveType();
		return 0;
	};
	if(functionNameHash == 177724) { // Event_SaveMove
		cls->Event_SaveMove();
		return 0;
	};
	if(functionNameHash == 223233) { // Event_RestoreMove
		cls->Event_RestoreMove();
		return 0;
	};
	if(functionNameHash == 190609) { // Event_JumpFrame
		cls->Event_JumpFrame();
		return 0;
	};
	if(functionNameHash == 200476) { // Event_EnableClip
		cls->Event_EnableClip();
		return 0;
	};
	if(functionNameHash == 215122) { // Event_DisableClip
		cls->Event_DisableClip();
		return 0;
	};
	if(functionNameHash == 248060) { // Event_EnableGravity
		cls->Event_EnableGravity();
		return 0;
	};
	if(functionNameHash == 263056) { // Event_DisableGravity
		cls->Event_DisableGravity();
		return 0;
	};
	if(functionNameHash == 222212) { // Event_EnableAFPush
		cls->Event_EnableAFPush();
		return 0;
	};
	if(functionNameHash == 237017) { // Event_DisableAFPush
		cls->Event_DisableAFPush();
		return 0;
	};
	if(functionNameHash == 258642) { // Event_ClearFlyOffset
		cls->Event_ClearFlyOffset();
		return 0;
	};
	if(functionNameHash == 250014) { // Event_ThrowMoveable
		cls->Event_ThrowMoveable();
		return 0;
	};
	if(functionNameHash == 159321) { // Event_ThrowAF
		cls->Event_ThrowAF();
		return 0;
	};
	if(functionNameHash == 189068) { // Event_GetAngles
		cls->Event_GetAngles();
		return 0;
	};
	if(functionNameHash == 367056) { // Event_GetTrajectoryToPlayer
		cls->Event_GetTrajectoryToPlayer();
		return 0;
	};
	if(functionNameHash == 174908) { // Event_RealKill
		cls->Event_RealKill();
		return 0;
	};
	if(functionNameHash == 124205) { // Event_Kill
		cls->Event_Kill();
		return 0;
	};
	if(functionNameHash == 218562) { // Event_LocateEnemy
		cls->Event_LocateEnemy();
		return 0;
	};
	if(functionNameHash == 217371) { // Event_GetObstacle
		cls->Event_GetObstacle();
		return 0;
	};
	if(functionNameHash == 218372) { // Event_GetTurnRate
		cls->Event_GetTurnRate();
		return 0;
	};
	if(functionNameHash == 240412) { // Event_CanReachEnemy
		cls->Event_CanReachEnemy();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idAI_typeInfo[] = {
	{ ": idAAS *", "aas", (int)(&((idAI *)0)->aas), sizeof( ((idAI *)0)->aas ) },
	{ "int", "travelFlags", (int)(&((idAI *)0)->travelFlags), sizeof( ((idAI *)0)->travelFlags ) },
	{ "idMoveState", "move", (int)(&((idAI *)0)->move), sizeof( ((idAI *)0)->move ) },
	{ "idMoveState", "savedMove", (int)(&((idAI *)0)->savedMove), sizeof( ((idAI *)0)->savedMove ) },
	{ "float", "kickForce", (int)(&((idAI *)0)->kickForce), sizeof( ((idAI *)0)->kickForce ) },
	{ "bool", "ignore_obstacles", (int)(&((idAI *)0)->ignore_obstacles), sizeof( ((idAI *)0)->ignore_obstacles ) },
	{ "float", "blockedRadius", (int)(&((idAI *)0)->blockedRadius), sizeof( ((idAI *)0)->blockedRadius ) },
	{ "int", "blockedMoveTime", (int)(&((idAI *)0)->blockedMoveTime), sizeof( ((idAI *)0)->blockedMoveTime ) },
	{ "int", "blockedAttackTime", (int)(&((idAI *)0)->blockedAttackTime), sizeof( ((idAI *)0)->blockedAttackTime ) },
	{ "float", "ideal_yaw", (int)(&((idAI *)0)->ideal_yaw), sizeof( ((idAI *)0)->ideal_yaw ) },
	{ "float", "current_yaw", (int)(&((idAI *)0)->current_yaw), sizeof( ((idAI *)0)->current_yaw ) },
	{ "float", "turnRate", (int)(&((idAI *)0)->turnRate), sizeof( ((idAI *)0)->turnRate ) },
	{ "float", "turnVel", (int)(&((idAI *)0)->turnVel), sizeof( ((idAI *)0)->turnVel ) },
	{ "float", "anim_turn_yaw", (int)(&((idAI *)0)->anim_turn_yaw), sizeof( ((idAI *)0)->anim_turn_yaw ) },
	{ "float", "anim_turn_amount", (int)(&((idAI *)0)->anim_turn_amount), sizeof( ((idAI *)0)->anim_turn_amount ) },
	{ "float", "anim_turn_angles", (int)(&((idAI *)0)->anim_turn_angles), sizeof( ((idAI *)0)->anim_turn_angles ) },
	{ "idPhysics_Monster", "physicsObj", (int)(&((idAI *)0)->physicsObj), sizeof( ((idAI *)0)->physicsObj ) },
	{ "jointHandle_t", "flyTiltJoint", (int)(&((idAI *)0)->flyTiltJoint), sizeof( ((idAI *)0)->flyTiltJoint ) },
	{ "float", "fly_speed", (int)(&((idAI *)0)->fly_speed), sizeof( ((idAI *)0)->fly_speed ) },
	{ "float", "fly_bob_strength", (int)(&((idAI *)0)->fly_bob_strength), sizeof( ((idAI *)0)->fly_bob_strength ) },
	{ "float", "fly_bob_vert", (int)(&((idAI *)0)->fly_bob_vert), sizeof( ((idAI *)0)->fly_bob_vert ) },
	{ "float", "fly_bob_horz", (int)(&((idAI *)0)->fly_bob_horz), sizeof( ((idAI *)0)->fly_bob_horz ) },
	{ "int", "fly_offset", (int)(&((idAI *)0)->fly_offset), sizeof( ((idAI *)0)->fly_offset ) },
	{ "float", "fly_seek_scale", (int)(&((idAI *)0)->fly_seek_scale), sizeof( ((idAI *)0)->fly_seek_scale ) },
	{ "float", "fly_roll_scale", (int)(&((idAI *)0)->fly_roll_scale), sizeof( ((idAI *)0)->fly_roll_scale ) },
	{ "float", "fly_roll_max", (int)(&((idAI *)0)->fly_roll_max), sizeof( ((idAI *)0)->fly_roll_max ) },
	{ "float", "fly_roll", (int)(&((idAI *)0)->fly_roll), sizeof( ((idAI *)0)->fly_roll ) },
	{ "float", "fly_pitch_scale", (int)(&((idAI *)0)->fly_pitch_scale), sizeof( ((idAI *)0)->fly_pitch_scale ) },
	{ "float", "fly_pitch_max", (int)(&((idAI *)0)->fly_pitch_max), sizeof( ((idAI *)0)->fly_pitch_max ) },
	{ "float", "fly_pitch", (int)(&((idAI *)0)->fly_pitch), sizeof( ((idAI *)0)->fly_pitch ) },
	{ "bool", "allowMove", (int)(&((idAI *)0)->allowMove), sizeof( ((idAI *)0)->allowMove ) },
	{ "bool", "allowHiddenMovement", (int)(&((idAI *)0)->allowHiddenMovement), sizeof( ((idAI *)0)->allowHiddenMovement ) },
	{ "bool", "disableGravity", (int)(&((idAI *)0)->disableGravity), sizeof( ((idAI *)0)->disableGravity ) },
	{ "bool", "af_push_moveables", (int)(&((idAI *)0)->af_push_moveables), sizeof( ((idAI *)0)->af_push_moveables ) },
	{ "bool", "lastHitCheckResult", (int)(&((idAI *)0)->lastHitCheckResult), sizeof( ((idAI *)0)->lastHitCheckResult ) },
	{ "int", "lastHitCheckTime", (int)(&((idAI *)0)->lastHitCheckTime), sizeof( ((idAI *)0)->lastHitCheckTime ) },
	{ "int", "lastAttackTime", (int)(&((idAI *)0)->lastAttackTime), sizeof( ((idAI *)0)->lastAttackTime ) },
	{ "float", "melee_range", (int)(&((idAI *)0)->melee_range), sizeof( ((idAI *)0)->melee_range ) },
	{ "float", "projectile_height_to_distance_ratio", (int)(&((idAI *)0)->projectile_height_to_distance_ratio), sizeof( ((idAI *)0)->projectile_height_to_distance_ratio ) },
	{ "idList < idVec3 , TAG_AI >", "missileLaunchOffset", (int)(&((idAI *)0)->missileLaunchOffset), sizeof( ((idAI *)0)->missileLaunchOffset ) },
	{ "const idDict *", "projectileDef", (int)(&((idAI *)0)->projectileDef), sizeof( ((idAI *)0)->projectileDef ) },
	{ "mutable idClipModel *", "projectileClipModel", (int)(&((idAI *)0)->projectileClipModel), sizeof( ((idAI *)0)->projectileClipModel ) },
	{ "float", "projectileRadius", (int)(&((idAI *)0)->projectileRadius), sizeof( ((idAI *)0)->projectileRadius ) },
	{ "float", "projectileSpeed", (int)(&((idAI *)0)->projectileSpeed), sizeof( ((idAI *)0)->projectileSpeed ) },
	{ "idVec3", "projectileVelocity", (int)(&((idAI *)0)->projectileVelocity), sizeof( ((idAI *)0)->projectileVelocity ) },
	{ "idVec3", "projectileGravity", (int)(&((idAI *)0)->projectileGravity), sizeof( ((idAI *)0)->projectileGravity ) },
	{ "idEntityPtr < idProjectile >", "projectile", (int)(&((idAI *)0)->projectile), sizeof( ((idAI *)0)->projectile ) },
	{ "idStr", "attack", (int)(&((idAI *)0)->attack), sizeof( ((idAI *)0)->attack ) },
	{ "idVec3", "homingMissileGoal", (int)(&((idAI *)0)->homingMissileGoal), sizeof( ((idAI *)0)->homingMissileGoal ) },
	{ "const idSoundShader *", "chat_snd", (int)(&((idAI *)0)->chat_snd), sizeof( ((idAI *)0)->chat_snd ) },
	{ "int", "chat_min", (int)(&((idAI *)0)->chat_min), sizeof( ((idAI *)0)->chat_min ) },
	{ "int", "chat_max", (int)(&((idAI *)0)->chat_max), sizeof( ((idAI *)0)->chat_max ) },
	{ "int", "chat_time", (int)(&((idAI *)0)->chat_time), sizeof( ((idAI *)0)->chat_time ) },
	{ "talkState_t", "talk_state", (int)(&((idAI *)0)->talk_state), sizeof( ((idAI *)0)->talk_state ) },
	{ "idEntityPtr < idActor >", "talkTarget", (int)(&((idAI *)0)->talkTarget), sizeof( ((idAI *)0)->talkTarget ) },
	{ "int", "num_cinematics", (int)(&((idAI *)0)->num_cinematics), sizeof( ((idAI *)0)->num_cinematics ) },
	{ "int", "current_cinematic", (int)(&((idAI *)0)->current_cinematic), sizeof( ((idAI *)0)->current_cinematic ) },
	{ "bool", "allowJointMod", (int)(&((idAI *)0)->allowJointMod), sizeof( ((idAI *)0)->allowJointMod ) },
	{ "idEntityPtr < idEntity >", "focusEntity", (int)(&((idAI *)0)->focusEntity), sizeof( ((idAI *)0)->focusEntity ) },
	{ "idVec3", "currentFocusPos", (int)(&((idAI *)0)->currentFocusPos), sizeof( ((idAI *)0)->currentFocusPos ) },
	{ "int", "focusTime", (int)(&((idAI *)0)->focusTime), sizeof( ((idAI *)0)->focusTime ) },
	{ "int", "alignHeadTime", (int)(&((idAI *)0)->alignHeadTime), sizeof( ((idAI *)0)->alignHeadTime ) },
	{ "int", "forceAlignHeadTime", (int)(&((idAI *)0)->forceAlignHeadTime), sizeof( ((idAI *)0)->forceAlignHeadTime ) },
	{ "idAngles", "eyeAng", (int)(&((idAI *)0)->eyeAng), sizeof( ((idAI *)0)->eyeAng ) },
	{ "idAngles", "lookAng", (int)(&((idAI *)0)->lookAng), sizeof( ((idAI *)0)->lookAng ) },
	{ "idAngles", "destLookAng", (int)(&((idAI *)0)->destLookAng), sizeof( ((idAI *)0)->destLookAng ) },
	{ "idAngles", "lookMin", (int)(&((idAI *)0)->lookMin), sizeof( ((idAI *)0)->lookMin ) },
	{ "idAngles", "lookMax", (int)(&((idAI *)0)->lookMax), sizeof( ((idAI *)0)->lookMax ) },
	{ "idList < jointHandle_t , TAG_AI >", "lookJoints", (int)(&((idAI *)0)->lookJoints), sizeof( ((idAI *)0)->lookJoints ) },
	{ "idList < idAngles , TAG_AI >", "lookJointAngles", (int)(&((idAI *)0)->lookJointAngles), sizeof( ((idAI *)0)->lookJointAngles ) },
	{ "float", "eyeVerticalOffset", (int)(&((idAI *)0)->eyeVerticalOffset), sizeof( ((idAI *)0)->eyeVerticalOffset ) },
	{ "float", "eyeHorizontalOffset", (int)(&((idAI *)0)->eyeHorizontalOffset), sizeof( ((idAI *)0)->eyeHorizontalOffset ) },
	{ "float", "eyeFocusRate", (int)(&((idAI *)0)->eyeFocusRate), sizeof( ((idAI *)0)->eyeFocusRate ) },
	{ "float", "headFocusRate", (int)(&((idAI *)0)->headFocusRate), sizeof( ((idAI *)0)->headFocusRate ) },
	{ "int", "focusAlignTime", (int)(&((idAI *)0)->focusAlignTime), sizeof( ((idAI *)0)->focusAlignTime ) },
	{ "bool", "restartParticles", (int)(&((idAI *)0)->restartParticles), sizeof( ((idAI *)0)->restartParticles ) },
	{ "bool", "useBoneAxis", (int)(&((idAI *)0)->useBoneAxis), sizeof( ((idAI *)0)->useBoneAxis ) },
	{ "idList < particleEmitter_t , TAG_AI >", "particles", (int)(&((idAI *)0)->particles), sizeof( ((idAI *)0)->particles ) },
	{ "renderLight_t", "worldMuzzleFlash", (int)(&((idAI *)0)->worldMuzzleFlash), sizeof( ((idAI *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (int)(&((idAI *)0)->worldMuzzleFlashHandle), sizeof( ((idAI *)0)->worldMuzzleFlashHandle ) },
	{ "jointHandle_t", "flashJointWorld", (int)(&((idAI *)0)->flashJointWorld), sizeof( ((idAI *)0)->flashJointWorld ) },
	{ "int", "muzzleFlashEnd", (int)(&((idAI *)0)->muzzleFlashEnd), sizeof( ((idAI *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (int)(&((idAI *)0)->flashTime), sizeof( ((idAI *)0)->flashTime ) },
	{ "idAngles", "eyeMin", (int)(&((idAI *)0)->eyeMin), sizeof( ((idAI *)0)->eyeMin ) },
	{ "idAngles", "eyeMax", (int)(&((idAI *)0)->eyeMax), sizeof( ((idAI *)0)->eyeMax ) },
	{ "jointHandle_t", "focusJoint", (int)(&((idAI *)0)->focusJoint), sizeof( ((idAI *)0)->focusJoint ) },
	{ "jointHandle_t", "orientationJoint", (int)(&((idAI *)0)->orientationJoint), sizeof( ((idAI *)0)->orientationJoint ) },
	{ "idEntityPtr < idActor >", "enemy", (int)(&((idAI *)0)->enemy), sizeof( ((idAI *)0)->enemy ) },
	{ "idVec3", "lastVisibleEnemyPos", (int)(&((idAI *)0)->lastVisibleEnemyPos), sizeof( ((idAI *)0)->lastVisibleEnemyPos ) },
	{ "idVec3", "lastVisibleEnemyEyeOffset", (int)(&((idAI *)0)->lastVisibleEnemyEyeOffset), sizeof( ((idAI *)0)->lastVisibleEnemyEyeOffset ) },
	{ "idVec3", "lastVisibleReachableEnemyPos", (int)(&((idAI *)0)->lastVisibleReachableEnemyPos), sizeof( ((idAI *)0)->lastVisibleReachableEnemyPos ) },
	{ "idVec3", "lastReachableEnemyPos", (int)(&((idAI *)0)->lastReachableEnemyPos), sizeof( ((idAI *)0)->lastReachableEnemyPos ) },
	{ "bool", "wakeOnFlashlight", (int)(&((idAI *)0)->wakeOnFlashlight), sizeof( ((idAI *)0)->wakeOnFlashlight ) },
	{ "bool", "spawnClearMoveables", (int)(&((idAI *)0)->spawnClearMoveables), sizeof( ((idAI *)0)->spawnClearMoveables ) },
	{ "idHashTable < funcEmitter_t >", "funcEmitters", (int)(&((idAI *)0)->funcEmitters), sizeof( ((idAI *)0)->funcEmitters ) },
	{ "idEntityPtr < idHarvestable >", "harvestEnt", (int)(&((idAI *)0)->harvestEnt), sizeof( ((idAI *)0)->harvestEnt ) },
	{ "idScriptBool", "AI_TALK", (int)(&((idAI *)0)->AI_TALK), sizeof( ((idAI *)0)->AI_TALK ) },
	{ "idScriptBool", "AI_DAMAGE", (int)(&((idAI *)0)->AI_DAMAGE), sizeof( ((idAI *)0)->AI_DAMAGE ) },
	{ "idScriptBool", "AI_PAIN", (int)(&((idAI *)0)->AI_PAIN), sizeof( ((idAI *)0)->AI_PAIN ) },
	{ "idScriptFloat", "AI_SPECIAL_DAMAGE", (int)(&((idAI *)0)->AI_SPECIAL_DAMAGE), sizeof( ((idAI *)0)->AI_SPECIAL_DAMAGE ) },
	{ "idScriptBool", "AI_DEAD", (int)(&((idAI *)0)->AI_DEAD), sizeof( ((idAI *)0)->AI_DEAD ) },
	{ "idScriptBool", "AI_ENEMY_VISIBLE", (int)(&((idAI *)0)->AI_ENEMY_VISIBLE), sizeof( ((idAI *)0)->AI_ENEMY_VISIBLE ) },
	{ "idScriptBool", "AI_ENEMY_IN_FOV", (int)(&((idAI *)0)->AI_ENEMY_IN_FOV), sizeof( ((idAI *)0)->AI_ENEMY_IN_FOV ) },
	{ "idScriptBool", "AI_ENEMY_DEAD", (int)(&((idAI *)0)->AI_ENEMY_DEAD), sizeof( ((idAI *)0)->AI_ENEMY_DEAD ) },
	{ "idScriptBool", "AI_MOVE_DONE", (int)(&((idAI *)0)->AI_MOVE_DONE), sizeof( ((idAI *)0)->AI_MOVE_DONE ) },
	{ "idScriptBool", "AI_ONGROUND", (int)(&((idAI *)0)->AI_ONGROUND), sizeof( ((idAI *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ACTIVATED", (int)(&((idAI *)0)->AI_ACTIVATED), sizeof( ((idAI *)0)->AI_ACTIVATED ) },
	{ "idScriptBool", "AI_FORWARD", (int)(&((idAI *)0)->AI_FORWARD), sizeof( ((idAI *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_JUMP", (int)(&((idAI *)0)->AI_JUMP), sizeof( ((idAI *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_ENEMY_REACHABLE", (int)(&((idAI *)0)->AI_ENEMY_REACHABLE), sizeof( ((idAI *)0)->AI_ENEMY_REACHABLE ) },
	{ "idScriptBool", "AI_BLOCKED", (int)(&((idAI *)0)->AI_BLOCKED), sizeof( ((idAI *)0)->AI_BLOCKED ) },
	{ "idScriptBool", "AI_OBSTACLE_IN_PATH", (int)(&((idAI *)0)->AI_OBSTACLE_IN_PATH), sizeof( ((idAI *)0)->AI_OBSTACLE_IN_PATH ) },
	{ "idScriptBool", "AI_DEST_UNREACHABLE", (int)(&((idAI *)0)->AI_DEST_UNREACHABLE), sizeof( ((idAI *)0)->AI_DEST_UNREACHABLE ) },
	{ "idScriptBool", "AI_HIT_ENEMY", (int)(&((idAI *)0)->AI_HIT_ENEMY), sizeof( ((idAI *)0)->AI_HIT_ENEMY ) },
	{ "idScriptBool", "AI_PUSHED", (int)(&((idAI *)0)->AI_PUSHED), sizeof( ((idAI *)0)->AI_PUSHED ) },
	{ NULL, 0 }
};

intptr_t idCombatNode::Invoke(idCombatNode *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 121183) { // IsDisabled
		cls->IsDisabled();
		return 0;
	};
	if(functionNameHash == 176427) { // Event_MarkUsed
		cls->Event_MarkUsed();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idCombatNode_typeInfo[] = {
	{ ": float", "min_dist", (int)(&((idCombatNode *)0)->min_dist), sizeof( ((idCombatNode *)0)->min_dist ) },
	{ "float", "max_dist", (int)(&((idCombatNode *)0)->max_dist), sizeof( ((idCombatNode *)0)->max_dist ) },
	{ "float", "cone_dist", (int)(&((idCombatNode *)0)->cone_dist), sizeof( ((idCombatNode *)0)->cone_dist ) },
	{ "float", "min_height", (int)(&((idCombatNode *)0)->min_height), sizeof( ((idCombatNode *)0)->min_height ) },
	{ "float", "max_height", (int)(&((idCombatNode *)0)->max_height), sizeof( ((idCombatNode *)0)->max_height ) },
	{ "idVec3", "cone_left", (int)(&((idCombatNode *)0)->cone_left), sizeof( ((idCombatNode *)0)->cone_left ) },
	{ "idVec3", "cone_right", (int)(&((idCombatNode *)0)->cone_right), sizeof( ((idCombatNode *)0)->cone_right ) },
	{ "idVec3", "offset", (int)(&((idCombatNode *)0)->offset), sizeof( ((idCombatNode *)0)->offset ) },
	{ "bool", "disabled", (int)(&((idCombatNode *)0)->disabled), sizeof( ((idCombatNode *)0)->disabled ) },
	{ NULL, 0 }
};

intptr_t idTestModel::Invoke(idTestModel *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 63102) { // Spawn
		cls->Spawn();
		return 0;
	};
	if(functionNameHash == 476562) { // ShouldConstructScriptObjectAtSpawn
		cls->ShouldConstructScriptObjectAtSpawn();
		return 0;
	};
	if(functionNameHash == 61762) { // Think
		cls->Think();
		return 0;
	};
	if(functionNameHash == 183671) { // Event_Footstep
		cls->Event_Footstep();
		return 0;
	};
	return 0;

};

static classVariableInfo_t idTestModel_typeInfo[] = {
	{ ": idEntityPtr < idEntity >", "head", (int)(&((idTestModel *)0)->head), sizeof( ((idTestModel *)0)->head ) },
	{ "idAnimator *", "headAnimator", (int)(&((idTestModel *)0)->headAnimator), sizeof( ((idTestModel *)0)->headAnimator ) },
	{ "idAnim", "customAnim", (int)(&((idTestModel *)0)->customAnim), sizeof( ((idTestModel *)0)->customAnim ) },
	{ "idPhysics_Parametric", "physicsObj", (int)(&((idTestModel *)0)->physicsObj), sizeof( ((idTestModel *)0)->physicsObj ) },
	{ "idStr", "animname", (int)(&((idTestModel *)0)->animname), sizeof( ((idTestModel *)0)->animname ) },
	{ "int", "anim", (int)(&((idTestModel *)0)->anim), sizeof( ((idTestModel *)0)->anim ) },
	{ "int", "headAnim", (int)(&((idTestModel *)0)->headAnim), sizeof( ((idTestModel *)0)->headAnim ) },
	{ "int", "mode", (int)(&((idTestModel *)0)->mode), sizeof( ((idTestModel *)0)->mode ) },
	{ "int", "frame", (int)(&((idTestModel *)0)->frame), sizeof( ((idTestModel *)0)->frame ) },
	{ "int", "starttime", (int)(&((idTestModel *)0)->starttime), sizeof( ((idTestModel *)0)->starttime ) },
	{ "int", "animtime", (int)(&((idTestModel *)0)->animtime), sizeof( ((idTestModel *)0)->animtime ) },
	{ "idList < copyJoints_t >", "copyJoints", (int)(&((idTestModel *)0)->copyJoints), sizeof( ((idTestModel *)0)->copyJoints ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponFist::Invoke(rvmWeaponFist *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponFist_typeInfo[] = {
	{ "bool", "side", (int)(&((rvmWeaponFist *)0)->side), sizeof( ((rvmWeaponFist *)0)->side ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponPistol::Invoke(rvmWeaponPistol *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponPistol_typeInfo[] = {
	{ ": float", "next_attack", (int)(&((rvmWeaponPistol *)0)->next_attack), sizeof( ((rvmWeaponPistol *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponPistol *)0)->spread), sizeof( ((rvmWeaponPistol *)0)->spread ) },
	{ "const idSoundShader *", "snd_lowammo", (int)(&((rvmWeaponPistol *)0)->snd_lowammo), sizeof( ((rvmWeaponPistol *)0)->snd_lowammo ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponFlashlight::Invoke(rvmWeaponFlashlight *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 268148) { // UpdateLightIntensity
		cls->UpdateLightIntensity();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponFlashlight_typeInfo[] = {
	{ "bool", "on", (int)(&((rvmWeaponFlashlight *)0)->on), sizeof( ((rvmWeaponFlashlight *)0)->on ) },
	{ "float", "intensity", (int)(&((rvmWeaponFlashlight *)0)->intensity), sizeof( ((rvmWeaponFlashlight *)0)->intensity ) },
	{ "idStr", "skin_on", (int)(&((rvmWeaponFlashlight *)0)->skin_on), sizeof( ((rvmWeaponFlashlight *)0)->skin_on ) },
	{ "idStr", "skin_on_invis", (int)(&((rvmWeaponFlashlight *)0)->skin_on_invis), sizeof( ((rvmWeaponFlashlight *)0)->skin_on_invis ) },
	{ "idStr", "skin_off", (int)(&((rvmWeaponFlashlight *)0)->skin_off), sizeof( ((rvmWeaponFlashlight *)0)->skin_off ) },
	{ "idStr", "skin_off_invis", (int)(&((rvmWeaponFlashlight *)0)->skin_off_invis), sizeof( ((rvmWeaponFlashlight *)0)->skin_off_invis ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponPDA::Invoke(rvmWeaponPDA *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponPDA_typeInfo[] = {
	{ NULL, 0 }
};

intptr_t rvmWeaponShotgun::Invoke(rvmWeaponShotgun *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponShotgun_typeInfo[] = {
	{ ": float", "next_attack", (int)(&((rvmWeaponShotgun *)0)->next_attack), sizeof( ((rvmWeaponShotgun *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponShotgun *)0)->spread), sizeof( ((rvmWeaponShotgun *)0)->spread ) },
	{ "const idSoundShader *", "snd_lowammo", (int)(&((rvmWeaponShotgun *)0)->snd_lowammo), sizeof( ((rvmWeaponShotgun *)0)->snd_lowammo ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponDoubleShotgun::Invoke(rvmWeaponDoubleShotgun *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponDoubleShotgun_typeInfo[] = {
	{ ": float", "next_attack", (int)(&((rvmWeaponDoubleShotgun *)0)->next_attack), sizeof( ((rvmWeaponDoubleShotgun *)0)->next_attack ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponMachineGun::Invoke(rvmWeaponMachineGun *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponMachineGun_typeInfo[] = {
	{ ": float", "next_attack", (int)(&((rvmWeaponMachineGun *)0)->next_attack), sizeof( ((rvmWeaponMachineGun *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponMachineGun *)0)->spread), sizeof( ((rvmWeaponMachineGun *)0)->spread ) },
	{ "const idSoundShader *", "snd_lowammo", (int)(&((rvmWeaponMachineGun *)0)->snd_lowammo), sizeof( ((rvmWeaponMachineGun *)0)->snd_lowammo ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponPlasmaGun::Invoke(rvmWeaponPlasmaGun *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponPlasmaGun_typeInfo[] = {
	{ ": float", "next_attack", (int)(&((rvmWeaponPlasmaGun *)0)->next_attack), sizeof( ((rvmWeaponPlasmaGun *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponPlasmaGun *)0)->spread), sizeof( ((rvmWeaponPlasmaGun *)0)->spread ) },
	{ "const idSoundShader *", "snd_lowammo", (int)(&((rvmWeaponPlasmaGun *)0)->snd_lowammo), sizeof( ((rvmWeaponPlasmaGun *)0)->snd_lowammo ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponChainGun::Invoke(rvmWeaponChainGun *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	if(functionNameHash == 73785) { // SpinUp
		cls->SpinUp();
		return 0;
	};
	if(functionNameHash == 100305) { // SpinDown
		cls->SpinDown();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponChainGun_typeInfo[] = {
	{ ": idAnimatedEntity *", "world_model", (int)(&((rvmWeaponChainGun *)0)->world_model), sizeof( ((rvmWeaponChainGun *)0)->world_model ) },
	{ "jointHandle_t", "world_barrel_joint", (int)(&((rvmWeaponChainGun *)0)->world_barrel_joint), sizeof( ((rvmWeaponChainGun *)0)->world_barrel_joint ) },
	{ "jointHandle_t", "barrel_joint", (int)(&((rvmWeaponChainGun *)0)->barrel_joint), sizeof( ((rvmWeaponChainGun *)0)->barrel_joint ) },
	{ "float", "barrel_angle", (int)(&((rvmWeaponChainGun *)0)->barrel_angle), sizeof( ((rvmWeaponChainGun *)0)->barrel_angle ) },
	{ "float", "current_rate", (int)(&((rvmWeaponChainGun *)0)->current_rate), sizeof( ((rvmWeaponChainGun *)0)->current_rate ) },
	{ "float", "start_rate", (int)(&((rvmWeaponChainGun *)0)->start_rate), sizeof( ((rvmWeaponChainGun *)0)->start_rate ) },
	{ "float", "end_rate", (int)(&((rvmWeaponChainGun *)0)->end_rate), sizeof( ((rvmWeaponChainGun *)0)->end_rate ) },
	{ "float", "spin_start", (int)(&((rvmWeaponChainGun *)0)->spin_start), sizeof( ((rvmWeaponChainGun *)0)->spin_start ) },
	{ "float", "spin_end", (int)(&((rvmWeaponChainGun *)0)->spin_end), sizeof( ((rvmWeaponChainGun *)0)->spin_end ) },
	{ "float", "spread", (int)(&((rvmWeaponChainGun *)0)->spread), sizeof( ((rvmWeaponChainGun *)0)->spread ) },
	{ "int", "numSkipFrames", (int)(&((rvmWeaponChainGun *)0)->numSkipFrames), sizeof( ((rvmWeaponChainGun *)0)->numSkipFrames ) },
	{ "const idSoundShader *", "snd_windup", (int)(&((rvmWeaponChainGun *)0)->snd_windup), sizeof( ((rvmWeaponChainGun *)0)->snd_windup ) },
	{ "const idSoundShader *", "snd_winddown", (int)(&((rvmWeaponChainGun *)0)->snd_winddown), sizeof( ((rvmWeaponChainGun *)0)->snd_winddown ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponRocketLauncher::Invoke(rvmWeaponRocketLauncher *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponRocketLauncher_typeInfo[] = {
	{ "float", "next_attack", (int)(&((rvmWeaponRocketLauncher *)0)->next_attack), sizeof( ((rvmWeaponRocketLauncher *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponRocketLauncher *)0)->spread), sizeof( ((rvmWeaponRocketLauncher *)0)->spread ) },
	{ "idStr", "skin_invisible", (int)(&((rvmWeaponRocketLauncher *)0)->skin_invisible), sizeof( ((rvmWeaponRocketLauncher *)0)->skin_invisible ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponBFG::Invoke(rvmWeaponBFG *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponBFG_typeInfo[] = {
	{ "float", "next_attack", (int)(&((rvmWeaponBFG *)0)->next_attack), sizeof( ((rvmWeaponBFG *)0)->next_attack ) },
	{ "float", "spread", (int)(&((rvmWeaponBFG *)0)->spread), sizeof( ((rvmWeaponBFG *)0)->spread ) },
	{ "float", "fuse_start", (int)(&((rvmWeaponBFG *)0)->fuse_start), sizeof( ((rvmWeaponBFG *)0)->fuse_start ) },
	{ "float", "fuse_end", (int)(&((rvmWeaponBFG *)0)->fuse_end), sizeof( ((rvmWeaponBFG *)0)->fuse_end ) },
	{ "float", "powerLevel", (int)(&((rvmWeaponBFG *)0)->powerLevel), sizeof( ((rvmWeaponBFG *)0)->powerLevel ) },
	{ "float", "fire_time", (int)(&((rvmWeaponBFG *)0)->fire_time), sizeof( ((rvmWeaponBFG *)0)->fire_time ) },
	{ NULL, 0 }
};

intptr_t rvmWeaponGrabber::Invoke(rvmWeaponGrabber *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 60556) { // Raise
		cls->Raise();
		return 0;
	};
	if(functionNameHash == 46077) { // Idle
		cls->Idle();
		return 0;
	};
	if(functionNameHash == 47046) { // Fire
		cls->Fire();
		return 0;
	};
	if(functionNameHash == 63107) { // Lower
		cls->Lower();
		return 0;
	};
	if(functionNameHash == 72819) { // Reload
		cls->Reload();
		return 0;
	};
	if(functionNameHash == 81139) { // CanFire
		cls->CanFire();
		return 0;
	};
	if(functionNameHash == 162113) { // HasWaitSignal
		cls->HasWaitSignal();
		return 0;
	};
	if(functionNameHash == 126807) { // StopActive
		cls->StopActive();
		return 0;
	};
	if(functionNameHash == 225303) { // StartWarningSound
		cls->StartWarningSound();
		return 0;
	};
	if(functionNameHash == 237121) { // UpdateWarningSound
		cls->UpdateWarningSound();
		return 0;
	};
	if(functionNameHash == 176832) { // UpdateGuiLight
		cls->UpdateGuiLight();
		return 0;
	};
	return 0;

};

static classVariableInfo_t rvmWeaponGrabber_typeInfo[] = {
	{ "const idSoundShader *", "snd_fireloop", (int)(&((rvmWeaponGrabber *)0)->snd_fireloop), sizeof( ((rvmWeaponGrabber *)0)->snd_fireloop ) },
	{ "const idSoundShader *", "snd_electroloop", (int)(&((rvmWeaponGrabber *)0)->snd_electroloop), sizeof( ((rvmWeaponGrabber *)0)->snd_electroloop ) },
	{ "const idSoundShader *", "snd_mainfire", (int)(&((rvmWeaponGrabber *)0)->snd_mainfire), sizeof( ((rvmWeaponGrabber *)0)->snd_mainfire ) },
	{ "const idSoundShader *", "snd_cangrab", (int)(&((rvmWeaponGrabber *)0)->snd_cangrab), sizeof( ((rvmWeaponGrabber *)0)->snd_cangrab ) },
	{ "const idSoundShader *", "snd_warning", (int)(&((rvmWeaponGrabber *)0)->snd_warning), sizeof( ((rvmWeaponGrabber *)0)->snd_warning ) },
	{ "const idSoundShader *", "snd_stopfire", (int)(&((rvmWeaponGrabber *)0)->snd_stopfire), sizeof( ((rvmWeaponGrabber *)0)->snd_stopfire ) },
	{ ": float", "next_attack", (int)(&((rvmWeaponGrabber *)0)->next_attack), sizeof( ((rvmWeaponGrabber *)0)->next_attack ) },
	{ "float", "fireStartTime", (int)(&((rvmWeaponGrabber *)0)->fireStartTime), sizeof( ((rvmWeaponGrabber *)0)->fireStartTime ) },
	{ "bool", "warningBeep1", (int)(&((rvmWeaponGrabber *)0)->warningBeep1), sizeof( ((rvmWeaponGrabber *)0)->warningBeep1 ) },
	{ "bool", "warningBeep2", (int)(&((rvmWeaponGrabber *)0)->warningBeep2), sizeof( ((rvmWeaponGrabber *)0)->warningBeep2 ) },
	{ "bool", "warningBeep3", (int)(&((rvmWeaponGrabber *)0)->warningBeep3), sizeof( ((rvmWeaponGrabber *)0)->warningBeep3 ) },
	{ "bool", "warningBeep4", (int)(&((rvmWeaponGrabber *)0)->warningBeep4), sizeof( ((rvmWeaponGrabber *)0)->warningBeep4 ) },
	{ "float", "grabberState", (int)(&((rvmWeaponGrabber *)0)->grabberState), sizeof( ((rvmWeaponGrabber *)0)->grabberState ) },
	{ NULL, 0 }
};

static classVariableInfo_t widgetTransition_t_typeInfo[] = {
	{ "const char *", "animationName", (int)(&((widgetTransition_t *)0)->animationName), sizeof( ((widgetTransition_t *)0)->animationName ) },
	{ "idStaticList < const char * , 4 >", "prefixes", (int)(&((widgetTransition_t *)0)->prefixes), sizeof( ((widgetTransition_t *)0)->prefixes ) },
	{ NULL, 0 }
};

static classVariableInfo_t scoreboardInfo_t_typeInfo[] = {
	{ "idList < idStr , TAG_IDLIB_LIST_MENU >", "values", (int)(&((scoreboardInfo_t *)0)->values), sizeof( ((scoreboardInfo_t *)0)->values ) },
	{ "int", "index", (int)(&((scoreboardInfo_t *)0)->index), sizeof( ((scoreboardInfo_t *)0)->index ) },
	{ "voiceStateDisplay_t", "voiceState", (int)(&((scoreboardInfo_t *)0)->voiceState), sizeof( ((scoreboardInfo_t *)0)->voiceState ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSort_SavesByDate_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idMenuDataSource_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idWidgetEvent_typeInfo[] = {
	{ "widgetEvent_t", "type", (int)(&((idWidgetEvent *)0)->type), sizeof( ((idWidgetEvent *)0)->type ) },
	{ "int", "arg", (int)(&((idWidgetEvent *)0)->arg), sizeof( ((idWidgetEvent *)0)->arg ) },
	{ "idSWFScriptObject *", "thisObject", (int)(&((idWidgetEvent *)0)->thisObject), sizeof( ((idWidgetEvent *)0)->thisObject ) },
	{ "idSWFParmList", "parms", (int)(&((idWidgetEvent *)0)->parms), sizeof( ((idWidgetEvent *)0)->parms ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWidgetAction_typeInfo[] = {
	{ ": widgetAction_t", "action", (int)(&((idWidgetAction *)0)->action), sizeof( ((idWidgetAction *)0)->action ) },
	{ "idSWFParmList", "parms", (int)(&((idWidgetAction *)0)->parms), sizeof( ((idWidgetAction *)0)->parms ) },
	{ "idSWFScriptFunction *", "scriptFunction", (int)(&((idWidgetAction *)0)->scriptFunction), sizeof( ((idWidgetAction *)0)->scriptFunction ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_WrapWidgetSWFEvent_typeInfo[] = {
	{ ": idMenuWidget *", "targetWidget", (int)(&((idMenuWidget::WrapWidgetSWFEvent *)0)->targetWidget), sizeof( ((idMenuWidget::WrapWidgetSWFEvent *)0)->targetWidget ) },
	{ "widgetEvent_t", "targetEvent", (int)(&((idMenuWidget::WrapWidgetSWFEvent *)0)->targetEvent), sizeof( ((idMenuWidget::WrapWidgetSWFEvent *)0)->targetEvent ) },
	{ "int", "targetEventArg", (int)(&((idMenuWidget::WrapWidgetSWFEvent *)0)->targetEventArg), sizeof( ((idMenuWidget::WrapWidgetSWFEvent *)0)->targetEventArg ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_typeInfo[] = {
	{ ": bool", "handlerIsParent", (int)(&((idMenuWidget *)0)->handlerIsParent), sizeof( ((idMenuWidget *)0)->handlerIsParent ) },
	{ "idMenuHandler *", "menuData", (int)(&((idMenuWidget *)0)->menuData), sizeof( ((idMenuWidget *)0)->menuData ) },
	{ "idSWF *", "swfObj", (int)(&((idMenuWidget *)0)->swfObj), sizeof( ((idMenuWidget *)0)->swfObj ) },
	{ "idSWFSpriteInstance *", "boundSprite", (int)(&((idMenuWidget *)0)->boundSprite), sizeof( ((idMenuWidget *)0)->boundSprite ) },
	{ "idMenuWidget *", "parent", (int)(&((idMenuWidget *)0)->parent), sizeof( ((idMenuWidget *)0)->parent ) },
	{ "idList < idStr , TAG_IDLIB_LIST_MENU >", "spritePath", (int)(&((idMenuWidget *)0)->spritePath), sizeof( ((idMenuWidget *)0)->spritePath ) },
	{ "idMenuWidgetList", "children", (int)(&((idMenuWidget *)0)->children), sizeof( ((idMenuWidget *)0)->children ) },
	{ "idMenuWidgetList", "observers", (int)(&((idMenuWidget *)0)->observers), sizeof( ((idMenuWidget *)0)->observers ) },
	{ "idList < idList < idWidgetAction , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "eventActions", (int)(&((idMenuWidget *)0)->eventActions), sizeof( ((idMenuWidget *)0)->eventActions ) },
	{ "idStaticList < int , MAX_WIDGET_EVENT >", "eventActionLookup", (int)(&((idMenuWidget *)0)->eventActionLookup), sizeof( ((idMenuWidget *)0)->eventActionLookup ) },
	{ "idMenuDataSource *", "dataSource", (int)(&((idMenuWidget *)0)->dataSource), sizeof( ((idMenuWidget *)0)->dataSource ) },
	{ "int", "dataSourceFieldIndex", (int)(&((idMenuWidget *)0)->dataSourceFieldIndex), sizeof( ((idMenuWidget *)0)->dataSourceFieldIndex ) },
	{ "int", "focusIndex", (int)(&((idMenuWidget *)0)->focusIndex), sizeof( ((idMenuWidget *)0)->focusIndex ) },
	{ "widgetState_t", "widgetState", (int)(&((idMenuWidget *)0)->widgetState), sizeof( ((idMenuWidget *)0)->widgetState ) },
	{ "int", "refCount", (int)(&((idMenuWidget *)0)->refCount), sizeof( ((idMenuWidget *)0)->refCount ) },
	{ "bool", "noAutoFree", (int)(&((idMenuWidget *)0)->noAutoFree), sizeof( ((idMenuWidget *)0)->noAutoFree ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_Button_typeInfo[] = {
	{ "idList < idStr , TAG_IDLIB_LIST_MENU >", "values", (int)(&((idMenuWidget_Button *)0)->values), sizeof( ((idMenuWidget_Button *)0)->values ) },
	{ "idStr", "btnLabel", (int)(&((idMenuWidget_Button *)0)->btnLabel), sizeof( ((idMenuWidget_Button *)0)->btnLabel ) },
	{ "idStr", "description", (int)(&((idMenuWidget_Button *)0)->description), sizeof( ((idMenuWidget_Button *)0)->description ) },
	{ "animState_t", "animState", (int)(&((idMenuWidget_Button *)0)->animState), sizeof( ((idMenuWidget_Button *)0)->animState ) },
	{ "const idMaterial *", "img", (int)(&((idMenuWidget_Button *)0)->img), sizeof( ((idMenuWidget_Button *)0)->img ) },
	{ "idSWFScriptFunction *", "scriptFunction", (int)(&((idMenuWidget_Button *)0)->scriptFunction), sizeof( ((idMenuWidget_Button *)0)->scriptFunction ) },
	{ "bool", "ignoreColor", (int)(&((idMenuWidget_Button *)0)->ignoreColor), sizeof( ((idMenuWidget_Button *)0)->ignoreColor ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_LobbyButton_typeInfo[] = {
	{ ": idStr", "name", (int)(&((idMenuWidget_LobbyButton *)0)->name), sizeof( ((idMenuWidget_LobbyButton *)0)->name ) },
	{ "voiceStateDisplay_t", "voiceState", (int)(&((idMenuWidget_LobbyButton *)0)->voiceState), sizeof( ((idMenuWidget_LobbyButton *)0)->voiceState ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ScoreboardButton_typeInfo[] = {
	{ ": voiceStateDisplay_t", "voiceState", (int)(&((idMenuWidget_ScoreboardButton *)0)->voiceState), sizeof( ((idMenuWidget_ScoreboardButton *)0)->voiceState ) },
	{ "int", "index", (int)(&((idMenuWidget_ScoreboardButton *)0)->index), sizeof( ((idMenuWidget_ScoreboardButton *)0)->index ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ControlButton_typeInfo[] = {
	{ ": menuOption_t", "optionType", (int)(&((idMenuWidget_ControlButton *)0)->optionType), sizeof( ((idMenuWidget_ControlButton *)0)->optionType ) },
	{ "bool", "disabled", (int)(&((idMenuWidget_ControlButton *)0)->disabled), sizeof( ((idMenuWidget_ControlButton *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ServerButton_typeInfo[] = {
	{ ": idStr", "serverName", (int)(&((idMenuWidget_ServerButton *)0)->serverName), sizeof( ((idMenuWidget_ServerButton *)0)->serverName ) },
	{ "int", "index", (int)(&((idMenuWidget_ServerButton *)0)->index), sizeof( ((idMenuWidget_ServerButton *)0)->index ) },
	{ "int", "players", (int)(&((idMenuWidget_ServerButton *)0)->players), sizeof( ((idMenuWidget_ServerButton *)0)->players ) },
	{ "int", "maxPlayers", (int)(&((idMenuWidget_ServerButton *)0)->maxPlayers), sizeof( ((idMenuWidget_ServerButton *)0)->maxPlayers ) },
	{ "bool", "joinable", (int)(&((idMenuWidget_ServerButton *)0)->joinable), sizeof( ((idMenuWidget_ServerButton *)0)->joinable ) },
	{ "bool", "validMap", (int)(&((idMenuWidget_ServerButton *)0)->validMap), sizeof( ((idMenuWidget_ServerButton *)0)->validMap ) },
	{ "idStrId", "mapName", (int)(&((idMenuWidget_ServerButton *)0)->mapName), sizeof( ((idMenuWidget_ServerButton *)0)->mapName ) },
	{ "idStr", "modeName", (int)(&((idMenuWidget_ServerButton *)0)->modeName), sizeof( ((idMenuWidget_ServerButton *)0)->modeName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_NavButton_typeInfo[] = {
	{ ": int", "navIndex", (int)(&((idMenuWidget_NavButton *)0)->navIndex), sizeof( ((idMenuWidget_NavButton *)0)->navIndex ) },
	{ "float", "xPos", (int)(&((idMenuWidget_NavButton *)0)->xPos), sizeof( ((idMenuWidget_NavButton *)0)->xPos ) },
	{ "navWidgetState_t", "navState", (int)(&((idMenuWidget_NavButton *)0)->navState), sizeof( ((idMenuWidget_NavButton *)0)->navState ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_MenuButton_typeInfo[] = {
	{ ": float", "xPos", (int)(&((idMenuWidget_MenuButton *)0)->xPos), sizeof( ((idMenuWidget_MenuButton *)0)->xPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_List_typeInfo[] = {
	{ ": int", "numVisibleOptions", (int)(&((idMenuWidget_List *)0)->numVisibleOptions), sizeof( ((idMenuWidget_List *)0)->numVisibleOptions ) },
	{ "int", "viewOffset", (int)(&((idMenuWidget_List *)0)->viewOffset), sizeof( ((idMenuWidget_List *)0)->viewOffset ) },
	{ "int", "viewIndex", (int)(&((idMenuWidget_List *)0)->viewIndex), sizeof( ((idMenuWidget_List *)0)->viewIndex ) },
	{ "bool", "allowWrapping", (int)(&((idMenuWidget_List *)0)->allowWrapping), sizeof( ((idMenuWidget_List *)0)->allowWrapping ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBrowserEntry_t_typeInfo[] = {
	{ ": idStr", "serverName", (int)(&((idBrowserEntry_t *)0)->serverName), sizeof( ((idBrowserEntry_t *)0)->serverName ) },
	{ "int", "index", (int)(&((idBrowserEntry_t *)0)->index), sizeof( ((idBrowserEntry_t *)0)->index ) },
	{ "int", "players", (int)(&((idBrowserEntry_t *)0)->players), sizeof( ((idBrowserEntry_t *)0)->players ) },
	{ "int", "maxPlayers", (int)(&((idBrowserEntry_t *)0)->maxPlayers), sizeof( ((idBrowserEntry_t *)0)->maxPlayers ) },
	{ "bool", "joinable", (int)(&((idBrowserEntry_t *)0)->joinable), sizeof( ((idBrowserEntry_t *)0)->joinable ) },
	{ "bool", "validMap", (int)(&((idBrowserEntry_t *)0)->validMap), sizeof( ((idBrowserEntry_t *)0)->validMap ) },
	{ "idStrId", "mapName", (int)(&((idBrowserEntry_t *)0)->mapName), sizeof( ((idBrowserEntry_t *)0)->mapName ) },
	{ "idStr", "modeName", (int)(&((idBrowserEntry_t *)0)->modeName), sizeof( ((idBrowserEntry_t *)0)->modeName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_GameBrowserList_typeInfo[] = {
	{ ": idList < idBrowserEntry_t >", "games", (int)(&((idMenuWidget_GameBrowserList *)0)->games), sizeof( ((idMenuWidget_GameBrowserList *)0)->games ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_Carousel_typeInfo[] = {
	{ ": int", "numVisibleOptions", (int)(&((idMenuWidget_Carousel *)0)->numVisibleOptions), sizeof( ((idMenuWidget_Carousel *)0)->numVisibleOptions ) },
	{ "int", "viewIndex", (int)(&((idMenuWidget_Carousel *)0)->viewIndex), sizeof( ((idMenuWidget_Carousel *)0)->viewIndex ) },
	{ "int", "moveToIndex", (int)(&((idMenuWidget_Carousel *)0)->moveToIndex), sizeof( ((idMenuWidget_Carousel *)0)->moveToIndex ) },
	{ "int", "moveDiff", (int)(&((idMenuWidget_Carousel *)0)->moveDiff), sizeof( ((idMenuWidget_Carousel *)0)->moveDiff ) },
	{ "bool", "fastScroll", (int)(&((idMenuWidget_Carousel *)0)->fastScroll), sizeof( ((idMenuWidget_Carousel *)0)->fastScroll ) },
	{ "bool", "scrollLeft", (int)(&((idMenuWidget_Carousel *)0)->scrollLeft), sizeof( ((idMenuWidget_Carousel *)0)->scrollLeft ) },
	{ "idList < const idMaterial * >", "imgList", (int)(&((idMenuWidget_Carousel *)0)->imgList), sizeof( ((idMenuWidget_Carousel *)0)->imgList ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_Help_typeInfo[] = {
	{ ": idStr", "lastFocusedMessage", (int)(&((idMenuWidget_Help *)0)->lastFocusedMessage), sizeof( ((idMenuWidget_Help *)0)->lastFocusedMessage ) },
	{ "idStr", "lastHoveredMessage", (int)(&((idMenuWidget_Help *)0)->lastHoveredMessage), sizeof( ((idMenuWidget_Help *)0)->lastHoveredMessage ) },
	{ "bool", "hideMessage", (int)(&((idMenuWidget_Help *)0)->hideMessage), sizeof( ((idMenuWidget_Help *)0)->hideMessage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_CommandBar_buttonInfo_t_typeInfo[] = {
	{ "idStr", "label", (int)(&((idMenuWidget_CommandBar::buttonInfo_t *)0)->label), sizeof( ((idMenuWidget_CommandBar::buttonInfo_t *)0)->label ) },
	{ "idWidgetAction", "action", (int)(&((idMenuWidget_CommandBar::buttonInfo_t *)0)->action), sizeof( ((idMenuWidget_CommandBar::buttonInfo_t *)0)->action ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_CommandBar_typeInfo[] = {
	{ ": idStaticList < buttonInfo_t , MAX_BUTTONS >", "buttons", (int)(&((idMenuWidget_CommandBar *)0)->buttons), sizeof( ((idMenuWidget_CommandBar *)0)->buttons ) },
	{ "alignment_t", "alignment", (int)(&((idMenuWidget_CommandBar *)0)->alignment), sizeof( ((idMenuWidget_CommandBar *)0)->alignment ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_LobbyList_typeInfo[] = {
	{ ": idList < idStr , TAG_IDLIB_LIST_MENU >", "headings", (int)(&((idMenuWidget_LobbyList *)0)->headings), sizeof( ((idMenuWidget_LobbyList *)0)->headings ) },
	{ "int", "numEntries", (int)(&((idMenuWidget_LobbyList *)0)->numEntries), sizeof( ((idMenuWidget_LobbyList *)0)->numEntries ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_DynamicList_typeInfo[] = {
	{ ": idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "listItemInfo", (int)(&((idMenuWidget_DynamicList *)0)->listItemInfo), sizeof( ((idMenuWidget_DynamicList *)0)->listItemInfo ) },
	{ "bool", "controlList", (int)(&((idMenuWidget_DynamicList *)0)->controlList), sizeof( ((idMenuWidget_DynamicList *)0)->controlList ) },
	{ "bool", "ignoreColor", (int)(&((idMenuWidget_DynamicList *)0)->ignoreColor), sizeof( ((idMenuWidget_DynamicList *)0)->ignoreColor ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ScoreboardList_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_NavBar_typeInfo[] = {
	{ ": idList < idStr , TAG_IDLIB_LIST_MENU >", "headings", (int)(&((idMenuWidget_NavBar *)0)->headings), sizeof( ((idMenuWidget_NavBar *)0)->headings ) },
	{ "float", "initialPos", (int)(&((idMenuWidget_NavBar *)0)->initialPos), sizeof( ((idMenuWidget_NavBar *)0)->initialPos ) },
	{ "float", "buttonPos", (int)(&((idMenuWidget_NavBar *)0)->buttonPos), sizeof( ((idMenuWidget_NavBar *)0)->buttonPos ) },
	{ "float", "leftSpacer", (int)(&((idMenuWidget_NavBar *)0)->leftSpacer), sizeof( ((idMenuWidget_NavBar *)0)->leftSpacer ) },
	{ "float", "rightSpacer", (int)(&((idMenuWidget_NavBar *)0)->rightSpacer), sizeof( ((idMenuWidget_NavBar *)0)->rightSpacer ) },
	{ "float", "selectedSpacer", (int)(&((idMenuWidget_NavBar *)0)->selectedSpacer), sizeof( ((idMenuWidget_NavBar *)0)->selectedSpacer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_MenuBar_typeInfo[] = {
	{ ": idList < idStr , TAG_IDLIB_LIST_MENU >", "headings", (int)(&((idMenuWidget_MenuBar *)0)->headings), sizeof( ((idMenuWidget_MenuBar *)0)->headings ) },
	{ "float", "totalWidth", (int)(&((idMenuWidget_MenuBar *)0)->totalWidth), sizeof( ((idMenuWidget_MenuBar *)0)->totalWidth ) },
	{ "float", "buttonPos", (int)(&((idMenuWidget_MenuBar *)0)->buttonPos), sizeof( ((idMenuWidget_MenuBar *)0)->buttonPos ) },
	{ "float", "rightSpacer", (int)(&((idMenuWidget_MenuBar *)0)->rightSpacer), sizeof( ((idMenuWidget_MenuBar *)0)->rightSpacer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_PDA_UserData_typeInfo[] = {
	{ ": int", "pdaIndex", (int)(&((idMenuWidget_PDA_UserData *)0)->pdaIndex), sizeof( ((idMenuWidget_PDA_UserData *)0)->pdaIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ScrollBar_typeInfo[] = {
	{ "float", "yTop", (int)(&((idMenuWidget_ScrollBar *)0)->yTop), sizeof( ((idMenuWidget_ScrollBar *)0)->yTop ) },
	{ "float", "yBot", (int)(&((idMenuWidget_ScrollBar *)0)->yBot), sizeof( ((idMenuWidget_ScrollBar *)0)->yBot ) },
	{ "bool", "dragging", (int)(&((idMenuWidget_ScrollBar *)0)->dragging), sizeof( ((idMenuWidget_ScrollBar *)0)->dragging ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_InfoBox_typeInfo[] = {
	{ ": idMenuWidget_ScrollBar *", "scrollbar", (int)(&((idMenuWidget_InfoBox *)0)->scrollbar), sizeof( ((idMenuWidget_InfoBox *)0)->scrollbar ) },
	{ "idStr", "heading", (int)(&((idMenuWidget_InfoBox *)0)->heading), sizeof( ((idMenuWidget_InfoBox *)0)->heading ) },
	{ "idStr", "info", (int)(&((idMenuWidget_InfoBox *)0)->info), sizeof( ((idMenuWidget_InfoBox *)0)->info ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_PDA_Objective_typeInfo[] = {
	{ ": int", "pdaIndex", (int)(&((idMenuWidget_PDA_Objective *)0)->pdaIndex), sizeof( ((idMenuWidget_PDA_Objective *)0)->pdaIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_Shell_SaveInfo_typeInfo[] = {
	{ ": int", "loadIndex", (int)(&((idMenuWidget_Shell_SaveInfo *)0)->loadIndex), sizeof( ((idMenuWidget_Shell_SaveInfo *)0)->loadIndex ) },
	{ "bool", "forSaveScreen", (int)(&((idMenuWidget_Shell_SaveInfo *)0)->forSaveScreen), sizeof( ((idMenuWidget_Shell_SaveInfo *)0)->forSaveScreen ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_PDA_AudioFiles_typeInfo[] = {
	{ ": int", "pdaIndex", (int)(&((idMenuWidget_PDA_AudioFiles *)0)->pdaIndex), sizeof( ((idMenuWidget_PDA_AudioFiles *)0)->pdaIndex ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "audioFileNames", (int)(&((idMenuWidget_PDA_AudioFiles *)0)->audioFileNames), sizeof( ((idMenuWidget_PDA_AudioFiles *)0)->audioFileNames ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_PDA_EmailInbox_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "emailList", (int)(&((idMenuWidget_PDA_EmailInbox *)0)->emailList), sizeof( ((idMenuWidget_PDA_EmailInbox *)0)->emailList ) },
	{ "idMenuWidget_ScrollBar *", "scrollbar", (int)(&((idMenuWidget_PDA_EmailInbox *)0)->scrollbar), sizeof( ((idMenuWidget_PDA_EmailInbox *)0)->scrollbar ) },
	{ "int", "pdaIndex", (int)(&((idMenuWidget_PDA_EmailInbox *)0)->pdaIndex), sizeof( ((idMenuWidget_PDA_EmailInbox *)0)->pdaIndex ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "emailInfo", (int)(&((idMenuWidget_PDA_EmailInbox *)0)->emailInfo), sizeof( ((idMenuWidget_PDA_EmailInbox *)0)->emailInfo ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_ItemAssignment_typeInfo[] = {
	{ ": const idMaterial *[4]", "images", (int)(&((idMenuWidget_ItemAssignment *)0)->images), sizeof( ((idMenuWidget_ItemAssignment *)0)->images ) },
	{ "int", "slotIndex", (int)(&((idMenuWidget_ItemAssignment *)0)->slotIndex), sizeof( ((idMenuWidget_ItemAssignment *)0)->slotIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuWidget_PDA_VideoInfo_typeInfo[] = {
	{ ": int", "videoIndex", (int)(&((idMenuWidget_PDA_VideoInfo *)0)->videoIndex), sizeof( ((idMenuWidget_PDA_VideoInfo *)0)->videoIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWidgetActionHandler_typeInfo[] = {
	{ ": idMenuWidget *", "targetWidget", (int)(&((idWidgetActionHandler *)0)->targetWidget), sizeof( ((idWidgetActionHandler *)0)->targetWidget ) },
	{ "actionHandler_t", "type", (int)(&((idWidgetActionHandler *)0)->type), sizeof( ((idWidgetActionHandler *)0)->type ) },
	{ "widgetEvent_t", "targetEvent", (int)(&((idWidgetActionHandler *)0)->targetEvent), sizeof( ((idWidgetActionHandler *)0)->targetEvent ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLBRowBlock_typeInfo[] = {
	{ "int", "lastTime", (int)(&((idLBRowBlock *)0)->lastTime), sizeof( ((idLBRowBlock *)0)->lastTime ) },
	{ "int", "startIndex", (int)(&((idLBRowBlock *)0)->startIndex), sizeof( ((idLBRowBlock *)0)->startIndex ) },
	{ "idList < idLeaderboardCallback :: row_t >", "rows", (int)(&((idLBRowBlock *)0)->rows), sizeof( ((idLBRowBlock *)0)->rows ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLBCache_typeInfo[] = {
	{ "idLBRowBlock[5]", "rowBlocks", (int)(&((idLBCache *)0)->rowBlocks), sizeof( ((idLBCache *)0)->rowBlocks ) },
	{ "const leaderboardDefinition_t *", "def", (int)(&((idLBCache *)0)->def), sizeof( ((idLBCache *)0)->def ) },
	{ "leaderboardFilterMode_t", "filter", (int)(&((idLBCache *)0)->filter), sizeof( ((idLBCache *)0)->filter ) },
	{ "const leaderboardDefinition_t *", "pendingDef", (int)(&((idLBCache *)0)->pendingDef), sizeof( ((idLBCache *)0)->pendingDef ) },
	{ "leaderboardFilterMode_t", "pendingFilter", (int)(&((idLBCache *)0)->pendingFilter), sizeof( ((idLBCache *)0)->pendingFilter ) },
	{ "bool", "requestingRows", (int)(&((idLBCache *)0)->requestingRows), sizeof( ((idLBCache *)0)->requestingRows ) },
	{ "bool", "loadingNewLeaderboard", (int)(&((idLBCache *)0)->loadingNewLeaderboard), sizeof( ((idLBCache *)0)->loadingNewLeaderboard ) },
	{ "int", "numRowsInLeaderboard", (int)(&((idLBCache *)0)->numRowsInLeaderboard), sizeof( ((idLBCache *)0)->numRowsInLeaderboard ) },
	{ "int", "entryIndex", (int)(&((idLBCache *)0)->entryIndex), sizeof( ((idLBCache *)0)->entryIndex ) },
	{ "int", "rowOffset", (int)(&((idLBCache *)0)->rowOffset), sizeof( ((idLBCache *)0)->rowOffset ) },
	{ "int", "localIndex", (int)(&((idLBCache *)0)->localIndex), sizeof( ((idLBCache *)0)->localIndex ) },
	{ "leaderboardDisplayError_t", "errorCode", (int)(&((idLBCache *)0)->errorCode), sizeof( ((idLBCache *)0)->errorCode ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_typeInfo[] = {
	{ ": idSWF *", "menuGUI", (int)(&((idMenuScreen *)0)->menuGUI), sizeof( ((idMenuScreen *)0)->menuGUI ) },
	{ "mainMenuTransition_t", "transition", (int)(&((idMenuScreen *)0)->transition), sizeof( ((idMenuScreen *)0)->transition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_PDA_UserData_typeInfo[] = {
	{ ": idMenuWidget_PDA_UserData", "pdaUserData", (int)(&((idMenuScreen_PDA_UserData *)0)->pdaUserData), sizeof( ((idMenuScreen_PDA_UserData *)0)->pdaUserData ) },
	{ "idMenuWidget_PDA_Objective", "pdaObjectiveSimple", (int)(&((idMenuScreen_PDA_UserData *)0)->pdaObjectiveSimple), sizeof( ((idMenuScreen_PDA_UserData *)0)->pdaObjectiveSimple ) },
	{ "idMenuWidget_PDA_AudioFiles", "pdaAudioFiles", (int)(&((idMenuScreen_PDA_UserData *)0)->pdaAudioFiles), sizeof( ((idMenuScreen_PDA_UserData *)0)->pdaAudioFiles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_PDA_UserEmails_typeInfo[] = {
	{ ": idMenuWidget_PDA_EmailInbox", "pdaInbox", (int)(&((idMenuScreen_PDA_UserEmails *)0)->pdaInbox), sizeof( ((idMenuScreen_PDA_UserEmails *)0)->pdaInbox ) },
	{ "idMenuWidget_InfoBox", "emailInfo", (int)(&((idMenuScreen_PDA_UserEmails *)0)->emailInfo), sizeof( ((idMenuScreen_PDA_UserEmails *)0)->emailInfo ) },
	{ "idMenuWidget_ScrollBar", "emailScrollbar", (int)(&((idMenuScreen_PDA_UserEmails *)0)->emailScrollbar), sizeof( ((idMenuScreen_PDA_UserEmails *)0)->emailScrollbar ) },
	{ "bool", "readingEmails", (int)(&((idMenuScreen_PDA_UserEmails *)0)->readingEmails), sizeof( ((idMenuScreen_PDA_UserEmails *)0)->readingEmails ) },
	{ "bool", "scrollEmailInfo", (int)(&((idMenuScreen_PDA_UserEmails *)0)->scrollEmailInfo), sizeof( ((idMenuScreen_PDA_UserEmails *)0)->scrollEmailInfo ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_PDA_VideoDisks_typeInfo[] = {
	{ ": idMenuWidget_ScrollBar", "scrollbar", (int)(&((idMenuScreen_PDA_VideoDisks *)0)->scrollbar), sizeof( ((idMenuScreen_PDA_VideoDisks *)0)->scrollbar ) },
	{ "idMenuWidget_DynamicList", "pdaVideoList", (int)(&((idMenuScreen_PDA_VideoDisks *)0)->pdaVideoList), sizeof( ((idMenuScreen_PDA_VideoDisks *)0)->pdaVideoList ) },
	{ "idMenuWidget_PDA_VideoInfo", "videoDetails", (int)(&((idMenuScreen_PDA_VideoDisks *)0)->videoDetails), sizeof( ((idMenuScreen_PDA_VideoDisks *)0)->videoDetails ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "videoItems", (int)(&((idMenuScreen_PDA_VideoDisks *)0)->videoItems), sizeof( ((idMenuScreen_PDA_VideoDisks *)0)->videoItems ) },
	{ "const idDeclVideo *", "activeVideo", (int)(&((idMenuScreen_PDA_VideoDisks *)0)->activeVideo), sizeof( ((idMenuScreen_PDA_VideoDisks *)0)->activeVideo ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_PDA_Inventory_typeInfo[] = {
	{ ": idMenuWidget_Carousel", "itemList", (int)(&((idMenuScreen_PDA_Inventory *)0)->itemList), sizeof( ((idMenuScreen_PDA_Inventory *)0)->itemList ) },
	{ "idMenuWidget_InfoBox", "infoBox", (int)(&((idMenuScreen_PDA_Inventory *)0)->infoBox), sizeof( ((idMenuScreen_PDA_Inventory *)0)->infoBox ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Root_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Root *)0)->options), sizeof( ((idMenuScreen_Shell_Root *)0)->options ) },
	{ "idMenuWidget_Help *", "helpWidget", (int)(&((idMenuScreen_Shell_Root *)0)->helpWidget), sizeof( ((idMenuScreen_Shell_Root *)0)->helpWidget ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Pause_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Pause *)0)->options), sizeof( ((idMenuScreen_Shell_Pause *)0)->options ) },
	{ "bool", "isMpPause", (int)(&((idMenuScreen_Shell_Pause *)0)->isMpPause), sizeof( ((idMenuScreen_Shell_Pause *)0)->isMpPause ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_PressStart_typeInfo[] = {
	{ ": idMenuWidget_Button *", "startButton", (int)(&((idMenuScreen_Shell_PressStart *)0)->startButton), sizeof( ((idMenuScreen_Shell_PressStart *)0)->startButton ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_PressStart *)0)->options), sizeof( ((idMenuScreen_Shell_PressStart *)0)->options ) },
	{ "idMenuWidget_Carousel *", "itemList", (int)(&((idMenuScreen_Shell_PressStart *)0)->itemList), sizeof( ((idMenuScreen_Shell_PressStart *)0)->itemList ) },
	{ "const idMaterial *", "doomCover", (int)(&((idMenuScreen_Shell_PressStart *)0)->doomCover), sizeof( ((idMenuScreen_Shell_PressStart *)0)->doomCover ) },
	{ "const idMaterial *", "doom2Cover", (int)(&((idMenuScreen_Shell_PressStart *)0)->doom2Cover), sizeof( ((idMenuScreen_Shell_PressStart *)0)->doom2Cover ) },
	{ "const idMaterial *", "doom3Cover", (int)(&((idMenuScreen_Shell_PressStart *)0)->doom3Cover), sizeof( ((idMenuScreen_Shell_PressStart *)0)->doom3Cover ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_GameSelect_typeInfo[] = {
	{ ": idMenuWidget_Button *", "startButton", (int)(&((idMenuScreen_Shell_GameSelect *)0)->startButton), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->startButton ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_GameSelect *)0)->options), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->options ) },
	{ "idMenuWidget_Carousel *", "itemList", (int)(&((idMenuScreen_Shell_GameSelect *)0)->itemList), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->itemList ) },
	{ "const idMaterial *", "doomCover", (int)(&((idMenuScreen_Shell_GameSelect *)0)->doomCover), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->doomCover ) },
	{ "const idMaterial *", "doom2Cover", (int)(&((idMenuScreen_Shell_GameSelect *)0)->doom2Cover), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->doom2Cover ) },
	{ "const idMaterial *", "doom3Cover", (int)(&((idMenuScreen_Shell_GameSelect *)0)->doom3Cover), sizeof( ((idMenuScreen_Shell_GameSelect *)0)->doom3Cover ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Singleplayer_typeInfo[] = {
	{ ": bool", "canContinue", (int)(&((idMenuScreen_Shell_Singleplayer *)0)->canContinue), sizeof( ((idMenuScreen_Shell_Singleplayer *)0)->canContinue ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Singleplayer *)0)->options), sizeof( ((idMenuScreen_Shell_Singleplayer *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Singleplayer *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Singleplayer *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Settings_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Settings *)0)->options), sizeof( ((idMenuScreen_Shell_Settings *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Settings *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Settings *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t creditInfo_t_typeInfo[] = {
	{ "int", "type", (int)(&((creditInfo_t *)0)->type), sizeof( ((creditInfo_t *)0)->type ) },
	{ "idStr", "entry", (int)(&((creditInfo_t *)0)->entry), sizeof( ((creditInfo_t *)0)->entry ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Credits_typeInfo[] = {
	{ ": idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Credits *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Credits *)0)->btnBack ) },
	{ "idList < creditInfo_t >", "creditList", (int)(&((idMenuScreen_Shell_Credits *)0)->creditList), sizeof( ((idMenuScreen_Shell_Credits *)0)->creditList ) },
	{ "int", "creditIndex", (int)(&((idMenuScreen_Shell_Credits *)0)->creditIndex), sizeof( ((idMenuScreen_Shell_Credits *)0)->creditIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Resolution_optionData_t_typeInfo[] = {
	{ "int", "fullscreen", (int)(&((idMenuScreen_Shell_Resolution::optionData_t *)0)->fullscreen), sizeof( ((idMenuScreen_Shell_Resolution::optionData_t *)0)->fullscreen ) },
	{ "int", "vidmode", (int)(&((idMenuScreen_Shell_Resolution::optionData_t *)0)->vidmode), sizeof( ((idMenuScreen_Shell_Resolution::optionData_t *)0)->vidmode ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Resolution_typeInfo[] = {
	{ "idList < optionData_t >", "optionData", (int)(&((idMenuScreen_Shell_Resolution *)0)->optionData), sizeof( ((idMenuScreen_Shell_Resolution *)0)->optionData ) },
	{ "optionData_t", "originalOption", (int)(&((idMenuScreen_Shell_Resolution *)0)->originalOption), sizeof( ((idMenuScreen_Shell_Resolution *)0)->originalOption ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Resolution *)0)->options), sizeof( ((idMenuScreen_Shell_Resolution *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Resolution *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Resolution *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Difficulty_typeInfo[] = {
	{ ": bool", "nightmareUnlocked", (int)(&((idMenuScreen_Shell_Difficulty *)0)->nightmareUnlocked), sizeof( ((idMenuScreen_Shell_Difficulty *)0)->nightmareUnlocked ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Difficulty *)0)->options), sizeof( ((idMenuScreen_Shell_Difficulty *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Difficulty *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Difficulty *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Playstation_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Playstation *)0)->options), sizeof( ((idMenuScreen_Shell_Playstation *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Playstation *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Playstation *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_ModeSelect_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_ModeSelect *)0)->options), sizeof( ((idMenuScreen_Shell_ModeSelect *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_ModeSelect *)0)->btnBack), sizeof( ((idMenuScreen_Shell_ModeSelect *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_GameBrowser_typeInfo[] = {
	{ ": idMenuWidget_GameBrowserList *", "listWidget", (int)(&((idMenuScreen_Shell_GameBrowser *)0)->listWidget), sizeof( ((idMenuScreen_Shell_GameBrowser *)0)->listWidget ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_GameBrowser *)0)->btnBack), sizeof( ((idMenuScreen_Shell_GameBrowser *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Leaderboards_doomLeaderboard_t_typeInfo[] = {
	{ "const leaderboardDefinition_t *", "lb", (int)(&((idMenuScreen_Shell_Leaderboards::doomLeaderboard_t *)0)->lb), sizeof( ((idMenuScreen_Shell_Leaderboards::doomLeaderboard_t *)0)->lb ) },
	{ "idStr", "name", (int)(&((idMenuScreen_Shell_Leaderboards::doomLeaderboard_t *)0)->name), sizeof( ((idMenuScreen_Shell_Leaderboards::doomLeaderboard_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Leaderboards_typeInfo[] = {
	{ "idList < doomLeaderboard_t >", "leaderboards", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->leaderboards), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->leaderboards ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->options), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->btnBack ) },
	{ "idMenuWidget_Button *", "btnPrev", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->btnPrev), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->btnPrev ) },
	{ "idMenuWidget_Button *", "btnNext", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->btnNext), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->btnNext ) },
	{ "idMenuWidget_Button *", "btnPageDwn", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->btnPageDwn), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->btnPageDwn ) },
	{ "idMenuWidget_Button *", "btnPageUp", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->btnPageUp), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->btnPageUp ) },
	{ "idLBCache *", "lbCache", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->lbCache), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->lbCache ) },
	{ "idSWFTextInstance *", "lbHeading", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->lbHeading), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->lbHeading ) },
	{ "int", "lbIndex", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->lbIndex), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->lbIndex ) },
	{ "bool", "refreshLeaderboard", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->refreshLeaderboard), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->refreshLeaderboard ) },
	{ "bool", "refreshWhenMasterIsOnline", (int)(&((idMenuScreen_Shell_Leaderboards *)0)->refreshWhenMasterIsOnline), sizeof( ((idMenuScreen_Shell_Leaderboards *)0)->refreshWhenMasterIsOnline ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Bindings_typeInfo[] = {
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Bindings *)0)->options), sizeof( ((idMenuScreen_Shell_Bindings *)0)->options ) },
	{ "idMenuWidget_Button *", "restoreDefault", (int)(&((idMenuScreen_Shell_Bindings *)0)->restoreDefault), sizeof( ((idMenuScreen_Shell_Bindings *)0)->restoreDefault ) },
	{ "idSWFSpriteInstance *", "blinder", (int)(&((idMenuScreen_Shell_Bindings *)0)->blinder), sizeof( ((idMenuScreen_Shell_Bindings *)0)->blinder ) },
	{ "idSWFSpriteInstance *", "txtBlinder", (int)(&((idMenuScreen_Shell_Bindings *)0)->txtBlinder), sizeof( ((idMenuScreen_Shell_Bindings *)0)->txtBlinder ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Bindings *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Bindings *)0)->btnBack ) },
	{ "bool", "bindingsChanged", (int)(&((idMenuScreen_Shell_Bindings *)0)->bindingsChanged), sizeof( ((idMenuScreen_Shell_Bindings *)0)->bindingsChanged ) },
	{ NULL, 0 }
};

static classVariableInfo_t devOption_t_typeInfo[] = {
	{ "const char *", "map", (int)(&((devOption_t *)0)->map), sizeof( ((devOption_t *)0)->map ) },
	{ "const char *", "name", (int)(&((devOption_t *)0)->name), sizeof( ((devOption_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Dev_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Dev *)0)->options), sizeof( ((idMenuScreen_Shell_Dev *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Dev *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Dev *)0)->btnBack ) },
	{ "idList < devOption_t , TAG_IDLIB_LIST_MENU >", "devOptions", (int)(&((idMenuScreen_Shell_Dev *)0)->devOptions), sizeof( ((idMenuScreen_Shell_Dev *)0)->devOptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_NewGame_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_NewGame *)0)->options), sizeof( ((idMenuScreen_Shell_NewGame *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_NewGame *)0)->btnBack), sizeof( ((idMenuScreen_Shell_NewGame *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Load_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Load *)0)->options), sizeof( ((idMenuScreen_Shell_Load *)0)->options ) },
	{ "idMenuWidget_Shell_SaveInfo *", "saveInfo", (int)(&((idMenuScreen_Shell_Load *)0)->saveInfo), sizeof( ((idMenuScreen_Shell_Load *)0)->saveInfo ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Load *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Load *)0)->btnBack ) },
	{ "idMenuWidget_Button *", "btnDelete", (int)(&((idMenuScreen_Shell_Load *)0)->btnDelete), sizeof( ((idMenuScreen_Shell_Load *)0)->btnDelete ) },
	{ "saveGameDetailsList_t", "sortedSaves", (int)(&((idMenuScreen_Shell_Load *)0)->sortedSaves), sizeof( ((idMenuScreen_Shell_Load *)0)->sortedSaves ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Save_typeInfo[] = {
	{ ": idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Save *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Save *)0)->btnBack ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Save *)0)->options), sizeof( ((idMenuScreen_Shell_Save *)0)->options ) },
	{ "idMenuWidget_Shell_SaveInfo *", "saveInfo", (int)(&((idMenuScreen_Shell_Save *)0)->saveInfo), sizeof( ((idMenuScreen_Shell_Save *)0)->saveInfo ) },
	{ "idMenuWidget_Button *", "btnDelete", (int)(&((idMenuScreen_Shell_Save *)0)->btnDelete), sizeof( ((idMenuScreen_Shell_Save *)0)->btnDelete ) },
	{ "saveGameDetailsList_t", "sortedSaves", (int)(&((idMenuScreen_Shell_Save *)0)->sortedSaves), sizeof( ((idMenuScreen_Shell_Save *)0)->sortedSaves ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_GameOptions_idMenuDataSource_GameSettings_typeInfo[] = {
	{ ": idStaticList < idSWFScriptVar , MAX_GAME_FIELDS >", "fields", (int)(&((idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings *)0)->fields), sizeof( ((idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings *)0)->fields ) },
	{ "idStaticList < idSWFScriptVar , MAX_GAME_FIELDS >", "originalFields", (int)(&((idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings *)0)->originalFields), sizeof( ((idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings *)0)->originalFields ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_GameOptions_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_GameOptions *)0)->options), sizeof( ((idMenuScreen_Shell_GameOptions *)0)->options ) },
	{ "idMenuDataSource_GameSettings", "systemData", (int)(&((idMenuScreen_Shell_GameOptions *)0)->systemData), sizeof( ((idMenuScreen_Shell_GameOptions *)0)->systemData ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_GameOptions *)0)->btnBack), sizeof( ((idMenuScreen_Shell_GameOptions *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_MatchSettings_idMenuDataSource_MatchSettings_typeInfo[] = {
	{ "idStaticList < idSWFScriptVar , MAX_MATCH_FIELDS >", "fields", (int)(&((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->fields), sizeof( ((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->fields ) },
	{ "idStaticList < idSWFScriptVar , MAX_MATCH_FIELDS >", "originalFields", (int)(&((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->originalFields), sizeof( ((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->originalFields ) },
	{ "bool", "updateMap", (int)(&((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->updateMap), sizeof( ((idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings *)0)->updateMap ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_MatchSettings_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_MatchSettings *)0)->options), sizeof( ((idMenuScreen_Shell_MatchSettings *)0)->options ) },
	{ "idMenuDataSource_MatchSettings", "matchData", (int)(&((idMenuScreen_Shell_MatchSettings *)0)->matchData), sizeof( ((idMenuScreen_Shell_MatchSettings *)0)->matchData ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_MatchSettings *)0)->btnBack), sizeof( ((idMenuScreen_Shell_MatchSettings *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Controls_idMenuDataSource_ControlSettings_typeInfo[] = {
	{ ": idStaticList < idSWFScriptVar , MAX_CONTROL_FIELDS >", "fields", (int)(&((idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings *)0)->fields), sizeof( ((idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings *)0)->fields ) },
	{ "idStaticList < idSWFScriptVar , MAX_CONTROL_FIELDS >", "originalFields", (int)(&((idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings *)0)->originalFields), sizeof( ((idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings *)0)->originalFields ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Controls_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Controls *)0)->options), sizeof( ((idMenuScreen_Shell_Controls *)0)->options ) },
	{ "idMenuDataSource_ControlSettings", "controlData", (int)(&((idMenuScreen_Shell_Controls *)0)->controlData), sizeof( ((idMenuScreen_Shell_Controls *)0)->controlData ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Controls *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Controls *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Gamepad_idMenuDataSource_GamepadSettings_typeInfo[] = {
	{ ": idStaticList < idSWFScriptVar , MAX_GAMEPAD_FIELDS >", "fields", (int)(&((idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings *)0)->fields), sizeof( ((idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings *)0)->fields ) },
	{ "idStaticList < idSWFScriptVar , MAX_GAMEPAD_FIELDS >", "originalFields", (int)(&((idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings *)0)->originalFields), sizeof( ((idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings *)0)->originalFields ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_Gamepad_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_Gamepad *)0)->options), sizeof( ((idMenuScreen_Shell_Gamepad *)0)->options ) },
	{ "idMenuDataSource_GamepadSettings", "gamepadData", (int)(&((idMenuScreen_Shell_Gamepad *)0)->gamepadData), sizeof( ((idMenuScreen_Shell_Gamepad *)0)->gamepadData ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_Gamepad *)0)->btnBack), sizeof( ((idMenuScreen_Shell_Gamepad *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_ControllerLayout_idMenuDataSource_LayoutSettings_typeInfo[] = {
	{ ": idStaticList < idSWFScriptVar , MAX_LAYOUT_FIELDS >", "fields", (int)(&((idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings *)0)->fields), sizeof( ((idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings *)0)->fields ) },
	{ "idStaticList < idSWFScriptVar , MAX_LAYOUT_FIELDS >", "originalFields", (int)(&((idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings *)0)->originalFields), sizeof( ((idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings *)0)->originalFields ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_ControllerLayout_typeInfo[] = {
	{ ": idMenuDataSource_LayoutSettings", "layoutData", (int)(&((idMenuScreen_Shell_ControllerLayout *)0)->layoutData), sizeof( ((idMenuScreen_Shell_ControllerLayout *)0)->layoutData ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_ControllerLayout *)0)->options), sizeof( ((idMenuScreen_Shell_ControllerLayout *)0)->options ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_ControllerLayout *)0)->btnBack), sizeof( ((idMenuScreen_Shell_ControllerLayout *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_SystemOptions_idMenuDataSource_SystemSettings_typeInfo[] = {
	{ ": int", "originalFramerate", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalFramerate), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalFramerate ) },
	{ "int", "originalAntialias", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalAntialias), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalAntialias ) },
	{ "int", "originalVsync", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalVsync), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalVsync ) },
	{ "float", "originalBrightness", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalBrightness), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalBrightness ) },
	{ "float", "originalVolume", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalVolume), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->originalVolume ) },
	{ "idList < vidMode_t >", "modeList", (int)(&((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->modeList), sizeof( ((idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings *)0)->modeList ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_SystemOptions_typeInfo[] = {
	{ ": idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_SystemOptions *)0)->options), sizeof( ((idMenuScreen_Shell_SystemOptions *)0)->options ) },
	{ "idMenuDataSource_SystemSettings", "systemData", (int)(&((idMenuScreen_Shell_SystemOptions *)0)->systemData), sizeof( ((idMenuScreen_Shell_SystemOptions *)0)->systemData ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_SystemOptions *)0)->btnBack), sizeof( ((idMenuScreen_Shell_SystemOptions *)0)->btnBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_PartyLobby_typeInfo[] = {
	{ ": bool", "isHost", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->isHost), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->isHost ) },
	{ "bool", "isPeer", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->isPeer), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->isPeer ) },
	{ "bool", "inParty", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->inParty), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->inParty ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->options), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->options ) },
	{ "idMenuWidget_LobbyList *", "lobby", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->lobby), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->lobby ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->btnBack), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->btnBack ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "menuOptions", (int)(&((idMenuScreen_Shell_PartyLobby *)0)->menuOptions), sizeof( ((idMenuScreen_Shell_PartyLobby *)0)->menuOptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Shell_GameLobby_typeInfo[] = {
	{ ": int", "longCountdown", (int)(&((idMenuScreen_Shell_GameLobby *)0)->longCountdown), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->longCountdown ) },
	{ "int", "longCountRemaining", (int)(&((idMenuScreen_Shell_GameLobby *)0)->longCountRemaining), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->longCountRemaining ) },
	{ "int", "shortCountdown", (int)(&((idMenuScreen_Shell_GameLobby *)0)->shortCountdown), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->shortCountdown ) },
	{ "bool", "isHost", (int)(&((idMenuScreen_Shell_GameLobby *)0)->isHost), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->isHost ) },
	{ "bool", "isPeer", (int)(&((idMenuScreen_Shell_GameLobby *)0)->isPeer), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->isPeer ) },
	{ "bool", "privateGameLobby", (int)(&((idMenuScreen_Shell_GameLobby *)0)->privateGameLobby), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->privateGameLobby ) },
	{ "idMenuWidget_DynamicList *", "options", (int)(&((idMenuScreen_Shell_GameLobby *)0)->options), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->options ) },
	{ "idMenuWidget_LobbyList *", "lobby", (int)(&((idMenuScreen_Shell_GameLobby *)0)->lobby), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->lobby ) },
	{ "idMenuWidget_Button *", "btnBack", (int)(&((idMenuScreen_Shell_GameLobby *)0)->btnBack), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->btnBack ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "menuOptions", (int)(&((idMenuScreen_Shell_GameLobby *)0)->menuOptions), sizeof( ((idMenuScreen_Shell_GameLobby *)0)->menuOptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_HUD_typeInfo[] = {
	{ ": idSWFScriptObject *", "weaponInfo", (int)(&((idMenuScreen_HUD *)0)->weaponInfo), sizeof( ((idMenuScreen_HUD *)0)->weaponInfo ) },
	{ "idSWFScriptObject *", "playerInfo", (int)(&((idMenuScreen_HUD *)0)->playerInfo), sizeof( ((idMenuScreen_HUD *)0)->playerInfo ) },
	{ "idSWFScriptObject *", "stamina", (int)(&((idMenuScreen_HUD *)0)->stamina), sizeof( ((idMenuScreen_HUD *)0)->stamina ) },
	{ "idSWFScriptObject *", "weaponName", (int)(&((idMenuScreen_HUD *)0)->weaponName), sizeof( ((idMenuScreen_HUD *)0)->weaponName ) },
	{ "idSWFScriptObject *", "weaponPills", (int)(&((idMenuScreen_HUD *)0)->weaponPills), sizeof( ((idMenuScreen_HUD *)0)->weaponPills ) },
	{ "idSWFScriptObject *", "downloadPda", (int)(&((idMenuScreen_HUD *)0)->downloadPda), sizeof( ((idMenuScreen_HUD *)0)->downloadPda ) },
	{ "idSWFScriptObject *", "downloadVideo", (int)(&((idMenuScreen_HUD *)0)->downloadVideo), sizeof( ((idMenuScreen_HUD *)0)->downloadVideo ) },
	{ "idSWFScriptObject *", "tipInfo", (int)(&((idMenuScreen_HUD *)0)->tipInfo), sizeof( ((idMenuScreen_HUD *)0)->tipInfo ) },
	{ "idSWFScriptObject *", "mpChat", (int)(&((idMenuScreen_HUD *)0)->mpChat), sizeof( ((idMenuScreen_HUD *)0)->mpChat ) },
	{ "idSWFScriptObject *", "mpWeapons", (int)(&((idMenuScreen_HUD *)0)->mpWeapons), sizeof( ((idMenuScreen_HUD *)0)->mpWeapons ) },
	{ "idSWFSpriteInstance *", "healthBorder", (int)(&((idMenuScreen_HUD *)0)->healthBorder), sizeof( ((idMenuScreen_HUD *)0)->healthBorder ) },
	{ "idSWFSpriteInstance *", "healthPulse", (int)(&((idMenuScreen_HUD *)0)->healthPulse), sizeof( ((idMenuScreen_HUD *)0)->healthPulse ) },
	{ "idSWFSpriteInstance *", "armorFrame", (int)(&((idMenuScreen_HUD *)0)->armorFrame), sizeof( ((idMenuScreen_HUD *)0)->armorFrame ) },
	{ "idSWFSpriteInstance *", "security", (int)(&((idMenuScreen_HUD *)0)->security), sizeof( ((idMenuScreen_HUD *)0)->security ) },
	{ "idSWFSpriteInstance *", "newPDADownload", (int)(&((idMenuScreen_HUD *)0)->newPDADownload), sizeof( ((idMenuScreen_HUD *)0)->newPDADownload ) },
	{ "idSWFSpriteInstance *", "newVideoDownload", (int)(&((idMenuScreen_HUD *)0)->newVideoDownload), sizeof( ((idMenuScreen_HUD *)0)->newVideoDownload ) },
	{ "idSWFSpriteInstance *", "newPDA", (int)(&((idMenuScreen_HUD *)0)->newPDA), sizeof( ((idMenuScreen_HUD *)0)->newPDA ) },
	{ "idSWFSpriteInstance *", "newVideo", (int)(&((idMenuScreen_HUD *)0)->newVideo), sizeof( ((idMenuScreen_HUD *)0)->newVideo ) },
	{ "idSWFSpriteInstance *", "audioLog", (int)(&((idMenuScreen_HUD *)0)->audioLog), sizeof( ((idMenuScreen_HUD *)0)->audioLog ) },
	{ "idSWFSpriteInstance *", "communication", (int)(&((idMenuScreen_HUD *)0)->communication), sizeof( ((idMenuScreen_HUD *)0)->communication ) },
	{ "idSWFSpriteInstance *", "oxygen", (int)(&((idMenuScreen_HUD *)0)->oxygen), sizeof( ((idMenuScreen_HUD *)0)->oxygen ) },
	{ "idSWFSpriteInstance *", "objective", (int)(&((idMenuScreen_HUD *)0)->objective), sizeof( ((idMenuScreen_HUD *)0)->objective ) },
	{ "idSWFSpriteInstance *", "objectiveComplete", (int)(&((idMenuScreen_HUD *)0)->objectiveComplete), sizeof( ((idMenuScreen_HUD *)0)->objectiveComplete ) },
	{ "idSWFSpriteInstance *", "ammoInfo", (int)(&((idMenuScreen_HUD *)0)->ammoInfo), sizeof( ((idMenuScreen_HUD *)0)->ammoInfo ) },
	{ "idSWFSpriteInstance *", "weaponImg", (int)(&((idMenuScreen_HUD *)0)->weaponImg), sizeof( ((idMenuScreen_HUD *)0)->weaponImg ) },
	{ "idSWFSpriteInstance *", "newWeapon", (int)(&((idMenuScreen_HUD *)0)->newWeapon), sizeof( ((idMenuScreen_HUD *)0)->newWeapon ) },
	{ "idSWFSpriteInstance *", "pickupInfo", (int)(&((idMenuScreen_HUD *)0)->pickupInfo), sizeof( ((idMenuScreen_HUD *)0)->pickupInfo ) },
	{ "idSWFSpriteInstance *", "talkCursor", (int)(&((idMenuScreen_HUD *)0)->talkCursor), sizeof( ((idMenuScreen_HUD *)0)->talkCursor ) },
	{ "idSWFSpriteInstance *", "combatCursor", (int)(&((idMenuScreen_HUD *)0)->combatCursor), sizeof( ((idMenuScreen_HUD *)0)->combatCursor ) },
	{ "idSWFSpriteInstance *", "grabberCursor", (int)(&((idMenuScreen_HUD *)0)->grabberCursor), sizeof( ((idMenuScreen_HUD *)0)->grabberCursor ) },
	{ "idSWFSpriteInstance *", "bsInfo", (int)(&((idMenuScreen_HUD *)0)->bsInfo), sizeof( ((idMenuScreen_HUD *)0)->bsInfo ) },
	{ "idSWFSpriteInstance *", "soulcubeInfo", (int)(&((idMenuScreen_HUD *)0)->soulcubeInfo), sizeof( ((idMenuScreen_HUD *)0)->soulcubeInfo ) },
	{ "idSWFSpriteInstance *", "newItem", (int)(&((idMenuScreen_HUD *)0)->newItem), sizeof( ((idMenuScreen_HUD *)0)->newItem ) },
	{ "idSWFSpriteInstance *", "respawnMessage", (int)(&((idMenuScreen_HUD *)0)->respawnMessage), sizeof( ((idMenuScreen_HUD *)0)->respawnMessage ) },
	{ "idSWFSpriteInstance *", "flashlight", (int)(&((idMenuScreen_HUD *)0)->flashlight), sizeof( ((idMenuScreen_HUD *)0)->flashlight ) },
	{ "idSWFSpriteInstance *", "mpChatObject", (int)(&((idMenuScreen_HUD *)0)->mpChatObject), sizeof( ((idMenuScreen_HUD *)0)->mpChatObject ) },
	{ "idSWFSpriteInstance *", "mpConnection", (int)(&((idMenuScreen_HUD *)0)->mpConnection), sizeof( ((idMenuScreen_HUD *)0)->mpConnection ) },
	{ "idSWFSpriteInstance *", "mpInfo", (int)(&((idMenuScreen_HUD *)0)->mpInfo), sizeof( ((idMenuScreen_HUD *)0)->mpInfo ) },
	{ "idSWFSpriteInstance *", "mpHitInfo", (int)(&((idMenuScreen_HUD *)0)->mpHitInfo), sizeof( ((idMenuScreen_HUD *)0)->mpHitInfo ) },
	{ "idSWFTextInstance *", "locationName", (int)(&((idMenuScreen_HUD *)0)->locationName), sizeof( ((idMenuScreen_HUD *)0)->locationName ) },
	{ "idSWFTextInstance *", "securityText", (int)(&((idMenuScreen_HUD *)0)->securityText), sizeof( ((idMenuScreen_HUD *)0)->securityText ) },
	{ "idSWFTextInstance *", "newPDAName", (int)(&((idMenuScreen_HUD *)0)->newPDAName), sizeof( ((idMenuScreen_HUD *)0)->newPDAName ) },
	{ "idSWFTextInstance *", "newPDAHeading", (int)(&((idMenuScreen_HUD *)0)->newPDAHeading), sizeof( ((idMenuScreen_HUD *)0)->newPDAHeading ) },
	{ "idSWFTextInstance *", "newVideoHeading", (int)(&((idMenuScreen_HUD *)0)->newVideoHeading), sizeof( ((idMenuScreen_HUD *)0)->newVideoHeading ) },
	{ "idSWFTextInstance *", "mpMessage", (int)(&((idMenuScreen_HUD *)0)->mpMessage), sizeof( ((idMenuScreen_HUD *)0)->mpMessage ) },
	{ "idSWFTextInstance *", "mpTime", (int)(&((idMenuScreen_HUD *)0)->mpTime), sizeof( ((idMenuScreen_HUD *)0)->mpTime ) },
	{ "int", "audioLogPrevTime", (int)(&((idMenuScreen_HUD *)0)->audioLogPrevTime), sizeof( ((idMenuScreen_HUD *)0)->audioLogPrevTime ) },
	{ "int", "commPrevTime", (int)(&((idMenuScreen_HUD *)0)->commPrevTime), sizeof( ((idMenuScreen_HUD *)0)->commPrevTime ) },
	{ "bool", "oxygenComm", (int)(&((idMenuScreen_HUD *)0)->oxygenComm), sizeof( ((idMenuScreen_HUD *)0)->oxygenComm ) },
	{ "bool", "inVaccuum", (int)(&((idMenuScreen_HUD *)0)->inVaccuum), sizeof( ((idMenuScreen_HUD *)0)->inVaccuum ) },
	{ "idStr", "objTitle", (int)(&((idMenuScreen_HUD *)0)->objTitle), sizeof( ((idMenuScreen_HUD *)0)->objTitle ) },
	{ "idStr", "objDesc", (int)(&((idMenuScreen_HUD *)0)->objDesc), sizeof( ((idMenuScreen_HUD *)0)->objDesc ) },
	{ "const idMaterial *", "objScreenshot", (int)(&((idMenuScreen_HUD *)0)->objScreenshot), sizeof( ((idMenuScreen_HUD *)0)->objScreenshot ) },
	{ "idStr", "objCompleteTitle", (int)(&((idMenuScreen_HUD *)0)->objCompleteTitle), sizeof( ((idMenuScreen_HUD *)0)->objCompleteTitle ) },
	{ "cursorState_t", "cursorState", (int)(&((idMenuScreen_HUD *)0)->cursorState), sizeof( ((idMenuScreen_HUD *)0)->cursorState ) },
	{ "int", "cursorInCombat", (int)(&((idMenuScreen_HUD *)0)->cursorInCombat), sizeof( ((idMenuScreen_HUD *)0)->cursorInCombat ) },
	{ "int", "cursorTalking", (int)(&((idMenuScreen_HUD *)0)->cursorTalking), sizeof( ((idMenuScreen_HUD *)0)->cursorTalking ) },
	{ "int", "cursorItem", (int)(&((idMenuScreen_HUD *)0)->cursorItem), sizeof( ((idMenuScreen_HUD *)0)->cursorItem ) },
	{ "int", "cursorGrabber", (int)(&((idMenuScreen_HUD *)0)->cursorGrabber), sizeof( ((idMenuScreen_HUD *)0)->cursorGrabber ) },
	{ "int", "cursorNone", (int)(&((idMenuScreen_HUD *)0)->cursorNone), sizeof( ((idMenuScreen_HUD *)0)->cursorNone ) },
	{ "idStr", "cursorAction", (int)(&((idMenuScreen_HUD *)0)->cursorAction), sizeof( ((idMenuScreen_HUD *)0)->cursorAction ) },
	{ "idStr", "cursorFocus", (int)(&((idMenuScreen_HUD *)0)->cursorFocus), sizeof( ((idMenuScreen_HUD *)0)->cursorFocus ) },
	{ "bool", "showSoulCubeInfoOnLoad", (int)(&((idMenuScreen_HUD *)0)->showSoulCubeInfoOnLoad), sizeof( ((idMenuScreen_HUD *)0)->showSoulCubeInfoOnLoad ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Scoreboard_typeInfo[] = {
	{ ": idMenuWidget_ScoreboardList *", "playerList", (int)(&((idMenuScreen_Scoreboard *)0)->playerList), sizeof( ((idMenuScreen_Scoreboard *)0)->playerList ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Scoreboard_CTF_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idMenuScreen_Scoreboard_Team_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t actionRepeater_t_typeInfo[] = {
	{ "idMenuWidget *", "widget", (int)(&((actionRepeater_t *)0)->widget), sizeof( ((actionRepeater_t *)0)->widget ) },
	{ "idWidgetEvent", "event", (int)(&((actionRepeater_t *)0)->event), sizeof( ((actionRepeater_t *)0)->event ) },
	{ "idWidgetAction", "action", (int)(&((actionRepeater_t *)0)->action), sizeof( ((actionRepeater_t *)0)->action ) },
	{ "int", "numRepetitions", (int)(&((actionRepeater_t *)0)->numRepetitions), sizeof( ((actionRepeater_t *)0)->numRepetitions ) },
	{ "int", "nextRepeatTime", (int)(&((actionRepeater_t *)0)->nextRepeatTime), sizeof( ((actionRepeater_t *)0)->nextRepeatTime ) },
	{ "int", "repeatDelay", (int)(&((actionRepeater_t *)0)->repeatDelay), sizeof( ((actionRepeater_t *)0)->repeatDelay ) },
	{ "int", "screenIndex", (int)(&((actionRepeater_t *)0)->screenIndex), sizeof( ((actionRepeater_t *)0)->screenIndex ) },
	{ "bool", "isActive", (int)(&((actionRepeater_t *)0)->isActive), sizeof( ((actionRepeater_t *)0)->isActive ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpScoreboardInfo_typeInfo[] = {
	{ "voiceStateDisplay_t", "voiceState", (int)(&((mpScoreboardInfo *)0)->voiceState), sizeof( ((mpScoreboardInfo *)0)->voiceState ) },
	{ "int", "score", (int)(&((mpScoreboardInfo *)0)->score), sizeof( ((mpScoreboardInfo *)0)->score ) },
	{ "int", "wins", (int)(&((mpScoreboardInfo *)0)->wins), sizeof( ((mpScoreboardInfo *)0)->wins ) },
	{ "int", "ping", (int)(&((mpScoreboardInfo *)0)->ping), sizeof( ((mpScoreboardInfo *)0)->ping ) },
	{ "int", "team", (int)(&((mpScoreboardInfo *)0)->team), sizeof( ((mpScoreboardInfo *)0)->team ) },
	{ "int", "playerNum", (int)(&((mpScoreboardInfo *)0)->playerNum), sizeof( ((mpScoreboardInfo *)0)->playerNum ) },
	{ "idStr", "spectateData", (int)(&((mpScoreboardInfo *)0)->spectateData), sizeof( ((mpScoreboardInfo *)0)->spectateData ) },
	{ "idStr", "name", (int)(&((mpScoreboardInfo *)0)->name), sizeof( ((mpScoreboardInfo *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuHandler_typeInfo[] = {
	{ ": bool", "scrollingMenu", (int)(&((idMenuHandler *)0)->scrollingMenu), sizeof( ((idMenuHandler *)0)->scrollingMenu ) },
	{ "int", "scrollCounter", (int)(&((idMenuHandler *)0)->scrollCounter), sizeof( ((idMenuHandler *)0)->scrollCounter ) },
	{ "int", "activeScreen", (int)(&((idMenuHandler *)0)->activeScreen), sizeof( ((idMenuHandler *)0)->activeScreen ) },
	{ "int", "nextScreen", (int)(&((idMenuHandler *)0)->nextScreen), sizeof( ((idMenuHandler *)0)->nextScreen ) },
	{ "int", "transition", (int)(&((idMenuHandler *)0)->transition), sizeof( ((idMenuHandler *)0)->transition ) },
	{ "int", "platform", (int)(&((idMenuHandler *)0)->platform), sizeof( ((idMenuHandler *)0)->platform ) },
	{ "idSWF *", "gui", (int)(&((idMenuHandler *)0)->gui), sizeof( ((idMenuHandler *)0)->gui ) },
	{ "actionRepeater_t", "actionRepeater", (int)(&((idMenuHandler *)0)->actionRepeater), sizeof( ((idMenuHandler *)0)->actionRepeater ) },
	{ "idMenuScreen *[32]", "menuScreens", (int)(&((idMenuHandler *)0)->menuScreens), sizeof( ((idMenuHandler *)0)->menuScreens ) },
	{ "idList < idMenuWidget * , TAG_IDLIB_LIST_MENU >", "children", (int)(&((idMenuHandler *)0)->children), sizeof( ((idMenuHandler *)0)->children ) },
	{ "idStaticList < idStr , NUM_GUI_SOUNDS >", "sounds", (int)(&((idMenuHandler *)0)->sounds), sizeof( ((idMenuHandler *)0)->sounds ) },
	{ "idMenuWidget_CommandBar *", "cmdBar", (int)(&((idMenuHandler *)0)->cmdBar), sizeof( ((idMenuHandler *)0)->cmdBar ) },
	{ NULL, 0 }
};

static classVariableInfo_t lobbyPlayerInfo_t_typeInfo[] = {
	{ "idStr", "name", (int)(&((lobbyPlayerInfo_t *)0)->name), sizeof( ((lobbyPlayerInfo_t *)0)->name ) },
	{ "int", "partyToken", (int)(&((lobbyPlayerInfo_t *)0)->partyToken), sizeof( ((lobbyPlayerInfo_t *)0)->partyToken ) },
	{ "voiceStateDisplay_t", "voiceState", (int)(&((lobbyPlayerInfo_t *)0)->voiceState), sizeof( ((lobbyPlayerInfo_t *)0)->voiceState ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuHandler_Shell_typeInfo[] = {
	{ ": shellState_t", "state", (int)(&((idMenuHandler_Shell *)0)->state), sizeof( ((idMenuHandler_Shell *)0)->state ) },
	{ "shellState_t", "nextState", (int)(&((idMenuHandler_Shell *)0)->nextState), sizeof( ((idMenuHandler_Shell *)0)->nextState ) },
	{ "bool", "smallFrameShowing", (int)(&((idMenuHandler_Shell *)0)->smallFrameShowing), sizeof( ((idMenuHandler_Shell *)0)->smallFrameShowing ) },
	{ "bool", "largeFrameShowing", (int)(&((idMenuHandler_Shell *)0)->largeFrameShowing), sizeof( ((idMenuHandler_Shell *)0)->largeFrameShowing ) },
	{ "bool", "bgShowing", (int)(&((idMenuHandler_Shell *)0)->bgShowing), sizeof( ((idMenuHandler_Shell *)0)->bgShowing ) },
	{ "bool", "waitForBinding", (int)(&((idMenuHandler_Shell *)0)->waitForBinding), sizeof( ((idMenuHandler_Shell *)0)->waitForBinding ) },
	{ "const char *", "waitBind", (int)(&((idMenuHandler_Shell *)0)->waitBind), sizeof( ((idMenuHandler_Shell *)0)->waitBind ) },
	{ "idList < const char * , TAG_IDLIB_LIST_MENU >", "mpGameModes", (int)(&((idMenuHandler_Shell *)0)->mpGameModes), sizeof( ((idMenuHandler_Shell *)0)->mpGameModes ) },
	{ "idList < mpMap_t , TAG_IDLIB_LIST_MENU >", "mpGameMaps", (int)(&((idMenuHandler_Shell *)0)->mpGameMaps), sizeof( ((idMenuHandler_Shell *)0)->mpGameMaps ) },
	{ "idMenuWidget_MenuBar *", "menuBar", (int)(&((idMenuHandler_Shell *)0)->menuBar), sizeof( ((idMenuHandler_Shell *)0)->menuBar ) },
	{ "idMenuWidget *", "pacifier", (int)(&((idMenuHandler_Shell *)0)->pacifier), sizeof( ((idMenuHandler_Shell *)0)->pacifier ) },
	{ "int", "timeRemaining", (int)(&((idMenuHandler_Shell *)0)->timeRemaining), sizeof( ((idMenuHandler_Shell *)0)->timeRemaining ) },
	{ "int", "nextPeerUpdateMs", (int)(&((idMenuHandler_Shell *)0)->nextPeerUpdateMs), sizeof( ((idMenuHandler_Shell *)0)->nextPeerUpdateMs ) },
	{ "int", "newGameType", (int)(&((idMenuHandler_Shell *)0)->newGameType), sizeof( ((idMenuHandler_Shell *)0)->newGameType ) },
	{ "bool", "inGame", (int)(&((idMenuHandler_Shell *)0)->inGame), sizeof( ((idMenuHandler_Shell *)0)->inGame ) },
	{ "bool", "showingIntro", (int)(&((idMenuHandler_Shell *)0)->showingIntro), sizeof( ((idMenuHandler_Shell *)0)->showingIntro ) },
	{ "bool", "continueWaitForEnumerate", (int)(&((idMenuHandler_Shell *)0)->continueWaitForEnumerate), sizeof( ((idMenuHandler_Shell *)0)->continueWaitForEnumerate ) },
	{ "bool", "gameComplete", (int)(&((idMenuHandler_Shell *)0)->gameComplete), sizeof( ((idMenuHandler_Shell *)0)->gameComplete ) },
	{ "idSWF *", "introGui", (int)(&((idMenuHandler_Shell *)0)->introGui), sizeof( ((idMenuHandler_Shell *)0)->introGui ) },
	{ "const idSoundShader *", "typeSoundShader", (int)(&((idMenuHandler_Shell *)0)->typeSoundShader), sizeof( ((idMenuHandler_Shell *)0)->typeSoundShader ) },
	{ "const idMaterial *", "doom3Intro", (int)(&((idMenuHandler_Shell *)0)->doom3Intro), sizeof( ((idMenuHandler_Shell *)0)->doom3Intro ) },
	{ "const idMaterial *", "roeIntro", (int)(&((idMenuHandler_Shell *)0)->roeIntro), sizeof( ((idMenuHandler_Shell *)0)->roeIntro ) },
	{ "const idMaterial *", "lmIntro", (int)(&((idMenuHandler_Shell *)0)->lmIntro), sizeof( ((idMenuHandler_Shell *)0)->lmIntro ) },
	{ "const idMaterial *", "marsRotation", (int)(&((idMenuHandler_Shell *)0)->marsRotation), sizeof( ((idMenuHandler_Shell *)0)->marsRotation ) },
	{ "idList < idStr , TAG_IDLIB_LIST_MENU >", "navOptions", (int)(&((idMenuHandler_Shell *)0)->navOptions), sizeof( ((idMenuHandler_Shell *)0)->navOptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuHandler_PDA_typeInfo[] = {
	{ ": bool", "audioLogPlaying", (int)(&((idMenuHandler_PDA *)0)->audioLogPlaying), sizeof( ((idMenuHandler_PDA *)0)->audioLogPlaying ) },
	{ "bool", "videoPlaying", (int)(&((idMenuHandler_PDA *)0)->videoPlaying), sizeof( ((idMenuHandler_PDA *)0)->videoPlaying ) },
	{ "idList < idList < idStr , TAG_IDLIB_LIST_MENU > , TAG_IDLIB_LIST_MENU >", "pdaNames", (int)(&((idMenuHandler_PDA *)0)->pdaNames), sizeof( ((idMenuHandler_PDA *)0)->pdaNames ) },
	{ "idList < idStr , TAG_IDLIB_LIST_MENU >", "navOptions", (int)(&((idMenuHandler_PDA *)0)->navOptions), sizeof( ((idMenuHandler_PDA *)0)->navOptions ) },
	{ "const idDeclAudio *", "audioFile", (int)(&((idMenuHandler_PDA *)0)->audioFile), sizeof( ((idMenuHandler_PDA *)0)->audioFile ) },
	{ "idMenuWidget_ScrollBar", "pdaScrollBar", (int)(&((idMenuHandler_PDA *)0)->pdaScrollBar), sizeof( ((idMenuHandler_PDA *)0)->pdaScrollBar ) },
	{ "idMenuWidget_DynamicList", "pdaList", (int)(&((idMenuHandler_PDA *)0)->pdaList), sizeof( ((idMenuHandler_PDA *)0)->pdaList ) },
	{ "idMenuWidget_NavBar", "navBar", (int)(&((idMenuHandler_PDA *)0)->navBar), sizeof( ((idMenuHandler_PDA *)0)->navBar ) },
	{ "idMenuWidget_CommandBar", "commandBarWidget", (int)(&((idMenuHandler_PDA *)0)->commandBarWidget), sizeof( ((idMenuHandler_PDA *)0)->commandBarWidget ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuHandler_HUD_typeInfo[] = {
	{ ": bool", "autoHideTip", (int)(&((idMenuHandler_HUD *)0)->autoHideTip), sizeof( ((idMenuHandler_HUD *)0)->autoHideTip ) },
	{ "int", "tipStartTime", (int)(&((idMenuHandler_HUD *)0)->tipStartTime), sizeof( ((idMenuHandler_HUD *)0)->tipStartTime ) },
	{ "bool", "hiding", (int)(&((idMenuHandler_HUD *)0)->hiding), sizeof( ((idMenuHandler_HUD *)0)->hiding ) },
	{ "bool", "radioMessage", (int)(&((idMenuHandler_HUD *)0)->radioMessage), sizeof( ((idMenuHandler_HUD *)0)->radioMessage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMenuHandler_Scoreboard_typeInfo[] = {
	{ ": int", "redScore", (int)(&((idMenuHandler_Scoreboard *)0)->redScore), sizeof( ((idMenuHandler_Scoreboard *)0)->redScore ) },
	{ "int", "blueScore", (int)(&((idMenuHandler_Scoreboard *)0)->blueScore), sizeof( ((idMenuHandler_Scoreboard *)0)->blueScore ) },
	{ "int", "activationScreen", (int)(&((idMenuHandler_Scoreboard *)0)->activationScreen), sizeof( ((idMenuHandler_Scoreboard *)0)->activationScreen ) },
	{ "idList < mpScoreboardInfo >", "scoreboardInfo", (int)(&((idMenuHandler_Scoreboard *)0)->scoreboardInfo), sizeof( ((idMenuHandler_Scoreboard *)0)->scoreboardInfo ) },
	{ "idList < scoreboardInfo_t , TAG_IDLIB_LIST_MENU >", "redInfo", (int)(&((idMenuHandler_Scoreboard *)0)->redInfo), sizeof( ((idMenuHandler_Scoreboard *)0)->redInfo ) },
	{ "idList < scoreboardInfo_t , TAG_IDLIB_LIST_MENU >", "blueInfo", (int)(&((idMenuHandler_Scoreboard *)0)->blueInfo), sizeof( ((idMenuHandler_Scoreboard *)0)->blueInfo ) },
	{ NULL, 0 }
};

static classVariableInfo_t opcode_t_typeInfo[] = {
	{ "char *", "name", (int)(&((opcode_t *)0)->name), sizeof( ((opcode_t *)0)->name ) },
	{ "char *", "opname", (int)(&((opcode_t *)0)->opname), sizeof( ((opcode_t *)0)->opname ) },
	{ "int", "priority", (int)(&((opcode_t *)0)->priority), sizeof( ((opcode_t *)0)->priority ) },
	{ "bool", "rightAssociative", (int)(&((opcode_t *)0)->rightAssociative), sizeof( ((opcode_t *)0)->rightAssociative ) },
	{ "idVarDef *", "type_a", (int)(&((opcode_t *)0)->type_a), sizeof( ((opcode_t *)0)->type_a ) },
	{ "idVarDef *", "type_b", (int)(&((opcode_t *)0)->type_b), sizeof( ((opcode_t *)0)->type_b ) },
	{ "idVarDef *", "type_c", (int)(&((opcode_t *)0)->type_c), sizeof( ((opcode_t *)0)->type_c ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompiler_typeInfo[] = {
	{ "idParser", "parser", (int)(&((idCompiler *)0)->parser), sizeof( ((idCompiler *)0)->parser ) },
	{ "idParser *", "parserPtr", (int)(&((idCompiler *)0)->parserPtr), sizeof( ((idCompiler *)0)->parserPtr ) },
	{ "idToken", "token", (int)(&((idCompiler *)0)->token), sizeof( ((idCompiler *)0)->token ) },
	{ "idTypeDef *", "immediateType", (int)(&((idCompiler *)0)->immediateType), sizeof( ((idCompiler *)0)->immediateType ) },
	{ "eval_t", "immediate", (int)(&((idCompiler *)0)->immediate), sizeof( ((idCompiler *)0)->immediate ) },
	{ "bool", "eof", (int)(&((idCompiler *)0)->eof), sizeof( ((idCompiler *)0)->eof ) },
	{ "bool", "console", (int)(&((idCompiler *)0)->console), sizeof( ((idCompiler *)0)->console ) },
	{ "bool", "callthread", (int)(&((idCompiler *)0)->callthread), sizeof( ((idCompiler *)0)->callthread ) },
	{ "int", "braceDepth", (int)(&((idCompiler *)0)->braceDepth), sizeof( ((idCompiler *)0)->braceDepth ) },
	{ "int", "loopDepth", (int)(&((idCompiler *)0)->loopDepth), sizeof( ((idCompiler *)0)->loopDepth ) },
	{ "int", "currentLineNumber", (int)(&((idCompiler *)0)->currentLineNumber), sizeof( ((idCompiler *)0)->currentLineNumber ) },
	{ "int", "currentFileNumber", (int)(&((idCompiler *)0)->currentFileNumber), sizeof( ((idCompiler *)0)->currentFileNumber ) },
	{ "int", "errorCount", (int)(&((idCompiler *)0)->errorCount), sizeof( ((idCompiler *)0)->errorCount ) },
	{ "idVarDef *", "scope", (int)(&((idCompiler *)0)->scope), sizeof( ((idCompiler *)0)->scope ) },
	{ "const idVarDef *", "basetype", (int)(&((idCompiler *)0)->basetype), sizeof( ((idCompiler *)0)->basetype ) },
	{ NULL, 0 }
};

static classVariableInfo_t prstack_t_typeInfo[] = {
	{ "int", "s", (int)(&((prstack_t *)0)->s), sizeof( ((prstack_t *)0)->s ) },
	{ "const function_t *", "f", (int)(&((prstack_t *)0)->f), sizeof( ((prstack_t *)0)->f ) },
	{ "int", "stackbase", (int)(&((prstack_t *)0)->stackbase), sizeof( ((prstack_t *)0)->stackbase ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpreter_typeInfo[] = {
	{ ": prstack_t[64]", "callStack", (int)(&((idInterpreter *)0)->callStack), sizeof( ((idInterpreter *)0)->callStack ) },
	{ "int", "callStackDepth", (int)(&((idInterpreter *)0)->callStackDepth), sizeof( ((idInterpreter *)0)->callStackDepth ) },
	{ "int", "maxStackDepth", (int)(&((idInterpreter *)0)->maxStackDepth), sizeof( ((idInterpreter *)0)->maxStackDepth ) },
	{ "byte[6144]", "localstack", (int)(&((idInterpreter *)0)->localstack), sizeof( ((idInterpreter *)0)->localstack ) },
	{ "int", "localstackUsed", (int)(&((idInterpreter *)0)->localstackUsed), sizeof( ((idInterpreter *)0)->localstackUsed ) },
	{ "int", "localstackBase", (int)(&((idInterpreter *)0)->localstackBase), sizeof( ((idInterpreter *)0)->localstackBase ) },
	{ "int", "maxLocalstackUsed", (int)(&((idInterpreter *)0)->maxLocalstackUsed), sizeof( ((idInterpreter *)0)->maxLocalstackUsed ) },
	{ "const function_t *", "currentFunction", (int)(&((idInterpreter *)0)->currentFunction), sizeof( ((idInterpreter *)0)->currentFunction ) },
	{ "int", "instructionPointer", (int)(&((idInterpreter *)0)->instructionPointer), sizeof( ((idInterpreter *)0)->instructionPointer ) },
	{ "int", "popParms", (int)(&((idInterpreter *)0)->popParms), sizeof( ((idInterpreter *)0)->popParms ) },
	{ "const idEventDef *", "multiFrameEvent", (int)(&((idInterpreter *)0)->multiFrameEvent), sizeof( ((idInterpreter *)0)->multiFrameEvent ) },
	{ "idEntity *", "eventEntity", (int)(&((idInterpreter *)0)->eventEntity), sizeof( ((idInterpreter *)0)->eventEntity ) },
	{ "idThread *", "thread", (int)(&((idInterpreter *)0)->thread), sizeof( ((idInterpreter *)0)->thread ) },
	{ ": bool", "doneProcessing", (int)(&((idInterpreter *)0)->doneProcessing), sizeof( ((idInterpreter *)0)->doneProcessing ) },
	{ "bool", "threadDying", (int)(&((idInterpreter *)0)->threadDying), sizeof( ((idInterpreter *)0)->threadDying ) },
	{ "bool", "terminateOnExit", (int)(&((idInterpreter *)0)->terminateOnExit), sizeof( ((idInterpreter *)0)->terminateOnExit ) },
	{ "bool", "debug", (int)(&((idInterpreter *)0)->debug), sizeof( ((idInterpreter *)0)->debug ) },
	{ NULL, 0 }
};

intptr_t idThread::Invoke(idThread *cls, const char *functionName) {
	int functionNameHash = idStr::Hash(functionName);
	if(functionNameHash == 149674) { // ManualDelete
		cls->ManualDelete();
		return 0;
	};
	if(functionNameHash == 184974) { // EnableDebugInfo
		cls->EnableDebugInfo();
		return 0;
	};
	if(functionNameHash == 199457) { // DisableDebugInfo
		cls->DisableDebugInfo();
		return 0;
	};
	if(functionNameHash == 110282) { // WaitFrame
		cls->WaitFrame();
		return 0;
	};
	if(functionNameHash == 139251) { // DisplayInfo
		cls->DisplayInfo();
		return 0;
	};
	if(functionNameHash == 206780) { // IsDoneProcessing
		cls->IsDoneProcessing();
		return 0;
	};
	if(functionNameHash == 84907) { // IsDying
		cls->IsDying();
		return 0;
	};
	if(functionNameHash == 33511) { // End
		cls->End();
		return 0;
	};
	if(functionNameHash == 88310) { // Execute
		cls->Execute();
		return 0;
	};
	if(functionNameHash == 168173) { // ManualControl
		cls->ManualControl();
		return 0;
	};
	if(functionNameHash == 181407) { // DoneProcessing
		cls->DoneProcessing();
		return 0;
	};
	if(functionNameHash == 241236) { // ContinueProcessing
		cls->ContinueProcessing();
		return 0;
	};
	if(functionNameHash == 137371) { // ThreadDying
		cls->ThreadDying();
		return 0;
	};
	if(functionNameHash == 108234) { // EndThread
		cls->EndThread();
		return 0;
	};
	if(functionNameHash == 112213) { // IsWaiting
		cls->IsWaiting();
		return 0;
	};
	if(functionNameHash == 147984) { // ClearWaitFor
		cls->ClearWaitFor();
		return 0;
	};
	if(functionNameHash == 63710) { // Start
		cls->Start();
		return 0;
	};
	if(functionNameHash == 190527) { // WaitingOnThread
		return (intptr_t)cls->WaitingOnThread();
	};
	if(functionNameHash == 148575) { // GetThreadNum
		return (intptr_t)cls->GetThreadNum();
	};
	if(functionNameHash == 159226) { // GetThreadName
		return (intptr_t)cls->GetThreadName();
	};
	return 0;

};

static classVariableInfo_t idThread_typeInfo[] = {
	{ "idThread *", "waitingForThread", (int)(&((idThread *)0)->waitingForThread), sizeof( ((idThread *)0)->waitingForThread ) },
	{ "int", "waitingFor", (int)(&((idThread *)0)->waitingFor), sizeof( ((idThread *)0)->waitingFor ) },
	{ "int", "waitingUntil", (int)(&((idThread *)0)->waitingUntil), sizeof( ((idThread *)0)->waitingUntil ) },
	{ "idInterpreter", "interpreter", (int)(&((idThread *)0)->interpreter), sizeof( ((idThread *)0)->interpreter ) },
	{ "idDict", "spawnArgs", (int)(&((idThread *)0)->spawnArgs), sizeof( ((idThread *)0)->spawnArgs ) },
	{ "int", "threadNum", (int)(&((idThread *)0)->threadNum), sizeof( ((idThread *)0)->threadNum ) },
	{ "idStr", "threadName", (int)(&((idThread *)0)->threadName), sizeof( ((idThread *)0)->threadName ) },
	{ "int", "lastExecuteTime", (int)(&((idThread *)0)->lastExecuteTime), sizeof( ((idThread *)0)->lastExecuteTime ) },
	{ "int", "creationTime", (int)(&((idThread *)0)->creationTime), sizeof( ((idThread *)0)->creationTime ) },
	{ "bool", "manualControl", (int)(&((idThread *)0)->manualControl), sizeof( ((idThread *)0)->manualControl ) },
	{ NULL, 0 }
};

static classTypeInfo_t classTypeInfo[] = {
	{ "idEventDef", "", sizeof(idEventDef), idEventDef_typeInfo },
	{ "idEvent", "", sizeof(idEvent), idEvent_typeInfo },
	{ "idEventArg", "", sizeof(idEventArg), idEventArg_typeInfo },
	{ "idAllocError", "idException", sizeof(idAllocError), idAllocError_typeInfo },
	{ "idClass", "", sizeof(idClass), idClass_typeInfo },
	{ "idTypeInfo", "", sizeof(idTypeInfo), idTypeInfo_typeInfo },
	{ "idSaveGame::stringTableIndex_s", "", sizeof(idSaveGame::stringTableIndex_s), idSaveGame_stringTableIndex_s_typeInfo },
	{ "idSaveGame", "", sizeof(idSaveGame), idSaveGame_typeInfo },
	{ "idRestoreGame", "", sizeof(idRestoreGame), idRestoreGame_typeInfo },
	{ "function_t", "", sizeof(function_t), function_t_typeInfo },
	{ "eval_t", "", sizeof(eval_t), eval_t_typeInfo },
	{ "idTypeDef", "", sizeof(idTypeDef), idTypeDef_typeInfo },
	{ "idScriptObject", "", sizeof(idScriptObject), idScriptObject_typeInfo },
//	{ "idScriptVariable< class type , etype_t etype , class returnType >", "", sizeof(idScriptVariable< class type , etype_t etype , class returnType >), idScriptVariable_class_type_etype_t_etype_class_returnType__typeInfo },
	{ "idCompileError", "idException", sizeof(idCompileError), idCompileError_typeInfo },
	{ "varEval_t", "", sizeof(varEval_t), varEval_t_typeInfo },
	{ "idVarDef", "", sizeof(idVarDef), idVarDef_typeInfo },
	{ "idVarDefName", "", sizeof(idVarDefName), idVarDefName_typeInfo },
	{ "statement_t", "", sizeof(statement_t), statement_t_typeInfo },
	{ "idProgram", "", sizeof(idProgram), idProgram_typeInfo },
	{ "frameBlend_t", "", sizeof(frameBlend_t), frameBlend_t_typeInfo },
	{ "jointAnimInfo_t", "", sizeof(jointAnimInfo_t), jointAnimInfo_t_typeInfo },
	{ "jointInfo_t", "", sizeof(jointInfo_t), jointInfo_t_typeInfo },
	{ "jointMod_t", "", sizeof(jointMod_t), jointMod_t_typeInfo },
	{ "frameLookup_t", "", sizeof(frameLookup_t), frameLookup_t_typeInfo },
//	{ "class_25::class_25", "", sizeof(class_25::class_25), class_25_class_25_typeInfo },
	{ "frameCommand_t", "", sizeof(frameCommand_t), frameCommand_t_typeInfo },
	{ "animFlags_t", "", sizeof(animFlags_t), animFlags_t_typeInfo },
	{ "idMD5Anim", "", sizeof(idMD5Anim), idMD5Anim_typeInfo },
	{ "idAnim", "", sizeof(idAnim), idAnim_typeInfo },
	{ "idDeclModelDef", "idDecl", sizeof(idDeclModelDef), idDeclModelDef_typeInfo },
	{ "idAnimBlend", "", sizeof(idAnimBlend), idAnimBlend_typeInfo },
	{ "idAFPoseJointMod", "", sizeof(idAFPoseJointMod), idAFPoseJointMod_typeInfo },
	{ "idAnimator", "", sizeof(idAnimator), idAnimator_typeInfo },
	{ "idAnimManager", "", sizeof(idAnimManager), idAnimManager_typeInfo },
	{ "idReachability", "", sizeof(idReachability), idReachability_typeInfo },
	{ "idReachability_Walk", "idReachability", sizeof(idReachability_Walk), idReachability_Walk_typeInfo },
	{ "idReachability_BarrierJump", "idReachability", sizeof(idReachability_BarrierJump), idReachability_BarrierJump_typeInfo },
	{ "idReachability_WaterJump", "idReachability", sizeof(idReachability_WaterJump), idReachability_WaterJump_typeInfo },
	{ "idReachability_WalkOffLedge", "idReachability", sizeof(idReachability_WalkOffLedge), idReachability_WalkOffLedge_typeInfo },
	{ "idReachability_Swim", "idReachability", sizeof(idReachability_Swim), idReachability_Swim_typeInfo },
	{ "idReachability_Fly", "idReachability", sizeof(idReachability_Fly), idReachability_Fly_typeInfo },
	{ "idReachability_Special", "idReachability", sizeof(idReachability_Special), idReachability_Special_typeInfo },
	{ "aasEdge_t", "", sizeof(aasEdge_t), aasEdge_t_typeInfo },
	{ "aasFace_t", "", sizeof(aasFace_t), aasFace_t_typeInfo },
	{ "aasArea_t", "", sizeof(aasArea_t), aasArea_t_typeInfo },
	{ "aasNode_t", "", sizeof(aasNode_t), aasNode_t_typeInfo },
	{ "aasPortal_t", "", sizeof(aasPortal_t), aasPortal_t_typeInfo },
	{ "aasCluster_t", "", sizeof(aasCluster_t), aasCluster_t_typeInfo },
	{ "aasTrace_t", "", sizeof(aasTrace_t), aasTrace_t_typeInfo },
	{ "idAASSettings", "", sizeof(idAASSettings), idAASSettings_typeInfo },
	{ "idAASFile", "", sizeof(idAASFile), idAASFile_typeInfo },
	{ "idAASFileManager", "", sizeof(idAASFileManager), idAASFileManager_typeInfo },
	{ "aasPath_t", "", sizeof(aasPath_t), aasPath_t_typeInfo },
	{ "aasGoal_t", "", sizeof(aasGoal_t), aasGoal_t_typeInfo },
	{ "aasObstacle_t", "", sizeof(aasObstacle_t), aasObstacle_t_typeInfo },
	{ "idAASCallback", "", sizeof(idAASCallback), idAASCallback_typeInfo },
	{ "idAAS", "", sizeof(idAAS), idAAS_typeInfo },
	{ "idClipModel", "", sizeof(idClipModel), idClipModel_typeInfo },
	{ "idClip", "", sizeof(idClip), idClip_typeInfo },
	{ "idPush::pushed_s", "", sizeof(idPush::pushed_s), idPush_pushed_s_typeInfo },
	{ "idPush::pushedGroup_s", "", sizeof(idPush::pushedGroup_s), idPush_pushedGroup_s_typeInfo },
	{ "idPush", "", sizeof(idPush), idPush_typeInfo },
	{ "pvsHandle_t", "", sizeof(pvsHandle_t), pvsHandle_t_typeInfo },
	{ "pvsCurrent_t", "", sizeof(pvsCurrent_t), pvsCurrent_t_typeInfo },
	{ "idPVS", "", sizeof(idPVS), idPVS_typeInfo },
	{ "leaderboardStats_t", "", sizeof(leaderboardStats_t), leaderboardStats_t_typeInfo },
	{ "columnGameMode_t", "", sizeof(columnGameMode_t), columnGameMode_t_typeInfo },
	{ "mpPlayerState_t", "", sizeof(mpPlayerState_t), mpPlayerState_t_typeInfo },
	{ "mpChatLine_t", "", sizeof(mpChatLine_t), mpChatLine_t_typeInfo },
	{ "idMultiplayerGame", "", sizeof(idMultiplayerGame), idMultiplayerGame_typeInfo },
	{ "entityNetEvent_t", "", sizeof(entityNetEvent_t), entityNetEvent_t_typeInfo },
	{ "spawnSpot_t", "", sizeof(spawnSpot_t), spawnSpot_t_typeInfo },
	{ "idEventQueue", "", sizeof(idEventQueue), idEventQueue_typeInfo },
//	{ "idEntityPtr< class type >", "", sizeof(idEntityPtr< class type >), idEntityPtr_class_type__typeInfo },
	{ "timeState_t", "", sizeof(timeState_t), timeState_t_typeInfo },
	{ "rvmGameDelayRemoveEntry_t", "", sizeof(rvmGameDelayRemoveEntry_t), rvmGameDelayRemoveEntry_t_typeInfo },
	{ "netInterpolationInfo_t", "", sizeof(netInterpolationInfo_t), netInterpolationInfo_t_typeInfo },
	{ "idGameLocal", "idGame", sizeof(idGameLocal), idGameLocal_typeInfo },
	{ "idGameError", "idException", sizeof(idGameError), idGameError_typeInfo },
	{ "idForce", "idClass", sizeof(idForce), idForce_typeInfo },
	{ "idForce_Constant", "idForce", sizeof(idForce_Constant), idForce_Constant_typeInfo },
	{ "idForce_Drag", "idForce", sizeof(idForce_Drag), idForce_Drag_typeInfo },
	{ "idForce_Grab", "idForce", sizeof(idForce_Grab), idForce_Grab_typeInfo },
	{ "idForce_Field", "idForce", sizeof(idForce_Field), idForce_Field_typeInfo },
	{ "idForce_Spring", "idForce", sizeof(idForce_Spring), idForce_Spring_typeInfo },
	{ "impactInfo_t", "", sizeof(impactInfo_t), impactInfo_t_typeInfo },
	{ "idPhysics", "idClass", sizeof(idPhysics), idPhysics_typeInfo },
	{ "staticPState_t", "", sizeof(staticPState_t), staticPState_t_typeInfo },
	{ "staticInterpolatePState_t", "", sizeof(staticInterpolatePState_t), staticInterpolatePState_t_typeInfo },
	{ "idPhysics_Static", "idPhysics", sizeof(idPhysics_Static), idPhysics_Static_typeInfo },
	{ "idPhysics_StaticMulti", "idPhysics", sizeof(idPhysics_StaticMulti), idPhysics_StaticMulti_typeInfo },
	{ "idPhysics_Base", "idPhysics", sizeof(idPhysics_Base), idPhysics_Base_typeInfo },
	{ "physicsInterpolationState_t", "", sizeof(physicsInterpolationState_t), physicsInterpolationState_t_typeInfo },
	{ "idPhysics_Actor", "idPhysics_Base", sizeof(idPhysics_Actor), idPhysics_Actor_typeInfo },
	{ "monsterPState_t", "", sizeof(monsterPState_t), monsterPState_t_typeInfo },
	{ "idPhysics_Monster", "idPhysics_Actor", sizeof(idPhysics_Monster), idPhysics_Monster_typeInfo },
	{ "playerPState_t", "", sizeof(playerPState_t), playerPState_t_typeInfo },
	{ "idPhysics_Player", "idPhysics_Actor", sizeof(idPhysics_Player), idPhysics_Player_typeInfo },
	{ "parametricPState_t", "", sizeof(parametricPState_t), parametricPState_t_typeInfo },
	{ "idPhysics_Parametric", "idPhysics_Base", sizeof(idPhysics_Parametric), idPhysics_Parametric_typeInfo },
	{ "rigidBodyIState_t", "", sizeof(rigidBodyIState_t), rigidBodyIState_t_typeInfo },
	{ "rigidBodyPState_t", "", sizeof(rigidBodyPState_t), rigidBodyPState_t_typeInfo },
	{ "idPhysics_RigidBody", "idPhysics_Base", sizeof(idPhysics_RigidBody), idPhysics_RigidBody_typeInfo },
	{ "idAFConstraint::constraintFlags_s", "", sizeof(idAFConstraint::constraintFlags_s), idAFConstraint_constraintFlags_s_typeInfo },
	{ "idAFConstraint", "", sizeof(idAFConstraint), idAFConstraint_typeInfo },
	{ "idAFConstraint_Fixed", "idAFConstraint", sizeof(idAFConstraint_Fixed), idAFConstraint_Fixed_typeInfo },
	{ "idAFConstraint_BallAndSocketJoint", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJoint), idAFConstraint_BallAndSocketJoint_typeInfo },
	{ "idAFConstraint_BallAndSocketJointFriction", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJointFriction), idAFConstraint_BallAndSocketJointFriction_typeInfo },
	{ "idAFConstraint_UniversalJoint", "idAFConstraint", sizeof(idAFConstraint_UniversalJoint), idAFConstraint_UniversalJoint_typeInfo },
	{ "idAFConstraint_UniversalJointFriction", "idAFConstraint", sizeof(idAFConstraint_UniversalJointFriction), idAFConstraint_UniversalJointFriction_typeInfo },
	{ "idAFConstraint_CylindricalJoint", "idAFConstraint", sizeof(idAFConstraint_CylindricalJoint), idAFConstraint_CylindricalJoint_typeInfo },
	{ "idAFConstraint_Hinge", "idAFConstraint", sizeof(idAFConstraint_Hinge), idAFConstraint_Hinge_typeInfo },
	{ "idAFConstraint_HingeFriction", "idAFConstraint", sizeof(idAFConstraint_HingeFriction), idAFConstraint_HingeFriction_typeInfo },
	{ "idAFConstraint_HingeSteering", "idAFConstraint", sizeof(idAFConstraint_HingeSteering), idAFConstraint_HingeSteering_typeInfo },
	{ "idAFConstraint_Slider", "idAFConstraint", sizeof(idAFConstraint_Slider), idAFConstraint_Slider_typeInfo },
	{ "idAFConstraint_Line", "idAFConstraint", sizeof(idAFConstraint_Line), idAFConstraint_Line_typeInfo },
	{ "idAFConstraint_Plane", "idAFConstraint", sizeof(idAFConstraint_Plane), idAFConstraint_Plane_typeInfo },
	{ "idAFConstraint_Spring", "idAFConstraint", sizeof(idAFConstraint_Spring), idAFConstraint_Spring_typeInfo },
	{ "idAFConstraint_Contact", "idAFConstraint", sizeof(idAFConstraint_Contact), idAFConstraint_Contact_typeInfo },
	{ "idAFConstraint_ContactFriction", "idAFConstraint", sizeof(idAFConstraint_ContactFriction), idAFConstraint_ContactFriction_typeInfo },
	{ "idAFConstraint_ConeLimit", "idAFConstraint", sizeof(idAFConstraint_ConeLimit), idAFConstraint_ConeLimit_typeInfo },
	{ "idAFConstraint_PyramidLimit", "idAFConstraint", sizeof(idAFConstraint_PyramidLimit), idAFConstraint_PyramidLimit_typeInfo },
	{ "idAFConstraint_Suspension", "idAFConstraint", sizeof(idAFConstraint_Suspension), idAFConstraint_Suspension_typeInfo },
	{ "AFBodyPState_t", "", sizeof(AFBodyPState_t), AFBodyPState_t_typeInfo },
	{ "idAFBody::bodyFlags_s", "", sizeof(idAFBody::bodyFlags_s), idAFBody_bodyFlags_s_typeInfo },
	{ "idAFBody", "", sizeof(idAFBody), idAFBody_typeInfo },
	{ "idAFTree", "", sizeof(idAFTree), idAFTree_typeInfo },
	{ "AFPState_t", "", sizeof(AFPState_t), AFPState_t_typeInfo },
	{ "AFCollision_t", "", sizeof(AFCollision_t), AFCollision_t_typeInfo },
	{ "idPhysics_AF", "idPhysics_Base", sizeof(idPhysics_AF), idPhysics_AF_typeInfo },
	{ "singleSmoke_t", "", sizeof(singleSmoke_t), singleSmoke_t_typeInfo },
	{ "activeSmokeStage_t", "", sizeof(activeSmokeStage_t), activeSmokeStage_t_typeInfo },
	{ "idSmokeParticles", "", sizeof(idSmokeParticles), idSmokeParticles_typeInfo },
	{ "signal_t", "", sizeof(signal_t), signal_t_typeInfo },
	{ "signalList_t", "", sizeof(signalList_t), signalList_t_typeInfo },
	{ "idEntity::entityFlags_s", "", sizeof(idEntity::entityFlags_s), idEntity_entityFlags_s_typeInfo },
	{ "idEntity", "idClass", sizeof(idEntity), idEntity_typeInfo },
	{ "damageEffect_t", "", sizeof(damageEffect_t), damageEffect_t_typeInfo },
	{ "idAnimatedEntity", "idEntity", sizeof(idAnimatedEntity), idAnimatedEntity_typeInfo },
	{ "SetTimeState", "", sizeof(SetTimeState), SetTimeState_typeInfo },
	{ "idCursor3D", "idEntity", sizeof(idCursor3D), idCursor3D_typeInfo },
	{ "idDragEntity", "", sizeof(idDragEntity), idDragEntity_typeInfo },
	{ "selectedTypeInfo_t", "", sizeof(selectedTypeInfo_t), selectedTypeInfo_t_typeInfo },
	{ "idEditEntities", "", sizeof(idEditEntities), idEditEntities_typeInfo },
	{ "idGrabber", "idEntity", sizeof(idGrabber), idGrabber_typeInfo },
	{ "jointConversion_t", "", sizeof(jointConversion_t), jointConversion_t_typeInfo },
	{ "afTouch_t", "", sizeof(afTouch_t), afTouch_t_typeInfo },
	{ "idAF", "", sizeof(idAF), idAF_typeInfo },
	{ "idIK", "", sizeof(idIK), idIK_typeInfo },
	{ "idIK_Walk", "idIK", sizeof(idIK_Walk), idIK_Walk_typeInfo },
	{ "idIK_Reach", "idIK", sizeof(idIK_Reach), idIK_Reach_typeInfo },
	{ "idMultiModelAF", "idEntity", sizeof(idMultiModelAF), idMultiModelAF_typeInfo },
	{ "idChain", "idMultiModelAF", sizeof(idChain), idChain_typeInfo },
	{ "idAFAttachment", "idAnimatedEntity", sizeof(idAFAttachment), idAFAttachment_typeInfo },
	{ "idAFEntity_Base", "idAnimatedEntity", sizeof(idAFEntity_Base), idAFEntity_Base_typeInfo },
	{ "idAFEntity_Gibbable", "idAFEntity_Base", sizeof(idAFEntity_Gibbable), idAFEntity_Gibbable_typeInfo },
	{ "idAFEntity_Generic", "idAFEntity_Gibbable", sizeof(idAFEntity_Generic), idAFEntity_Generic_typeInfo },
	{ "idAFEntity_WithAttachedHead", "idAFEntity_Gibbable", sizeof(idAFEntity_WithAttachedHead), idAFEntity_WithAttachedHead_typeInfo },
	{ "idAFEntity_Vehicle", "idAFEntity_Base", sizeof(idAFEntity_Vehicle), idAFEntity_Vehicle_typeInfo },
	{ "idAFEntity_VehicleSimple", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSimple), idAFEntity_VehicleSimple_typeInfo },
	{ "idAFEntity_VehicleFourWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleFourWheels), idAFEntity_VehicleFourWheels_typeInfo },
	{ "idAFEntity_VehicleSixWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSixWheels), idAFEntity_VehicleSixWheels_typeInfo },
	{ "idAFEntity_VehicleAutomated", "idAFEntity_VehicleSixWheels", sizeof(idAFEntity_VehicleAutomated), idAFEntity_VehicleAutomated_typeInfo },
	{ "idAFEntity_SteamPipe", "idAFEntity_Base", sizeof(idAFEntity_SteamPipe), idAFEntity_SteamPipe_typeInfo },
	{ "idAFEntity_ClawFourFingers", "idAFEntity_Base", sizeof(idAFEntity_ClawFourFingers), idAFEntity_ClawFourFingers_typeInfo },
	{ "idHarvestable", "idEntity", sizeof(idHarvestable), idHarvestable_typeInfo },
	{ "idAFEntity_Harvest", "idAFEntity_WithAttachedHead", sizeof(idAFEntity_Harvest), idAFEntity_Harvest_typeInfo },
	{ "idSpawnableEntity", "idEntity", sizeof(idSpawnableEntity), idSpawnableEntity_typeInfo },
	{ "idPlayerStart", "idEntity", sizeof(idPlayerStart), idPlayerStart_typeInfo },
	{ "idActivator", "idEntity", sizeof(idActivator), idActivator_typeInfo },
	{ "idPathCorner", "idEntity", sizeof(idPathCorner), idPathCorner_typeInfo },
	{ "idDamagable", "idEntity", sizeof(idDamagable), idDamagable_typeInfo },
	{ "idExplodable", "idEntity", sizeof(idExplodable), idExplodable_typeInfo },
	{ "idSpring", "idEntity", sizeof(idSpring), idSpring_typeInfo },
	{ "idForceField", "idEntity", sizeof(idForceField), idForceField_typeInfo },
	{ "idAnimated", "idAFEntity_Gibbable", sizeof(idAnimated), idAnimated_typeInfo },
	{ "idStaticEntity", "idEntity", sizeof(idStaticEntity), idStaticEntity_typeInfo },
	{ "idFuncEmitter", "idStaticEntity", sizeof(idFuncEmitter), idFuncEmitter_typeInfo },
	{ "idFuncShootProjectile", "idStaticEntity", sizeof(idFuncShootProjectile), idFuncShootProjectile_typeInfo },
	{ "idFuncSmoke", "idEntity", sizeof(idFuncSmoke), idFuncSmoke_typeInfo },
	{ "idFuncSplat", "idFuncEmitter", sizeof(idFuncSplat), idFuncSplat_typeInfo },
	{ "idTextEntity", "idEntity", sizeof(idTextEntity), idTextEntity_typeInfo },
	{ "idLocationEntity", "idEntity", sizeof(idLocationEntity), idLocationEntity_typeInfo },
	{ "idLocationSeparatorEntity", "idEntity", sizeof(idLocationSeparatorEntity), idLocationSeparatorEntity_typeInfo },
	{ "idVacuumSeparatorEntity", "idEntity", sizeof(idVacuumSeparatorEntity), idVacuumSeparatorEntity_typeInfo },
	{ "idVacuumEntity", "idEntity", sizeof(idVacuumEntity), idVacuumEntity_typeInfo },
	{ "idBeam", "idEntity", sizeof(idBeam), idBeam_typeInfo },
	{ "idLiquid", "idEntity", sizeof(idLiquid), idLiquid_typeInfo },
	{ "idShaking", "idEntity", sizeof(idShaking), idShaking_typeInfo },
	{ "idEarthQuake", "idEntity", sizeof(idEarthQuake), idEarthQuake_typeInfo },
	{ "idFuncPortal", "idEntity", sizeof(idFuncPortal), idFuncPortal_typeInfo },
	{ "idFuncAASPortal", "idEntity", sizeof(idFuncAASPortal), idFuncAASPortal_typeInfo },
	{ "idFuncAASObstacle", "idEntity", sizeof(idFuncAASObstacle), idFuncAASObstacle_typeInfo },
	{ "idFuncRadioChatter", "idEntity", sizeof(idFuncRadioChatter), idFuncRadioChatter_typeInfo },
	{ "idPhantomObjects", "idEntity", sizeof(idPhantomObjects), idPhantomObjects_typeInfo },
	{ "idShockwave", "idEntity", sizeof(idShockwave), idShockwave_typeInfo },
	{ "idFuncMountedObject", "idEntity", sizeof(idFuncMountedObject), idFuncMountedObject_typeInfo },
	{ "idFuncMountedWeapon", "idFuncMountedObject", sizeof(idFuncMountedWeapon), idFuncMountedWeapon_typeInfo },
	{ "idPortalSky", "idEntity", sizeof(idPortalSky), idPortalSky_typeInfo },
	{ "idAnimState", "", sizeof(idAnimState), idAnimState_typeInfo },
	{ "idAttachInfo", "", sizeof(idAttachInfo), idAttachInfo_typeInfo },
	{ "copyJoints_t", "", sizeof(copyJoints_t), copyJoints_t_typeInfo },
	{ "idActor", "idAFEntity_Gibbable", sizeof(idActor), idActor_typeInfo },
	{ "idProjectile::simulatedProjectile_t", "", sizeof(idProjectile::simulatedProjectile_t), idProjectile_simulatedProjectile_t_typeInfo },
	{ "idProjectile::projectileFlags_s", "", sizeof(idProjectile::projectileFlags_s), idProjectile_projectileFlags_s_typeInfo },
	{ "idProjectile", "idEntity", sizeof(idProjectile), idProjectile_typeInfo },
	{ "idGuidedProjectile", "idProjectile", sizeof(idGuidedProjectile), idGuidedProjectile_typeInfo },
	{ "idSoulCubeMissile", "idGuidedProjectile", sizeof(idSoulCubeMissile), idSoulCubeMissile_typeInfo },
	{ "beamTarget_t", "", sizeof(beamTarget_t), beamTarget_t_typeInfo },
	{ "idBFGProjectile", "idProjectile", sizeof(idBFGProjectile), idBFGProjectile_typeInfo },
	{ "idHomingProjectile", "idProjectile", sizeof(idHomingProjectile), idHomingProjectile_typeInfo },
	{ "idDebris", "idEntity", sizeof(idDebris), idDebris_typeInfo },
//	{ "idPredictedValue< class type_ >", "", sizeof(idPredictedValue< class type_ >), idPredictedValue_class_type___typeInfo },
	{ "WeaponParticle_t", "", sizeof(WeaponParticle_t), WeaponParticle_t_typeInfo },
	{ "WeaponLight_t", "", sizeof(WeaponLight_t), WeaponLight_t_typeInfo },
	{ "rvmWeaponObject", "idClass", sizeof(rvmWeaponObject), rvmWeaponObject_typeInfo },
	{ "idWeapon", "idAnimatedEntity", sizeof(idWeapon), idWeapon_typeInfo },
	{ "idLight", "idEntity", sizeof(idLight), idLight_typeInfo },
	{ "idWorldspawn", "idEntity", sizeof(idWorldspawn), idWorldspawn_typeInfo },
	{ "idItem", "idEntity", sizeof(idItem), idItem_typeInfo },
	{ "idItemPowerup", "idItem", sizeof(idItemPowerup), idItemPowerup_typeInfo },
	{ "idObjective", "idItem", sizeof(idObjective), idObjective_typeInfo },
	{ "idVideoCDItem", "idItem", sizeof(idVideoCDItem), idVideoCDItem_typeInfo },
	{ "idPDAItem", "idItem", sizeof(idPDAItem), idPDAItem_typeInfo },
	{ "idMoveableItem", "idItem", sizeof(idMoveableItem), idMoveableItem_typeInfo },
	{ "idItemTeam", "idMoveableItem", sizeof(idItemTeam), idItemTeam_typeInfo },
	{ "idMoveablePDAItem", "idMoveableItem", sizeof(idMoveablePDAItem), idMoveablePDAItem_typeInfo },
	{ "idItemRemover", "idEntity", sizeof(idItemRemover), idItemRemover_typeInfo },
	{ "idObjectiveComplete", "idItemRemover", sizeof(idObjectiveComplete), idObjectiveComplete_typeInfo },
	{ "screenBlob_t", "", sizeof(screenBlob_t), screenBlob_t_typeInfo },
	{ "WarpPolygon_t", "", sizeof(WarpPolygon_t), WarpPolygon_t_typeInfo },
	{ "Warp_t", "", sizeof(Warp_t), Warp_t_typeInfo },
	{ "FxFader", "", sizeof(FxFader), FxFader_typeInfo },
	{ "FullscreenFX", "", sizeof(FullscreenFX), FullscreenFX_typeInfo },
	{ "FullscreenFX_Helltime", "FullscreenFX", sizeof(FullscreenFX_Helltime), FullscreenFX_Helltime_typeInfo },
	{ "FullscreenFX_Multiplayer", "FullscreenFX", sizeof(FullscreenFX_Multiplayer), FullscreenFX_Multiplayer_typeInfo },
	{ "FullscreenFX_Warp", "FullscreenFX", sizeof(FullscreenFX_Warp), FullscreenFX_Warp_typeInfo },
	{ "FullscreenFX_EnviroSuit", "FullscreenFX", sizeof(FullscreenFX_EnviroSuit), FullscreenFX_EnviroSuit_typeInfo },
	{ "FullscreenFX_DoubleVision", "FullscreenFX", sizeof(FullscreenFX_DoubleVision), FullscreenFX_DoubleVision_typeInfo },
	{ "FullscreenFX_InfluenceVision", "FullscreenFX", sizeof(FullscreenFX_InfluenceVision), FullscreenFX_InfluenceVision_typeInfo },
	{ "FullscreenFX_Bloom", "FullscreenFX", sizeof(FullscreenFX_Bloom), FullscreenFX_Bloom_typeInfo },
	{ "FullscreenFXManager", "", sizeof(FullscreenFXManager), FullscreenFXManager_typeInfo },
	{ "idPlayerView", "", sizeof(idPlayerView), idPlayerView_typeInfo },
	{ "idPlayerIcon", "", sizeof(idPlayerIcon), idPlayerIcon_typeInfo },
	{ "idAchievementManager", "", sizeof(idAchievementManager), idAchievementManager_typeInfo },
	{ "idAimAssist", "", sizeof(idAimAssist), idAimAssist_typeInfo },
	{ "idObjectiveInfo", "", sizeof(idObjectiveInfo), idObjectiveInfo_typeInfo },
	{ "idLevelTriggerInfo", "", sizeof(idLevelTriggerInfo), idLevelTriggerInfo_typeInfo },
	{ "RechargeAmmo_t", "", sizeof(RechargeAmmo_t), RechargeAmmo_t_typeInfo },
	{ "WeaponToggle_t", "", sizeof(WeaponToggle_t), WeaponToggle_t_typeInfo },
	{ "idInventory", "", sizeof(idInventory), idInventory_typeInfo },
	{ "loggedAccel_t", "", sizeof(loggedAccel_t), loggedAccel_t_typeInfo },
	{ "aasLocation_t", "", sizeof(aasLocation_t), aasLocation_t_typeInfo },
	{ "idPlayer", "idActor", sizeof(idPlayer), idPlayer_typeInfo },
	{ "idMover::moveState_t", "", sizeof(idMover::moveState_t), idMover_moveState_t_typeInfo },
	{ "idMover::rotationState_t", "", sizeof(idMover::rotationState_t), idMover_rotationState_t_typeInfo },
	{ "idMover", "idEntity", sizeof(idMover), idMover_typeInfo },
	{ "idSplinePath", "idEntity", sizeof(idSplinePath), idSplinePath_typeInfo },
	{ "floorInfo_s", "", sizeof(floorInfo_s), floorInfo_s_typeInfo },
	{ "idElevator", "idMover", sizeof(idElevator), idElevator_typeInfo },
	{ "idMover_Binary", "idEntity", sizeof(idMover_Binary), idMover_Binary_typeInfo },
	{ "idDoor", "idMover_Binary", sizeof(idDoor), idDoor_typeInfo },
	{ "idPlat", "idMover_Binary", sizeof(idPlat), idPlat_typeInfo },
	{ "idMover_Periodic", "idEntity", sizeof(idMover_Periodic), idMover_Periodic_typeInfo },
	{ "idRotater", "idMover_Periodic", sizeof(idRotater), idRotater_typeInfo },
	{ "idBobber", "idMover_Periodic", sizeof(idBobber), idBobber_typeInfo },
	{ "idPendulum", "idMover_Periodic", sizeof(idPendulum), idPendulum_typeInfo },
	{ "idRiser", "idMover_Periodic", sizeof(idRiser), idRiser_typeInfo },
	{ "idCamera", "idEntity", sizeof(idCamera), idCamera_typeInfo },
	{ "idCameraView", "idCamera", sizeof(idCameraView), idCameraView_typeInfo },
	{ "cameraFrame_t", "", sizeof(cameraFrame_t), cameraFrame_t_typeInfo },
	{ "idCameraAnim", "idCamera", sizeof(idCameraAnim), idCameraAnim_typeInfo },
	{ "idMoveable", "idEntity", sizeof(idMoveable), idMoveable_typeInfo },
	{ "idBarrel", "idMoveable", sizeof(idBarrel), idBarrel_typeInfo },
	{ "idExplodingBarrel", "idBarrel", sizeof(idExplodingBarrel), idExplodingBarrel_typeInfo },
	{ "idTarget", "idEntity", sizeof(idTarget), idTarget_typeInfo },
	{ "idTarget_Remove", "idTarget", sizeof(idTarget_Remove), idTarget_Remove_typeInfo },
	{ "idTarget_Show", "idTarget", sizeof(idTarget_Show), idTarget_Show_typeInfo },
	{ "idTarget_Damage", "idTarget", sizeof(idTarget_Damage), idTarget_Damage_typeInfo },
	{ "idTarget_SessionCommand", "idTarget", sizeof(idTarget_SessionCommand), idTarget_SessionCommand_typeInfo },
	{ "idTarget_EndLevel", "idTarget", sizeof(idTarget_EndLevel), idTarget_EndLevel_typeInfo },
	{ "idTarget_WaitForButton", "idTarget", sizeof(idTarget_WaitForButton), idTarget_WaitForButton_typeInfo },
	{ "idTarget_SetGlobalShaderTime", "idTarget", sizeof(idTarget_SetGlobalShaderTime), idTarget_SetGlobalShaderTime_typeInfo },
	{ "idTarget_SetShaderParm", "idTarget", sizeof(idTarget_SetShaderParm), idTarget_SetShaderParm_typeInfo },
	{ "idTarget_SetShaderTime", "idTarget", sizeof(idTarget_SetShaderTime), idTarget_SetShaderTime_typeInfo },
	{ "idTarget_FadeEntity", "idTarget", sizeof(idTarget_FadeEntity), idTarget_FadeEntity_typeInfo },
	{ "idTarget_LightFadeIn", "idTarget", sizeof(idTarget_LightFadeIn), idTarget_LightFadeIn_typeInfo },
	{ "idTarget_LightFadeOut", "idTarget", sizeof(idTarget_LightFadeOut), idTarget_LightFadeOut_typeInfo },
	{ "idTarget_Give", "idTarget", sizeof(idTarget_Give), idTarget_Give_typeInfo },
	{ "idTarget_GiveEmail", "idTarget", sizeof(idTarget_GiveEmail), idTarget_GiveEmail_typeInfo },
	{ "idTarget_SetModel", "idTarget", sizeof(idTarget_SetModel), idTarget_SetModel_typeInfo },
	{ "SavedGui_t", "", sizeof(SavedGui_t), SavedGui_t_typeInfo },
	{ "idTarget_SetInfluence", "idTarget", sizeof(idTarget_SetInfluence), idTarget_SetInfluence_typeInfo },
	{ "idTarget_SetKeyVal", "idTarget", sizeof(idTarget_SetKeyVal), idTarget_SetKeyVal_typeInfo },
	{ "idTarget_SetFov", "idTarget", sizeof(idTarget_SetFov), idTarget_SetFov_typeInfo },
	{ "idTarget_SetPrimaryObjective", "idTarget", sizeof(idTarget_SetPrimaryObjective), idTarget_SetPrimaryObjective_typeInfo },
	{ "idTarget_LockDoor", "idTarget", sizeof(idTarget_LockDoor), idTarget_LockDoor_typeInfo },
	{ "idTarget_CallObjectFunction", "idTarget", sizeof(idTarget_CallObjectFunction), idTarget_CallObjectFunction_typeInfo },
	{ "idTarget_EnableLevelWeapons", "idTarget", sizeof(idTarget_EnableLevelWeapons), idTarget_EnableLevelWeapons_typeInfo },
	{ "idTarget_Tip", "idTarget", sizeof(idTarget_Tip), idTarget_Tip_typeInfo },
	{ "idTarget_GiveSecurity", "idTarget", sizeof(idTarget_GiveSecurity), idTarget_GiveSecurity_typeInfo },
	{ "idTarget_RemoveWeapons", "idTarget", sizeof(idTarget_RemoveWeapons), idTarget_RemoveWeapons_typeInfo },
	{ "idTarget_LevelTrigger", "idTarget", sizeof(idTarget_LevelTrigger), idTarget_LevelTrigger_typeInfo },
	{ "idTarget_Checkpoint", "idTarget", sizeof(idTarget_Checkpoint), idTarget_Checkpoint_typeInfo },
	{ "idTarget_EnableStamina", "idTarget", sizeof(idTarget_EnableStamina), idTarget_EnableStamina_typeInfo },
	{ "idTarget_FadeSoundClass", "idTarget", sizeof(idTarget_FadeSoundClass), idTarget_FadeSoundClass_typeInfo },
	{ "idTarget_RumbleJoystick", "idTarget", sizeof(idTarget_RumbleJoystick), idTarget_RumbleJoystick_typeInfo },
	{ "idTarget_Achievement", "idTarget", sizeof(idTarget_Achievement), idTarget_Achievement_typeInfo },
	{ "idTrigger", "idEntity", sizeof(idTrigger), idTrigger_typeInfo },
	{ "idTrigger_Multi", "idTrigger", sizeof(idTrigger_Multi), idTrigger_Multi_typeInfo },
	{ "idTrigger_EntityName", "idTrigger", sizeof(idTrigger_EntityName), idTrigger_EntityName_typeInfo },
	{ "idTrigger_Timer", "idTrigger", sizeof(idTrigger_Timer), idTrigger_Timer_typeInfo },
	{ "idTrigger_Count", "idTrigger", sizeof(idTrigger_Count), idTrigger_Count_typeInfo },
	{ "idTrigger_Hurt", "idTrigger", sizeof(idTrigger_Hurt), idTrigger_Hurt_typeInfo },
	{ "idTrigger_Fade", "idTrigger", sizeof(idTrigger_Fade), idTrigger_Fade_typeInfo },
	{ "idTrigger_Touch", "idTrigger", sizeof(idTrigger_Touch), idTrigger_Touch_typeInfo },
	{ "idTrigger_Flag", "idTrigger_Multi", sizeof(idTrigger_Flag), idTrigger_Flag_typeInfo },
	{ "idSound", "idEntity", sizeof(idSound), idSound_typeInfo },
	{ "idFXLocalAction", "", sizeof(idFXLocalAction), idFXLocalAction_typeInfo },
	{ "idEntityFx", "idEntity", sizeof(idEntityFx), idEntityFx_typeInfo },
	{ "idTeleporter", "idEntityFx", sizeof(idTeleporter), idTeleporter_typeInfo },
	{ "idSecurityCamera", "idEntity", sizeof(idSecurityCamera), idSecurityCamera_typeInfo },
	{ "shard_t", "", sizeof(shard_t), shard_t_typeInfo },
	{ "idBrittleFracture::fractureEvent_s", "", sizeof(idBrittleFracture::fractureEvent_s), idBrittleFracture_fractureEvent_s_typeInfo },
	{ "idBrittleFracture", "idEntity", sizeof(idBrittleFracture), idBrittleFracture_typeInfo },
	{ "ballistics_t", "", sizeof(ballistics_t), ballistics_t_typeInfo },
	{ "obstaclePath_t", "", sizeof(obstaclePath_t), obstaclePath_t_typeInfo },
	{ "predictedPath_t", "", sizeof(predictedPath_t), predictedPath_t_typeInfo },
	{ "particleEmitter_t", "", sizeof(particleEmitter_t), particleEmitter_t_typeInfo },
	{ "funcEmitter_t", "", sizeof(funcEmitter_t), funcEmitter_t_typeInfo },
	{ "idMoveState", "", sizeof(idMoveState), idMoveState_typeInfo },
	{ "idAASFindCover", "idAASCallback", sizeof(idAASFindCover), idAASFindCover_typeInfo },
	{ "idAASFindAreaOutOfRange", "idAASCallback", sizeof(idAASFindAreaOutOfRange), idAASFindAreaOutOfRange_typeInfo },
	{ "idAASFindAttackPosition", "idAASCallback", sizeof(idAASFindAttackPosition), idAASFindAttackPosition_typeInfo },
	{ "idAI", "idActor", sizeof(idAI), idAI_typeInfo },
	{ "idCombatNode", "idEntity", sizeof(idCombatNode), idCombatNode_typeInfo },
	{ "idTestModel", "idAnimatedEntity", sizeof(idTestModel), idTestModel_typeInfo },
	{ "rvmWeaponFist", "rvmWeaponObject", sizeof(rvmWeaponFist), rvmWeaponFist_typeInfo },
	{ "rvmWeaponPistol", "rvmWeaponObject", sizeof(rvmWeaponPistol), rvmWeaponPistol_typeInfo },
	{ "rvmWeaponFlashlight", "rvmWeaponObject", sizeof(rvmWeaponFlashlight), rvmWeaponFlashlight_typeInfo },
	{ "rvmWeaponPDA", "rvmWeaponObject", sizeof(rvmWeaponPDA), rvmWeaponPDA_typeInfo },
	{ "rvmWeaponShotgun", "rvmWeaponObject", sizeof(rvmWeaponShotgun), rvmWeaponShotgun_typeInfo },
	{ "rvmWeaponDoubleShotgun", "rvmWeaponObject", sizeof(rvmWeaponDoubleShotgun), rvmWeaponDoubleShotgun_typeInfo },
	{ "rvmWeaponMachineGun", "rvmWeaponObject", sizeof(rvmWeaponMachineGun), rvmWeaponMachineGun_typeInfo },
	{ "rvmWeaponPlasmaGun", "rvmWeaponObject", sizeof(rvmWeaponPlasmaGun), rvmWeaponPlasmaGun_typeInfo },
	{ "rvmWeaponChainGun", "rvmWeaponObject", sizeof(rvmWeaponChainGun), rvmWeaponChainGun_typeInfo },
	{ "rvmWeaponRocketLauncher", "rvmWeaponObject", sizeof(rvmWeaponRocketLauncher), rvmWeaponRocketLauncher_typeInfo },
	{ "rvmWeaponBFG", "rvmWeaponObject", sizeof(rvmWeaponBFG), rvmWeaponBFG_typeInfo },
	{ "rvmWeaponGrabber", "rvmWeaponObject", sizeof(rvmWeaponGrabber), rvmWeaponGrabber_typeInfo },
	{ "widgetTransition_t", "", sizeof(widgetTransition_t), widgetTransition_t_typeInfo },
	{ "scoreboardInfo_t", "", sizeof(scoreboardInfo_t), scoreboardInfo_t_typeInfo },
	{ "idSort_SavesByDate", "idSort_Quick< idSaveGameDetails , idSort_SavesByDate >", sizeof(idSort_SavesByDate), idSort_SavesByDate_typeInfo },
	{ "idMenuDataSource", "", sizeof(idMenuDataSource), idMenuDataSource_typeInfo },
	{ "idWidgetEvent", "", sizeof(idWidgetEvent), idWidgetEvent_typeInfo },
	{ "idWidgetAction", "", sizeof(idWidgetAction), idWidgetAction_typeInfo },
	{ "idMenuWidget::WrapWidgetSWFEvent", "idSWFScriptFunction_RefCounted", sizeof(idMenuWidget::WrapWidgetSWFEvent), idMenuWidget_WrapWidgetSWFEvent_typeInfo },
	{ "idMenuWidget", "", sizeof(idMenuWidget), idMenuWidget_typeInfo },
	{ "idMenuWidget_Button", "idMenuWidget", sizeof(idMenuWidget_Button), idMenuWidget_Button_typeInfo },
	{ "idMenuWidget_LobbyButton", "idMenuWidget_Button", sizeof(idMenuWidget_LobbyButton), idMenuWidget_LobbyButton_typeInfo },
	{ "idMenuWidget_ScoreboardButton", "idMenuWidget_Button", sizeof(idMenuWidget_ScoreboardButton), idMenuWidget_ScoreboardButton_typeInfo },
	{ "idMenuWidget_ControlButton", "idMenuWidget_Button", sizeof(idMenuWidget_ControlButton), idMenuWidget_ControlButton_typeInfo },
	{ "idMenuWidget_ServerButton", "idMenuWidget_Button", sizeof(idMenuWidget_ServerButton), idMenuWidget_ServerButton_typeInfo },
	{ "idMenuWidget_NavButton", "idMenuWidget_Button", sizeof(idMenuWidget_NavButton), idMenuWidget_NavButton_typeInfo },
	{ "idMenuWidget_MenuButton", "idMenuWidget_Button", sizeof(idMenuWidget_MenuButton), idMenuWidget_MenuButton_typeInfo },
	{ "idMenuWidget_List", "idMenuWidget", sizeof(idMenuWidget_List), idMenuWidget_List_typeInfo },
	{ "idBrowserEntry_t", "", sizeof(idBrowserEntry_t), idBrowserEntry_t_typeInfo },
	{ "idMenuWidget_GameBrowserList", "idMenuWidget_List", sizeof(idMenuWidget_GameBrowserList), idMenuWidget_GameBrowserList_typeInfo },
	{ "idMenuWidget_Carousel", "idMenuWidget", sizeof(idMenuWidget_Carousel), idMenuWidget_Carousel_typeInfo },
	{ "idMenuWidget_Help", "idMenuWidget", sizeof(idMenuWidget_Help), idMenuWidget_Help_typeInfo },
	{ "idMenuWidget_CommandBar::buttonInfo_t", "", sizeof(idMenuWidget_CommandBar::buttonInfo_t), idMenuWidget_CommandBar_buttonInfo_t_typeInfo },
	{ "idMenuWidget_CommandBar", "idMenuWidget", sizeof(idMenuWidget_CommandBar), idMenuWidget_CommandBar_typeInfo },
	{ "idMenuWidget_LobbyList", "idMenuWidget_List", sizeof(idMenuWidget_LobbyList), idMenuWidget_LobbyList_typeInfo },
	{ "idMenuWidget_DynamicList", "idMenuWidget_List", sizeof(idMenuWidget_DynamicList), idMenuWidget_DynamicList_typeInfo },
	{ "idMenuWidget_ScoreboardList", "idMenuWidget_DynamicList", sizeof(idMenuWidget_ScoreboardList), idMenuWidget_ScoreboardList_typeInfo },
	{ "idMenuWidget_NavBar", "idMenuWidget_DynamicList", sizeof(idMenuWidget_NavBar), idMenuWidget_NavBar_typeInfo },
	{ "idMenuWidget_MenuBar", "idMenuWidget_DynamicList", sizeof(idMenuWidget_MenuBar), idMenuWidget_MenuBar_typeInfo },
	{ "idMenuWidget_PDA_UserData", "idMenuWidget", sizeof(idMenuWidget_PDA_UserData), idMenuWidget_PDA_UserData_typeInfo },
	{ "idMenuWidget_ScrollBar", "idMenuWidget", sizeof(idMenuWidget_ScrollBar), idMenuWidget_ScrollBar_typeInfo },
	{ "idMenuWidget_InfoBox", "idMenuWidget", sizeof(idMenuWidget_InfoBox), idMenuWidget_InfoBox_typeInfo },
	{ "idMenuWidget_PDA_Objective", "idMenuWidget", sizeof(idMenuWidget_PDA_Objective), idMenuWidget_PDA_Objective_typeInfo },
	{ "idMenuWidget_Shell_SaveInfo", "idMenuWidget", sizeof(idMenuWidget_Shell_SaveInfo), idMenuWidget_Shell_SaveInfo_typeInfo },
	{ "idMenuWidget_PDA_AudioFiles", "idMenuWidget", sizeof(idMenuWidget_PDA_AudioFiles), idMenuWidget_PDA_AudioFiles_typeInfo },
	{ "idMenuWidget_PDA_EmailInbox", "idMenuWidget", sizeof(idMenuWidget_PDA_EmailInbox), idMenuWidget_PDA_EmailInbox_typeInfo },
	{ "idMenuWidget_ItemAssignment", "idMenuWidget", sizeof(idMenuWidget_ItemAssignment), idMenuWidget_ItemAssignment_typeInfo },
	{ "idMenuWidget_PDA_VideoInfo", "idMenuWidget", sizeof(idMenuWidget_PDA_VideoInfo), idMenuWidget_PDA_VideoInfo_typeInfo },
	{ "idWidgetActionHandler", "idSWFScriptFunction_RefCounted", sizeof(idWidgetActionHandler), idWidgetActionHandler_typeInfo },
	{ "idLBRowBlock", "", sizeof(idLBRowBlock), idLBRowBlock_typeInfo },
	{ "idLBCache", "", sizeof(idLBCache), idLBCache_typeInfo },
	{ "idMenuScreen", "idMenuWidget", sizeof(idMenuScreen), idMenuScreen_typeInfo },
	{ "idMenuScreen_PDA_UserData", "idMenuScreen", sizeof(idMenuScreen_PDA_UserData), idMenuScreen_PDA_UserData_typeInfo },
	{ "idMenuScreen_PDA_UserEmails", "idMenuScreen", sizeof(idMenuScreen_PDA_UserEmails), idMenuScreen_PDA_UserEmails_typeInfo },
	{ "idMenuScreen_PDA_VideoDisks", "idMenuScreen", sizeof(idMenuScreen_PDA_VideoDisks), idMenuScreen_PDA_VideoDisks_typeInfo },
	{ "idMenuScreen_PDA_Inventory", "idMenuScreen", sizeof(idMenuScreen_PDA_Inventory), idMenuScreen_PDA_Inventory_typeInfo },
	{ "idMenuScreen_Shell_Root", "idMenuScreen", sizeof(idMenuScreen_Shell_Root), idMenuScreen_Shell_Root_typeInfo },
	{ "idMenuScreen_Shell_Pause", "idMenuScreen", sizeof(idMenuScreen_Shell_Pause), idMenuScreen_Shell_Pause_typeInfo },
	{ "idMenuScreen_Shell_PressStart", "idMenuScreen", sizeof(idMenuScreen_Shell_PressStart), idMenuScreen_Shell_PressStart_typeInfo },
	{ "idMenuScreen_Shell_GameSelect", "idMenuScreen", sizeof(idMenuScreen_Shell_GameSelect), idMenuScreen_Shell_GameSelect_typeInfo },
	{ "idMenuScreen_Shell_Singleplayer", "idMenuScreen", sizeof(idMenuScreen_Shell_Singleplayer), idMenuScreen_Shell_Singleplayer_typeInfo },
	{ "idMenuScreen_Shell_Settings", "idMenuScreen", sizeof(idMenuScreen_Shell_Settings), idMenuScreen_Shell_Settings_typeInfo },
	{ "creditInfo_t", "", sizeof(creditInfo_t), creditInfo_t_typeInfo },
	{ "idMenuScreen_Shell_Credits", "idMenuScreen", sizeof(idMenuScreen_Shell_Credits), idMenuScreen_Shell_Credits_typeInfo },
	{ "idMenuScreen_Shell_Resolution::optionData_t", "", sizeof(idMenuScreen_Shell_Resolution::optionData_t), idMenuScreen_Shell_Resolution_optionData_t_typeInfo },
	{ "idMenuScreen_Shell_Resolution", "idMenuScreen", sizeof(idMenuScreen_Shell_Resolution), idMenuScreen_Shell_Resolution_typeInfo },
	{ "idMenuScreen_Shell_Difficulty", "idMenuScreen", sizeof(idMenuScreen_Shell_Difficulty), idMenuScreen_Shell_Difficulty_typeInfo },
	{ "idMenuScreen_Shell_Playstation", "idMenuScreen", sizeof(idMenuScreen_Shell_Playstation), idMenuScreen_Shell_Playstation_typeInfo },
	{ "idMenuScreen_Shell_ModeSelect", "idMenuScreen", sizeof(idMenuScreen_Shell_ModeSelect), idMenuScreen_Shell_ModeSelect_typeInfo },
	{ "idMenuScreen_Shell_GameBrowser", "idMenuScreen", sizeof(idMenuScreen_Shell_GameBrowser), idMenuScreen_Shell_GameBrowser_typeInfo },
	{ "idMenuScreen_Shell_Leaderboards::doomLeaderboard_t", "", sizeof(idMenuScreen_Shell_Leaderboards::doomLeaderboard_t), idMenuScreen_Shell_Leaderboards_doomLeaderboard_t_typeInfo },
	{ "idMenuScreen_Shell_Leaderboards", "idMenuScreen", sizeof(idMenuScreen_Shell_Leaderboards), idMenuScreen_Shell_Leaderboards_typeInfo },
	{ "idMenuScreen_Shell_Bindings", "idMenuScreen", sizeof(idMenuScreen_Shell_Bindings), idMenuScreen_Shell_Bindings_typeInfo },
	{ "devOption_t", "", sizeof(devOption_t), devOption_t_typeInfo },
	{ "idMenuScreen_Shell_Dev", "idMenuScreen", sizeof(idMenuScreen_Shell_Dev), idMenuScreen_Shell_Dev_typeInfo },
	{ "idMenuScreen_Shell_NewGame", "idMenuScreen", sizeof(idMenuScreen_Shell_NewGame), idMenuScreen_Shell_NewGame_typeInfo },
	{ "idMenuScreen_Shell_Load", "idMenuScreen", sizeof(idMenuScreen_Shell_Load), idMenuScreen_Shell_Load_typeInfo },
	{ "idMenuScreen_Shell_Save", "idMenuScreen", sizeof(idMenuScreen_Shell_Save), idMenuScreen_Shell_Save_typeInfo },
	{ "idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_GameOptions::idMenuDataSource_GameSettings), idMenuScreen_Shell_GameOptions_idMenuDataSource_GameSettings_typeInfo },
	{ "idMenuScreen_Shell_GameOptions", "idMenuScreen", sizeof(idMenuScreen_Shell_GameOptions), idMenuScreen_Shell_GameOptions_typeInfo },
	{ "idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_MatchSettings::idMenuDataSource_MatchSettings), idMenuScreen_Shell_MatchSettings_idMenuDataSource_MatchSettings_typeInfo },
	{ "idMenuScreen_Shell_MatchSettings", "idMenuScreen", sizeof(idMenuScreen_Shell_MatchSettings), idMenuScreen_Shell_MatchSettings_typeInfo },
	{ "idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_Controls::idMenuDataSource_ControlSettings), idMenuScreen_Shell_Controls_idMenuDataSource_ControlSettings_typeInfo },
	{ "idMenuScreen_Shell_Controls", "idMenuScreen", sizeof(idMenuScreen_Shell_Controls), idMenuScreen_Shell_Controls_typeInfo },
	{ "idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_Gamepad::idMenuDataSource_GamepadSettings), idMenuScreen_Shell_Gamepad_idMenuDataSource_GamepadSettings_typeInfo },
	{ "idMenuScreen_Shell_Gamepad", "idMenuScreen", sizeof(idMenuScreen_Shell_Gamepad), idMenuScreen_Shell_Gamepad_typeInfo },
	{ "idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_ControllerLayout::idMenuDataSource_LayoutSettings), idMenuScreen_Shell_ControllerLayout_idMenuDataSource_LayoutSettings_typeInfo },
	{ "idMenuScreen_Shell_ControllerLayout", "idMenuScreen", sizeof(idMenuScreen_Shell_ControllerLayout), idMenuScreen_Shell_ControllerLayout_typeInfo },
	{ "idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings", "idMenuDataSource", sizeof(idMenuScreen_Shell_SystemOptions::idMenuDataSource_SystemSettings), idMenuScreen_Shell_SystemOptions_idMenuDataSource_SystemSettings_typeInfo },
	{ "idMenuScreen_Shell_SystemOptions", "idMenuScreen", sizeof(idMenuScreen_Shell_SystemOptions), idMenuScreen_Shell_SystemOptions_typeInfo },
	{ "idMenuScreen_Shell_PartyLobby", "idMenuScreen", sizeof(idMenuScreen_Shell_PartyLobby), idMenuScreen_Shell_PartyLobby_typeInfo },
	{ "idMenuScreen_Shell_GameLobby", "idMenuScreen", sizeof(idMenuScreen_Shell_GameLobby), idMenuScreen_Shell_GameLobby_typeInfo },
	{ "idMenuScreen_HUD", "idMenuScreen", sizeof(idMenuScreen_HUD), idMenuScreen_HUD_typeInfo },
	{ "idMenuScreen_Scoreboard", "idMenuScreen", sizeof(idMenuScreen_Scoreboard), idMenuScreen_Scoreboard_typeInfo },
	{ "idMenuScreen_Scoreboard_CTF", "idMenuScreen_Scoreboard", sizeof(idMenuScreen_Scoreboard_CTF), idMenuScreen_Scoreboard_CTF_typeInfo },
	{ "idMenuScreen_Scoreboard_Team", "idMenuScreen_Scoreboard", sizeof(idMenuScreen_Scoreboard_Team), idMenuScreen_Scoreboard_Team_typeInfo },
	{ "actionRepeater_t", "", sizeof(actionRepeater_t), actionRepeater_t_typeInfo },
	{ "mpScoreboardInfo", "", sizeof(mpScoreboardInfo), mpScoreboardInfo_typeInfo },
	{ "idMenuHandler", "", sizeof(idMenuHandler), idMenuHandler_typeInfo },
	{ "lobbyPlayerInfo_t", "", sizeof(lobbyPlayerInfo_t), lobbyPlayerInfo_t_typeInfo },
	{ "idMenuHandler_Shell", "idMenuHandler", sizeof(idMenuHandler_Shell), idMenuHandler_Shell_typeInfo },
	{ "idMenuHandler_PDA", "idMenuHandler", sizeof(idMenuHandler_PDA), idMenuHandler_PDA_typeInfo },
	{ "idMenuHandler_HUD", "idMenuHandler", sizeof(idMenuHandler_HUD), idMenuHandler_HUD_typeInfo },
	{ "idMenuHandler_Scoreboard", "idMenuHandler", sizeof(idMenuHandler_Scoreboard), idMenuHandler_Scoreboard_typeInfo },
	{ "opcode_t", "", sizeof(opcode_t), opcode_t_typeInfo },
	{ "idCompiler", "", sizeof(idCompiler), idCompiler_typeInfo },
	{ "prstack_t", "", sizeof(prstack_t), prstack_t_typeInfo },
	{ "idInterpreter", "", sizeof(idInterpreter), idInterpreter_typeInfo },
	{ "idThread", "idClass", sizeof(idThread), idThread_typeInfo },
	{ NULL, NULL, 0, NULL }
};

#endif /* !__GAMETYPEINFO_H__ */
