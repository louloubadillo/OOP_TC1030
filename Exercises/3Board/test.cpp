#include <iostream>
#include"Board.h"
#include <string>
using namespace std;

int main(){
    cout << "Tic Tac Toe Game" << endl; 
    Board* tic = new Board(); 
    tic->printBoard(); 
    tic->markSquare(1,'X'); 
    tic->printBoard(); 
    return 0; 
}