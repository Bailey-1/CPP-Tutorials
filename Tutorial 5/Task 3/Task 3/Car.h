#pragma once
#include<iostream>
#include <string>

using namespace std;

class Car
{
private:
	int m_speed;
	string m_model;
	float m_engine_size;
	void turnOnBrakeLight(void);
	int m_topspeed;
public:
	void accelerate(void);
	void brake(void);
	void SetSpeed(int);
	int CurrentSpeed(void);
	void display(void);

	int GetTopSpeed(void);
	void SetTopSpeed(int);

	Car(void); //Void
	Car(int); //Current Speed
	Car(float, int); //Engine size and current speed.

	Car(int, int); //Current Speed and Top Speed.


	Car(float);
};
#pragma once
#include<iostream>
#include <string>

using namespace std;

class Car
{
private:
	int m_speed;
	string m_model;
	float m_engine_size;
	void turnOnBrakeLight(void);
	int m_topspeed;
public:
	void accelerate(void);
	void brake(void);
	void SetSpeed(int);
	int CurrentSpeed(void);
	void display(void);

	int GetTopSpeed(void);
	void SetTopSpeed(int);

	Car(void); //Void
	Car(int); //Current Speed
	Car(float, int); //Engine size and current speed.

	Car(int, int); //Current Speed and Top Speed.


	Car(float);
};
