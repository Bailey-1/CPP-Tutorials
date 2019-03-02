#include "Contact.h"

string Contact::GetName() { return m_name; };
void Contact::SetName(string name) { m_name = name; };
string Contact::GetEmail() { return m_email; };
void Contact::SetEmail(string email) { m_email = email; };
string Contact::GetCompany() { return m_company; };
void Contact::SetCompany(string company) { m_company = company; };
int Contact::GetPhone() { return m_phone; };
void Contact::SetPhone(int phone) { m_phone = phone; };