#define GAME_H

#include "player.h"
#include "location.h"

class Game{
public:
	//constructors
	Game();
	//destructor
	~Game();
	//doing stuff
	void run();
private:
	//functions
	//displaying information
	void help();
	void playerStats();
	void surroundings();
	//
	bool yesOrNo();//asks yes or no
	//variables
	Player* player;
	Location* location;
};