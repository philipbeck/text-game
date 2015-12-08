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


//getters and setters++++++++++++++++++++++++++++
std::string Location::getName(){
	return name;
}

void Location::setName(std::string Name){
	name = Name;
}


//protected stuff

std::string Location::randomName(){
	int i = rand()%5;

	switch(i){
	case 0:
		return "the Basement";
	case 1:
		return "a plant room";
	case 2:
		return "Swaglands";
	case 3:
		return "Sinners";
	case 4:
		return "Easy Street";
	default:
		return "something went wrong";
	}
}