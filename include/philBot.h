#include "main.h"


class PhilBot{
public:
	static void setElevHeight(double height);
	static void setPlaceHeight();
	static void setBottomHeight();
	static void flipArm();



	static okapi::ChassisControllerIntegrated Chassis;
	static okapi::Motor elevMotor;
	static okapi::Motor armMotor;

	static double elevHeight;
	static bool armFlipped;


	//sensor elevHeightSensor probably


};
