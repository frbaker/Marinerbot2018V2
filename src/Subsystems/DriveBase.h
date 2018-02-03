// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVEBASE_H
#define DRIVEBASE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "AHRS.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class DriveBase: public frc::Subsystem {

private:
	std::shared_ptr<WPI_TalonSRX> driveTrainLeftTalonSlave;
	std::shared_ptr<WPI_TalonSRX> driveTrainRightTalonSlave;
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<WPI_TalonSRX> driveTrainLeftTalon;
	std::shared_ptr<WPI_TalonSRX> driveTrainRightTalon;
	std::shared_ptr<frc::DifferentialDrive> driveTrain;
	std::shared_ptr<frc::AnalogGyro> gyro;
	std::shared_ptr<frc::AnalogInput> ultrasonicLeft;
	std::shared_ptr<frc::AnalogInput> ultrasonicRight;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	//std::shared_ptr<frc::DifferentialDrive> driveTrain;
	AHRS *ahrs;
	DriveBase();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	void resetAhrs();
	double getCurrentAngle();
	double distanceToLeftObject;
	void DriveStraight(double);
	double driveStraightSpeed;
	void DriveBack(double);
	double driveBackSpeed;
	void Halt();
	//double myX;
	//double myY;
	void JoyDrive(double, double);
	double getInchesToObject();
	void driveSetDistance(double);
	void turnToAngle(double);
};

#endif
