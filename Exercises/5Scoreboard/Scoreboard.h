#include <iostream>
using namespace std;
#pragma once

class Scoreboard{
    string name1; 
    string name2; 
    int team1; 
    int team2; 

    public: 
        Scoreboard(string s1, string s2, int t1, int t2); 
        ~Scoreboard(); 
        void setName1(string name1); 
        void setName2(string name2);
        void setTeam1(int team1); 
        void setTeam2(int team2); 
        string getName1(); 
        string getName2(); 
        int getTeam1(); 
        int getTeam2(); 
        void printScore(); 

};