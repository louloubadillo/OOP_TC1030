#include <iostream>
using namespace std;
#pragma once

class Player{
    int id; 
    int actualSquare; 

    public: 
        int totalPlayers = 1; 
        Player(int n); 
        int getId(); 
        int getActualSquare(); 
        void setActualSquare(int s); 
};