#include <iostream>
#include "Player.h" 
using namespace std; 

Player::Player(int n){
    this->id = n; 
    this->actualSquare = 1; 
} 

int Player::getId(){
    return id; 
}

int Player::getActualSquare(){
    return actualSquare; 
} 

void Player::setActualSquare(int actualSquare){
    this->actualSquare = actualSquare; 
} 