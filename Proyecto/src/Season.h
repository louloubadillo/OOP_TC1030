#include <iostream>
#include "Episode.h"
#include "Rateable.h"
#include "Printable.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class Season : public Rateable, public Printable{
    string name; 
    vector<Episode*> episodes; 
    double rating; 

    public: 
        Season(string name);
        string getName(); 
        vector<Episode*> getAllEpisodes(); 
        void addEpisode(Episode* e);
        double getRating();   
        void printInformation(); 
};