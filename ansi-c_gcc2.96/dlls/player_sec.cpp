/*
Includes needed for linux compile in order of player.cpp includes- swampdog July 2015
*/ 
#include <iostream>
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
/*
#include "trains.h"
#include "weapons.h"
#include "soundent.h"
#include "monsters.h"
#include "../engine/shake.h"
#include "decals.h"
#include "gamerules.h"
#include "sdk_e_menu.h"
#include "sdk_u_main.h"
#include "sdk_c_global.h"
#include "sdk_w_classes.h"
*/
// LINK_ENTITY_TO_CLASS(player, CBasePlayer);
// class CBasePlayer :: 
// void CBasePlayer::Pain( void )()
Vector VecVelocityForDamage(float flDamage){}
int TrainSpeed(int iSpeed, int iMax){}
void CBasePlayer :: DeathSound( void ){}
int CBasePlayer :: TakeHealth( float flHealth, int bitsDamageType ){}
Vector CBasePlayer :: GetGunPosition( ){}
void CBasePlayer :: TraceAttack( entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType){}
int CBasePlayer :: TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType ){}
void DropPrimaryWeapon(CBasePlayer * player);
void CBasePlayer::PackDeadPlayerItems( void ){}
void CBasePlayer::RemoveAllItems( BOOL removeSuit ){}
void DropPlayerNANA(CBasePlayer *);
void CBasePlayer::Killed( entvars_t *pevAttacker, int iGib ){}
void CBasePlayer::SetAnimation( PLAYER_ANIM playerAnim ){}
void CBasePlayer::WaterMove(){}
BOOL CBasePlayer::IsOnLadder( void ){}
void CBasePlayer::PlayerUse ( void ){}
void CBasePlayer::Jump(){}
void FixPlayerCrouchStuck( edict_t *pPlayer ){}
void CBasePlayer::Duck( ){}
int  CBasePlayer::Classify ( void ){}
void CBasePlayer :: PlayStepSound(int step, float fvol){}
int MapTextureTypeStepType(char chTextureType){}
void CBasePlayer :: UpdateStepSound( void ){}
void CBasePlayer::PreThink(void){}
void CBasePlayer::CheckTimeBasedDamage(){} 
void CBasePlayer::CheckSuitUpdate(){}
void CBasePlayer::SetSuitUpdate(char *name, int fgroup, int iNoRepeatTime){}
static void CheckPowerups(entvars_t *pev){}
void CBasePlayer :: UpdatePlayerSound ( void ){}
void CBasePlayer::PostThink(){}
BOOL IsSpawnPointValid( CBaseEntity *pPlayer, CBaseEntity *pSpot ){}
DLL_GLOBAL CBaseEntity	*g_pLastSpawn;
inline int FNullEnt( CBaseEntity *ent ) { return (ent == NULL) || FNullEnt( ent->edict() ); }
edict_t *EntSelectSpawnPoint( CBaseEntity *pPlayer ){}
void CBasePlayer::SpectatorSpawn( void ){}
void CBasePlayer :: Precache( void ){}
int CBasePlayer::Save( CSave &save ){}
void CBasePlayer::RenewItems(void){}
int CBasePlayer::Restore( CRestore &restore ){}
void CBasePlayer::SelectNextItem( int iItem ){}
void CBasePlayer::SelectItem(const char *pstr){}
void CBasePlayer::SelectLastItem(void){}
BOOL CBasePlayer::HasWeapons( void ){}
void CBasePlayer::SelectPrevItem( int iItem ){}
const char *CBasePlayer::TeamID( void ){};
class CSprayCan : public CBaseEntity {}
void CSprayCan::Spawn ( entvars_t *pevOwner ){}
void CSprayCan::Think( void ){}
class	CBloodSplat : public CBaseEntity{}
void CBloodSplat::Spawn ( entvars_t *pevOwner ){}
void CBloodSplat::Spray ( void ){}
void CBasePlayer::GiveNamedItem( const char *pszName ){}
CBaseEntity *FindEntityForward( CBaseEntity *pMe ){}
BOOL CBasePlayer :: FlashlightIsOn( void ){}
void CBasePlayer :: FlashlightTurnOn( void ){}
void CBasePlayer :: FlashlightTurnOff( void ){}
void CBasePlayer :: ForceClientDllUpdate( void ){}
extern float g_flWeaponCheat;
void CBasePlayer::ImpulseCommands( ){}
int CBasePlayer::AddPlayerItem( CBasePlayerItem *pItem ){}
int CBasePlayer::RemovePlayerItem( CBasePlayerItem *pItem ){}
int CBasePlayer :: GiveAmmo( int iCount, char *szName, int iMax ){}
void CBasePlayer::ItemPreFrame(){}
void CBasePlayer::ItemPostFrame(){}
int CBasePlayer::AmmoInventory( int iAmmoIndex ){}
int CBasePlayer::GetAmmoIndex(const char *psz){}
void CBasePlayer::SendAmmoUpdate(void){}
void CBasePlayer :: UpdateClientData( void ){}
BOOL CBasePlayer :: FBecomeProne ( void ){}
void CBasePlayer :: BarnacleVictimBitten ( entvars_t *pevBarnacle ){}
void CBasePlayer :: BarnacleVictimReleased ( void ){}
int CBasePlayer :: Illumination( void ){}
void CBasePlayer :: EnableControl(BOOL fControl){}
void CBasePlayer :: SetCustomDecalFrames( int nFrames ){}
int CBasePlayer :: GetCustomDecalFrames( void ){}
void CBasePlayer::DropPlayerItem ( char *pszItemName ){}
BOOL CBasePlayer::HasPlayerItem( CBasePlayerItem *pCheckItem ){}
BOOL CBasePlayer::HasNamedPlayerItem( const char *pszItemName ){}
BOOL CBasePlayer :: SwitchWeapon( CBasePlayerItem *pWeapon ) {}
void CBasePlayer::PlayerDeathThink(void){}
void SendClientsInfo(CBasePlayer* me, int team_index);
void CBasePlayer::StartDeathCam( void ){}
void CBasePlayer::Radio (int RadioCommand, int iTeam){}

class CStripWeapons : public CPointEntity[]
void CStripWeapons :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )[]

class CRevertSaved : public CPointEntity[]
void CRevertSaved :: KeyValue( KeyValueData *pkvd )[]
void CRevertSaved :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )[]
void CRevertSaved :: MessageThink( void )[]
void CRevertSaved :: LoadThink( void )[]

class CInfoIntermission:public CPointEntity[]
void CInfoIntermission::Spawn( void )[]
void CInfoIntermission::Think ( void )[]
