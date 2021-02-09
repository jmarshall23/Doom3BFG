// Weapon_double_shotgun.h
//

#pragma once

class rvmWeaponDoubleShotgun : public rvmWeaponObject {
public:
	CLASS_PROTOTYPE(rvmWeaponDoubleShotgun);

	virtual void			Init(idWeapon* weapon);

	virtual void			Raise();
	virtual void			Idle();
	virtual void			Fire();
	virtual void			Lower();
	virtual void			Reload();

	virtual bool			HasWaitSignal(void) override;
private:
	float		next_attack;
};