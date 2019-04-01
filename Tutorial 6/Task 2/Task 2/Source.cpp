#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Car *carArray[5];
	*carArray[0] = Car();
	*carArray[1] = Car(10);
	*carArray[2] = Car(1.8f, 20);
	*carArray[3] = Car(1.9f);
	*carArray[4] = Car(50, 100);
	*carArray[5] = Car(1);

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
