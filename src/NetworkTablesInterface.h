/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "NetworkTables/NetworkTableInstance.h"
//Kevin Wang
class NetworkTablesInterface {
public:
	static bool	getBoolCV();
	static int getIntCV();
	static double getDoubleCV();
};
