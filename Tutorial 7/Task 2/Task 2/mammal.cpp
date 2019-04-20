#include "mammal.h"
#include <iostream>
#include <string>

int mammal ::getLegs(void) { return m_legs; }
void mammal::setLegs(int legs) { m_legs = legs; }
int mammal::getTeeth(void) { return m_teeth; }
void mammal::setTeeth(int teeth) { m_teeth = teeth; }
string mammal::getHairColor(void) { return m_hairColor; }
void mammal::setHairColor(string hairColor) { m_hairColor = hairColor; }