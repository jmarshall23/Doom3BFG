#include "precompiled.h"
#include "../sys/sys_local.h"
#include "../framework/EventLoop.h"
#include "../framework/DeclManager.h"

#include <direct.h>
#include <io.h>

idEventLoop* eventLoop;
idDeclManager* declManager;
idSys* sys = NULL;

#define STDIO_PRINT( pre, post )	\
	va_list argptr;					\
	va_start( argptr, fmt );		\
	printf( pre );					\
	vprintf( fmt, argptr );			\
	printf( post );					\
	OutputDebugStringA(post);		\
	va_end( argptr )

idCVar com_productionMode( "com_productionMode", "0", CVAR_SYSTEM | CVAR_BOOL, "0 - no special behavior, 1 - building a production build, 2 - running a production build" );


/*
==============
Sys_Mkdir
==============
*/
void Sys_Mkdir( const char* path )
{
	_mkdir( path );
}


/*
========================
Sys_Rmdir
========================
*/
bool Sys_Rmdir( const char* path )
{
	return _rmdir( path ) == 0;
}

/*
==============
Sys_EXEPath
==============
*/
const char* Sys_EXEPath()
{
	static char exe[MAX_OSPATH];
	GetModuleFileName( NULL, exe, sizeof( exe ) - 1 );
	return exe;
}

/*
==============
Sys_ListFiles
==============
*/
int Sys_ListFiles( const char* directory, const char* extension, idStrList& list )
{
	idStr		search;
	struct _finddata_t findinfo;
	// RB: 64 bit fixes, changed int to intptr_t
	intptr_t	findhandle;
	// RB end
	int			flag;

	if( !extension )
	{
		extension = "";
	}

	// passing a slash as extension will find directories
	if( extension[0] == '/' && extension[1] == 0 )
	{
		extension = "";
		flag = 0;
	}
	else
	{
		flag = _A_SUBDIR;
	}

	sprintf( search, "%s\\*%s", directory, extension );

	// search
	list.Clear();

	findhandle = _findfirst( search, &findinfo );
	if( findhandle == -1 )
	{
		return -1;
	}

	do
	{
		if( flag ^ ( findinfo.attrib & _A_SUBDIR ) )
		{
			list.Append( findinfo.name );
		}
	}
	while( _findnext( findhandle, &findinfo ) != -1 );

	_findclose( findhandle );

	return list.Num();
}



int idEventLoop::JournalLevel( void ) const
{
	return 0;
}

/*
========================
Sys_IsFolder
========================
*/
sysFolder_t Sys_IsFolder( const char* path )
{
	struct _stat buffer;
	if( _stat( path, &buffer ) < 0 )
	{
		return FOLDER_ERROR;
	}
	return ( buffer.st_mode & _S_IFDIR ) != 0 ? FOLDER_YES : FOLDER_NO;
}

const char* Sys_DefaultSavePath()
{
	return "";
}

const char* Sys_Lang( int )
{
	return "";
}


/*
=================
Sys_FileTimeStamp
=================
*/
ID_TIME_T Sys_FileTimeStamp( idFileHandle fp )
{
	FILETIME writeTime;
	GetFileTime( fp, NULL, NULL, &writeTime );

	/*
		FILETIME = number of 100-nanosecond ticks since midnight
		1 Jan 1601 UTC. time_t = number of 1-second ticks since
		midnight 1 Jan 1970 UTC. To translate, we subtract a
		FILETIME representation of midnight, 1 Jan 1970 from the
		time in question and divide by the number of 100-ns ticks
		in one second.
	*/

	SYSTEMTIME base_st =
	{
		1970,   // wYear
		1,      // wMonth
		0,      // wDayOfWeek
		1,      // wDay
		0,      // wHour
		0,      // wMinute
		0,      // wSecond
		0       // wMilliseconds
	};

	FILETIME base_ft;
	SystemTimeToFileTime( &base_st, &base_ft );

	LARGE_INTEGER itime;
	itime.QuadPart = reinterpret_cast<LARGE_INTEGER&>( writeTime ).QuadPart;
	itime.QuadPart -= reinterpret_cast<LARGE_INTEGER&>( base_ft ).QuadPart;
	itime.QuadPart /= 10000000LL;
	return itime.QuadPart;
}

/*
==============
Sys_Cwd
==============
*/
const char* Sys_Cwd()
{
	static char cwd[MAX_OSPATH];

	_getcwd( cwd, sizeof( cwd ) - 1 );
	cwd[MAX_OSPATH - 1] = 0;

	return cwd;
}

/*
==============
Sys_DefaultBasePath
==============
*/
const char* Sys_DefaultBasePath()
{
	return Sys_Cwd();
}

int Sys_NumLangs( void )
{
	return 0;
}

/*
================
Sys_Milliseconds
================
*/
int Sys_Milliseconds()
{
	static DWORD sys_timeBase = timeGetTime();
	return timeGetTime() - sys_timeBase;
}

class idCommonLocal : public idCommon
{
public:

	// Initialize everything.
	// if the OS allows, pass argc/argv directly (without executable name)
	// otherwise pass the command line in a single string (without executable name)
	virtual void				Init( int argc, const char* const* argv, const char* cmdline ) { };

	// Shuts down everything.
	virtual void				Shutdown() { };
	virtual bool				IsShuttingDown() const
	{
		return false;
	};

	virtual	void				CreateMainMenu() { };

	// Shuts down everything.
	virtual void				Quit() { };

	// Returns true if common initialization is complete.
	virtual bool				IsInitialized() const
	{
		return true;
	};

	// Called repeatedly as the foreground thread for rendering and game logic.
	virtual void				Frame() { };

	// Redraws the screen, handling games, guis, console, etc
	// in a modal manner outside the normal frame loop
	virtual void				UpdateScreen() { };

