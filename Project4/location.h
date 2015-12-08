#define LOCATION_H

#include <string>

class Location{
public:
	//constructors
	Location();
	//destructor

	//getters and setters
	//name
	std::string getName();
	void setName(std::string Name);
protected:
	//fuctions
	std::string randomName();

	//variables
	std::string name;
};