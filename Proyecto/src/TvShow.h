#include <iostream>
#include "Ratable.h"
#include "Season.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class TvShow : public Ratable{
    string name;
    int id; 
    int tvShowRating; 
    vector<Season> allSeasons; 
    int seasonQuantity; 

    public: 
        TvShow(); 
        string getName(); 
        int getId(); 
        vector<Season> getAllSeasons(); 
        void addSeason(Season*);
        int getRating(); 
};