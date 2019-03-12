#include "Character.h"

string Character::GetName() { return m_name; };
void Character::SetName(string name) { m_name = name; };
int Character::GetHealth() { return m_health; };
void Character::SetHealth(int health) { m_health = health; };
int Character::GetAttackStrength() { return m_attackStrength; };
void Character::SetAttackStrength(int attackStrength) { m_attackStrength = attackStrength; };