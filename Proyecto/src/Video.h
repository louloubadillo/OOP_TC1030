#include <iostream>
using namespace std;
#pragma once

class Video{

    protected: 
        int id; 
        string name; 
        int duration; 
        string gender; 
        int rating; 

    public: 
        Video(int id, string name, int duration, string gender, int rating);
        int getId(); 
        string getName(); 
        int getDuration(); 
        string getGender(); 
        int getRating(); 
};