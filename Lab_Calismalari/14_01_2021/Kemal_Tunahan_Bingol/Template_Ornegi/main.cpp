//ana program 

#include <iostream>
#include "dizi.h"

using namespace std;

int main() {
    Dizi<double> dizi1;

    double b[4] = {8.4,1.5,.5,7.6};
    cout << dizi1.KabarcikSiralamasi(b,4) << endl;

    return 0;
}

//Dizi kütüphanesi
//
// Created by Acer on 14.01.2021.
//

#ifndef TEMPLATE_DIZI_H
#define TEMPLATE_DIZI_H

#include <assert.h>
#include <iostream>

template<class T>
class Dizi
{
private:
    int m_uzunluk;
    T* m_veri;
public:
    Dizi(){
        m_uzunluk=0;
        m_veri= nullptr;
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
        m_veri= nullptr;
        m_uzunluk = 0;
    }
    T& operator[](int index){
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }

    int getUzunluk();

    double* KabarcikSiralamasi(T a[], int n){
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = n-1; i <j ; j--) {
                if (a[j]<a[j-1]){
                    temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                }
            }
        }
        return a;
    }

};

template<typename T>
int Dizi<T>::getUzunluk() {
    return m_uzunluk;
}


#endif //TEMPLATE_DIZI_H
