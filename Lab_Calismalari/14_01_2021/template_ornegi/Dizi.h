//
// Created by SEL on 14.01.2021.
//

#ifndef INC_13_HAFTA_ODEV_DIZI_H
#define INC_13_HAFTA_ODEV_DIZI_H
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

    void BubbleSort(T a[], int n){
        int cons;
        for (int i = 0; i < n; i++) {
            for (int j = n-1; i <j ; j--) {
                if (a[j]<a[j-1]){
                    cons=a[j];
                    a[j]=a[j-1];
                    a[j-1]=cons;
                }
            }
        }
    }

};

template<typename T>
int Dizi<T>::getUzunluk() {
    return m_uzunluk;
}

#endif //INC_13_HAFTA_ODEV_DIZI_H
