#pragma once
#include<iostream>
#include <string>

using namespace std;

class Weapon
{
private:
	int m_WeaponID;
	float m_ReloadTime;
	int m_MinDamage;
	int m_MaxDamage;
	int m_DamageBonus;
public:
	int GetWeaponID(void);
	float GetReloadTime(void);
	int GetMinDamage(void);
	int GetMaxDamage(void);
	int GetDamageBonus(void);

	void Display(void);
	int Shoot(void);

	Weapon(int, float, int, int, int);
};
