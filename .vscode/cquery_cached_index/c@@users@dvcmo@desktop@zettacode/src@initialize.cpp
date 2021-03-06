#include "main.h"
#include "MyHeaders/global.h"
#include "Controller/controllerCustom.h"


//--Motor Definitions--//
Motor left_back_drive(10);
Motor left_front_drive(9);
Motor right_back_drive(20,true);
Motor right_front_drive(12,true);
Motor puncher(1);
Motor intake(3,true);
Motor aimer(11);
Motor arm(2,true);

//--Controller Declarations--//
controllerCustom cont(1);
controllerCustom partner(2);

//--Constants--//
const double wheelDiameter = 4;
const double pi = 3.141593;

//--Global Variables--//
int mainAuton = 0;

void initialize(){  //First Thing to Run
  pros::Task userInterface((task_fn_t)UIFunc);

}

void disabled() {} //in Between Autonomous & opControl
void competition_initialize() {} //After Initialize but Before Autonumous
