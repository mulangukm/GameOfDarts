#include "Game.h"
#include <iostream>

int main()
{
    // Test Game.h/Game.cpp
    Game DartGame;

    DartGame.removePlayers();
    DartGame.addPlayers();
    DartGame.addPlayers();
    DartGame.addPlayers();
    DartGame.addPlayers();
    DartGame.removePlayers();
    DartGame.addPlayers();
    DartGame.addPlayers();
    DartGame.addPlayers();
    DartGame.removePlayers();
    DartGame.removePlayers();

    DartGame.print();

    // Test Player.h/Player.cpp
    Player player1;

    Player player2("Mulangu", "Mundemba");

    player1.setLast("People");
    player1.setScore(4);
    player1.getScore();

    player2.setFirst("Kanye");
    player2.setScore(2);
    player2.getScore();

    player1.print();
    player2.print();
}