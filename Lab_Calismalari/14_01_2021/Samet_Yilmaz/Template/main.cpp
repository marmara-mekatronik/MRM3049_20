#include <iostream>
#include "Dizi.h"
using namespace std;

#ifndef INC_32_TEMPLATE_3_DIZI_H
#define INC_32_TEMPLATE_3_DIZI_H

#include <assert.h>

template <class T>
class Siralama
{
public:
    int m_uzunluk;
    T *m_veri;
    Siralama()
    {
        m_uzunluk = 0;
        m_veri = NULL;
    }
    Siralama(int uzunluk)
    {
        assert(uzunluk > 0);
        m_veri = new T[uzunluk];
        m_uzunluk = uzunluk;
    }
    ~Siralama()
    {
        delete[] m_veri;
    }
    void Sil()
    {
        delete[] m_veri;
        m_veri = NULL;
        m_uzunluk = 0;
    }
    T &operator[](int index)
    {
        assert(index >= 0 && index < m_uzunluk);
        return m_veri[index];
    }

    void Bubble_Sort(T a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; i < j; j--)
            {
                if (a[j] < a[j - 1])
                    swap(a[j], a[j - 1]);
            }
        }
    }
};

#endif //INC_32_TEMPLATE_3_DIZI_H

int main()
{
    Siralama<int> a[5] = {15, 45, 65, 35, 85};
    int n = sizeof(a) / sizeof(a[0]);

    a[5].Bubble_Sort(a[], 5);
    //bu kısmı bir turlu çalitiramadim yapabildgimi atiyorum.

    cout << "Dizinin sirali hali" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].m_veri << " " << endl;
    }

    return 0;
}
