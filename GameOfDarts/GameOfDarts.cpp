#include "Game.h"
#include <iostream>

int main()
{
    Game First(3);
    Game Third(6);
    Game Second(Third);

    cout << "\n\nFirst Game\n";
    First.listOfPlayers();
    First.print();

    cout << "\n\nSecond Game - Copy Constructor\n";
    Second.listOfPlayers();
    Second.print();

    cout << "\n\nThird Game\n";
    Third.listOfPlayers();
    Third.print();

    cout << "\n\nCopy - Assignment Operator\n";
    Second = First;
    Second.listOfPlayers();
    Second.print();

    return 0;
}