#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "creature.h"
#include "item.h"

class Player: public Creature{
public:
	//constructors
	Player(std::string Name);
	//desctructor
	~Player();
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
	//attack
	int getAttack();
	void setAttack(int Attack);
	//doing stuff
	int hasItem(std::string itemName);
	//returns false if item not used and true if it is
	bool use(std::string itemName);
	//makes a string that displays inventory
	std::string showInventory();
private:
	//variables
	//many of these will end up in the creature class
	std::string name;
	int health;
	int maxHealth;
	int level;
	int attack;
	//dynamic list of items in inventory
	std::vector<Item*> inventory;
};

#endif