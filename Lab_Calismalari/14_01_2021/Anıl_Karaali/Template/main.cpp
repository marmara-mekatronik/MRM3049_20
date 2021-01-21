#ifndef UNTITLED3_DIZI_H
#define UNTITLED3_DIZI_H

#include <assert.h>

template<class T>
class Dizi
{
public:
    int muzunluk;
    T* mveri;
    Dizi(){
        muzunluk=0;
        mveri=NULL;
    }
    Dizi(int uzunluk){
        assert(uzunluk>0);
        mveri = new T[uzunluk];
        muzunluk=uzunluk;
    }
    ~Dizi(){
        delete[] mveri;
    }
    void Sil(){
        delete[] mveri;
        mveri=NULL;
        muzunluk = 0;
    }
    T& operator[](int index){
        assert(index >=0 && index < _uzunluk);
        return mveri[index];
    }
    void kabarcik_sirala(T a[], int n){
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


    Dizi<int> a[5]={10,35,57,84,92};
    int n = sizeof (a) / sizeof (a[0]);

    Dizi<int> kabarcik(5);
    kabarcik.kabarcik_sirala(a,5); //hata!!
    cout<<"Dizinin siralanmış hali"<<endl;
    for (int i = 0; i < n; i++) {
        cout << a[i].mveri << " " << endl;
    }

    return 0;

}
