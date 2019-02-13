// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight(){
// All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
  liftMoveAngle(80, 44.4);
  driveForDistancePID(10, 80);
  pivotTurn(0, 80, 100);
  motorSet(LEFT_M_FRONT, 0);
  motorSet(RIGHT_M_FRONT, 0);
  driveForDistancePID(45, 80);
  pivotTurn(1, 80, 90);
  driveForDistancePID(14, 80);
  motorSet(LEFT_M_FRONT, 0);
  motorSet(RIGHT_M_FRONT, 0);
  pivotTurn(1, 80, 90);       // turn at seed 30 for 90 degree angle right turn
  driveForDistancePID(50, 80);     // After turn drive a bit more forward
  motorSet(CLAW_MOTOR, 80);

}



void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
