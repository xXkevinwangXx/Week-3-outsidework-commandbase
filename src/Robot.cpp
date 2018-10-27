/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"
#include "Arm.h"
#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

ExampleSubsystem* Robot::m_subsystem;
OI* Robot::m_oi;
DriveTrain* Robot::m_drivetrain; // @suppress("Member declaration not found")
Arm* Robot::m_arm;
void Robot::RobotInit() {

	Robot::m_drivetrain = new DriveTrain();
	Robot::m_oi = new OI();
	Robot::m_arm = new Arm();
	m_chooser.AddDefault("Default Auto", &m_defaultAuto);
	m_chooser.AddObject("My Auto", &m_myAuto);
	frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
}

void Robot::DisabledInit() {}


