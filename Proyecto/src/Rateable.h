#include <iostream>
using namespace std;
#pragma once

class Rateable{
    public: 
        virtual double getRating() = 0; // Función Virtual Pura debido a que no tiene sentido que regrese nada desde esta clase, la tengo que implementar en cada una de las sub-clases que la usen.
};