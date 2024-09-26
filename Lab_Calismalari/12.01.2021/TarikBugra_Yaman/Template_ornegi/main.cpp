//kutuphane
// Created by tarik on 14.01.2021.
//

#ifndef UNTITLED3_DIZI_H
#define UNTITLED3_DIZI_H

#include <assert.h>

template<class T>
class Dizi
{
public:
    int m_uzunluk;
    T* m_veri;
    Dizi(){
        m_uzunluk=0;
        m_veri=NULL;
    }
    Dizi(int uzunluk){
        assert(uzunluk>0);
        m_veri = new T[uzunluk];
        m_uzunluk=uzunluk;
    }
    ~Dizi(){
        delete[] m_veri;
    }
    void Sil(){
        delete[] m_veri;
        m_veri=NULL;
        m_uzunluk = 0;
    }
    T& operator[](int index){
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }
    void KabarcikSiralamasi(T a[], int n){
        for (int i = 0; i < n; i++) {
            for (int j = n-1; i <j ; j--) {
                if (a[j]<a[j-1])
                    swap(a[j],a[j-1]);
            }
        }
    }
};

#endif //UNTITLED3_DIZI_H

-------------------------------------------------

#include <iostream>
#include "Dizi.h"

using namespace std;

int main(){


    Dizi<int> a[5]={11,55,33,44,22};
    int n = sizeof (a) / sizeof (a[0]);

    Dizi<int> Kabarcik(5);
    Kabarcik.KabarcikSiralamasi(a,5); //burayı aşamadım.
    cout<<"Dizinin sirali hali"<<endl;
    for (int i = 0; i < n; i++) {
        cout << a[i].m_veri << " " << endl;
    }

    return 0;

}
