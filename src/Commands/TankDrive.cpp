/*
 * Drive.cpp
 *
 *  Created on: Sep 28, 2018
 *      Author: legom
 */

#include "TankDrive.h"
#include "Robot.h"
#include "OI.h"
#include "DriveTrain.h"

TankDrive::TankDrive() {

}
void TankDrive::Initialize() {
	m_drivetrain->resetEncoders();
}

void TankDrive::Execute() {
	Robot::m_drivetrain->tankDrive(Robot::m_oi->getLeftStick()->GetY(), Robot::m_oi->getRightStick()->GetY());

}

bool TankDrive::IsFinished() {
	return false;
}

void TankDrive::End() {

}


void TankDrive::Interrupted() {

}
