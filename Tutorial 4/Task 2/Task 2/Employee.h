#pragma once
#include<iostream>
#include <string>

using namespace std;

class Employee
{
private:
	int m_ID;
	float m_HourlyWage;
public:
	Employee(void);

	void SetID(int);
	int GetID(void);
	void SetHourlyWage(float);
	float GetHourlyWage(void);
	void ChangeHourlyWage(float);
};
