#include <iostream>
#include "Episode.h"
#include <string>
using namespace std; 

Episode::Episode(int id, string name, int duration, string gender):Video(id, name, duration, gender){

}
void Episode::printInformation(){
    cout << "Episode: " << name << " Rating: " << getRating() << endl; 
}