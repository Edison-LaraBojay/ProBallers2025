#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "lemlib/api.hpp"

const int trackWidth = 18; // update once we have true value
const int widthWheelBase = 18; // update once we have true value (may not be necessary?)
const float wheelDiameter = 4.125;
const int driveTrainRPM = 200; // green gear, double check cartridge
const int horizontalDrift = 2;

extern Drive chassis;
inline pros::Motor InitialIntake(10, pros::MotorGearset::green);
inline pros::Motor ContinuedIntake(7, pros::MotorGearset::green);
inline pros::Motor Outtake(8, pros::MotorGearset::green);
inline pros::ADIDigitalOut IntakePiston('A');
inline pros::Imu imu(11); // connect IMU



// inline pros::ADIDigitalOut OuttakePiston1('B')
// inline pros::ADIDigitalOut OuttakePiston2('C')


// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');