/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LineFollow.h"

LineFollow::LineFollow() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::drive);
  Requires(Robot::colorSensors);
}

// Called just before this Command runs the first time
void LineFollow::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void LineFollow::Execute() {}
int basePower = 0.1;
int kP = 0.0001;
int pos = Robot::colorSensors->getReadings()[4];
int error = pos - 1250;

Robot::drive->tankDrive(basePower - error*kP, basePower + error*kP);

// Make this return true when this Command no longer needs to run execute()
bool LineFollow::IsFinished() { return false; }

// Called once after isFinished returns true
void LineFollow::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LineFollow::Interrupted() {}
