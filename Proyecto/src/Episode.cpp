#include <iostream>
#include "Episode.h"
#include <string>
using namespace std; 

Episode::Episode(string name, int duration, string gender):Video(name, duration, gender){

}
void Episode::printInformation(){
    cout << "Episode: " << name << " Rating: " << getRating() << endl; 
}