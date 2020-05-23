#include <iostream>
#include"Videogame.h"
#include"Player.h"
#include <string>
using namespace std;

int main(){
    Videogame* MarioKart = new Videogame("Mario Kart"); 
    Player* Lulu = new Player("Lulu"); 
    Player* Joaq = new Player("Joaq"); 
    MarioKart->setPlayer1(Lulu); 
    MarioKart->setPlayer2(Joaq); 
    MarioKart->startGame(); 
    Lulu->setScore(5);  
    Joaq->setScore(8); 
    MarioKart -> endGame(); 
    return 0; 
}