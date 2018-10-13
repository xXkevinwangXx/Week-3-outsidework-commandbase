/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

using namespace std;

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
left(new TalonSRX(LEFTMOTOR)), right(new TalonSRX(RIGHTMOTOR))/*, arm(new TalonSRX(2))*/ {
	right->SetInverted(true);
}

void DriveTrain::InitDefaultCommand() {


	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftVal, double rightVal) {
	left->Set(ControlMode::PercentOutput, leftVal);
	right->Set(ControlMode::PercentOutput, rightVal);


}
