#include <iostream>
using namespace std;
class Student{
public:
    int id ;
    double gpa;
    Student(int a, double b){
        id = a;
        gpa = b;
    }
    void disp(){
        cout << id << "      " << gpa <<endl;
    }
} ;
int main(){
    Student Trisha(01,5.02);
    Trisha.disp();
}
