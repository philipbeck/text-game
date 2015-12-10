#include "game.h"

#include <iostream>
#include <string>
using namespace std;

//public************************************

//constructors******************************
Game::Game(){
	player = new Player("Sir Blazealot");
	location = new Location();
}

//destructor********************************

Game::~Game(){
	delete player;
	delete location;
}

void Game::run(){
	string cmd;

	bool done = false;

	//player creation
	cout << "what ist thou name good adventurer?\n";
	//get line instead of cin so cool names with spaces like "Lethal Bizzle" or "Tom Jones"
	getline(cin, cmd);
	player->setName(cmd);

	while(!done){
		cout << "\nenter a command\n";
		cin >> cmd;

		if(cmd == "quit"){
			cout << "are you sure you want to quit? (y/n) ";
			if(yesOrNo())
				done = true;
		}
		else if(cmd == "help"){
			help();
		}
		else if(cmd == "stats"){
			playerStats();
		}
		else if(cmd == "surroundings"){
			surroundings();
		}
		else if(cmd == "move"){
			delete location;
			location = new Location();
			surroundings();//show surroundings
		}
		else if(cmd == "use"){
			cout << "use what?\n";
			cin >> cmd;
			if(player->use(cmd)){
				cout << "you use your " << cmd << endl;
			}
			else{
				cout << "you do not have a " << cmd << endl;
			}
		}
		else if(cmd == "inventory"){
			cout << player->showInventory();
		}
	}
}

//private***********************************

//output for the help command
void Game::help(){
	cout << "\n------COMMAND LIST------\n"
		<< "quit: ends game\n"
		<< "stats: displays players stats\n"
		<< "surroundings: describes your surroundings\n"
		<< "move: move to a different location\n"
		<< "use: use an item in your inventory\n"
		<< "inventory: displays inventory\n";
}

//displays all of the players stats
void Game::playerStats(){
	cout << "\n------THY STATISTICS------\n"
		<<"Name: " << player->getName() << endl
		<< "Level: " << player->getLevel() << endl
		<< "Health: " << player->getHealth() << "/" << player->getMaxHealth() << endl
		<< "Attack: " << player->getAttack() << endl;
}

void Game::surroundings(){
	cout << "you are in " << location->getName() << endl;
}

//---------------------------------------------

bool Game::yesOrNo(){
	string cmd;

	while(true){
		cin >> cmd;

		if(cmd == "yes" || cmd == "y"){
			return true;
		}
		else if(cmd == "no" || cmd == "n"){
			return false;
		}

		cout << "please enter yes or no...\n";
	}
}