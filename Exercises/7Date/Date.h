#include <iostream>
#include <string>
using namespace std;
#pragma once

class Date{
    string wMonths[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    int day;
    int month;
    int year;
    int format;

    public: 
        Date(int d, int m, int y, int f); 
        ~Date(); 
        int getDay(); 
        int getMonth(); 
        int getYear(); 
        void printMenu(); 
        void getCurrentDate(int f);
};