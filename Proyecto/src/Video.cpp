#include <iostream>
#include "Video.h"
using namespace std; 

Video::Video(int id, string name, int duration, string gender){
    this->id = id; 
    this->name = name; 
    this-> duration = duration; 
    this->gender = gender; 
}

int Video::getId(){
    return id;
} 

string Video::getName(){
    return name; 
} 

int Video::getDuration(){
    return duration;
} 

string Video::getGender(){
    return gender; 
} 

void Video::setRating(int n){
    grades.push_back(n); 
} 

double Video::getRating(){
    double sum = 0; 
    double size = grades.size(); 
    for(int i= 0; i<size; i++){
        sum += grades[i]; 
    }
    rating = sum/size;
    return rating; 
}