#pragma once
#include <iostream>
#include <string>
#include "Rocket.h"
#include "astronaut.h"

using std::string;

class spaceCraft : public rocket
{
protected:
	float m_payloadWeight;
	float m_speed;
	float m_height;
	int m_noOfObits;

	rocket rocket1;
	rocket rocket2;
	rocket rocket3;
	rocket rocket4;

	astronaut spaceman1;
	astronaut spaceman2;
	astronaut spaceman3;
	astronaut spaceman4;
	astronaut spaceman5;
	astronaut spaceman6;
	astronaut spaceman7;
	astronaut spaceman8;


public:
	float getPayloadWeight(void);
	void setPayloadWeight(float payloadWeight);
	float getSpeed(void);
	void setSpeed(float speed);
	float getHeight(void);
	void setHeight(float height);
	int getNoOfObits(void);
	void setNoOfObits(int noOfObits);

	void Launch(void);
	void Land(void);
	void Fall(void);

	spaceCraft(void);
};