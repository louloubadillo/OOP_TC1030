#include <iostream>
#include "Board.h" 
#include <string>
using namespace std;

void Board::markSquare(int i, char m){
    squares[i-1] = m; 
}

void Board::printBoard(){
    cout<< "The board looks like this:" << endl; 
    cout << squares[0] << "|"<< squares[1] << "|"<< squares[2] << "\n"; 
    cout << "______" << "\n"; 
    cout << squares[3] << "|"<< squares[4] << "|"<< squares[5] << "\n"; 
    cout << "______" << "\n"; 
    cout << squares[6] << "|"<< squares[7] << "|"<< squares[8] << "\n"; 
}
