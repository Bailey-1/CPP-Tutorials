#pragma once
#include<iostream>
#include <string>

using namespace std;

class Monster
{
private:
	int m_MonsterID;
	float m_Health;
	int m_speed;
	float m_strength;
public:
	Monster(void);
	Monster(int, float, int, float);

	void SetMonsterID(int);
	int GetMonsterID(void);
	void SetHealth(float);
	float GetHealth(void);

	void SetSpeed(int);
	int GetSpeed(void);
	void SetStrength(float);
	float GetStrength(void);

	void TakeDamage();
	bool isDead();
};
