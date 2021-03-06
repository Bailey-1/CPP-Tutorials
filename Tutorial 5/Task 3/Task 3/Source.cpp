#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

struct Garage {
	string owner;
	Car firstcar;
	Car secondcar;
};

int main()
{
	Car carArray[3];
	
	for (int i = 0; i <= 3; i++)
	{
		carArray[i].SetSpeed(i * 10);
	}

	Car *myCar;
	myCar = &carArray[2];
	
	for (int i = 3; i >= 0; i--)
	{
		cout << carArray[i].CurrentSpeed() << endl;
	}

	Car carArray[3];

	for (int i = 0; i <= 3; i++)
	{
		carArray[i].SetSpeed(i * 10);
		carArray[i].SetTopSpeed(carArray[i].CurrentSpeed()+50);
		cout << carArray[i].CurrentSpeed() << endl;
		cout << carArray[i].GetTopSpeed() << endl;
	}

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
