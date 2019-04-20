#include "cat.h"
#include <iostream>
#include <string>

float cat::getPurrVolume(void) { return m_purrVolume; }
void cat::setPurrVolume(float purrVolume) { m_purrVolume = purrVolume; }
string cat::getBreed(void) { return m_breed; }
void cat::setBreed(string breed) { m_breed = breed; }