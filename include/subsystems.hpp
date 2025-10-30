#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;
inline pros::Motor InitialIntake(10, pros::MotorGearset::green);
inline pros::Motor ContinuedIntake(7, pros::MotorGearset::green);
inline pros::Motor Outtake(8, pros::MotorGearset::green);
inline pros::ADIDigitalOut IntakePiston('A');

// inline pros::ADIDigitalOut OuttakePiston1('B')
// inline pros::ADIDigitalOut OuttakePiston2('C')


// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');