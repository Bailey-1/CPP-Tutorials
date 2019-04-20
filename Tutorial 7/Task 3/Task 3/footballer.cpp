#include "footballer.h"
#include <iostream>
#include <string>

int footballer::getYearlyWage(void) { return m_yearlyWage; }
void footballer::setYearlyWage(int yearlyWage) { m_yearlyWage = yearlyWage; }
int footballer::getGoalsScored(void) { return m_goalsScored; }
void footballer::setGoalsScored(int goalsScored) { m_goalsScored = goalsScored; }
int footballer::getMatchesPlayed(void) { return m_matchesPlayed; }
void footballer::setMatchesPlayed(int matchesPlayed) { m_matchesPlayed = matchesPlayed; }
string footballer::getPostion(void) { return m_position; }
void footballer::setPostion(string postion) { m_position = postion; }