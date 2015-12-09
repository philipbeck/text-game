#define ITEM_H

#include <string>

#include "creature.h"

//base item class
class Item{
public:
	//getters and setters
	std::string getName();
	void setName(std::string Name);
	//doing stuff
	virtual void use(Creature &c) = 0;
protected:
	std::string name;
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