/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "OI.h"
#include "frc/WPILib.h"
#include "ctre/Phoenix.h"
#include "RobotMap.h"
#include <frc/commands/Subsystem.h>

class CargoDoor : public frc::Subsystem {
private:
	TalonSRX* cargoDoorMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
 	CargoDoor();
	~CargoDoor();
	void move(double cargoValue);
	TalonSRX* getCargoPort();
	void reset();
	double getPosition();
	void InitDefaultCommand() override;
};

