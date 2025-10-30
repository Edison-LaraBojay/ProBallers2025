#include "main.h"
#include <scoring.hpp>

/////
// For installation, upgrading, documentations, and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;
const int TURN_SPEED = 90;
const int SWING_SPEED = 110;

///
// Constants
///
void default_constants() {
  // P, I, D, and Start I
  chassis.pid_drive_constants_set(20.0, 0.0, 100.0);         // Fwd/rev constants, used for odom and non odom motions
  chassis.pid_heading_constants_set(11.0, 0.0, 20.0);        // Holds the robot straight while going forward without odom
  chassis.pid_turn_constants_set(3.0, 0.05, 20.0, 15.0);     // Turn in place constants
  chassis.pid_swing_constants_set(6.0, 0.0, 65.0);           // Swing constants
  chassis.pid_odom_angular_constants_set(6.5, 0.0, 52.5);    // Angular control for odom motions
  chassis.pid_odom_boomerang_constants_set(5.8, 0.0, 32.5);  // Angular control for boomerang motions

  // Exit conditions
  chassis.pid_turn_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_swing_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_drive_exit_condition_set(90_ms, 1_in, 250_ms, 3_in, 500_ms, 500_ms);
  chassis.pid_odom_turn_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 750_ms);
  chassis.pid_odom_drive_exit_condition_set(90_ms, 1_in, 250_ms, 3_in, 500_ms, 750_ms);
  chassis.pid_turn_chain_constant_set(3_deg);
  chassis.pid_swing_chain_constant_set(5_deg);
  chassis.pid_drive_chain_constant_set(3_in);

  // Slew constants
  chassis.slew_turn_constants_set(3_deg, 70);
  chassis.slew_drive_constants_set(3_in, 70);
  chassis.slew_swing_constants_set(3_in, 80);

  // The amount that turns are prioritized over driving in odom motions
  // - if you have tracking wheels, you can run this higher.  1.0 is the max
  chassis.odom_turn_bias_set(0.9);

  chassis.odom_look_ahead_set(7_in);           // This is how far ahead in the path the robot looks at
  chassis.odom_boomerang_distance_set(16_in);  // This sets the maximum distance away from target that the carrot point can be
  chassis.odom_boomerang_dlead_set(0.625);     // This handles how aggressive the end of boomerang motions are

  chassis.pid_angle_behavior_set(ez::shortest);  // Changes the default behavior for turning, this defaults it to the shortest path there
}


// . . .
// Make your own autonomous functions here!
// . . .

void redLeftCorner(){
  // Path


// Path

  //forward(20.029, 30);
  //turnTo(320.347, 30);
  //forward(32.915, 30);
  //turnTo(270, 30);
  //backward(22.831, 30);
  //turnTo(357.127, 30);
  //backward(63.777, 30);
  //turnTo(37.694, 30);
  //backward(38.085, 30);
  //turnTo(271.828, 30);
  //backward(21.472, 30);
  //turnTo(93.252, 30);
  //backward(40.247, 30);
  //turnTo(0, 30);

  default_constants(); // mess around with these

// Path

//forward(20.029, 30);
//turnTo(320.347, 30);
//forward(32.915, 30);
//turnTo(90, 30);
//forward(22.831, 30);
//turnTo(177.127, 30);
//forward(63.777, 30);
//turnTo(217.694, 30);
//backward(38.085, 30);
//turnTo(91.828, 30);
//backward(21.472, 30);
//turnTo(273.252, 30);
//forward(40.247, 30);
//turnTo(0, 30);
  intake();
  chassis.odom_xyt_set(-50.492_in, 12.822_in, 47.663_deg);
  chassis.pid_odom_set({{-30.167_in, 31.34_in, 317.406_deg}, fwd, DRIVE_SPEED});
  chassis.pid_odom_set({{-19.02_in, 19.215_in, 315.406_deg}, fwd, DRIVE_SPEED});
}