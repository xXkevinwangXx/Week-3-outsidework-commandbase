	/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ArmMax.h"

ArmMax::ArmMax() : anglePID(new WVPIDController(0.01, 0, 0, arm->getMax(), false)){

}

// Called just before this Command runs the first time
void ArmMax::Initialize() {
	arm->seta(true);
}

// Called repeatedly when this Command is scheduled to run
void ArmMax::Execute() {
	double measuredPower = anglePID->Tick(arm->getPosition());
		arm->move(measuredPower);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmMax::IsFinished() {
	return anglePID->GetError() < 2;
}

// Called once after isFinished returns true
void ArmMax::End() {
	arm->move(0);
	arm->seta(false);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmMax::Interrupted() {

}
