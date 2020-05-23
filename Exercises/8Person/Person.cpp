#include <iostream>
#include "Person.h" 
#include <string>
using namespace std;

Person::Person(string name, int age, Person* mother){
    this->name= name; 
    this->age = age;
    this->mother = mother; 
}

string Person::getName(){
    return name; 
} 

int Person::getAge(){
    return age; 
} 

Person* Person::getMother(){
    return mother; 
} 

int Person::getNumOfAntecessors(){
    Person* last = getMother(); 
    int counter = 0; 
    while(last != NULL){
        last = last->mother; 
        counter++; 
    }
    delete last; 
    return counter; 
} 

void Person::printAntecessors(){
    Person* last = getMother();  
    int counter = getNumOfAntecessors(); 
    for (int i = 0; i<counter; i++){
        cout << last->name <<": "<<last->age<<endl; 
        last = last->getMother(); 
    }
    delete last; 
} 

void Person::printOldestAntecessor(){
    Person* last = getMother(); 
    int counter = getNumOfAntecessors(); 
    Person* oldest = getMother();    
    for(int i=0; i<counter; i++){
        if(oldest->age < last->age){
            oldest = last; 
        }
        last = last->mother; 
    }
    cout << "The oldest antecessor is: " << oldest->name << endl; 
    delete last; 
    delete oldest; 
}

void Person::printYoungestAntecessor(){
    Person* last = getMother(); 
    int counter = getNumOfAntecessors(); 
    Person* youngest = getMother();    
    for(int i=0; i<counter; i++){
        if(youngest->age > last->age){
            youngest = last; 
        }
        last = last->mother; 
    }
    cout << "The youngest antecessor is: " << youngest->name << endl; 
    delete last; 
    delete youngest;
}