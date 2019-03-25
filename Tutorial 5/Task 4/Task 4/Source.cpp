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

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
