//Kütüphane


#ifndef LABODEVI_LABCALISMA_H
#define LABODEVI_LABCALISMA_H

#include <iostream>
//Eren_İncesu_template

template <class T>
class Dizi{
private:
    int dizi_uzunluk;
    T* yeni_veri;
public:
    Dizi(){
        dizi_uzunluk = 0;
        yeni_veri = nullptr;
    }
    Dizi(int uzunluk){
        yeni_veri = new T[uzunluk] = {};
        dizi_uzunluk = uzunluk;
    }

    T& operator[](int x){
        return yeni_veri[x];
    }

    void KabarcikSiralamasi(T h[],int n);

    int getUzunluk();
};
template<typename T>
int Dizi<T>::getUzunluk() {
    return dizi_uzunluk;
}

template<class T>
void Dizi<T>::KabarcikSiralamasi(T h[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n-1;i < j;j--){
            if (h[j]<h[j-1]){
                swap(h[j],h[j-1]);
            }
        }
    }
}

#endif //LABODEVI_LABCALISMA_H

//program ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#include <iostream>
#include "labCalisma.h"
//Eren_İncesu_template_bubble_sort_ödevi

using namespace std;

int main() {
    Dizi<int> int_dizi(5);
    int y = int_dizi.getUzunluk();
    //hocam dizi tanımlamasını bir türlü yapamadım yapabildiğim kadarını atıyorum.



    return 0;
}



