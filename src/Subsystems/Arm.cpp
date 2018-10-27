/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Arm.h"
#include "../RobotMap.h"
#include "../Commands/ArmMove.h"
Arm::Arm() : Subsystem("Arm"), arm(new TalonSRX(armPort)) {
	armMotor->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute, 0, 10);
}

void Arm::InitDefaultCommand() {
	SetDefaultCommand(new ArmMove());
}

void Arm::armMove(double moveVal) {
	arm->Set(ControlMode::PercentOutput, moveVal);
}

double Arm::getPosition()
{
	reutrn armMotor-> GetSelectedSensorPosition();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
