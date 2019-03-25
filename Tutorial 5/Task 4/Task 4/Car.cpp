#include "Car.h"

void Car::accelerate(void)
{
	if (m_speed != m_topspeed)
	{
		m_speed++;
	}
	else
	{
		cout << "Speed cannot exceed top speed" << endl;
	}
}

void Car::brake(void) {
	if (m_speed != 0)
	{
		m_speed--;
		turnOnBrakeLight();
	}
	else
	{
		cout << "Speed cannot be less than 0" << endl;
	}
}

void Car::turnOnBrakeLight(void) {
	// turn on brake light
}

void Car::SetSpeed(int speed)
{
	if (speed <= m_topspeed)
	{
		m_speed = speed;
	}
	else
	{
		cout << "Speed exceeds top speed" << endl;
	}
}

int Car::CurrentSpeed(void) { return m_speed; }

int Car::GetTopSpeed(void) { return m_topspeed; }
void Car::SetTopSpeed(int topSpeed) { m_topspeed = topSpeed; }

void Car::display()
{
	cout << "Speed:" << m_speed << endl;
	cout << "Top Speed:" << m_topspeed << endl;
	cout << "Engine Size:" << m_engine_size << endl;
	cout << "Model:" << m_model << endl;
}

Car::Car(void)
{
	m_speed = 10;
}

Car::Car(int speed)
{
	m_speed = speed;
}

Car::Car(float size, int speed)
{
	m_speed = speed;
	m_engine_size = size;
}

Car::Car(float engine)
{
	m_engine_size = engine;
}

Car::Car(int speed, int topspeed)
{
	m_speed = speed;
	m_topspeed = topspeed;
}