#include <iostream>
#include <string>
#include "Car.h"
#include <random>
#include <time.h>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Car car1;
	car1.display();

	cout << " " << endl;

	Car car2(25);
	car2.display();

	cout << " " << endl;

	Car car3(1.8f, 80);
	car3.display();

	cout << " " << endl;

	Car car4(3.6f);
	car4.display();

	cout << " " << endl;

	Car car5(100, 110); //Speed and top speed.
	car5.display();

	cout << " " << endl;

	car1.SetTopSpeed(70);

	car1.SetSpeed(100);
	car1.display();

	cout << " " << endl;

	car1.SetSpeed(50);
	car1.display();

	car1.SetSpeed(1);
	car1.brake();
	car1.brake();

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
