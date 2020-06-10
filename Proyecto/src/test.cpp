#include <iostream>
#include <string>
#include "Movie.h"
#include "Episode.h"
using namespace std;

int main(){

    Video example(0,"HP",90, "Drama"); 
    cout << example.getGender() << endl;
    example.setRating(5);
    example.setRating(3);
    example.setRating(3);
    cout << example.getRating() << endl; 
    Movie hp(1,"HP",100,"Fantasy");
    hp.setRating(2);
    hp.setRating(5); 
    cout << hp.getRating() << endl; 
    hp.printInformation(); 
    Episode one(4,"Hello",20,"Terror");
    one.setRating(4);
    one.setRating(2); 
    one.printInformation(); 
    return 0; 
}