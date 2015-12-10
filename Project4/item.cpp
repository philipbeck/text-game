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

//damage
int Item::getDamage(){
	return damage;
}
void Item::setDamage(int Damage){
	damage = Damage;
}



//healing potion stuff+++++++++++++++++++++++++
HealingPotion::HealingPotion(){
	name = "treble";
	consumable = true;
	damage = 30;
}

//override use function
void HealingPotion::use(Creature &c){
	if(c.getHealth() + damage > c.getMaxHealth()){
		c.setHealth(c.getMaxHealth());
	}
	else{
		c.setHealth(c.getHealth() + damage);
	}
}