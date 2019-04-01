#include <iostream>
#include "Car.h"
#include <string>

#include "Garage.h"

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Garage myGarage;
	myGarage.car1 = new Car();
	myGarage.car2 = new Car();

	myGarage.car1->SetTopSpeed(150);
	myGarage.car1->SetSpeed(100);
	
	myGarage.car2->SetTopSpeed(200);
	myGarage.car2->SetSpeed(150);
	
	
	myGarage.car1->display();
	cout << "\n" << endl;
	myGarage.car2->display();



	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
