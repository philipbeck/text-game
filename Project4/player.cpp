#include "player.h"

//constructors********************************************
Player::Player(std::string Name){
	name = Name;
	health = 100;
	maxHealth = 100;
	level = 1;
	attack = 5;
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

int Player::hasItem(std::string itemName){
	for(int i = 0; i < (int)inventory.size(); i++){
		if(inventory[i]->getName() == itemName){
			return i;
		}
	}
	//returns -1 if not in vector
	return -1;
}


void Player::use(std::string itemName){
	int item = hasItem(itemName);
	//if the item doesn't exist leave the function
	if(item == -1){
		return;
	}

	inventory[item]->use(*this);

	if(inventory[item]->getConsumable()){
		delete inventory[item];
		inventory.erase(inventory.begin() + item);
	}

}