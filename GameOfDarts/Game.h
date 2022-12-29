#pragma once

using namespace std;

#include "Player.h"
#include <iostream>

class Game
{	// Has-A: Player, Score, Ranking
public:
	Game();
	Game(int);
	Game(const Game&);
	Game & operator =(const Game&);
	~Game();
	void printListOfPlayers();   
	void addPlayers();
	void removePlayers(int);
	int nPlayers();
	void print();
private:
	int nplayers;
	Player* players;			
};

