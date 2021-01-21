#include <iostream>
#include <ctime>
#include "Dizi.h"


using namespace std;

int main()
{

    srand(time(0));

    Dizi<int> a(5);

    for (int i = 0; i < 5; i++)
    {
        a[i] = rand() % 100;;
    }

   BubbleSort(a.m_veri,5);

    cout<<"Dizinin sirali hali"<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] << " " << endl;
    }

    return 0;

}
