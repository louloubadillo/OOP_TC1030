#include <iostream>
#include"MyGame.h"
using namespace std;

int main(){
    srand(time(0));
    MyGame g; 
    Player p1(1,1); 
    Player p2(2,1);
    g.setPlayers(p1, p2);
    g.start();
    return 0; 
}