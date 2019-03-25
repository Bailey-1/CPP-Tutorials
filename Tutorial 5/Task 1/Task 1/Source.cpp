#include <iostream>
#include "Car.h"
#include "Truck.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Car car1;
	car1.SetSpeed(50);
	Car car2;
	car2.SetSpeed(100);
	Car car3;
	car3.SetSpeed(150);

	Car car1_copy(car1);
	Car car2_copy(car2);
	Car car3_copy(car3);

	cout << "Car1: " << car1.CurrentSpeed() << " " << car1_copy.CurrentSpeed() << endl;
	cout << "Car2: " << car2.CurrentSpeed() << " " << car2_copy.CurrentSpeed() << endl;
	cout << "Car3: " << car3.CurrentSpeed() << " " << car3_copy.CurrentSpeed() << endl;

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
