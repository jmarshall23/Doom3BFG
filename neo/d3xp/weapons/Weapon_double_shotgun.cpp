// Weapon_double_shotgun.cpp
//

#pragma hdrstop
#include "precompiled.h"
#include "../Game_local.h"

CLASS_DECLARATION( rvmWeaponObject, rvmWeaponDoubleShotgun )
END_CLASS


//#define SHOTGUN_DOUBLE_FIRERATE		1.333
#define SHOTGUN_DOUBLE_FIRERATE		2.2

#define SHOTGUN_DOUBLE_REQUIRED			2

// blend times
#define SHOTGUN_DOUBLE_IDLE_TO_IDLE	0
#define SHOTGUN_DOUBLE_IDLE_TO_LOWER	4
#define SHOTGUN_DOUBLE_IDLE_TO_FIRE	0
#define	SHOTGUN_DOUBLE_IDLE_TO_RELOAD	4
#define	SHOTGUN_DOUBLE_IDLE_TO_NOAMMO	4
#define SHOTGUN_DOUBLE_NOAMMO_TO_RELOAD	4
#define SHOTGUN_DOUBLE_NOAMMO_TO_IDLE	4
#define SHOTGUN_DOUBLE_RAISE_TO_IDLE	4
#define SHOTGUN_DOUBLE_FIRE_TO_IDLE	4
#define SHOTGUN_DOUBLE_RELOAD_TO_IDLE	4
#define	SHOTGUN_DOUBLE_RELOAD_TO_FIRE	4


//Shotgun Projectile Information
#define SHOTGUN_CENTER_PROJECTILES		8
//#define SHOTGUN_CENTER_PROJECTILES 7
#define SHOTGUN_BIG_PROJECTILES			12
//#define SHOTGUN_BIG_PROJECTILES 13

#define SHOTGUN_CENTER_WIDTH			5
#define SHOTGUN_CENTER_HEIGHT			10
//#define SHOTGUN_CENTER_HEIGHT 12
#define SHOTGUN_BIG_WIDTH				22
//#define SHOTGUN_BIG_WIDTH 25
#define SHOTGUN_BIG_HEIGHT				15

/*
===============
rvmWeaponDoubleShotgun::Init
===============
*/
void rvmWeaponDoubleShotgun::Init( idWeapon* weapon )
{
	rvmWeaponObject::Init( weapon );

	next_attack = 0;
	weapon->WeaponState( WP_RISING, 0 );
}

/*
===============
rvmWeaponDoubleShotgun::Raise
===============
*/
void rvmWeaponDoubleShotgun::Raise()
{
	enum RisingState
	{
		RISING_NOTSET = 0,
		RISING_WAIT
	};

	switch( risingState )
	{
		case RISING_NOTSET:
			owner->Event_WeaponRising();
			owner->Event_PlayAnim( ANIMCHANNEL_ALL, "raise", false );
			risingState = RISING_WAIT;
			break;

		case RISING_WAIT:
			if( owner->Event_AnimDone( ANIMCHANNEL_ALL, SHOTGUN_DOUBLE_RAISE_TO_IDLE ) )
			{
				owner->WeaponState( WP_IDLE, SHOTGUN_DOUBLE_RAISE_TO_IDLE );
				risingState = RISING_NOTSET;
				isRisen = true;
			}
			break;
	}
}


/*
===============
rvmWeaponDoubleShotgun::Lower
===============
*/
void rvmWeaponDoubleShotgun::Lower()
{
	enum LoweringState
	{
		LOWERING_NOTSET = 0,
		LOWERING_WAIT
	};

	switch( loweringState )
	{
		case LOWERING_NOTSET:
			owner->Event_WeaponLowering();
			owner->Event_PlayAnim( ANIMCHANNEL_ALL, "putaway", false );
			loweringState = LOWERING_WAIT;
			break;

		case LOWERING_WAIT:
			if( owner->Event_AnimDone( ANIMCHANNEL_ALL, 0 ) )
			{
				owner->Event_WeaponHolstered();
				loweringState = LOWERING_NOTSET;
				isHolstered = true;
			}
			break;
	}
}

