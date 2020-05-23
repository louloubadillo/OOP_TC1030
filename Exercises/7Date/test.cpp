#include <iostream>
#include"Date.h"
using namespace std;

int main(){
    Date* cumple = new Date(9,12,1999,0);
    cumple->getCurrentDate(0);
    cumple->getCurrentDate(1);
    cumple->getCurrentDate(2);
    cumple->getCurrentDate(3);
    Date* sanVal = new Date(14,2,2019,0); 
    sanVal->getCurrentDate(0);
    sanVal->getCurrentDate(1);
    sanVal->getCurrentDate(2);
    sanVal->getCurrentDate(3);
    return 0;
}