/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "WPILib.h"
#include "ctre/Phoenix.h"

class DriveTrain : public frc::Subsystem {
private:


	TalonSRX* left;
	TalonSRX* right;


public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double leftVal, double rightVal);


};

