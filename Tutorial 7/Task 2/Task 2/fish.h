#pragma once
#include <iostream>
#include <string>
#include "animal.h"

using std::string;

class fish : public animal
{
protected:
	int m_fins;
	int m_gills;
	string m_color;

public:
	int getFins(void);
	void setFins(int legs);
	int getGills(void);
	void setGills(int teeth);
	string getColor(void);
	void setColor(string hairColor);
};

