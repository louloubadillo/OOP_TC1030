#include <iostream>
#include "Episode.h"
#include "Ratable.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class Season : public Ratable{
    int id; 
    vector<Episode> episodes; 
    int episodeQuantity; 
    int seasonRating; 

    public: 
        Season(int id,vector<Episode> episodes, int episodeQuantity, int seasonRating);
        int getId(); 
        vector<Episode> getAllEpisodes(); 
        int getEpisodeQuantity(); 
        void addEpisode(Episode e);
        int getRating();   
};