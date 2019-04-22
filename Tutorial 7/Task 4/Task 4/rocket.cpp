#include "Rocket.h"
#include <iostream>
#include <string>

float rocket::getFuelLevel(void) { return m_fuelLevel; }

void rocket::setFuelLevel(float fuel)
{ 
	if (fuel > 0) {
		m_fuelLevel = fuel;
	}
	else
	{
		Stop();
	}
}

int rocket::getThrust(void) { return m_thrust; }
void rocket::setThrust(int thrust) { m_thrust = thrust; }

void rocket::Start(void)
{
	std::cout << "Rocket has Started" << std::endl;
	setThrust(10);
}
void rocket::Stop(void) 
{ 
	std::cout << "Rocket has Stopped" << std::endl; 
}

rocket::rocket(void) //Constructor
{
	setFuelLevel(100);
}