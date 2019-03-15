#include "Weapon.h"
#include <random>
#include <time.h>

int Weapon::GetWeaponID() { return m_WeaponID; }
float Weapon::GetReloadTime() { return m_ReloadTime; }
int Weapon::GetMinDamage() { return m_MinDamage; }
int Weapon::GetMaxDamage() { return m_MaxDamage; }
int Weapon::GetDamageBonus() { return m_DamageBonus; }

void Weapon::Display()
{
	cout << "WeaponID: " << m_WeaponID << endl;
	cout << "Reload Time: " << m_ReloadTime << endl;
	cout << "Min Damage: " << m_MinDamage << endl;
	cout << "Max Damage: " << m_MaxDamage << endl;
	cout << "Bonus Damage: " << m_DamageBonus << endl;
}

int Weapon::Shoot()
{
	srand(time(NULL)); //Makes it random each time you run it.
	int damage = rand() % (m_MaxDamage + 1 - m_MinDamage) + m_MinDamage;
	return damage + m_DamageBonus;
}

Weapon::Weapon(int ID, float ReloadTime, int MinDamage, int MaxDamage, int DamageBonus){
	m_WeaponID = ID;
	m_ReloadTime = ReloadTime;
	m_MinDamage = MinDamage;
	m_MaxDamage = MaxDamage;
	m_DamageBonus = DamageBonus;
}