// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	static std::shared_ptr<WPI_TalonSRX> driveBaseDriveTrainLeftTalonSlave;
	static std::shared_ptr<WPI_TalonSRX> driveBaseDriveTrainRightTalonSlave;

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<frc::PowerDistributionPanel> powerDistPowerDistributionPanel1;
	static std::shared_ptr<WPI_TalonSRX> driveBaseDriveTrainLeftTalon;
	static std::shared_ptr<WPI_TalonSRX> driveBaseDriveTrainRightTalon;
	static std::shared_ptr<frc::DifferentialDrive> driveBaseDriveTrain;
	static std::shared_ptr<frc::AnalogGyro> driveBaseGyro;
	static std::shared_ptr<frc::AnalogInput> driveBaseUltrasonicLeft;
	static std::shared_ptr<frc::AnalogInput> driveBaseUltrasonicRight;
	static std::shared_ptr<frc::SpeedController> elevatorElevatorSpark;
	static std::shared_ptr<frc::SpeedController> elbowElbowSpark;
	static std::shared_ptr<frc::DigitalInput> elbowElbowTopLimit;
	static std::shared_ptr<frc::DigitalInput> elbowElbowBottomLimit;
	static std::shared_ptr<frc::DoubleSolenoid> grabberGrabberSolenoid;
	static std::shared_ptr<frc::DoubleSolenoid> shifterShifterSolenoid;
	static std::shared_ptr<frc::SpeedController> climberClimberSpark;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
