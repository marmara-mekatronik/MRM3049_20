#ifndef TEMPLETE_ODEV_H_INCLUDED
#define TEMPLETE_ODEV_H_INCLUDED

#include <iostream>

template <class T>
class Dizi{
private:
    int e_uzunluk;
    T* veri;
public:
    Dizi(){
        uzunluk = 0;
        veri = nullptr;
    }
    Dizi(int uzunluk){
        veri = new T[uzunluk] = {};
        e_uzunluk = uzunluk;
    }

    T& operator[](int x){
        return y_veri[x];
    }

    double bubbleSort(T a[],int b);

    int Uzunluk_al();
};
template<typename T>
int Dizi<T>::Uzunluk_al() {
    return e_uzunluk;
}

template<class T>
double Dizi<T>::bubbleSort(T a[], int b) {
    for (int i = 0; i < n; ++i) {
        for (int j = n-1;i < j;j--){
            if (h[j]<h[j-1]){
                swap(h[j],h[j-1]);
            }
        }
    }
    return a[];
}

#endif // TEMPLETE_ODEV_H_INCLUDED
