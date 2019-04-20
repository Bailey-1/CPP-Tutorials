#include "Animal.h"
#include <iostream>
#include <string>

string Animal::getHabitat(void) { return m_habitat; }
void Animal::setHabitat(string habitat) { m_habitat = habitat; }
int Animal::getAge(void) { return m_age; }
void Animal::setAge(int age) { m_age = age; }
bool Animal::getAlive(void) { return m_alive; }
void Animal::setAlive(bool alive) { m_alive = alive; }