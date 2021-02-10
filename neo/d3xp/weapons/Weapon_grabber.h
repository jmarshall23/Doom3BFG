// Weapon_grabber.h
//

#pragma once

class rvmWeaponGrabber : public rvmWeaponObject
{
public:
	CLASS_PROTOTYPE( rvmWeaponGrabber );

	virtual void			Init( idWeapon* weapon );

	virtual void			Raise();
	virtual void			Idle();
	virtual void			Fire();
	virtual void			Lower();
	virtual void			Reload();

	virtual bool			CanFire() override;

	virtual bool			HasWaitSignal( void ) override;
private:
	void		StartActive();
	void		StopActive();

	void		StartWarningSound();
	void		UpdateWarningSound();

	void		UpdateGuiLight();

	const idSoundShader* snd_fireloop;
	const idSoundShader* snd_electroloop;
	const idSoundShader* snd_mainfire;
	const idSoundShader* snd_cangrab;
	const idSoundShader* snd_warning;
	const idSoundShader* snd_stopfire;
private:
	float		next_attack;

	float		fireStartTime;
	bool		warningBeep1;
	bool		warningBeep2;
	bool		warningBeep3;
	bool		warningBeep4;

	float		grabberState;
};