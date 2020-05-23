#include <iostream>
using namespace std;
#pragma once

class Board{
    int squares[9] = {1,2,3,4,5,6,7,8,9}; 

    public:  
        Board() = default;
        ~Board();  
        void markSquare(); 
};