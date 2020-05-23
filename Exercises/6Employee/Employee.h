#include <iostream>
using namespace std;
#pragma once

class Employee{

    double salary; 
    double tax; 

    public: 
        Employee(double s, double t); 
        double getSalary(); 
        double getTax(); 
        void setSalary(double salary); 
        void setTax(double tax);
        double getTaxResult(); 
};