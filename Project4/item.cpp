#include "item.h"

//base item stuff++++++++++++++++++++++++++++++

//getters and setters
//name
std::string Item::getName(){
	return name;
}
void Item::setName(std::string Name){
	name = Name;
}

//consumable
bool Item::getConsumable(){
	return consumable;
}
void Item::setConsumable(bool Consumable){
	consumable = Consumable;
}



//healing potion stuff+++++++++++++++++++++++++
HealingPotion::HealingPotion(){
	name = "treble";
	consumable = true;
}

//override use function
void HealingPotion::use(Creature &c){
	//just 20 for now while I decide where to keep this value
	int health = 20;
	if(c.getHealth() + health > c.getMaxHealth()){
		c.setHealth(c.getMaxHealth());
	}
	else{
		c.setHealth(c.getHealth() + health);
	}
}