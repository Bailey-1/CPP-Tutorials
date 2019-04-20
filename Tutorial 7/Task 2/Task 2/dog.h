#pragma once
#include <iostream>
#include <string>
#include "mammal.h"

using std::string;

class dog : public mammal
{
protected:
	float m_barkVolume;
	string m_breed;

public:
	float getBarkVolume(void);
	void setBarkVolume(float barkVolume);
	string getBreed(void);
	void setBreed(string breed);
};

