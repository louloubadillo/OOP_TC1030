#include <iostream>
#include <string>
#include "MyGame.h" 
using namespace std;

MyGame::MyGame(){
    maxTurns = 50; 
    turn = 1; 
}
void MyGame::start(){
    cout << "Press C to continue next turn, or E to end the game" << endl; 
    menu();

}
void MyGame::setMaxTurns(int maxTurns){
    this->maxTurns = maxTurns; 
} 
int MyGame::getTurn(){
    return turn; 
}
void MyGame::setTurn(int turn){
    this->turn = turn; 
} 
void MyGame::setPlayers(Player p1, Player p2){
    players[0] = p1; 
    players[1] = p2; 
}

void MyGame::menu(){ 
    char answer;
    cin >> answer; 
    answer = toupper(answer);
    switch (answer){
        case 'C': 
            newTurn();
            break; 
        case 'E':
            cout << "--GAME OVER--" << endl;
            cout << "Thanks for playing!!!" << endl; 
            exit(0);
            break; 
        default:
            cout << "Invalid option, please press C to continue next turn or E to end the game" << endl; 
            menu()
            break; 
    }
}

void MyGame::newTurn(){ 
    int turn = getTurn(); 
    if (turn % 2 == 0){
        actualPlayer = players[1];
    }else{
        actualPlayer = players[0];
    }
    int rolled = dice.roll(); 
    int newSquare = actualPlayer.getActualSquare() + rolled; 
    int move = board.getMovement((newSquare-1));
    char type = board.getType((newSquare-1));
    int finalSquare = newSquare + move; 
    if(finalSquare >= 30){
        finalSquare = 30;
        type = 'N';  
        cout << turn <<" "<< actualPlayer.getId()<<" "<<actualPlayer.getActualSquare()<<" "<<rolled<<" "<<type<<" "<<finalSquare<< endl; 
        cout << "--GAME OVER--" << endl;
        cout << "Player " <<actualPlayer.getId() << " is the winner!" << endl; 
        exit(0);
    }
    cout << turn <<" "<< actualPlayer.getId()<<" "<<actualPlayer.getActualSquare()<<" "<<rolled<<" "<<type<<" "<<finalSquare<< endl; 
    if (turn % 2 == 0){
        players[1].setActualSquare(finalSquare);
    }else{
         players[0].setActualSquare(finalSquare);
    }
    setTurn(turn+1);

    if(getTurn() > maxTurns){
        cout << "--GAME OVER--" << endl;
        cout << "The maximum number of turns has been reached..." << endl;
        exit(0);
    }else{
        menu();
    }
}
