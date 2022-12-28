#include "Game.h"

Game::Game() : nplayers(0)
{
	players = new Player[nplayers];
}

Game::Game(int _nplayers) : nplayers(_nplayers)
{
	string f = "", l = "";
	players = new Player[nplayers];
	for (int i = 0; i < nplayers; i++)
	{
		cout << "Enter player " << i + 1 << " first name and last name: " << endl;
		cin >> f >> l;
		players[i] = Player(f, l);
	}
}

Game::Game(const Game& RHS)
{
	nplayers = RHS.nplayers;
	players = new Player[nplayers];
	for (int i = 0; i < nplayers; i++)
		players[i] = RHS.players[i];
}

Game & Game::operator =(const Game& RHS)
{
	if (this != &RHS)
	{
		if (players != nullptr)
			delete[] players;

		nplayers = RHS.nplayers;
		players = new Player[nplayers];
		for (int i = 0; i < nplayers; i++)
			players[i] = RHS.players[i];
	}
	return *this;
}

Game::~Game()
{
	if (players != nullptr)
		delete[] players;
}

void Game::listOfPlayers()
{
	for (int i = 0; i < nplayers; i++)
		cout << i + 1 << ") " << this->players[i].getFirstName() << " " << this->players[i].getLastName() << endl;
	cout << endl;
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
	cout << "There are " << nPlayers() << " players in the game\n\n";
}