#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int& ref = x;

    int* ptr = &x;
    int* ptr2 = &ref;
    ref = 20;

    cout << "x= " << x << endl;
    x = 30;

    cout << "ref= " << ref << endl;

    cout << "ptr=" << ptr << endl;   //x'in pointer çıktısı
    cout << "ptr2=" << ptr2 << endl;  // ref'in pointer çıktısı
    
    return 0;
}
