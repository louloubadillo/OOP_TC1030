#include <iostream>
using namespace std;
#pragma once

class Player{
    string name; 
    bool playing;  
    int score; 
    int lives; 
    
    public: 
        Player() = default; 
        Player(string name); 
        ~Player(); 
        string getName(); 
        bool getPlaying(); 
        int getScore(); 
        int getLives(); 
        void setName(string name); 
        void setPlaying(bool playing); 
        void setScore(int score); 
        void setLives(int lives);
        void givePoints(int points); 
        void loseLife();
};