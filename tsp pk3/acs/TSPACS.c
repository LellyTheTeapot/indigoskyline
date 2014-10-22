#include "zcommon.acs"
#library "tspacs"

#include "commonfuncs.h"

  int TSPVarLastx = 0;
  int TSPVarLasty = 0;
  int TSPVarLastz = 0;


script "TSPPickupSounds" (void)
{
  if(CheckInventory("PlayingPickupSound") > 0)
  {
    TakeInventory("PistolJustPickedUp", 1);
    TakeInventory("ShotgunJustPickedUp", 1);
    TakeInventory("DahliaJustPickedUp", 1);
    TakeInventory("AmmoBoxJustPickedUp", 1);
    TakeInventory("ToolBoxJustPickedUp", 1);
    Terminate;
  }
  else
  {
    GiveInventory("PlayingPickupSound", 1);
    if(CheckInventory("IsMel") > 0)
    {
      if(GetPlayerInfo(PlayerNumber(), PLAYERINFO_GENDER) == 2)
      {
        if(CheckInventory("PistolJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickuprobo/Pistol",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);      
          Delay(41);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ShotgunJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickuprobo/ZekeShotgun",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(49);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("DahliaJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickuprobo/Crossbow",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(35);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("AmmoBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickuprobo/Ammobox50",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(123);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ToolBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickuprobo/RocketNailgunLauncher",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(67);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
      }
      else
      {
        if(CheckInventory("PistolJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickup/Pistol",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);    
          Delay(46);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ShotgunJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickup/ZekeShotgun",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(60);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("DahliaJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickup/Crossbow",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(53);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("AmmoBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickup/Ammobox50",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(144);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ToolBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("melflavpickup/RocketNailgunLauncher",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(69);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
      }
    }
    else if(CheckInventory("IsVexler") > 0)
    {
      if(GetPlayerInfo(PlayerNumber(), PLAYERINFO_GENDER) == 2)
      {
        if(CheckInventory("PistolJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickuprobo/Pistol",127);  Did it this way so it'd be easy to undo
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);      
          Delay(41);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ShotgunJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickuprobo/ZekeShotgun",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(49);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("DahliaJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickuprobo/Crossbow",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(35);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("AmmoBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickuprobo/Ammobox50",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(123);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ToolBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickuprobo/RocketNailgunLauncher",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(67);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
      }
      else
      {
        if(CheckInventory("PistolJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickup/Pistol",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);    
          Delay(46);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ShotgunJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickup/ZekeShotgun",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(60);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("DahliaJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickup/Crossbow",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(53);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("AmmoBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickup/Ammobox50",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(144);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
        if(CheckInventory("ToolBoxJustPickedUp") > 0)
        {
          LocalAmbientSound("secretmessage",127); //"vexflavpickup/RocketNailgunLauncher",127);
          TakeInventory("PistolJustPickedUp", 1);
          TakeInventory("ShotgunJustPickedUp", 1);
          TakeInventory("DahliaJustPickedUp", 1);
          TakeInventory("AmmoBoxJustPickedUp", 1);
          TakeInventory("ToolBoxJustPickedUp", 1);
          Delay(69);
          TakeInventory("PlayingPickupSound", 1);
          Terminate;
        }
      }
    }
    else
    {
      Terminate;
    }
  }
}

script "TSPHUDHealthNumberColor" ENTER
{
  if(GetActorProperty( 0, APROP_Health) >= 101)
  {
    GiveInventory("Over100Health",1);
    Delay(6);
    Restart;
  }
  else
  {
    TakeInventory("Over100Health",1);
    Delay(6);
    Restart;
  }
}

Script "TSPPlayerTID" ENTER
{
	Thing_ChangeTid(0,1000+PlayerNumber());
}

script "TSPIDKFAFix" ENTER
{
  if(CheckInventory("HellFireShell") >= 92)
    {
    if(CheckInventory("BuckShotShell") >= 92)
    {
      if(GetCVar("tsp_shellpool") == true)
      {
        TakeInventory("HellFireShell",96);
        TakeInventory("BuckShotShell",96);
        TakeInventory("PoisonShell",96);
        TakeInventory("ElectricShell",96);
        TakeInventory("TSPShells",96);
        GiveInventory("HellFireShell",20);
        GiveInventory("BuckShotShell",36);
        GiveInventory("PoisonShell",20);
        GiveInventory("ElectricShell",20);
        GiveInventory("TSPShells",96);
        GiveInventory("MelZekeShotgun",1);
        Delay(6);
        Restart;
      }
      else
      {
        TakeInventory("HellFireShell",96);
        TakeInventory("BuckShotShell",96);
        TakeInventory("PoisonShell",96);
        TakeInventory("ElectricShell",96);
        TakeInventory("TSPShells",96);
        GiveInventory("MelZekeShotgunNoPool",1);
        Delay(6);
        Restart;
      }
    }
      Delay(6);
      Restart;
    }
    else
    {
      Delay(6);
      Restart;
    }
}

script "TSPEnterScript1" ENTER
{

  hudmessage (s:"Blue Vertigo Presents: The Space Pirate\n \nCvars:\n \ntsp_shellpool - If set to true/1 (default), all shell types share the same ammo pool. If set to false/0, they do not and each has a separate ammo pool.
  \n\r_drawvoxels - If set to true/1 (default), voxels will be used for crossbow bolts and items. If set to true/1, models will be used for the crossbow bolts and sprites will be used for items. If you're playing this in GZDoom models will render faster, so switch if you're having performance issues, but if you're playing in ZDoom the voxels will render just fine.";HUDMSG_PLAIN|HUDMSG_LOG,2,CR_GREEN,1.5,0.375,0.1);

  TakeInventory("PlayingPickupSound", 1);
  Terminate;
}

script "TSPArmorScript" (void)
{
  if(CheckInventory("BasicArmor") >= 1)
  {
    Delay(6);
    Restart;
  }
  else
  {
    TakeInventory("TSPGreenDamageReduction",1);
    TakeInventory("TSPGreenArmorDamage",1);
    TakeInventory("TSPBlueDamageReduction",1);
    TakeInventory("TSPBlueArmorDamage",1);
    Terminate;
  }
}

script "TSPBoltStickScript" (void)
{
  int e257zsTracerNewTID = (UniqueTID());
  Thing_ChangeTID (0,e257zsTracerNewTID);
  SetActivator(0,AAPTR_TRACER);
  int e257zsTracerAngle = GetActorAngle(0);
  SetActorAngle (e257zsTracerNewTID,e257zsTracerAngle);
  Terminate;
}

script "TSPBoltHurtTracerScript" (void)
{
  SetActivator(0,AAPTR_TRACER);
  Thing_Damage2(0,Random(128,384),MOD_R_SPLASH); 
  Terminate;
}

script "TSPBoltHurtTracerScriptNoRadius" (void)
{
  SetActivator(0,AAPTR_TRACER);
  Thing_Damage2(0,Random(30,90),MOD_R_SPLASH); 
  Terminate;
}

script "GetShellPoolCVAR" (void)
{
  SetResultValue(GetCVar("tsp_shellpool"));
}

script "GetToasterCVAR" (void)
{
  SetResultValue(GetCVar("tsp_toaster"));
}

script "GetZMeleeCVAR" (void)
{
  SetResultValue(GetCVar("tsp_zmelee"));
}

script "TSPGetGameSkill" (void)
{
  SetResultValue(GameSkill());
}

script "TSPSetProjectilePitch" (void)
{
  SetActorPitch(0, VectorAngle (GetActorVelZ(0), sqrt(FixedMul(GetActorVelX(0),GetActorVelX(0))+FixedMul(GetActorVelY(0),GetActorVelY(0)))));
  Terminate;
}

script "TSPBeamDeath" (void)
{
  SetActorProperty(0,APROP_RenderStyle,STYLE_Add);
}

script "TSPWOGBeam" (int which, int TSPVarHowClose, int TSPVarFiredByPlayer)
{
  switch (which)
  {
    case 1:
      int TSPVarInitialx = GetActorX(0) >> 16;
      int TSPVarInitialy = GetActorY(0) >> 16;
      int TSPVarInitialz = GetActorZ(0) >> 16;
  
      TSPVarLastx = GetActorX(0) >> 16;
      TSPVarLasty = GetActorY(0) >> 16;
      TSPVarLastz = GetActorZ(0) >> 16;
  
      SetActivatorToTarget(0);
	  
	  int TSPVarShooterOffset = GetActorViewHeight(PlayerNumber() + 1000) >> 16;
  
      int TSPVarShooterx = GetActorX(0) >> 16;
      int TSPVarShootery = GetActorY(0) >> 16;
      
      if (TSPVarFiredByPlayer == 1)
      {
        int TSPVarShooterz = (GetActorZ(0) >> 16) + (TSPVarShooterOffset - 9);
      }
	  else
      {
        TSPVarShooterz = GetActorZ(0) >> 16;
      }
 
      int TSPVarDiffx = TSPVarInitialx - TSPVarShooterx;
      int TSPVarDiffy = TSPVarInitialy - TSPVarShootery;
      int TSPVarDiffz = TSPVarInitialz - TSPVarShooterz;
  
      int TSPVarDiffSquaredx = abs(TSPVarDiffx*TSPVarDiffx);
      int TSPVarDiffSquaredy = abs(TSPVarDiffy*TSPVarDiffy);
      int TSPVarDiffSquaredz = abs(TSPVarDiffz*TSPVarDiffz);
  
      int TSPVarDiffSquaredTotal = TSPVarDiffSquaredx + TSPVarDiffSquaredy + TSPVarDiffSquaredz;
      int TSPVarLineLengthInteger = sqrt(TSPVarDiffSquaredTotal);
  
      if (TSPVarLineLengthInteger == 0)
      {
        Terminate;
      }
  
      int TSPVarLoopx = TSPVarShooterx << 16; 
      int TSPVarLoopy = TSPVarShootery << 16; 
      int TSPVarLoopz = TSPVarShooterz << 16;
  
      int TSPVarLoopIncrementx = (TSPVarDiffx << 16) / TSPVarLineLengthInteger;
      int TSPVarLoopIncrementy = (TSPVarDiffy << 16) / TSPVarLineLengthInteger;
      int TSPVarLoopIncrementz = (TSPVarDiffz << 16) / TSPVarLineLengthInteger;

      if (TSPVarFiredByPlayer == 1)
      {
        for (int TSPVarPosition = (0-(TSPVarHowClose-1)); TSPVarPosition < TSPVarLineLengthInteger; TSPVarPosition++)
        {
          TSPVarLoopx += TSPVarLoopIncrementx;
          TSPVarLoopy += TSPVarLoopIncrementy;
          TSPVarLoopz += TSPVarLoopIncrementz;

		  if (TSPVarPosition > 16)
		    {
              if (TSPVarPosition % TSPVarHowClose == 0)
              {
                Spawn("WOGMissileTrail",TSPVarLoopx,TSPVarLoopy,TSPVarLoopz,0,0);
              }
            }
        }
      }
	  else
      {
        for (TSPVarPosition = (0-(TSPVarHowClose-1)); TSPVarPosition < TSPVarLineLengthInteger; TSPVarPosition++)
        {
          TSPVarLoopx += TSPVarLoopIncrementx;
          TSPVarLoopy += TSPVarLoopIncrementy;
          TSPVarLoopz += TSPVarLoopIncrementz;

            if (TSPVarPosition % TSPVarHowClose == 0)
            {
              Spawn("WOGMissileTrail",TSPVarLoopx,TSPVarLoopy,TSPVarLoopz,0,0);
            }
        }
      }
	  Terminate;
    case 2:
      TSPVarInitialx = GetActorX(0) >> 16;
      TSPVarInitialy = GetActorY(0) >> 16;
      TSPVarInitialz = GetActorZ(0) >> 16;
  
      SetActivatorToTarget(0);
 
      TSPVarDiffx = TSPVarInitialx - TSPVarLastx;
      TSPVarDiffy = TSPVarInitialy - TSPVarLasty;
      TSPVarDiffz = TSPVarInitialz - TSPVarLastz;
  
      TSPVarDiffSquaredx = abs(TSPVarDiffx*TSPVarDiffx);
      TSPVarDiffSquaredy = abs(TSPVarDiffy*TSPVarDiffy);
      TSPVarDiffSquaredz = abs(TSPVarDiffz*TSPVarDiffz);
  
      TSPVarDiffSquaredTotal = TSPVarDiffSquaredx + TSPVarDiffSquaredy + TSPVarDiffSquaredz;
      TSPVarLineLengthInteger = sqrt(TSPVarDiffSquaredTotal);
  
      if (TSPVarLineLengthInteger == 0)
      {
        Terminate;
      }
  
      TSPVarLoopx = TSPVarLastx << 16; 
      TSPVarLoopy = TSPVarLasty << 16; 
      TSPVarLoopz = TSPVarLastz << 16;
  
      TSPVarLoopIncrementx = (TSPVarDiffx << 16) / TSPVarLineLengthInteger;
      TSPVarLoopIncrementy = (TSPVarDiffy << 16) / TSPVarLineLengthInteger;
      TSPVarLoopIncrementz = (TSPVarDiffz << 16) / TSPVarLineLengthInteger;

      for (TSPVarPosition = (0-(TSPVarHowClose-1)); TSPVarPosition < TSPVarLineLengthInteger; TSPVarPosition++)
      {
        TSPVarLoopx += TSPVarLoopIncrementx;
        TSPVarLoopy += TSPVarLoopIncrementy;
        TSPVarLoopz += TSPVarLoopIncrementz;

          if (TSPVarPosition % TSPVarHowClose == 0)
          {
            Spawn("WOGMissileTrail",TSPVarLoopx,TSPVarLoopy,TSPVarLoopz,0,0);
          }
      }
	  Terminate;
    case 3:
      SetActivator(0,AAPTR_TRACER);
      if(CheckFlag(0,"ISMONSTER") == FALSE)
      {
        Terminate;
      }
      else if(CheckFlag(0,"BOSS") == TRUE)
      {
        GiveInventory("BossUnTarget", 1);
        Delay(4);
        TakeInventory("BossUnTarget", 1);
        GiveInventory("BossCanTarget", 1);
		Terminate;
      }
      else if(CheckFlag(0,"NOTARGET") == TRUE)
      {
        GiveInventory("BossUnTarget", 1);
        Delay(4);
        TakeInventory("BossUnTarget", 1);
        GiveInventory("BossCanTarget", 1);
		Terminate;
      }
      else
      {
        GiveInventory("BossUnTarget", 1);
        Delay(1);
        TakeInventory("BossUnTarget", 1);
        GiveInventory("BossCanTarget", 1);
		Terminate;
      }
    case 4:
      SetActorProperty(0,APROP_RenderStyle,STYLE_Add);
	  Terminate;
  }
}

script "TSPZekeMessage" (int which, int a1, int a2)
{
  int result;
  
  switch (which)
  {
    case 1:
      hudmessage (s:"[Altfire Again To Cycle Through Ammo Types]";HUDMSG_PLAIN,2,CR_GREEN,1.5,0.375,1.0);
      Terminate;
    case 2:
      hudmessage (s:"[No Alternate Shell Ammo]";HUDMSG_PLAIN,2,CR_GREEN,1.5,0.375,0.42857);
      Terminate;
    case 3:
      hudmessage (s:"[Current Ammo Depleted, Switching To Buckshot]";HUDMSG_PLAIN,2,CR_RED,1.5,0.375,1.5);
      Terminate;
    case 4:
      hudmessage (s:"[Current Ammo Depleted, Switching To Shock Shells]";HUDMSG_PLAIN,2,CR_LIGHTBLUE,1.5,0.375,1.5);
      Terminate;
    case 5:
      hudmessage (s:"[Current Ammo Depleted, Switching To HellFire Shells]";HUDMSG_PLAIN,2,CR_GOLD,1.5,0.375,1.5);
      Terminate;
    case 6:
      hudmessage (s:"[Current Ammo Depleted, Switching To Poison Shells]";HUDMSG_PLAIN,2,CR_DARKGREEN,1.5,0.375,1.5);
      Terminate;
    case 7:
      hudmessage (s:"[Buckshot Shells Selected]";HUDMSG_PLAIN,2,CR_RED,1.5,0.375,0.7142857143);
      Terminate;
    case 8:
      hudmessage (s:"[Shock Shells Selected]";HUDMSG_PLAIN,2,CR_LIGHTBLUE,1.5,0.375,0.7142857143);
      Terminate;
    case 9:
      hudmessage (s:"[HellFire Shells Selected]";HUDMSG_PLAIN,2,CR_GOLD,1.5,0.375,0.7142857143);
      Terminate;
    case 10:
      hudmessage (s:"[Poison Shells Selected]";HUDMSG_PLAIN,2,CR_DARKGREEN,1.5,0.375,0.7142857143);
      Terminate;
  }
  SetResultValue(result);
}