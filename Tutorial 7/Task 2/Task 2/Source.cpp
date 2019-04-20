#include <iostream>
#include "dog.h"
#include "cat.h"
#include "fish.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	dog clifford;
	clifford.setAge(2);
	clifford.setAlive(true);
	clifford.setBarkVolume(0.75f);
	clifford.setBreed("Giant");
	clifford.setHabitat("Some Town");
	clifford.setHairColor("red");
	clifford.setLegs(4);
	clifford.setTeeth(30);
	
	fish myFish;
	myFish.setAge(5);
	myFish.setAlive(true);
	myFish.setHabitat("In the water");
	myFish.setColor("Gold");
	myFish.setFins(10);
	myFish.setGills(15);

	cat myCat;
	myCat.setAge(12);
	myCat.setAlive(true);
	myCat.setPurrVolume(0.8f);
	myCat.setBreed("Kitty");
	myCat.setHabitat("Some City");
	myCat.setHairColor("Black");
	myCat.setLegs(4);
	myCat.setTeeth(30);

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
