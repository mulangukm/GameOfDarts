#include "Game.h"
#include <iostream>

int main()
{
    Game First(3);
    Game Third(6);
    Game Second(Third);

    cout << "\n\nFirst Game\n";
    First.printListOfPlayers();
    First.print();

    cout << "\n\nSecond Game - Copy Constructor\n";
    Second.printListOfPlayers();
    Second.print();

    cout << "\n\nThird Game\n";
    Third.printListOfPlayers();
    Third.print();

    cout << "\n\nCopy - Assignment Operator\n";
    Second = First;
    Second.printListOfPlayers();
    Second.print();

    cout << "\n\nWho should we remove?\n";
    First.removePlayers(1);
    Second.removePlayers(2);
    Third.removePlayers(3);
    return 0;
}