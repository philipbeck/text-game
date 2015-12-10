#include "location.h"

#include <iostream>
#include <time.h>

//constructors++++++++++++++++++++++++++++++++++++

//default constructor
Location::Location(){
	//so the random stuff is actually random
	srand((int)time(NULL));
	name = randomName();
}

//destructor
Location::~Location(){
	//deleting all of the monsters in the array
	for(int i = 0; i < (int)monsters.size(); i++){
		delete monsters[i];
	}
	//deleting all the items on the floor
	for(int i = 0; i < (int)items.size(); i++){
		delete items[i];
	}

}

//getters and setters++++++++++++++++++++++++++++
std::string Location::getName(){
	return name;
}

void Location::setName(std::string Name){
	name = Name;
}


//show items
std::string Location::showItems(){
	//this will make a display the list of items in this location
	return "";
}


//protected stuff************************************************

std::string Location::randomName(){
	int i = rand()%5;

	switch(i){
	case 0:
		return "the Basement";
	case 1:
		return "a plant room";
	case 2:
		return "Happy Chip Basement";
	case 3:
		return "Sinners";
	case 4:
		return "Easy Street";
	default:
		return "something went wrong";
	}
}