#include <iostream>
#include <vector> 
#include "Player.h"
using namespace std;
#pragma once

class Videogame{

    private: 
        string name;   
        Player* player1; 
        Player* player2; 

    public: 
        Videogame() = default; 
        Videogame(string name); 
        ~Videogame();
        string getName(); 
        Player* getPlayer1(); 
        Player* getPlayer2(); 
        void setName(string name); 
        void setPlayer1(Player* p1); 
        void setPlayer2(Player* p2); 
        void startGame(); 
        Player* getWinner(); 
        void endGame(); 
};