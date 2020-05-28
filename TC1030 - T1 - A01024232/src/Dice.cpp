#include <iostream>
#include "Dice.h" 
using namespace std; 

Dice::Dice(){
    this->faces = 6; 
}

Dice::Dice(int faces){
    this->faces = faces;
}

Dice::~Dice(){
}

int Dice::getFaces(){
    return faces; 
}

void Dice::setFaces(int faces){
    this->faces = faces; 
}

int Dice::roll(){
    int number = rand() % (faces - 1 + 1) + 1; 
    return number; 
}

