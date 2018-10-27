/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "Commands/TankDrive.h"
#include "OI.h"

#include <WPILib.h>

OI::OI() : left(new Joystick(1)), right(new Joystick(0)), arm(new Joystick(2)),
	armUp(new JoystickButton(left, 4)), armDown(new JoystickButton(left, 3)) {
	armUp->WhenPressed(new ArmMove(0.2));
	armDown->WhenPressed(new ArmMove(-0.2));
	armUp->WhenReleased(new ArmMove(0));
	armDown->WhenReleased(new ArmMove(0));
}

frc::Joystick* OI::getLeftStick() {
	return left;
}

frc::Joystick* OI::getRightStick() {
	return right;
}

frc::Joystick* OI::getArmStick() {
	return arm;
}

Joystick* OI::getDriveStickRight() {
	return driveStickRightt;
}
