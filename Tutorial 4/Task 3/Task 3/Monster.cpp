#include "Monster.h"

void Monster::SetMonsterID(int ID) { m_MonsterID = ID; }
int Monster::GetMonsterID(void) { return m_MonsterID; }
void Monster::SetHealth(float health) { m_Health = health; }
float Monster::GetHealth(void) { return m_Health; }
void Monster::SetSpeed(int speed) { m_speed = speed; }
int Monster::GetSpeed(void) { return m_speed; }
void Monster::SetStrength(float strength) { m_strength = strength; }
float Monster::GetStrength(void) { return m_strength; }

void Monster::TakeDamage()
{
	if (m_Health > 0)
	{
		m_Health--;
	}
}

bool Monster::isDead()
{
	if (m_Health <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Monster::Monster(void) 
{
	SetMonsterID(0000);
	SetHealth(100);

	SetSpeed(10);
	SetStrength(2);
}

Monster::Monster(int ID, float health, int speed, float strength)
{
	SetMonsterID(ID);
	SetHealth(health);
	SetSpeed(speed);
	SetStrength(strength);
}