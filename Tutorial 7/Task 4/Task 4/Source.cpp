#include <iostream>
#include "SpaceCraft.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	spaceCraft redDwarf;
	redDwarf.Launch();



	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
