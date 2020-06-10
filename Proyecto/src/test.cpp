#include <iostream>
#include <string>
#include "Movie.h"
#include "TvShow.h"
using namespace std;

int main(){
    //Create content
    Movie a("Seven Souls", 130, "Drama"); 
    Movie b("Harry Potter",120,"Fiction");
    TvShow L("Lucifer"); 
    Season L1("Lucifer 1"); 
    Season L2("Lucifer 2"); 
    Episode LS1E1("Pilot",40,"Comedy"); 
    Episode LS1E2("LA",40,"Comedy"); 
    Episode LS1E3("Cain",40,"Comedy"); 
    Episode LS2E1("Welcome Back", 42, "Comedy");
    //Add to TvShow
    L1.addEpisode(&LS1E1); 
    L1.addEpisode(&LS1E2); 
    L1.addEpisode(&LS1E3); 
    L2.addEpisode(&LS2E1); 
    L.addSeason(&L1); 
    L.addSeason(&L2);
    //Add Ratings
    a.setRating(3); 
    a.setRating(2); 
    a.setRating(4); 
    a.setRating(2);
    b.setRating(4); 
    b.setRating(3); 
    LS1E1.setRating(5); 
    LS1E2.setRating(3); 
    LS1E3.setRating(4); 
    LS2E1.setRating(5);
    //Print Info
    a.printInformation(); 
    b.printInformation(); 
    L.printInformation(); 
    L1.printInformation(); 
    L2.printInformation(); 
    LS1E1.printInformation(); 
    LS1E2.printInformation(); 

    return 0; 
}