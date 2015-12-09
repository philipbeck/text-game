#include "player.h"

//constructors********************************************
Player::Player(std::string Name){
	name = Name;
	health = 100;
	maxHealth = 100;
	level = 1;
	attack = 5;
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
