#pragma once

using namespace std;

#include "Player.h"
#include <iostream>

class Game
{
public:
	Game();
	//Player listOfPlayers();   FIXME
	void addPlayers();
	void removePlayers();
	int nPlayers();
	void print();
private:
	int nplayers;
	//Player* players;			FIXME
};

