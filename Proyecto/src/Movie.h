#include <iostream>
#include "Video.h"
#include "Ratable.h"
using namespace std;
#pragma once

class Movie : public Video, public Ratable{
    public: 
        Movie();
        int getRating(); 

}; 