	virtual void				UpdateLevelLoadPacifier() { };


	// Checks for and removes command line "+set var arg" constructs.
	// If match is NULL, all set commands will be executed, otherwise
	// only a set with the exact name.
	virtual void				StartupVariable( const char* match ) { };

	// Begins redirection of console output to the given buffer.
	virtual void				BeginRedirect( char* buffer, int buffersize, void ( *flush )( const char* ) ) { };

	// Stops redirection of console output.
	virtual void				EndRedirect() { };

	// Update the screen with every message printed.
	virtual void				SetRefreshOnPrint( bool set ) { };

	virtual void			Printf( const char* fmt, ... )
	{
		STDIO_PRINT( "", "" );
	}
	virtual void			VPrintf( const char* fmt, va_list arg )
	{
		vprintf( fmt, arg );
	}
	virtual void			DPrintf( const char* fmt, ... )
	{
		/*STDIO_PRINT( "", "" );*/
	}
	virtual void			Warning( const char* fmt, ... )
	{
		STDIO_PRINT( "WARNING: ", "\n" );
	}
	virtual void			DWarning( const char* fmt, ... )
	{
		/*STDIO_PRINT( "WARNING: ", "\n" );*/
	}

	// Prints all queued warnings.
	virtual void				PrintWarnings() { };

	// Removes all queued warnings.
	virtual void				ClearWarnings( const char* reason ) { };

	virtual void			Error( const char* fmt, ... )
	{
		STDIO_PRINT( "ERROR: ", "\n" );
		exit( 0 );
	}
	virtual void			FatalError( const char* fmt, ... )
	{
		STDIO_PRINT( "FATAL ERROR: ", "\n" );
		exit( 0 );
	}

	// Returns key bound to the command
	virtual const char* KeysFromBinding( const char* bind )
	{
		return NULL;
	};

	// Returns the binding bound to the key
	virtual const char* BindingFromKey( const char* key )
	{
		return NULL;
	};

	// Directly sample a button.
	virtual int					ButtonState( int key )
	{
		return 0;
	};

	// Directly sample a keystate.
	virtual int					KeyState( int key )
	{
		return 0;
	};

	// Returns true if a multiplayer game is running.
	// CVars and commands are checked differently in multiplayer mode.
	virtual bool				IsMultiplayer()
	{
		return false;
	};
	virtual bool				IsServer()
	{
		return false;
	};
	virtual bool				IsClient()
	{
		return false;
	};

	// Returns true if the player has ever enabled the console
	virtual bool				GetConsoleUsed()
	{
		return false;
	};

	// Returns the rate (in ms between snaps) that we want to generate snapshots
	virtual int					GetSnapRate()
	{
		return 0;
	};

	virtual void				NetReceiveReliable( int peer, int type, idBitMsg& msg ) { };
	virtual void				NetReceiveSnapshot( class idSnapShot& ss ) { };
	virtual void				NetReceiveUsercmds( int peer, idBitMsg& msg ) { };

	// Processes the given event.
	virtual	bool				ProcessEvent( const sysEvent_t* event )
	{
		return false;
	};

	virtual bool				LoadGame( const char* saveName )
	{
		return false;
	};
	virtual bool				SaveGame( const char* saveName )
	{
		return false;
	};

	virtual idGame* Game()
	{
		return NULL;
	};
	virtual idRenderWorld* RW()
	{
		return NULL;
	};
	virtual idSoundWorld* SW()
	{
		return NULL;
	};
	virtual idSoundWorld* MenuSW()
	{
		return NULL;
	};
	virtual idSession* Session()
	{
		return NULL;
	};
	virtual idCommonDialog& Dialog()
	{
		static idCommonDialog useless;
		return useless;
	};

	virtual void				OnSaveCompleted( idSaveLoadParms& parms ) { };
	virtual void				OnLoadCompleted( idSaveLoadParms& parms ) { };
	virtual void				OnLoadFilesCompleted( idSaveLoadParms& parms ) { };
	virtual void				OnEnumerationCompleted( idSaveLoadParms& parms ) { };
	virtual void				OnDeleteCompleted( idSaveLoadParms& parms ) { };
	virtual void				TriggerScreenWipe( const char* _wipeMaterial, bool hold ) { };

	virtual void				OnStartHosting( idMatchParameters& parms ) { };

	virtual int					GetGameFrame()
	{
		return 0;
	};

	virtual void				LaunchExternalTitle( int titleIndex, int device, const lobbyConnectInfo_t* const connectInfo ) { };

	virtual void				InitializeMPMapsModes() { };
	virtual const idStrList& GetModeList() const
	{
		static idStrList useless;
		return useless;
	};
	virtual const idStrList& GetModeDisplayList() const
	{
		static idStrList useless;
		return useless;
	};
	virtual const idList<mpMap_t>& GetMapList() const
	{
		static idList<mpMap_t> useless;
		return useless;
	};

	virtual void				ResetPlayerInput( int playerIndex ) { };

	virtual bool				JapaneseCensorship() const
	{
		return false;
	};

	virtual void				QueueShowShell() { };		// Will activate the shell on the next frame.
	virtual void idCommon::UpdateScreen( bool, bool ) { }
	void idCommon::InitTool( const toolFlag_t, const idDict*, idEntity* ) { }
	idDemoFile* idCommon::ReadDemo( void )
	{
		return NULL;
	}
	idDemoFile* idCommon::WriteDemo( void )
	{
		return NULL;
	}
	//virtual currentGame_t		GetCurrentGame() const {
	//	return DOOM_CLASSIC;
	//};
	//virtual void				SwitchToGame(currentGame_t newGame) { };
};

idCommonLocal		commonLocal;
idCommon* common = &commonLocal;
