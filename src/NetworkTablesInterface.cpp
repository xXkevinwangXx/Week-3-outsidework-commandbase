/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "NetworkTableInterface.h"

double NetworkTablesInterface::getBoolCV();
{
	return nt::NetworkTableInstance::getDefault().getEntry("Entry Key").GetBool(-1);
}
//Kevin Wang
double NetworkTablesInterface::getIntCV();
{
	return nt::NetworkTableInstance::getDefault().getEntry("Entry Key").GetInt(-1);
}
