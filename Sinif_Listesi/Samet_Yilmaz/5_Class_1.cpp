#include <iostream>

using namespace std;

class Konum
{
private:
    string Ulke;
    string Il;
    string Sehir;

public:
    string ulke() { return Ulke; }
    string il() { return Il; }
    string sehir()
    {
        return Sehir;
    }
    bool ayarla(string u, string i, string s);
};

bool Konum::ayarla(string u, string i, string s)
{

    Ulke = u;
    Il = i;
    Sehir = s;
    return true;
}

int main()
{
    Konum memleket;
    Konum avrupa[5];
    Konum *komsu;

    komsu = &memleket;

    memleket.ayarla("Turkiye", "Istanbul", "Eyup");
    cout << "Ulke:" << memleket.ulke() << endl;
    cout << "Il:" << memleket.il() << endl;
    cout << "Sehir:" << memleket.sehir() << endl;

    cout << "------------------" << endl;

    komsu->ayarla("Bulgaristan", "Montana", "Montana");
    cout << "Ulke:" << komsu->ulke() << endl;
    cout << "Il:" << komsu->il() << endl;
    cout << "Sehir:" << komsu->sehir() << endl;

    cout << "------------------" << endl;

    avrupa[0].ayarla("Ingiltere", "Londra", "Greenwich");
    cout << "Ulke:" << avrupa[0].ulke() << endl;
    cout << "Il:" << avrupa[0].il() << endl;
    cout << "Sehir:" << avrupa[0].sehir() << endl;

    return 0;
}