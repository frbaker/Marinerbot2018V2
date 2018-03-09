// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ElevatorJoyControl.h"


ElevatorJoyControl::ElevatorJoyControl(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void ElevatorJoyControl::Initialize() {
	Robot::elBrake->BrakeOff();
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void ElevatorJoyControl::Execute() {

	double joyVal = Robot::oi->getJoystick2()->GetRawAxis(1);
	int topElevatorLimit = 3600;
	int bottomElevatorLimit = 10;

	if (Robot::elevator->GetElPosition() > topElevatorLimit && joyVal < 0){
		End();
		//joyVal = 0; // can't go up any higher
	}
	else if (Robot::elevator->GetElPosition() < bottomElevatorLimit && joyVal > 0){
		End();
		//joyVal = 0; // can't go up any lower (this may stop from smashing down)
	}
	else{
		if (joyVal >.1 || joyVal < -.1){ //deadzone
			if (joyVal > .25){joyVal = .25;}
			Robot::elevator->TakeJoy(joyVal*0.75); //limiting the speed to 45% of joy value
		}
		else {
			End();
		}
	}

}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorJoyControl::IsFinished() {
	/*if (Robot::oi->getJoystick2()->GetRawButton(5) ){
			return true;
		}*/
	return false;
}

// Called once after isFinished returns true
void ElevatorJoyControl::End() {
	Robot::elevator->ElevatorStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorJoyControl::Interrupted() {
	//End();
}
