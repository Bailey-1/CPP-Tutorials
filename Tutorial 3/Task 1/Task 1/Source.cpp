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
	Car marks_Car;
	Car marks_Next_Car;

	marks_Car.m_model = "BMW 323";

	marks_Car.m_engine_size = 2.5f;
	marks_Next_Car.m_engine_size = 8.0f;
	marks_Car.accelerate();
	marks_Next_Car.brake();

	marks_Car.SetSpeed(15);
	marks_Next_Car.SetSpeed(150);

	Car mycar;
	mycar.m_model = "Jakes Astra";
	mycar.accelerate();
	mycar.accelerate();
	mycar.accelerate();
	mycar.accelerate();
	mycar.accelerate();
	mycar.SetSpeed(23924894);

	cout << "Jakes Speed: " << mycar.CurrentSpeed()<< endl;

	for (int i = 1; i <= 10; i++) {
		for (int x = 1; x <= 20; x++) {
			mycar.accelerate();
			cout << mycar.CurrentSpeed() << endl;

		}

		cout << "Jakes Speed: " << mycar.CurrentSpeed() << endl;
		for (int x = 1; x <= 20; x++) {
			mycar.brake();
			cout << mycar.CurrentSpeed() << endl;

		}

		cout << "Jakes Speed: " << mycar.CurrentSpeed() << endl;
	}

	Truck mytruck;
	mytruck.SetSpeed(0);
	mytruck.accelerate();
	mytruck.accelerate();
	mytruck.accelerate();
	cout << "Truck Speed: " << mytruck.CurrentSpeed() << endl;

	Car car;
	Truck truck;
	car.SetSpeed(50);
	truck.SetSpeed(0);

	for (int i=0; i<=200; i++){
		if (i % 3 == 0) {
			car.brake(); //Did this twice to stop it from becoming identical as the truck.
			car.brake();
		}
		else {
			car.accelerate();
			car.accelerate();
		}

		cout << "Car: " << car.CurrentSpeed() << endl;


		if (car.CurrentSpeed() > truck.CurrentSpeed()) {
			truck.accelerate();
		}
		else {
			truck.brake();
		}
		cout << "Truck: " << truck.CurrentSpeed() << endl;

	}

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
