#include "MotorBike.h"

void MotorBike::accelerate(void)
{
	m_speed++;
}

void MotorBike::brake(void)
{
	m_speed--;
	turnOnBrakeLight();
}

void MotorBike::turnOnBrakeLight(void)
{
	// turn on brake light
}

int MotorBike::GetSpeed(void) { return m_speed; };
void MotorBike::SetSpeed(int speed) { m_speed = speed; };
string MotorBike::GetModel(void) { return m_model; };
void MotorBike::SetModel(string model) { m_model = model; };
