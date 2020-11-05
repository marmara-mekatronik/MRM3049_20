#include <iostream>
using namespace  std;

int main() {

    int x = 10;
    int& ref = x;

    int *ptr = &x;
    int *ptr2 = &ref;

    ref = 20;
    cout << "x= " << x << endl ;

    *ptr = 15;
    cout << "ref= " << ref ;


    return 0;
}
