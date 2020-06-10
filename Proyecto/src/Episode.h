#include <iostream>
#include "Video.h"
#include "Rateable.h"
#include "Printable.h"
using namespace std;
#pragma once

class Episode : public Video, public Printable{

    public: 
        Episode(int id, string name, int duration, string gender);
        void printInformation(); 
}; 