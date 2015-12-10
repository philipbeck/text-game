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
	/*inventory? might not need these functions
	std::vector<Item*> getInventory();
	void setInventory(std::vector<Item*> Inventory);
	*/

	//doing stuff
	int hasItem(std::string itemName);
	bool use(std::string itemName);//returns false if item not used and true if it is
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