#include <iostream>
#include "Season.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class TvShow{
    string name;
    int id; 
    int tvShowRating; 
    vector<Season> allSeasons; 
    int seasonQuantity; 

    public: 
        TvShow(); 
        string getName(); 
        int getId(); 
        vector<Season> getallSeasons(); 
        void addSeason(Season);
        int getTvShowRating(); 

};