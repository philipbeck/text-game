#ifndef CREATURE_H
#define CREATURE_H

//abstract class so all the characters in the game can
//can use the same items etc.
class Creature{
public:
	//health for healing potions and shizz
	virtual int getHealth() = 0;
	virtual void setHealth(int Health) = 0;
	//max health
	virtual int getMaxHealth() = 0;
};

#endif