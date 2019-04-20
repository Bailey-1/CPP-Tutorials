#pragma once
#include <iostream>
#include <string>
#include "person.h"

using std::string;

class footballer : public person
{
protected:
	int m_yearlyWage;
	int m_goalsScored;
	int m_matchesPlayed;
	string m_position;

public:
	int getYearlyWage(void);
	void setYearlyWage(int yearlyWage);
	int getGoalsScored(void);
	void setGoalsScored(int goalsScored);
	int getMatchesPlayed(void);
	void setMatchesPlayed(int matchesPlayed);
	string getPostion(void);
	void setPostion(string position);
};