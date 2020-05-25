//main
#include <iostream>
#include"Board.h"
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