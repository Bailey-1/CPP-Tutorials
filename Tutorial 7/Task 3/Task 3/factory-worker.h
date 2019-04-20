#pragma once
#include <iostream>
#include <string>
#include "person.h"

using std::string;

class factoryWorker : public person
{
protected:
	string m_jobTitle;
	float m_hourlyWage;

public:
	string getJobTitle(void);
	void setJobTitle(string jobTitle);
	float getHourlyWage(void);
	void setHourlyWage(float HourlyWage);

	float getWeeklyWage(float hourlyWage);
};

