#include "monster.h"

//constructors++++++++++++++++++++++++++++++++++

Monster::Monster(){
	name = "monster";
	health = 100;
	maxHealth = 100;
	attack = 10;
}

//getters and setters+++++++++++++++++++++++++++

//Name
std::string Monster::getName(){
	return name;
}
void Monster::setName(std::string Name){
	name = Name;
}

//health
int Monster::getHealth(){
	return health;
}
void Monster::setHealth(int Health){
	health = Health;
}

//max health
int Monster::getMaxHealth(){
	return maxHealth;
}
void Monster::setMaxHealth(int MaxHealth){
	maxHealth = MaxHealth;
}

//attack
int Monster::getAttack(){
	return attack;
}
void Monster::setAttack(int Attack){
	attack = Attack;
}