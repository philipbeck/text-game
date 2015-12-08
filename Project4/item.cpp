#include "item.h"

//base item stuff++++++++++++++++++++++++++++++

//getters and setters
std::string Item::getName(){
	return name;
}
void Item::setName(std::string Name){
	name = Name;
}


//healing potion stuff+++++++++++++++++++++++++
HealingPotion::HealingPotion(){
	name = "treble";
}

//override use function
void HealingPotion::use(Player &p){
	//just 20 for now while I decide where to keep this value
	int health = 20;
	if(p.getHealth() + health > p.getMaxHealth()){
		p.setHealth(p.getMaxHealth());
	}
	else{
		p.setHealth(p.getHealth() + health);
	}
}