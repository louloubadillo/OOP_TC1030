#include <iostream>
#include "TvShow.h" 
using namespace std; 

TvShow::TvShow(string name, int id){
    this->name = name; 
    this->id = counter+1; 
    counter++;
} 
string TvShow::getName(){
    return name; 
} 
int TvShow::getId(){
    return id; 
} 
vector<Season> TvShow::getAllSeasons(){
    return allSeasons;
} 

void TvShow::addSeason(Season* s){
    allSeasons.push_back(*s); 
}

int TvShow::getRating(){
    int totalRating = 0; 
    for(int i= 0; i<allSeasons.size(); i++){
        totalRating = totalRating + allSeasons[i].getRating();
    }
    return totalRating;
}