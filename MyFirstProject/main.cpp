#include <iostream>
#include "myfirstclass.h"
#include "mysecondclass.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    MyFirstClass Obj1;
    Obj1.disp();
    MySecondClass Obj2;
    Obj2.disp(15);
    return 0;
}
