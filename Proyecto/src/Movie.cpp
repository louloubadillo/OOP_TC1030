#include <iostream>
#include "Movie.h" 
#include <string>
using namespace std;

Movie::Movie(string name, int duration, string gender):Video(name, duration, gender){

}
void Movie::printInformation(){
    cout << "Movie: " << name << " Rating: " << getRating() << endl; 
}
