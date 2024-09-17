#include <iostream>
using namespace std;

int kare (int X)
{
    return X*X;
}

double kare (double Y)
{
    return Y*Y;
}

int main ( )
{
    cout<<"8'in karesi: "<<kare(8)<<endl;
    cout<<"8.4'un karesi: "<<kare(8.4);

    return 0;
}
