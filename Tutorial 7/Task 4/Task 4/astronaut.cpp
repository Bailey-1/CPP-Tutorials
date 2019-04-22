#include "astronaut.h"
#include <iostream>
#include <string>

int astronaut::getNoOfFlights(void) { return m_noOfFlights; }
void astronaut::setNoOfFlights(int flights) { m_noOfFlights = flights; }
int astronaut::getHoursInSpace(void) { return m_hoursInSpace; }
void astronaut::setHoursInSpace(int hours) { m_hoursInSpace = hours; }
