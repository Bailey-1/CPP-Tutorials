#include "fish.h"
#include <iostream>
#include <string>

int fish::getFins(void) { return m_fins; }
void fish::setFins(int fins) { m_fins = fins; }
int fish::getGills(void) { return m_gills; }
void fish::setGills(int gills) { m_gills = gills; }
string fish::getColor(void) { return m_color; }
void fish::setColor(string color) { m_color = color; }