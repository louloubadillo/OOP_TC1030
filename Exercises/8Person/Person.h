#include <iostream>
using namespace std;
#pragma once 

class Person{
    string name;
    int age; 
    Person *mother;  //prev Person
    Person *daughter; //next Person

    public: 
        Person() = default; 
        Person(string n, int a, Person* mother); 
        string getName(); 
        int getAge(); 
        Person* getMother(); 
        int getNumOfAntecessors(); 
        void printAntecessors(); 
        void printOldestAntecessor(); 
        void printYoungestAntecessor(); 


};

