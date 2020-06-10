#include <iostream>
#include "Video.h"
#include "Rateable.h"
#include "Printable.h"
using namespace std;
#pragma once

class Movie : public Video, public Printable{
    public: 
        Movie(int id, string name, int duration, string gender);
        void printInformation(); 

}; 