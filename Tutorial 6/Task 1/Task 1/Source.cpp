#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

struct carStruct {
	Car car;
	Car *pointerCar;
};

int main()
{
	carStruct jakesCar;
	jakesCar.pointerCar = new Car();

	carStruct carArray[5];

	for (int i = 0; i <= 4; i++)
	{
		carArray[i].pointerCar = new Car();
	}
	
	for (int i = 0; i <= 4; i++)
	{
		delete carArray[i].pointerCar;
		carArray[i].pointerCar = NULL;
	}

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
