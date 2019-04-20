#pragma once
#include <iostream>
#include <string>

using std::string;

class person
{
protected:
	string m_name;
	int m_age;
	string m_gender;
	float m_height;
	float m_weight;
	string m_NINumber;

public:
	string getName(void);
	void setName(string name);
	int getAge(void);
	void setAge(int age);
	string getGender(void);
	void setGender(string gender);
	float getHeight(void);
	void setHeight(float height);
	float getWeight(void);
	void setWeight(float weight);
	string getNINumber(void);
	void setNINumber(string NINumber);
};

