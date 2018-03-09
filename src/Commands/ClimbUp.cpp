// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ClimbUp.h"


ClimbUp::ClimbUp(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
 	Requires(Robot::climber.get());
}

// Called just before this Command runs the first time
void ClimbUp::Initialize() {
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void ClimbUp::Execute() {
	Robot::climber->ClimbUp();
}

// Make this return true when this Command no longer needs to run execute()
bool ClimbUp::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void ClimbUp::End() {
	Robot::climber->ClimbStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbUp::Interrupted() {
	End();
}
