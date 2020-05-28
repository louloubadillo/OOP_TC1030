#include <iostream>
#include "Board.h"
#include "Dice.h"
#include "Player.h"
#include <stdlib.h>
using namespace std;
#pragma once
class MyGame{
    int maxTurns; 
    int turn;
    Player players[2];
    Player actualPlayer; 
    Dice dice; 
    Board board; 

    public: 
        MyGame(); 
        void start();
        void setMaxTurns(int MaxTurns); 
        int getTurn(); 
        void setTurn(int turn); 
        void setPlayers(Player p1, Player p2); 
        void menu(); 
        void newTurn(); 
};