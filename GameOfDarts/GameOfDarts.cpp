#include "Game.h"
#include <iostream>

int main()
{
    Game First(3);
    Game Second;
    Game Third(6);

    First.listOfPlayers();
    First.print();
    Second.listOfPlayers();
    Second.print();
    Third.listOfPlayers();
    Third.print();

    return 0;
}