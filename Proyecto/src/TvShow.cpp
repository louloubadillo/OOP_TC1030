#include <iostream>
#include "TvShow.h" 
using namespace std; 

TvShow::TvShow(string name){
    this->name = name;
} 
string TvShow::getName(){
    return name; 
} 
vector<Season*> TvShow::getAllSeasons(){
    return seasons;
} 
void TvShow::addSeason(Season* s){
    seasons.push_back(s);
}
double TvShow::getRating(){
    double sum = 0; 
    double size = seasons.size(); 
    for(int i= 0; i<size; i++){
        sum += seasons[i]->getRating(); 
    }
    rating = sum/size;
    return rating;
} 
void TvShow::printInformation(){
    cout << "TvShow: " << name << " Rating: " << getRating() << endl;
} 