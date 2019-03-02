#pragma once
#include<iostream>

using namespace std;

class Car
{
private:
	int m_speed;
	void turnOnBrakeLight(void);
public:
	string m_model;
	float m_engine_size;
	void accelerate(void);
	void brake(void);
	void SetSpeed(int speed);
	int CurrentSpeed(void);
};
