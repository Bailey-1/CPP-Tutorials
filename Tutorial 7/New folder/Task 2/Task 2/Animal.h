#pragma once
#include <iostream>
#include <string>

using std::string;

class Animal
{
protected:
	string m_habitat;
	int m_age;
	//enum m_size;
	bool m_alive;
	//enum m_diet;

public:
	string getHabitat(void);
	void setHabitat(string habitat);
	int getAge(void);
	void setAge(int age);
	bool getAlive(void);
	void setAlive(bool alive);
};

