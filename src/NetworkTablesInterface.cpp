/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "NetworkTables/NetworkTableInstance.h"

bool NetworkTablesInterface::getBoolCV()
{
	return nt::NetworkTableInstance::getDefault().getEntry("cv").GetBoolean(-1);
}
//Kevin Wang
int NetworkTablesInterface::getIntCV()
{
	return nt::NetworkTableInstance::getDefault().getEntry("Entry Key").GetInt(-1);
}

double NetworkTablesInterface::getDoubleCV()
{
	return nt::NetworkTableInstance::getDefault().getEntry("Entry Key").GetDouble(-1);
}
