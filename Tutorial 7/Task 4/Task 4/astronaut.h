#pragma once
#include <iostream>
#include <string>
#include "person.h"

using std::string;

class astronaut : public person
{
protected:
	int m_noOfFlights;
	int m_hoursInSpace;

public:
	int getNoOfFlights(void);
	void setNoOfFlights(int flights);
	int getHoursInSpace(void);
	void setHoursInSpace(int hours);

};
