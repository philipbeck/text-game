#define ITEM_H

#include <string>

#include "player.h"

//base item class
class Item{
public:
	//getters and setters
	std::string getName();
	void setName(std::string Name);
	//doing stuff
	virtual void use(Player &p) = 0;
protected:
	std::string name;
};


//healing potion item
class HealingPotion: public Item{
public:
	//constructor
	HealingPotion();
	//doing stuff
	void use(Player &p);
protected:
};