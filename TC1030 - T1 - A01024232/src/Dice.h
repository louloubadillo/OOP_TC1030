#include <iostream>
#include <cstdio>     
#include <cstdlib>
#include <ctime>
using namespace std;
#pragma once

class Dice{

    int faces; 

    public: 
        Dice();  
        Dice(int faces);
        ~Dice();  
        int getFaces(); 
        void setFaces(int faces);
        int roll(); 
};