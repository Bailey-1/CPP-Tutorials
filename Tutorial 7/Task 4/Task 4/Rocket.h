#pragma once
#include <iostream>
#include <string>

using std::string;

class rocket
{
protected:
	float m_fuelLevel;
	int m_thrust;

public:
	float getFuelLevel(void);
	void setFuelLevel(float fuel);
	int getThrust(void);
	void setThrust(int thrust);

	void Start();
	void Stop();

	rocket(void);
};