/*
===============
rvmWeaponDoubleShotgun::Idle
===============
*/
void rvmWeaponDoubleShotgun::Idle()
{
	//float currentTime = 0;
	float clip_size;

	clip_size = owner->ClipSize();

	enum IdleState
	{
		IDLE_NOTSET = 0,
		IDLE_WAIT
	};

	switch( idleState )
	{
		case IDLE_NOTSET:
			owner->Event_WeaponReady();
			if( !owner->AmmoInClip() )
			{
				owner->Event_WeaponOutOfAmmo();
			}
			else
			{
				owner->Event_WeaponReady();
			}

			owner->Event_PlayCycle( ANIMCHANNEL_ALL, "idle" );
			idleState = IDLE_WAIT;
			break;

		case IDLE_WAIT:
			// Do nothing.
			break;
	}
}

/*
===============
rvmWeaponDoubleShotgun::Fire
===============
*/
void rvmWeaponDoubleShotgun::Fire()
{
	int ammoClip = owner->AmmoInClip();

	enum FIRE_State
	{
		FIRE_NOTSET = 0,
		FIRE_WAIT
	};

	if( ammoClip == 0 && owner->AmmoAvailable() && firingState == 0 )
	{
		owner->WeaponState( WP_RELOAD, SHOTGUN_DOUBLE_IDLE_TO_RELOAD );
		return;
	}

	switch( firingState )
	{
		case FIRE_NOTSET:
			//if (ammoClip == SHOTGUN_LOWAMMO) {
			//	int length;
			//	owner->StartSoundShader(snd_lowammo, SND_CHANNEL_ITEM, 0, false, &length);
			//}

			//owner->Event_LaunchProjectiles(SHOTGUN_NUMPROJECTILES, spread, 0, 1, 1);
			owner->Event_LaunchProjectilesEllipse( SHOTGUN_CENTER_PROJECTILES, SHOTGUN_CENTER_WIDTH, SHOTGUN_CENTER_HEIGHT, 0, 1.0 );
			owner->Event_LaunchProjectilesEllipse( SHOTGUN_BIG_PROJECTILES, SHOTGUN_BIG_WIDTH, SHOTGUN_BIG_HEIGHT, 0, 1.0 );

			owner->Event_PlayAnim( ANIMCHANNEL_ALL, "fire", false );
			firingState = FIRE_WAIT;
			break;

		case FIRE_WAIT:
			if( owner->Event_AnimDone( ANIMCHANNEL_ALL, SHOTGUN_DOUBLE_FIRE_TO_IDLE ) )
			{
				owner->WeaponState( WP_RELOAD, SHOTGUN_DOUBLE_IDLE_TO_RELOAD );
				firingState = 0;
			}
			break;
	}
}

/*
===============
rvmWeaponDoubleShotgun::HasWaitSignal
===============
*/
bool rvmWeaponDoubleShotgun::HasWaitSignal( void )
{
	if( rvmWeaponObject::HasWaitSignal() )
	{
		return true;
	}

	// Allow the player to shoot or reload while reloading.
	return false; // next_attack >= MS2SEC(gameLocal.realClientTime);
}


/*
===============
rvmWeaponDoubleShotgun::Reload
===============
*/
void rvmWeaponDoubleShotgun::Reload()
{
	float ammoClip;
	float ammoAvail;
	float clip_size;

	clip_size = owner->ClipSize();

	enum RELOAD_State
	{
		RELOAD_NOTSET = 0,
		RELOAD_WAIT
	};

	ammoAvail = owner->AmmoAvailable();
	ammoClip = owner->AmmoInClip();

	switch( reloadState )
	{
		case RELOAD_NOTSET:
			owner->Event_WeaponReloading();
			owner->Event_PlayAnim( ANIMCHANNEL_ALL, "reload_start", false );
			reloadState = RELOAD_WAIT;
			break;

		case RELOAD_WAIT:
			if( owner->Event_AnimDone( ANIMCHANNEL_ALL, 0 ) )
			{
				owner->Event_AddToClip( owner->ClipSize() );

				owner->WeaponState( WP_IDLE, 0 );
				reloadState = 0;
			}
			break;
	}
}