#ifndef MONSTER_H
#define MONSTER_H

#include <string>

#include "creature.h"

class Monster: public Creature{
public:
	//constructors
	Monster();
	//destructor

	//getters and setters
	//name
	std::string getName();
	void setName(std::string Name);
	//health
	int getHealth();
	void setHealth(int Health);
	//max health
	int getMaxHealth();
	void setMaxHealth(int MaxHealth);
	//attack
	int getAttack();
	void setAttack(int Attack);
	//doing stuff

protected:
	//functions
	
	//variables
	std::string name;
	int health;
	int maxHealth;
	int attack;
};

#endif