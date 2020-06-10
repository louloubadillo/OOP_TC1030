#include <iostream>
#include "Season.h"
#include <string>
using namespace std; 

Season::Season(string name){
    this->name = name; 
}

string Season::getName(){
    return name; 
} 

vector<Episode*> Season::getAllEpisodes(){
    return episodes; 
} 

void Season::addEpisode(Episode* e){
    episodes.push_back(e); 
}

double Season::getRating(){
    double sum = 0; 
    double size = episodes.size(); 
    for(int i= 0; i<size; i++){
        sum += episodes[i]->getRating(); 
    }
    rating = sum/size;
    return rating;
}
void Season::printInformation(){
    cout << "Season: " << name << " Rating: " << getRating() << endl;
} 