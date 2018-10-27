/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ArmMin.h"

ArmMin::ArmMin() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ArmMin::Initialize() {
	arm->meta(true);
	arm->InitializeCounter();
}

// Called repeatedly when this Command is scheduled to run
void ArmMin::Execute() {
	double measuredPower = anglePID->Tick(arm->getPosition());
	arm->move(.3);
	temp = arm->getPosition();
}

// Make this return true when this Command no longer needs to run execute()
bool ArmMin::IsFinished() {
	if(arm->getArmMotor()->GetSensorCollection().IsFwdLimitSwitchClosed())
	{
		return true;
	}
	else
		return false;
}
}

// Called once after isFinished returns true
void ArmMin::End() {
	arm->move(0);
	arm->seta(false);
	arm->reset();
	std::cout << "help" << std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmMin::Interrupted() {

}
