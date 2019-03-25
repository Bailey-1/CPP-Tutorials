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
	Car myCar;
	myCar.display();

	cout << "Number of Cars: " << myCar.GetNoOfCars() << endl;

	Car myCar1(100);
	myCar1.display();

	cout << "Number of Cars: " << myCar1.GetNoOfCars() << endl;

	Car myCar2(1.8f, 120);
	myCar2.display();

	cout << "Number of Cars: " << myCar2.GetNoOfCars() << endl;

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
