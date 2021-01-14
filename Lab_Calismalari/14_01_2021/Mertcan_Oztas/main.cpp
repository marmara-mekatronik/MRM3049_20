#include <iostream>
#include "Array.h"

using namespace std;

template <class T>
void BubbleSort(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; i <j ; j--)
        {
            if (a[j]<a[j-1])
                swap(a[j],a[j-1]);
        }
    }
}

int main()
{
    int a[5]={10,50,30,40,20};
    int n = sizeof (a) / sizeof (a[0]);

    BubbleSort()<int>(a,n);

    cout << "integer sorted array :\n" ;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }

    double b[5]={1.1,5.5,3.3,4.4,2.2};
    int m = sizeof (b) / sizeof (b[0]);

    BubbleSort()<double>(b,n);

    cout << "double sorted array :\n" ;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\t" << endl;
    }

    return 0;
}

int main()
{
    Array<int> intArray(12);
    Array<double> doubleArray(12);

    for (int counter= 0; counter < intArray.getLength(); ++counter)
    {
        intArray[counter] = counter;
        doubleArray[counter] = counter + 0.5;
    }

    for (int counter = intArray.getLength()-1; counter >=0 ; --counter)
    {
        cout << intArray[counter] << "\t" << doubleArray[counter] << endl;
    }

    return 0;
}
