#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Weapon weapon1(0001, 5.7f, 10, 25, 3);
	weapon1.Display();
	cout << "Shoot: " << weapon1.Shoot() << "\n" << endl;

	Weapon weapon2(0002, 0.3f, 5, 16, 34);
	weapon2.Display();
	cout << "Shoot: " << weapon2.Shoot() << "\n" << endl;

	Weapon weapon3(0003, 0.04f, 52, 163, 74);
	weapon3.Display();
	cout << "Shoot: " << weapon3.Shoot() << "\n" << endl;

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
