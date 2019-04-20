#include "person.h"
#include <iostream>
#include <string>

string person::getName(void) { return m_name; }
void person::setName(string name) { m_name = name; }
int person::getAge(void) { return m_age; }
void person::setAge(int age) { m_age = age; }
string person::getGender(void) { return m_gender; }
void person::setGender(string gender) { m_gender = gender; }
float person::getHeight(void) { return m_height; }
void person::setHeight(float height) { m_height = height; }
float person::getWeight(void) { return m_weight; }
void person::setWeight(float weight) { m_weight = weight; }
string person::getNINumber(void) { return m_NINumber; }
void person::setNINumber(string niNumber) { m_NINumber = niNumber; }
