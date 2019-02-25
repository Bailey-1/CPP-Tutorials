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

struct Model
{
	int m_ID;
	Person_Info m_info;
};

// DECLARE functions

void display_model_info(Model model);
void display_person_info(Person_Info model);

void wait_for_keypress(void);

int main()
{
	Model dave;
	dave.m_ID = 1;
	dave.m_info.m_age = 20;
	dave.m_info.m_height_meters = 20;
	dave.m_info.m_waist_cms = 20;
	dave.m_info.m_weight_kilograms = 20;
	dave.m_info.m_name = "Dave";

	//cout << "ID:" << dave.m_ID << endl;
	//cout << "Age:" << dave.m_info.m_age << endl;
	//cout << "Height:" << dave.m_info.m_height_meters << endl;
	//cout << "Weight:" << dave.m_info.m_weight_kilograms << endl;
	//cout << "Waist:" << dave.m_info.m_waist_cms << endl;
	//cout << "Name:" << dave.m_info.m_name << "\n" << endl;

	//display_person_info(dave); Worked

	display_model_info(dave);

	wait_for_keypress();
}

void display_model_info(Model model) {
	cout << "ID:" << model.m_ID << endl;
	display_person_info(model.m_info);
}

void display_person_info(Person_Info person) {
	cout << "Age:" << person.m_age << endl;
	cout << "Height:" << person.m_height_meters << endl;
	cout << "Weight:" << person.m_weight_kilograms << endl;
	cout << "Waist:" << person.m_waist_cms << endl;
	cout << "Name:" << person.m_name << "\n" << endl;
}

// DEFINE functions

void wait_for_keypress(void)
{
	cout << "Press Enter to continue" << endl;
	cin.get();
}
