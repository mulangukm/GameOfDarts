#pragma once

using namespace std;

#include <string>
#include <iostream>

class Player
{
public:
	Player();
	Player(string, string);
	void setFirst(string);
	void setLast(string);
	void addScore(int);
	string getFirstName();
	string getLastName();
	int getScore();
	void print();
private:
	string firstName;
	string lastName;
	int score;
};

