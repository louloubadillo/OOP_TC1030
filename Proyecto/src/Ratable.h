#include <iostream>
using namespace std;
#pragma once

class Ratable{
    public: 
        virtual int getRating() = 0; // Función Virtual Pura debido a que no tiene sentido que regrese nada desde esta clase, la tengo que implementar en cada una de las sub-clases que la usen.
};