#include <iostream>
using namespace std;

class FirstClass{
    public :
    int id;
    double gpa;
    void display(){
        cout << id << "       " << gpa<<endl;
    }
};
int main(){
    FirstClass Tushar, Trisha;
    Tushar.id = 01;
    Tushar.gpa = 4.50;
    Tushar.display();

    Trisha.id = 02;
    Trisha.gpa = 4.20;
    Trisha.display();
}
