/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/TurnToAngle.h"
#include "Robot.h"
#include <iostream>

TurnToAngle::TurnToAngle(double angle) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::m_drive);
  myAngle = angle;
  turnConstant = 0.03;
}

// Called just before this Command runs the first time
void TurnToAngle::Initialize() {
  Robot::navx->ZeroYaw();
}

// Called repeatedly when this Command is scheduled to run
void TurnToAngle::Execute() {
  error = myAngle - Robot::navx->GetYaw();
  std::cout << "Angle: " << Robot::navx->GetYaw() << " Error: " << error << std::endl;
  Robot::m_drive->tankDrive(turnConstant * error, -turnConstant * error);
}

// Make this return true when this Command no longer needs to run execute()
bool TurnToAngle::IsFinished() { 
  if (error < 3 && error > -3){
    return true;
  }
  return false;
}

// Called once after isFinished returns true
void TurnToAngle::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnToAngle::Interrupted() {}
