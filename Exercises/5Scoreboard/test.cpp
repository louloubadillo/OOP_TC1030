#include <iostream>
#include"Scoreboard.h"
#include <string>
using namespace std;

int main(){
    Scoreboard* basket = new Scoreboard("Lakers", "Clippers", 120, 80); 
    basket->printScore(); 
    return 0; 
}