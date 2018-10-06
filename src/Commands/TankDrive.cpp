/*
 * Drive.cpp
 *
 *  Created on: Sep 28, 2018
 *      Author: legom
 */

#include "TankDrive.h"
#include "Robot.h"
#include "../OI.h"
#include <iostream>

using namespace std;

TankDrive::TankDrive() {
	Requires(Robot::drive);

	// TODO Auto-generated constructor stub

}
void TankDrive::Initialize() {
	drive->resetEncoders();
}

void TankDrive::Execute() {
	Robot::drive->tankDrive(Robot::oi->getLeftStick()->GetY(), Robot::oi->getRightStick()->GetY());
	std::cout << Robot::oi->getLeftStick()->GetY() << std::endl;

}

bool TankDrive::IsFinished() {
	return false;
}

void TankDrive::End() {

}


void TankDrive::Interrupted() {

}