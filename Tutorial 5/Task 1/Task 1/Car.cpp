#include "Car.h"

void Car::accelerate(void)
{
	m_speed++;
}

void Car::brake(void)
{
	m_speed--;
	turnOnBrakeLight();
}

void Car::turnOnBrakeLight(void)
{
	// turn on brake light
}

void Car::SetSpeed(int speed) 
{
	//Set speed.
	m_speed = speed;
}

int Car::CurrentSpeed(void)
{
	return m_speed;
}