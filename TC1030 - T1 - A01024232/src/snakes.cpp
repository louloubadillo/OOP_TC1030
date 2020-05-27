//main
#include <iostream>
#include "Board.h"
#include "Player.h"
using namespace std;
class MyGame{
    public: 
        void start(){
            cout << "started" << endl; 
        }
};

int main(){
    MyGame g; 
    g.start(); 
    return 0; 
}