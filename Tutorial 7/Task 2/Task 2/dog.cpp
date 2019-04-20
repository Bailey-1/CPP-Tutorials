#include "dog.h"
#include <iostream>
#include <string>

float dog::getBarkVolume(void) { return m_barkVolume; }
void dog::setBarkVolume(float barkVolume) { m_barkVolume = barkVolume; }
string dog::getBreed(void) { return m_breed; }
void dog::setBreed(string breed) { m_breed = breed; }