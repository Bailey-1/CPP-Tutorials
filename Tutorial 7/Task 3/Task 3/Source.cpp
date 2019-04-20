#include <iostream>
#include "factory-worker.h"
#include "footballer.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	factoryWorker tim;
	tim.setName("Tim Apple");
	tim.setAge(40);
	tim.setGender("Male");
	tim.setHeight(1.8f);
	tim.setWeight(200.0f);
	tim.setNINumber("AU 10 93 82 C");

	tim.setJobTitle("Factory Worker");
	tim.setHourlyWage(10);

	cout << tim.getWeeklyWage(tim.getHourlyWage()) << "\n=====" <<endl;
	
	footballer timmy;
	timmy.setName("Timmy Smith");
	timmy.setAge(25);
	timmy.setGender("Male");
	timmy.setHeight(1.75f);
	timmy.setWeight(150.0f);
	timmy.setNINumber("EF 16 26 39 R");

	timmy.setYearlyWage(23000000);
	timmy.setGoalsScored(132);
	timmy.setMatchesPlayed(160);
	timmy.setPostion("Center");

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
