#include <iostream>
#include "Employee.h" 
using namespace std;

Employee::Employee(double salary, double tax){
    this->salary = salary; 
    this->tax = tax; 
}

double Employee:: getSalary(){
    return salary;
}

double  Employee::getTax(){
    return tax;
}

void Employee::setSalary(double salary){
    this->salary = salary; 
}

void Employee::setTax(double tax){
    this->tax = tax; 
}

double Employee:: getTaxResult(){
    double s =  this-> salary ; 
    double t = this -> tax; 
    double myTax = s * (t/100); 
    cout << "Employee pays $" << myTax << " of taxes." << endl; 
    return myTax;
}