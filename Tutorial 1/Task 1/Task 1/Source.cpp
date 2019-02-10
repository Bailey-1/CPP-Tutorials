#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// DECLARE structures

struct Person_Info
{
	int 	m_age;
	float 	m_height_meters;
	float 	m_weight_kilograms;
	float 	m_waist_cms;
	string 	m_name;
};

// DECLARE functions

void wait_for_keypress(void);


int main()
{
	Person_Info tim; // creates a variable called dave, of type Person_Info

	tim.m_age = 18;
	tim.m_height_meters = 2;
	tim.m_weight_kilograms = 150;
	tim.m_waist_cms = 140;
	tim.m_name = "Tim Tim";

	cout << "Age:" << tim.m_age << endl;
	cout << "Height:" << tim.m_height_meters << endl;
	cout << "Weight:" << tim.m_weight_kilograms << endl;
	cout << "Waist:" << tim.m_waist_cms << endl;
	cout << "Name:" << tim.m_name << "\n" << endl;

	Person_Info tim2 = { 20, 1.2, 92.8, 100.01, "Tim Tim2" };

	cout << "Age:" << tim2.m_age << endl;
	cout << "Height:" << tim2.m_height_meters << endl;
	cout << "Weight:" << tim2.m_weight_kilograms << endl;
	cout << "Waist:" << tim2.m_waist_cms << endl;
	cout << "Name:" << tim2.m_name << "\n" << endl;

	Person_Info tim3 = { 20, 1.2};

	cout << "Age:" << tim3.m_age << endl;
	cout << "Height:" << tim3.m_height_meters << "\n" << endl;

	Person_Info tim4 = tim;

	cout << "Age:" << tim.m_age << endl;
	cout << "Height:" << tim.m_height_meters << endl;
	cout << "Weight:" << tim.m_weight_kilograms << endl;
	cout << "Waist:" << tim.m_waist_cms << endl;
	cout << "Name:" << tim.m_name << "\n" << endl;

	wait_for_keypress();
}

// DEFINE functions

void wait_for_keypress(void)
{
	cout << "Press Enter to continue" << endl;
	cin.get();
}
