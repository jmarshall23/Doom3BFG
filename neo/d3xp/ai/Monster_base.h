// Monster_base.h
//

#pragma once

class rvmMonsterBase : public idAI
{
public:
	CLASS_PROTOTYPE(rvmMonsterBase);

	virtual void Init(void) override { }

	void trigger_wakeup_targets(void);
	bool checkForEnemy(float use_fov);
protected:
	stateResult_t state_Spawner();
	stateResult_t monster_begin(void);
protected:
	// common state variables
	float		run_distance;			// distance to trigger running when chasing enemy
	float		walk_turn;				// max turn amount allowed when running
	bool		run;
	bool		ambush;
	bool		ignoreEnemies;			// used to disable enemy checks during attack_path
	bool		stay_on_attackpath;		// used to disable enemy checks during attack_path
	bool		idle_sight_fov;
	float		customBlendOut;
	idEntity*	current_path;
	idEntity*	next_path;
	bool		resurrect;
	bool		ignore_lostcombat;
	bool		blocked;
	bool		ignore_sight;
	idStr		playingTriggerAnim;
};