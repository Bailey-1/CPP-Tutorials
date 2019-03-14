#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Employee person1;
	person1.SetID(0001);
	person1.SetHourlyWage(5);
	cout << "ID: " << person1.GetID() << "\nHourly Wage: " << person1.GetHourlyWage() << endl;

	Employee person2;
	person2.SetID(0002);
	person2.SetHourlyWage(10);
	cout << "ID: " << person2.GetID() << "\nHourly Wage: " << person2.GetHourlyWage() << endl;

	Employee person3;
	person3.SetID(0003);
	person3.SetHourlyWage(1000000);
	cout << "ID: " << person3.GetID() << "\nHourly Wage: " << person3.GetHourlyWage() << endl;

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
