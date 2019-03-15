#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Monster monster1(100, 3.5, 10, 1.87f);
	cout << monster1.GetMonsterID() << endl;
	cout << monster1.GetHealth() << endl;
	cout << monster1.GetSpeed() << endl;
	cout << monster1.GetStrength() << endl;



	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
