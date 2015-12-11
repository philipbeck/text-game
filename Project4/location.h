#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>

#include "monster.h"
#include "item.h"

class Location{
public:
	//constructors
	Location();
	//destructor
	~Location();
	//getters and setters
	//name
	std::string getName();
	void setName(std::string Name);
	//doing stuff
	//shows inventory as a string
	std::string showItems();
protected:
	//fuctions
	std::string randomName();
	void randomizeItems();

	//variables
	std::string name;
	std::vector<Monster*> monsters;
	std::vector<Item*> items;
};

#endif