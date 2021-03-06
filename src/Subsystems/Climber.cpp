// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Climber.h"
#include "../RobotMap.h"

Climber::Climber() : frc::Subsystem("Climber") {
    climberSpark = RobotMap::climberClimberSpark;

}

void Climber::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());



}

void Climber::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.


//Climber motor is reverse polarity, so Up is negative, and down is positive.

void Climber::ClimbUp(){
climberSpark->Set(-1.0);
}
void Climber::ClimbDown(){
	climberSpark->Set(0.4);
}
void Climber::SwingUP(){
	climberSpark->Set(-.65);
}
void Climber::ClimbStop(){
	climberSpark->StopMotor();
}



