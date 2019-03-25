#pragma once
#include<iostream>

using namespace std;

class Truck
{
private:
	int m_speed;
	void turnOnBrakeLight(void);
	int m_total_load;
public:
	string m_model;
	float m_engine_size;
	void accelerate(void);
	void brake(void);
	void SetSpeed(int speed);
	int CurrentSpeed(void);
	int CurrentLoad(void);
};
