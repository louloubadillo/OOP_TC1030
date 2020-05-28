#include <iostream>
using namespace std;
#pragma once

class Board{
    char squares[30]; 

    public: 
        Board(); 
        //~Board(); 
        char getType(int i); 
        int getMovement(int i); 
        void printBoard(); 
};

