#include <iostream>
#include "dizi.h"

using namespace std;

int main() {
    Class<double> dizi;
    double x[6] = {4.1,8.2,15.3,16.4,23.5,42.6};

    cout << dizi.KabarcikSiralamasi(x,6) << endl;
    return 0;
}

***********************************************

#ifndef UNTITLED19_DIZI_H
#define UNTITLED19_DIZI_H

#include <assert.h>
#include <iostream>

template<class T>
class Class
{
private:
    int m_uzunluk;
    T* m_veri;
public:
    Class(){
        m_uzunluk=0;
        m_veri= nullptr;
    }
    Class(int uzunluk){
        assert(uzunluk>0);
        m_veri = new T[uzunluk];
        m_uzunluk=uzunluk;
    }
    ~Class(){
        delete[] m_veri;
    }
    void Delete(){
        delete[] m_veri;
        m_veri= nullptr;
        m_uzunluk = 0;
    }
    T& operator[](int index){
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }

    int getUzunluk();

    double* KabarcikSiralamasi(T z[], int y){
        int temp;
        for (int i = 0; i < y; i++) {
            for (int j = y-1; i <j ; j--) {
                if (z[j]<z[j-1]){
                    temp=z[j];
                    z[j]=z[j-1];
                    z[j-1]=temp;
                }
            }
        }
        return z;
    }

};

template<typename T>
int Class<T>::getUzunluk() {
    return m_uzunluk;
}

#endif //UNTITLED19_DIZI_H
