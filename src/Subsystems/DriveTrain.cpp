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
left(new TalonSRX(LEFT_MOTOR_PORT)), right(new TalonSRX(RIGHT_MOTOR_PORT))/*, arm(new TalonSRX(2))*/ {
	right->SetInverted(true);
}

void DriveTrain::InitDefaultCommand() {


	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftVal, double rightVal) {
	left->Set(ControlMode::PercentOutput, leftVal);
	right->Set(ControlMode::PercentOutput, rightVal);
	m_arm -> Set(ControlMode::PercentOutput, leftVal);
	std::cout << leftVal << std::end1;

}
