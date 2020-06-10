#include <iostream>
#include <vector>
#include "Rateable.h"
using namespace std;
#pragma once

class Video: public Rateable{

    protected: 
        int id; 
        string name; 
        int duration; 
        string gender; 
        double rating; 
        vector <int> grades; 
        static int counter; //como hacerle para que se ponga autom el id

    public: 
        Video(string name, int duration, string gender);
        int getId(); 
        string getName(); 
        int getDuration(); 
        string getGender(); 
        void setRating(int n); 
        double getRating(); 
};
