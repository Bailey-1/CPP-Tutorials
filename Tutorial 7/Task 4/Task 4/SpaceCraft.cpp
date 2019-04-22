#include "SpaceCraft.h"
#include <iostream>
#include <string>

float spaceCraft::getPayloadWeight(void) { return m_payloadWeight; }
void spaceCraft::setPayloadWeight(float payloadWeight) { m_payloadWeight = payloadWeight; }
float spaceCraft::getSpeed(void) { return m_speed; }
void spaceCraft::setSpeed(float speed) { m_speed = speed; }
float spaceCraft::getHeight(void) { return m_height; }
void spaceCraft::setHeight(float height) { m_height = height; }
int spaceCraft::getNoOfObits(void) { return m_noOfObits; }
void spaceCraft::setNoOfObits(int noOfObits) { m_noOfObits = noOfObits; }


void spaceCraft::Launch(void)
{
	std::cout << "Rocket has Launched: " << std::endl;
	rocket1.Start();
	rocket2.Start();
	rocket3.Start();
	rocket4.Start();
	
	for (int i = 100; i>=0; i--)
	{
		std::cout << "Rocket 1 Fuel Level: " << rocket1.getFuelLevel() << std::endl;
		std::cout << "Rocket 2 Fuel Level: " << rocket2.getFuelLevel() << std::endl;
		std::cout << "Rocket 3 Fuel Level: " << rocket3.getFuelLevel() << std::endl;
		std::cout << "Rocket 4 Fuel Level: " << rocket4.getFuelLevel() << std::endl;

		rocket1.setFuelLevel(i);
		rocket2.setFuelLevel(i);
		rocket3.setFuelLevel(i);
		rocket4.setFuelLevel(i);
	}

}
void spaceCraft::Land(void) { std::cout << "Rocket has Landed: " << std::endl; }
void spaceCraft::Fall(void) { std::cout << "Rocket has Fell: " << std::endl; }

spaceCraft::spaceCraft(void)
{
	setPayloadWeight(180000);
	setSpeed(360);
	setHeight(3200000);
	setNoOfObits(18);

	spaceman1.setName("Tim");
	spaceman1.setAge(40);
	spaceman1.setGender("male");
	spaceman1.setHeight(180);
	spaceman1.setHoursInSpace(420);
	spaceman1.setNINumber("AB 12 34 56 C");
	spaceman1.setWeight(140);

	spaceman2.setName("Timothy");
	spaceman2.setAge(40);
	spaceman2.setGender("male");
	spaceman2.setHeight(180);
	spaceman2.setHoursInSpace(420);
	spaceman2.setNINumber("AB 12 34 56 C");
	spaceman2.setWeight(140);

	spaceman3.setName("Tim the second");
	spaceman3.setAge(40);
	spaceman3.setGender("male");
	spaceman3.setHeight(180);
	spaceman3.setHoursInSpace(420);
	spaceman3.setNINumber("AB 12 34 56 C");
	spaceman3.setWeight(140);

	spaceman4.setName("Timmy");
	spaceman4.setAge(40);
	spaceman4.setGender("male");
	spaceman4.setHeight(180);
	spaceman4.setHoursInSpace(420);
	spaceman4.setNINumber("AB 12 34 56 C");
	spaceman4.setWeight(140);

	spaceman5.setName("Timmie");
	spaceman5.setAge(40);
	spaceman5.setGender("male");
	spaceman5.setHeight(180);
	spaceman5.setHoursInSpace(420);
	spaceman5.setNINumber("AB 12 34 56 C");
	spaceman5.setWeight(140);

	spaceman6.setName("Timm");
	spaceman6.setAge(40);
	spaceman6.setGender("male");
	spaceman6.setHeight(180);
	spaceman6.setHoursInSpace(420);
	spaceman6.setNINumber("AB 12 34 56 C");
	spaceman6.setWeight(140);

	spaceman7.setName("Timmoth");
	spaceman7.setAge(40);
	spaceman7.setGender("male");
	spaceman7.setHeight(180);
	spaceman7.setHoursInSpace(420);
	spaceman7.setNINumber("AB 12 34 56 C");
	spaceman7.setWeight(140);

	spaceman8.setName("Tim");
	spaceman8.setAge(40);
	spaceman8.setGender("male");
	spaceman8.setHeight(180);
	spaceman8.setHoursInSpace(420);
	spaceman8.setNINumber("AB 12 34 56 C");
	spaceman8.setWeight(140);	
	
}