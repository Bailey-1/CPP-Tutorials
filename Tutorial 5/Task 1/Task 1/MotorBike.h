#pragma once
#include<iostream>

using namespace std;

class MotorBike
{
private:
	int m_speed;
	void turnOnBrakeLight(void);
public:
	string m_model;
	float m_engine_size;
	void accelerate(void);
	void brake(void);

	int GetSpeed(void);
	void SetSpeed(int speed);
	string GetModel(void);
	void SetModel(string model);



};
