// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: CfgRemoteExec_fnc.hpp
//	@file Author: AgentRev

// remoteExec & BIS_fnc_MP functions whitelist (client only, server calls are not filtered)

// BIS
class BIS_fnc_effectKilledAirDestruction {};
class BIS_fnc_effectKilledSecondaries {};
class BIS_fnc_objectVar {};

// do NOT whitelist BIS_fnc_execVM or BIS_fnc_spawn, it will allow exploits!

// A3W vanilla
class A3W_fnc_adminMenuLog { allowedTargets = 2; };
class A3W_fnc_chatBroadcast {};
class A3W_fnc_checkHackedVehicles { allowedTargets = 2; };
class A3W_fnc_checkPlayerFlag { allowedTargets = 2; };
class A3W_fnc_copilotTakeControl {};
class A3W_fnc_deathMessage {};
class A3W_fnc_deleteEmptyGroup { allowedTargets = 2; };
class A3W_fnc_flagHandler { allowedTargets = 2; };
class A3W_fnc_getInFast {};
class A3W_fnc_initPlayerServer { allowedTargets = 2; };
class A3W_fnc_logMemAnomaly { allowedTargets = 2; };
class A3W_fnc_pushVehicle {};
//class A3W_fnc_registerKillScore { allowedTargets = 2; }; // only needed for injury kill points, not currently enabled due to point farming concerns
class A3W_fnc_requestTickTime { allowedTargets = 2; };
class A3W_fnc_serverPlayerDied { allowedTargets = 2; };
class A3W_fnc_setItemCleanup { allowedTargets = 2; };
class A3W_fnc_setLockState {};
class A3W_fnc_setName { jip = 1; };
class A3W_fnc_takeOwnership { allowedTargets = 2; };
class A3W_fnc_titleTextMessage {};
class A3W_fnc_towingHelper {};
class A3W_fnc_updateSpawnTimestamp { allowedTargets = 2; };
class FAR_fnc_headshotHitPartEH {};
class FAR_fnc_public_EH {};
class mf_remote_refuel {};
class mf_remote_repair {};
class mf_remote_syphon {};

// Third-party
class A3W_fnc_lock {};
class A3W_fnc_unflip {};
class APOC_srv_startAirdrop { allowedTargets = 2; };
class JTS_FNC_SENT {};
class AR_Client_Rappel_From_Heli { allowedTargets=0; };
class AR_Hint { allowedTargets=1; };
class AR_Hide_Object_Global { allowedTargets=2; };
class AR_Enable_Rappelling_Animation { allowedTargets=2; };
class AR_Rappel_From_Heli { allowedTargets=2; };
class AUR_Hint { allowedTargets=1; };
class AUR_Hide_Object_Global { allowedTargets=2; };
class AUR_Enable_Rappelling_Animation_Global { allowedTargets=2; };
class AUR_Play_Rappelling_Sounds_Global { allowedTargets=2; };