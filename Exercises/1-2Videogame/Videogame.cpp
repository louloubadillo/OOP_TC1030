#include <iostream>
#include "Videogame.h"
#include <string>
using namespace std;

Videogame::Videogame(string name){
    this->name = name; 
}

Videogame::~Videogame(){
}

string Videogame::getName(){
    return name;
}

Player* Videogame::getPlayer1(){
    return player1; 
}

Player* Videogame::getPlayer2(){
    return player2; 
}

void Videogame::setName(string name){
    this->name = name;
}

void Videogame::setPlayer1(Player* player1){
    this->player1 = player1;
}

void Videogame::setPlayer2(Player* player2){
    this->player2 = player2;
}

void Videogame::startGame(){
    cout << "Game starts" << endl; 
    player1->setScore(0); 
    player2->setScore(0); 
    player1->setLives(3); 
    player2->setLives(3);
    player1->setPlaying(true); 
    player2->setPlaying(true); 
}

Player* Videogame::getWinner(){
    if (player1->getScore() > player2->getScore()){
        cout << player1->getName() << " won!" << endl;
        return player1;
    }
    cout << player2->getName() << " won!" << endl;
    return player2; 
}
void Videogame::endGame(){
    cout << "Game Over" << endl; 
    getWinner();
    player1->setPlaying(false); 
    player2->setPlaying(false);
}



