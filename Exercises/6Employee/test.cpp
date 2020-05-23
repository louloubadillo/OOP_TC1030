#include <iostream>
#include"Employee.h"
using namespace std;

int main(){
    Employee* juan = new Employee(10000,16);
    juan->getTaxResult();
    return 0; 
}