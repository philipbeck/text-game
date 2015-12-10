#ifndef ITEM_H
#define ITEM_H

#include <string>

#include "creature.h"

//base item class
class Item{
public:
	//getters and setters
	//name
	std::string getName();
	void setName(std::string Name);
	//consumable
	bool getConsumable();
	void setConsumable(bool Consumable);
	//damage
	int getDamage();
	void setDamage(int Damage);
	//doing stuff
	virtual void use(Creature &c) = 0;
protected:
	std::string name;
	bool consumable;
	//how much damage something does when used as a 
	//weapon or how much it heals you
	int damage;
};


//healing potion item
class HealingPotion: public Item{
public:
	//constructor
	HealingPotion();
	//doing stuff
	void use(Creature &c);
protected:
};

#endif