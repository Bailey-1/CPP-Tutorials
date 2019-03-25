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
	Car car1;
	car1.SetSpeed(50);
	Car car2;
	car1.SetSpeed(150);


	struct Garage garage1;
	garage1.owner = "Tim";
	garage1.firstcar = car1;
	garage1.secondcar = car2;

	struct Garage garage2 = { "tim", car1, car2 };

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
