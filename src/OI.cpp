/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "Commands/TankDrive.h"
#include "OI.h"

#include <WPILib.h>

OI::OI(): armStick(new Joystick(0)), open(new JoystickButton(armStick, 1)){
	open ->WhenPressed(new openClaw());
	opne->WhenReleased(new closeClaw());
}

OI::OI() : driveStickLeft(new Joystick(2)), driveStickRight(new Joystick(1)){
	shooterButon = new JoystickButton(driveStickLeft, 5);
	shooterButton->WhenPressed(new ShootBall());
}

Joystick* OI::getArmStick()
{
	return armStick;
}


Joystick* OI::getDriveStickLeft() {
	return driveStickLeft;
}

Joystick* OI::getDriveStickRight() {
	return driveStickRightt;
}
