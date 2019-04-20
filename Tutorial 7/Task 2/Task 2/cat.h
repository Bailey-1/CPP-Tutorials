#pragma once
#include <iostream>
#include <string>
#include "mammal.h"

using std::string;

class cat : public mammal
{
protected:
	float m_purrVolume;
	string m_breed;

public:
	float getPurrVolume(void);
	void setPurrVolume(float purrVolume);
	string getBreed(void);
	void setBreed(string breed);
};

