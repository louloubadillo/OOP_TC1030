#include <iostream>
#include <cstdio>     
#include <cstdlib>
#include <ctime>
using namespace std;
#pragma once

class Board{
    char squares[30]; 

    public: 
        Board(); 
        ~Board(); 
        int getId(); 
        int getMovement(int i); 
        void printBoard(); 
};

