#include "mysecondclass.h"
#include <iostream>
using namespace std;

MySecondClass::MySecondClass()
{

}
void MySecondClass::disp(int roll){
    cout<< roll;
}
MySecondClass::~MySecondClass(){
    cout << " Destuctor is called";
}
