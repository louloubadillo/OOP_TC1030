#include <iostream>
#include "Scoreboard.h" 
#include <string>
using namespace std; 

Scoreboard::Scoreboard(string name1, string name2, int team1, int team2){
    this->name1 = name1; 
    this->name2 = name2; 
    this->team1 = team1; 
    this->team2 = team2; 
}
string Scoreboard::getName1(){
    return name1; 
}

string Scoreboard::getName2(){
    return name2; 
}

int Scoreboard::getTeam1(){
    return team1; 
}

int Scoreboard::getTeam2(){
    return team2; 
}

void Scoreboard::setName1(string name1){
    this->name1 = name1; 
}

void Scoreboard::setName2(string name2){
    this->name2 = name2; 
}

void Scoreboard::setTeam1(int team1){
    this->team1 = team1; 
}

void Scoreboard::setTeam2(int team2){
    this->team2 = team2; 
}

void Scoreboard::printScore(){
    string n1 = getName1(); 
    string n2 = getName2(); 
    int t1 = getTeam1(); 
    int t2 = getTeam2(); 
    cout << n1 << " - " << t1 << endl; 
    cout << n2 << " - " << t2 << endl; 
}