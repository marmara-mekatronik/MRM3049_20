#include <iostream>
#include "dizi.h"

using namespace std;

int main() {
    Dizi<int> dizi;

    int b[4] = {1,66,45,4};
    cout << dizi.Buble(b,4) << endl;

    return 0;
}
//KÜTÜPHANE
#ifndef LAB_DIZI_H
#define LAB_DIZI_H

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

    double* Buble(T a[], int n){
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


#endif 
