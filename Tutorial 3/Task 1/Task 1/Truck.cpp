#include "Truck.h"

void Truck::accelerate(void)
{
	m_speed++;
}

void Truck::brake(void)
{
	m_speed--;
	turnOnBrakeLight();
}

void Truck::turnOnBrakeLight(void)
{
	// turn on brake light
}

void Truck::SetSpeed(int speed)
{
	//Set speed.
	m_speed = speed;
}

int Truck::CurrentSpeed(void)
{
	return m_speed;
}

int Truck::CurrentLoad(void)
{
	return m_total_load;
}