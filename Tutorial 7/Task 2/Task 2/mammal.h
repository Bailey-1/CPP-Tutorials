#pragma once
#include <iostream>
#include <string>
#include "animal.h"

using std::string;

class mammal : public animal
{
protected:
	int m_legs;
	int m_teeth;
	string m_hairColor;
	bool m_claws;

public:
	int getLegs(void);
	void setLegs(int legs);
	int getTeeth(void);
	void setTeeth(int teeth);
	string getHairColor(void);
	void setHairColor(string hairColor);
};

