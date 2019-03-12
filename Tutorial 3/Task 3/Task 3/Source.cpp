#include <iostream>
#include <string>
#include "Character.h"
#include <random>
#include <time.h>

using namespace std;

int main();

// DECLARE functions
void wait_for_keypress(void);
int genNextAttack(int);
void takeDamage(Character, int);
void displayInfo(Character);
bool isDead(Character);

int main()
{
	Character char1;
	char1.SetName("The Destroyer");
	char1.SetHealth(100);
	char1.SetAttackStrength(10);

	Character char2;
	char2.SetName("King");
	char2.SetHealth(100);
	char2.SetAttackStrength(10);

	bool run = true;

	while (run == true) 
	{
		int attackDamage = genNextAttack(char1.GetAttackStrength());
		char2.SetHealth(char2.GetHealth()-attackDamage);
		displayInfo(char2);
		bool charDead = isDead(char2);
		if (charDead != true) {
			attackDamage = genNextAttack(char2.GetAttackStrength());
			char1.SetHealth(char1.GetHealth() - attackDamage);
			displayInfo(char1);
			charDead = isDead(char1);
		}
		else
		{
			run = false;
		}
		if (charDead == true) {
			run = false;
		}

	}

	wait_for_keypress();
}

int genNextAttack(int attackStrength) 
{
	srand(time(NULL));
	int random_integer = rand() % (1 + attackStrength);
	return random_integer;
}

void takeDamage(Character victim, int damage)
{
	int currentHealth = victim.GetHealth();
	victim.SetHealth(currentHealth - damage);
}

void displayInfo(Character character)
{
	cout << character.GetName() << ": " << character.GetHealth() << endl;
}


bool isDead(Character character)
{
	if (character.GetHealth() <= 0) {
		cout << character.GetName() << endl;
		cout << "he dead" << endl;
		return true;
	}
	else 
	{
		return false;
	}
}

// DEFINE functions
void wait_for_keypress(void)
{
	cout << "Press any key to continue" << endl;
	cin.get();
}
