#include "Game.h"

Game::Game() : nplayers(0)
{
}

void Game::addPlayers()
{
	if (nplayers >= 0)
		nplayers++;
}

void Game::removePlayers()
{
	if (nplayers > 0)
		nplayers--;
}

int Game::nPlayers()
{
	return nplayers;
}

void Game::print()
{
	cout << "There are " << nPlayers() << " players in the game\n";
}