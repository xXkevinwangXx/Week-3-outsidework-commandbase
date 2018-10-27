/*
 * ArmMove.cpp
 *
 *  Created on: Oct 20, 2018
 *      Author: legom
 */

#include "ArmMove.h"

ArmMove::ArmMove(double moveVal) {

	move = moveVal;
}

void ArmMove::Initialize() {

}

void ArmMove::Execute() {
	Robot::arm->ArmMove(move);
}

bool ArmMove::IsFinished() {
	return false;
}

void ArmMove::End() {
	Robot::drive->armMove(0);
}

void ArmMove::Interrupted() {

}
