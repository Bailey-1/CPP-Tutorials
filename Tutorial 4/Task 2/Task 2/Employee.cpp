#include "Employee.h"

void Employee::SetID(int ID) { m_ID = ID; }
int Employee::GetID(void) { return m_ID; }
void Employee::SetHourlyWage(float hourlywage) { m_HourlyWage = hourlywage; }
float Employee::GetHourlyWage(void) { return m_HourlyWage; }
void Employee::ChangeHourlyWage(float changeAmount) { m_HourlyWage += changeAmount; }

Employee::Employee(void)
{
	m_HourlyWage = 7.20;
}