#pragma once

using namespace std;

#include "Player.h"
#include <iostream>

class Game
{	// Has-A: Player, Score, Ranking
public:
	Game();
	Game(int);
	~Game();
	void listOfPlayers();   
	void addPlayers();
	void removePlayers();
	int nPlayers();
	void print();
private:
	int nplayers;
	Player* players;			
};

