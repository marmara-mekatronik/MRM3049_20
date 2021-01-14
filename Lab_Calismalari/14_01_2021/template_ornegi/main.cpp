#include <iostream>
#include "dizi.h"

using namespace std;

int main() {
    Dizi<int> dizi1;
    Dizi<double> dizi2;

    int ornek[7] = {43,57,79,2,4,123,56};
    double ornek2[7]={12.5,32.6,45.3,6.8,4.3,23.4,56.4};

    dizi1.BubbleSort(ornek,7);
    dizi2.BubbleSort(ornek2,7);

    for (int sayac = 0; sayac < dizi1.getUzunluk(); ++sayac) {
        ornek[sayac] = sayac;
        ornek2[sayac] = sayac + 0.5;
    }

    for (int sayac = dizi1.getUzunluk()-1; sayac >=0 ; --sayac) {
        cout << ornek[sayac] << "\t" << ornek2[sayac] << endl;
    }


    return 0;
}
