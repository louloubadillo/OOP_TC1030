#include <iostream>
#include"Videogame.h"
#include"Player.h"
#include <string>
using namespace std;

int main(){
    Videogame* MarioKart = new Videogame("Mario Kart"); 
    Player* Lulu = new Player("Lulu"); 
    Player* Joaq = new Player("Joaq"); 
    Player* Sergio = new Player("Sergio");
    MarioKart->setPlayer1(Lulu); 
    MarioKart->setPlayer2(Joaq); 
    MarioKart->startGame(); 
    Lulu->setScore(5);  
    Joaq->setScore(8); 
    MarioKart -> endGame(); 
    Videogame* Smash = new Videogame("Smash"); 
    Smash -> setPlayer1(Joaq); 
    Smash -> setPlayer2(Sergio); 
    Smash -> startGame(); 
    Sergio-> setScore(200); 
    Joaq -> setScore(180); 
    Smash-> endGame(); 
    return 0; 
}