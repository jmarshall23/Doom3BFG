// Monster_zombie_commando_cgun.h
//

#pragma once

//
// rvmMonsterZombieCommandoChaingun
//
class rvmMonsterZombieCommandoChaingun : public idAI
{
	CLASS_PROTOTYPE( rvmMonsterZombieCommandoChaingun );
public:
	virtual void				Init( void ) override;
	virtual void				AI_Begin( void ) override;

	virtual int					check_attacks() override;
	virtual void				do_attack( int attack_flags ) override;
private:
	stateResult_t				state_Begin( stateParms_t* parms );
	stateResult_t				state_Idle( stateParms_t* parms );
	stateResult_t				combat_dodge_right( stateParms_t* parms );
	stateResult_t				combat_dodge_left( stateParms_t* parms );
	stateResult_t				crouch_attack( stateParms_t* parms );
	stateResult_t				stand_attack( stateParms_t* parms );
private:
	idScriptBool		fire;
	idScriptBool		crouch_fire;
	idScriptBool		step_left;
	idScriptBool		step_right;
	idScriptFloat		nextDodge;
	idScriptFloat		nextAttack;
	idScriptFloat		nextNoFOVAttack;
private:
	idEntity*			combat_node;
	float				attackTime;
};
