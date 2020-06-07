#include <iostream>
#include "Video.h"
#include "Ratable.h"
using namespace std;
#pragma once

class Episode : public Video, public Ratable{
    int id; 
    string name; 
    int episodeRating; 

    public: 
        Episode(int id, string name, int episodeRating);
        int getId(); 
        string getName(); 
        int getRating(); 
}; 