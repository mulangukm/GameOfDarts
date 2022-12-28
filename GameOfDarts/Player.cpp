#include "Player.h"

Player::Player() : firstName("NULL"), lastName("NULL"), score(0)
{
}

Player::Player(string f, string l) : firstName(f), lastName(l), score(0)
{
}

void Player::setFirst(string f)
{
	firstName = f;
}

void Player::setLast(string l)
{
	lastName = l;
}

void Player::addScore(int s)
{
	score += s;
}

string Player::getFirstName()
{
	return firstName;
}

string Player::getLastName()
{
	return lastName;
}

int Player::getScore()
{
	return score;
}

void Player::print()
{
	cout << getFirstName() << " " << getLastName() << " has " << getScore() << " points!" << endl;
}