#include <iostream>
using namespace std;

class Zaman
{
public:
    Zaman(int s = 23, int dk = 39, int sn = 25);
    double vakit();
    int karsilastir(Zaman zaman);

private:
    int saat;
    int dakika;
    int saniye;
};

Zaman::Zaman(int s, int dk, int sn)
{
    cout << "Yapici fonksiyon cagriliyor..." << endl;
    saat = s;
    dakika = dk;
    saniye = sn;
}

double Zaman::vakit()
{
    return saat;
}

int Zaman::karsilastir(Zaman zaman)
{
    return this->vakit() > zaman.vakit();
}

int main()
{
    Zaman Zaman1(12, 54, 41);
    Zaman Zaman2(15, 35, 20);

    if (Zaman1.karsilastir(Zaman2))
    {
        cout << "2. zaman 1. zaman dan daha kucuktur." << endl;
    }
    else
    {
        cout << "1. zaman 2. zamandan daha kucuktur." << endl;
    }
    return 0;
}
