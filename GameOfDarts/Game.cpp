#include "Game.h"

// Default constructor to initialize all variables and create a new dynamic array of Object Player
Game::Game() : nplayers(0)
{
	players = new Player[nplayers];
}

// Overloaded constructor to manually set the number of players and the names of each player
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

// Copy constructor
Game::Game(const Game& RHS)
{
	nplayers = RHS.nplayers;
	players = new Player[nplayers];
	for (int i = 0; i < nplayers; i++)
		players[i] = RHS.players[i];
}

// Copy assignment operator
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

// Destructor
Game::~Game()
{
	if (players != nullptr)
		delete[] players;
}

// Print the list of players
void Game::printListOfPlayers()
{
	for (int i = 0; i < nplayers; i++)
		cout << i + 1 << ") " << this->players[i].getFirstName() << " " << this->players[i].getLastName() << endl;
	cout << endl;
}

// Add a player to the list of players FIXME
void Game::addPlayers()
{
	if (nplayers >= 0)
		nplayers++;
}

// Remove a player at position pos FIXME
void Game::removePlayers(int pos)
{
	if (pos > nplayers)
		return;

	cout << "Remove " << players[pos - 1].getFirstName() << " " << players[pos - 1].getLastName() << endl;

}

int Game::nPlayers()
{
	return nplayers;
}

void Game::print()
{
	cout << "There are " << nPlayers() << " players in the game\n\n";
}