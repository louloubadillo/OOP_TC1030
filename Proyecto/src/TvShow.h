#include <iostream>
//#include "Ratable.h"
//#include "Season.h"
//#include <vector>
//#include <string>
using namespace std;
#pragma once

class TvShow : public Ratable{
    string name;
    static int counter;
    int id; 
    int tvShowRating; 
    vector<Season> allSeasons; 
    int seasonQuantity; 

    public: 
        TvShow(string, int); 
        string getName(); 
        void setName(); 
        int getId(); 
        void setId();
        vector<Season> getAllSeasons(); 
        void addSeason(Season*);
        int getRating(); 
};

int TvShow::counter = 0;