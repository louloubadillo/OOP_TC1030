#include <iostream>
#include "Date.h" 
using namespace std;

Date::Date(int day, int month, int year, int format){
    this->day = day; 
    this->month = month; 
    this->year = year; 
    this->format = format; 
}

int Date::getDay(){
    return day; 
} 

int Date::getMonth(){
    return month; 
}

int Date::getYear(){
    return year;
}

void Date::printMenu(){
    cout<< "0- DD-mon" << endl; 
    cout<< "1- DD-month-YY" << endl; 
    cout<< "2- DD/MM/YYYY" << endl; 
    cout<< "3 - DD/MM" << endl; 
}


void Date::getCurrentDate(int f){
    int d = getDay(); 
    int m = getMonth();
    int y = getYear();

    switch(f){
        case 0:
             if(d<10){
                 cout << "0"<<d<<"-"<<wMonths[m-1].substr(0,3)<< endl;
             }
             else{
                 cout <<d<< "-"<<wMonths[m-1].substr(0,3)<< endl;
             }
             break; 
        case 1:
            if(d<10){
                 cout << "0"<<d<< "-"<<wMonths[m-1].substr(0,3)<< "-"<< y%100 <<endl; 
             }
             else{
                 cout <<d<< "-"<<wMonths[m-1].substr(0,3)<< "-"<< y%100 <<endl; 
             }
             break; 
        case 2:
            if(d<10 && m<10){
                 cout << "0"<<d<<"/"<<"0"<<m<<"/"<<y<<endl;
             }
             else if (d<10 && m>10){
                 cout << "0"<<d<<"/"<<m<<"/"<<y<<endl;
             }
             else if (d>10 && m<10){
                 cout <<d<<"/"<<"0"<<m<<"/"<<y<<endl;
             }
             else{
                 cout <<d<<"/"<<m<<"/"<<y<<endl;
             }
             break;
        case 3:
            if(d<10 && m<10){
                 cout << "0"<<d<<"/"<<"0"<<m<<endl;
             }
             else if (d<10 && m>10){
                 cout << "0"<<d<<"/"<<m<<endl;
             }
             else if (d>10 && m<10){
                 cout <<d<<"/"<<"0"<<m<<endl;
             }
             else{
                 cout <<d<<"/"<<m<<endl;
             }
             break;
        default: 
            if(d<10){
                 cout << "0"<<d<<"-"<<wMonths[m-1].substr(0,3)<< endl;
             }
            else{
                 cout <<d<< "-"<<wMonths[m-1].substr(0,3)<< endl;
            } 
            break; 

    }
}