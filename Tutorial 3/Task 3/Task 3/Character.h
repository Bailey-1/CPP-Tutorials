#pragma once
#include<iostream>

using namespace std;

class Character
{
	private:
		string m_name;
		int m_health;
		int m_attackStrength;
	public:
		string GetName(void);
		void SetName(string name);
		int GetHealth(void);
		void SetHealth(int health);
		int GetAttackStrength(void);
		void SetAttackStrength(int attackStrength);
};