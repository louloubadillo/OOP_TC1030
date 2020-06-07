#include <iostream>
#include "Video.h"
using namespace std;
#pragma once

class Episode : public Video{
    int id; 
    string name; 
    int episodeRating; 

    public: 
        Episode(int id, string name, int episodeRating);
        int getId(); 
        string getName(); 
        int getEpisodeRating(); 
}; 