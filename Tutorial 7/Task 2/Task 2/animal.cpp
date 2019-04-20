#include "animal.h"
#include <iostream>
#include <string>

string animal::getHabitat(void) { return m_habitat; }
void animal::setHabitat(string habitat) { m_habitat = habitat; }
int animal::getAge(void) { return m_age; }
void animal::setAge(int age) { m_age = age; }
bool animal::getAlive(void) { return m_alive; }
void animal::setAlive(bool alive) { m_alive = alive; }