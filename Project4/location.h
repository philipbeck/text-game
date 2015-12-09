#define LOCATION_H

#include <string>
#include <vector>

#include "monster.h"

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
protected:
	//fuctions
	std::string randomName();

	//variables
	std::string name;
	std::vector<Monster*> monsters;
};