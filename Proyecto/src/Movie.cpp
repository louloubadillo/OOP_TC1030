#include <iostream>
#include "Movie.h" 
#include <string>
using namespace std;

Movie::Movie(int id, string name, int duration, string gender):Video(id, name, duration, gender){

}
void Movie::printInformation(){
    cout << "Movie: " << name << " Rating: " << getRating() << endl; 
}
