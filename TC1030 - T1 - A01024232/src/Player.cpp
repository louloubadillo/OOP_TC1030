#include <iostream>
#include "Player.h" 
using namespace std; 

Player::Player(int n, int a){
    this->id = n; 
    this->actualSquare = a; 
} 

int Player::getId(){
    return id; 
}

int Player::getActualSquare(){
    return actualSquare; 
} 

void Player::setActualSquare(int s){
    this->actualSquare = s; 
} 