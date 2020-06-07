#include <iostream>
#include "Video.h"
#include <vector>
#include <string>
using namespace std;
#pragma once

class Platform{
    private: 
        string name; 
        vector<Video> content;
    public: 
        Platform(string name); 
        string getName(); 
        void addContent(Video); 
        vector<Video> getContent(); 
};