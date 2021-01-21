#ifndef DIZI_H_INCLUDED
#define DIZI_H_INCLUDED
#include <assert.h>
#include <iostream>

template<class T>
class Dizi
{
public:
    int m_uzunluk;
    T* m_veri;
    Dizi()
    {
        m_uzunluk=0;
        m_veri=NULL;
    }
    Dizi(int uzunluk)
    {
        assert(uzunluk>0);
        m_veri = new T[uzunluk];
        m_uzunluk=uzunluk;
    }
    ~Dizi()
    {
        delete[] m_veri;
    }
    void Sil()
    {
        delete[] m_veri;
        m_veri=NULL;
        m_uzunluk = 0;
    }
    T& operator[](int index)
    {
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }

    friend bool operator>(const Dizi &p1, const Dizi &p2){
        return (p1.m_veri > p2.m_veri);
    }
};

template<class T>
void BubbleSort(T dizim[],int boyut)
{
    bool swapped;

        do {

            swapped = false;

            for (int i = 0; i < boyut - 1; i++)
            {
                if (dizim[i] < dizim[(i+1)]) {
                    int y = dizim[i];
                    dizim[i] = dizim[(i+1)];
                    dizim[(i+1)] = y;
                    swapped = true;
                }
            }

        } while (swapped == true);
}


#endif // DIZI_H_INCLUDED
