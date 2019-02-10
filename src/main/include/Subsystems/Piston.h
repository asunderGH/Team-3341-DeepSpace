#ifndef Piston_H
#define Piston_H

#include <frc/commands/Subsystem.h>
#include "frc/WPILib.h"
#include "RobotMap.h"

using namespace frc;
class Piston : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::DoubleSolenoid piston {PISTON_FORWARD_CHANNEL,PISTON_REVERSE_CHANNEL};
public:
	Piston();
	void InitDefaultCommand();
	void extend();
	void retract();
	void solenoidOff();
};

#endif  // Piston_H
