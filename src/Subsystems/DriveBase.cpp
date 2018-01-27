// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ctre/Phoenix.h"


#include "DriveBase.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {

	ahrs = new AHRS(SerialPort::Port::kMXP);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    driveTrainLeftTalon = RobotMap::driveBaseDriveTrainLeftTalon;
    driveTrainRightTalon = RobotMap::driveBaseDriveTrainRightTalon;
    driveTrain = RobotMap::driveBaseDriveTrain;
    gyro = RobotMap::driveBaseGyro;
    ultrasonicLeft = RobotMap::driveBaseUltrasonicLeft;
    ultrasonicRight = RobotMap::driveBaseUltrasonicRight;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    driveBackSpeed = -1.0;
    driveStraightSpeed = 1.0;
    distanceToLeftObject = 0;
}

void DriveBase::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveBase::Periodic() {
    // Put code here to be run every loop

}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveBase::resetAhrs(){
	ahrs->ZeroYaw();
}
double DriveBase::getCurrentAngle(){
	return ahrs->GetAngle();
}
double DriveBase::distanceToObjectLeft(){
	double voltage = ultrasonicLeft->GetVoltage();

	//Todo Need to do some calculations to convert analog voltage to distance
	distanceToLeftObject = voltage * 1.0; //speed of sound etc.

	return distanceToLeftObject;
}
void DriveBase::DriveStraight(double driveStraightSpeed){
	driveTrain->TankDrive(driveStraightSpeed, driveStraightSpeed);
}

void DriveBase::DriveBack(double driveBackSpeed){
	driveTrain->TankDrive(driveBackSpeed, driveBackSpeed);
}

void DriveBase::Halt(){
		driveTrain->TankDrive(0.0,0.0);
}
void DriveBase::DriveWithJoy(){
	//driveTrain->TankDrive(Robot::oi->getJoystick()->GetRawAxis(0),Robot::oi->getJoystick()->GetRawAxis(1));
}
