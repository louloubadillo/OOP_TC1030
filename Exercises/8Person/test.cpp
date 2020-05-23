#include <iostream>
#include"Person.h"
#include <string>
using namespace std;

int main(){
    Person* sara = new Person("Sara", 97, nullptr); 
    Person* leticia = new Person("Leticia", 28, sara); 
    Person* laura = new Person("Laura", 53, leticia); 
    Person* soledad = new Person("Soledad", 34, laura); 
    Person* camila = new Person("Camila", 18, soledad); 
    
    cout << camila->getNumOfAntecessors()<< endl; 
    camila->printAntecessors(); 
    camila->printOldestAntecessor();
    camila->printYoungestAntecessor(); 
    return 0; 
}
