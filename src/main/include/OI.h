/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "frc/WPILib.h"
using namespace frc;

class OI {
  private:
    Joystick* leftJoy;
    Joystick* rightJoy;
    Button* pistonExtendButton;
    Button* pistonRetractButton;
    Button* servoExtendButton;
    Button* hatchRetractButton;
    Button* pistonOffButton;

    Button* compressorOnButton;
    Button* compressorOffButton;

    Button* readSensorsButton;
    Button* rDriveTurn;
    Button* lDriveTurn;
    
    Joystick*cargoStick;
    Button*releaseCargoShuttle;
	  Button*releaseCargoRocket;
	  Button*holdCargo;
	  Button*resetCargo;
    Button* resetEncoder;
  public:
  Joystick* getLeft();
  Joystick* getRight();
  OI();
};
