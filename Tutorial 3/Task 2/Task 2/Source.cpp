#include <iostream>
#include "Contact.h"
#include <string>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);

int main()
{
	Contact Person;
	cout << "Set Name: ";
	string name;
	getline(cin, name);
	Person.SetName(name);

	cout << "Set Email: ";
	string Email;
	getline(cin, Email);
	Person.SetEmail(Email);

	cout << "Set Company: ";
	string Company;
	getline(cin, Company);
	Person.SetCompany(Company);

	cout << "Set Phone: ";
	int Phone;
	cin, Phone);
	Person.SetPhone(Phone);

	cout << "Name: " << Person.GetName() << endl;
	cout << "Comapny: " << Person.GetCompany() << endl;
	cout << "Email: " << Person.GetEmail() << endl;
	cout << "Phone: " << Person.GetPhone() << endl;

	wait_for_keypress();
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
