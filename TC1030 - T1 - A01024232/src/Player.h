#include <iostream>
using namespace std;
#pragma once

class Player{
    int id; 
    int actualSquare; 

    public: 
        Player() = default; 
        Player(int n); 
        int getId(); 
        int getActualSquare(); 
        void setActualSquare(int s); 
};