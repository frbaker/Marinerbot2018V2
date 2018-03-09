// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Elevator: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<WPI_TalonSRX> elevatorTalon;

public:
	Elevator();
	void InitDefaultCommand() override;
	void Periodic() override;
	int GetElPosition();
	void SetElPositionToZero();
	void ElevatorStop();
	void LowerElevator();
	void RaiseElevator();
	void TakeJoy(double);
	double joyValue;

};

#endif
