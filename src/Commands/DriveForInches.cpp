// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "DriveForInches.h"


DriveForInches::DriveForInches(double dist): frc::Command() {
    m_dist = dist;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
 	Requires(Robot::driveBase.get());
}

// Called just before this Command runs the first time
void DriveForInches::Initialize() {
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void DriveForInches::Execute() {
	Robot::driveBase->driveSetDistance(m_dist);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForInches::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void DriveForInches::End() {
	Robot::driveBase->Halt();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForInches::Interrupted() {
	End();
}
