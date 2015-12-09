#define PLAYER_H

#include <string>

#include "creature.h"

class Player: public Creature{
public:
	Player(std::string Name);
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
	//level
	int getLevel();
	void setLevel(int Level);
private:
	std::string name;
	int health;
	int maxHealth;
	int level;
};