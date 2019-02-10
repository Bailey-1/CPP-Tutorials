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

void wait_for_keypress(void);


int main()
{
	Model dave;

	dave.m_ID = 69;
	dave.m_info.m_age = 20;
	dave.m_info.m_height_meters= 20;
	dave.m_info.m_weight_kilograms = 20;
	dave.m_info.m_waist_cms= 20;
	dave.m_info.m_name = "Dave";

	cout << "ID:" << dave.m_ID << endl;
	cout << "Age:" << dave.m_info.m_age << endl;
	cout << "Height:" << dave.m_info.m_height_meters << endl;
	cout << "Weight:" << dave.m_info.m_weight_kilograms << endl;
	cout << "Waist:" << dave.m_info.m_waist_cms << endl;
	cout << "Name:" << dave.m_info.m_name << "\n" << endl;

	Model dave2 = { 70, {70, 70, 70, 70, "Dave2"} };

	cout << "ID:" << dave2.m_ID << endl;
	cout << "Age:" << dave2.m_info.m_age << endl;
	cout << "Height:" << dave2.m_info.m_height_meters << endl;
	cout << "Weight:" << dave2.m_info.m_weight_kilograms << endl;
	cout << "Waist:" << dave2.m_info.m_waist_cms << endl;
	cout << "Name:" << dave2.m_info.m_name << "\n" << endl;

	Model dave3 = { 100, dave.m_info};

	dave3.m_info.m_age = dave2.m_info.m_age;

	cout << "ID:" << dave3.m_ID << endl;
	cout << "Age:" << dave3.m_info.m_age << endl;
	cout << "Height:" << dave3.m_info.m_height_meters << endl;
	cout << "Weight:" << dave3.m_info.m_weight_kilograms << endl;
	cout << "Waist:" << dave3.m_info.m_waist_cms << endl;
	cout << "Name:" << dave3.m_info.m_name << "\n" << endl;

	Model top_five_models[5] = {
				{ 1, { 52.3, 24, 1.5f, 47.0f, "Sophie" } },
				{ 2, { 53.3, 25, 1.6f, 48.0f, "Kate" } },
				{ 3, { 54.3, 26, 1.7f, 49.0f, "Billie" } },
				{ 4, { 54.3, 26, 1.7f, 49.0f, "Anna" } },
				{ 5, { 54.3, 26, 1.7f, 49.0f, "Susan" } }
	};

	for (int i = 0; i <= 4; i++) {
		cout << "ID:" << top_five_models[i].m_ID << endl;
		cout << "Age:" << top_five_models[i].m_info.m_age << endl;
		cout << "Height:" << top_five_models[i].m_info.m_height_meters << endl;
		cout << "Weight:" << top_five_models[i].m_info.m_weight_kilograms << endl;
		cout << "Waist:" << top_five_models[i].m_info.m_waist_cms << endl;
		cout << "Name:" << top_five_models[i].m_info.m_name << "\n" << endl;
	}

	top_five_models[0].m_info.m_age = 40;
	cout << "Age:" << top_five_models[0].m_info.m_age << endl;


	wait_for_keypress();
}

// DEFINE functions

void wait_for_keypress(void)
{
	cout << "Press Enter to continue" << endl;
	cin.get();
}
