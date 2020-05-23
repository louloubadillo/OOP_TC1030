#include <iostream>
#include "Player.h" 
#include <string>
using namespace std;

Player::Player(string name){
    this->name = name; 
}

Player::~Player(){
}

string Player::getName(){
    return name;
}

bool Player::getPlaying(){
    return playing;
}

int Player::getScore(){
    return score; 
}

int Player::getLives(){
    return lives; 
}

void Player::setName(string name){
    this->name = name;
}

void Player::setPlaying(bool playing){
    this->playing = playing;
}

void Player::setScore(int score){
    this->score = score;
}

void Player::setLives(int lives){
    this->lives = lives; 
}

void Player::givePoints(int points){
    this->score += points; 
} 

void Player::loseLife(){
    this->lives--; 
}