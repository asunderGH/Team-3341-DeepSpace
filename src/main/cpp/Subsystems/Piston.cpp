#include "Subsystems/Piston.h"
#include "RobotMap.h"
#include <iostream>
#include "Commands/Piston_Retract.h"

Piston::Piston() : Subsystem("Piston"), piston(new DoubleSolenoid(5, 0, 1)) {
}

void Piston::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand(new Piston_Retract());
}

void Piston::extend(){
	piston->Set(frc::DoubleSolenoid::Value::kForward);
}
void Piston::retract(){
	piston->Set(frc::DoubleSolenoid::Value::kReverse);
}
void Piston::solenoidOff(){
	piston->Set(frc::DoubleSolenoid::Value::kOff);
}
