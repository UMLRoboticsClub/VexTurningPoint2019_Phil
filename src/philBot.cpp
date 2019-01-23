#include "philBot.h"
#include "main.h"


//rewrite to be all static
PhilBot::PhilBot(): chassis(okapi::ChassisControllerFactory::create(okapi::MotorGroup({0, 1, 2}), okapi::MotorGroup({3, 4, 5}), okapi::AbstractMotor::gearset::red, okapi::chassisScales({3.25, 15}))), elemMotor(6), armMotor(7){
	elevHeight = 0;
	armFlipped = false;
	zero();
}

void PhilBot::zero(){
	//just zero the elevator
}

PhilBot::~PhilBot(){

}

//set height to a specific value
void PhilBot::setHeight(){

}

//height to place cap
void PhilBot::setPlaceHeight(){

}

//put fourbar at cap pickup height
void PhilBot::setBottomHeight(){

}

//rotate arm 180 degrees to flip cap
void PhilBot::flipArm(){

}
