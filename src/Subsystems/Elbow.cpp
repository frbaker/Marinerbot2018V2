// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Elbow.h"
#include "../RobotMap.h"

Elbow::Elbow() : frc::Subsystem("Elbow") {
    elbowSpark = RobotMap::elbowElbowSpark;
    elbowTopLimit = RobotMap::elbowElbowTopLimit;
    elbowBottomLimit = RobotMap::elbowElbowBottomLimit;

    joyValue = 0;
}

void Elbow::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
}

void Elbow::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Elbow::ElbowUp(){
	if(elbowTopLimit->Get() == false){
		elbowSpark->Set(.65);
	}

}

void Elbow::ElbowDown(){
	if(elbowBottomLimit->Get() == false){
		elbowSpark->Set(-.65);
	}

}

void Elbow::TakeJoy(double joyValue){
	elbowSpark->Set(joyValue);
}

void Elbow::ElbowStop(){
	elbowSpark->StopMotor();
}



