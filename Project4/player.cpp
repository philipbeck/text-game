#include "player.h"

//constructors********************************************
Player::Player(std::string Name){
	name = Name;
	health = 50;
	maxHealth = 100;
	level = 1;
	attack = 5;
	//temporary stuff for testing
	inventory.push_back(new HealingPotion);
}

//destructor**********************************************
Player::~Player(){
	for(int i = 0; i < (int)inventory.size(); i++){
		delete inventory[i];
	}
}

//getters and setters*************************************

//name
std::string Player::getName(){
	return name;
}
void Player::setName(std::string Name){
	name = Name;
}

//health
int Player::getHealth(){
	return health;
}
void Player::setHealth(int Health){
	health = Health;
}

//max health
int Player::getMaxHealth(){
	return maxHealth;
}
void Player::setMaxHealth(int MaxHealth){
	maxHealth = MaxHealth;
}

//level
int Player::getLevel(){
	return level;
}
void Player::setLevel(int Level){
	level = Level;
}

//attack
int Player::getAttack(){
	return attack;
}
void Player::setAttack(int Attack){
	attack = Attack;
}

//doing stuff

void Player::addItem(Item* item){
	//this can be made better later
	inventory.push_back(item);
}

int Player::hasItem(std::string itemName){
	inventory.shrink_to_fit();
	for(int i = 0; i < (int)inventory.size(); i++){
		if(inventory[i]->getName() == itemName){
			return i;
		}
	}
	//returns -1 if not in vector
	return -1;
}


bool Player::use(std::string itemName){
	int item = hasItem(itemName);
	//if the item doesn't exist leave the function
	if(item == -1){
		return false;
	}

	inventory[item]->use(*this);

	if(inventory[item]->getConsumable()){
		delete inventory[item];
		inventory.erase(inventory.begin() + item);
	}

	return true;

}

std::string Player::showInventory(){
	std::string inv = "";
	//if there arent any items just display no items
	if((int)inventory.size() <= 0){
		return "\n---NO ITEMS---\n";
	}

	//if there are items make a list
	inv += "\n------THOU INVENTORY------\n";
	for(int i = 0; i < (int)inventory.size(); i++){
		inv += "-" + inventory[i]->getName() + "\n";
	}

	return inv;
}
