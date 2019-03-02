#pragma once
#include<iostream>

using namespace std;

class Contact
{
private:
	string m_name;
	string m_email;
	string m_company;
	int m_phone;
public:
	string GetName(void);
	void SetName(string name);
	string GetEmail(void);
	void SetEmail(string email);
	string GetCompany(void);
	void SetCompany(string company);
	int GetPhone(void);
	void SetPhone(int phone);
};