#include <iostream>
#include "Board.h" 
using namespace std; 

Board::Board(){
    for(int i= 0; i<30; i++){
        squares[i] = 'N'; 
    }
    squares[8] = 'S'; 
    squares[20] = 'S'; 
    squares[26] = 'S'; 
    squares[16] = 'L'; 
    squares[22] = 'L'; 
    squares[25] = 'L'; 
    
}


int Board::getMovement(int i){
    if(squares[i] == 'S'){
        return -3;
    }
    else if (squares[i] == 'L'){
        return 3;
    }
    else{
        return 0; 
    }
}

char Board::getType(int i){
    return squares[i]; 
}

void Board::printBoard(){
    for(int i= 0; i<30; i++){
        cout << squares[i] << endl; 
    }
}