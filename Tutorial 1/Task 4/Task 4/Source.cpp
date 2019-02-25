#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// DECLARE structures

struct Address
{
	int number;
	string street;
	string city;
	string county;
	string postcode;
};

struct Person
{
	string firstName;
	string secondName;
};

struct fullAddress 
{
	Person person;
	Address address;
};

// DECLARE functions

void wait_for_keypress(void);
void inputArray(void);

int main()
{
	fullAddress person[2];
	cout << "First Name:";
	getline(cin, person[0].person.firstName);
	cout << "Second Name: ";
	getline(cin, person[0].person.secondName);

	cout << "First Name: " << person[0].person.firstName << endl;
	cout << "Second Name: " << person[0].person.secondName << endl;

	wait_for_keypress();
}

void inputArray(void) 
{
	
}

// DEFINE functions

void wait_for_keypress(void)
{
	cout << "Press Enter to continue" << endl;
	cin.get();
}