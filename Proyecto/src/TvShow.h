#include <iostream>
#include "Rateable.h"
#include "Printable.h"
#include "Season.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class TvShow: public Rateable, public Printable{
    string name;
    vector<Season*> seasons; 
    double rating;

    public: 
        TvShow(string name); 
        string getName(); 
        vector<Season*> getAllSeasons(); 
        void addSeason(Season*);
        double getRating(); 
        void printInformation(); 
};

