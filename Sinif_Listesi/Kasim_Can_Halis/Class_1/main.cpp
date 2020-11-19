#include <iostream>

using namespace std;

class Araba {
private:
    string Marka;
    string Plaka;
    int Gun;
    int Ay;
    int Yil;
public:
    string marka() {return Marka; }
    string plaka() {return Plaka; }
    int gun() { return Gun; }
    int ay() { return Ay; }
    int yil() { return Yil; }
    bool ayarla(string a, string b, int c, int d, int e);
};

bool Araba::ayarla(string a, string b, int c, int d, int e) {
    if ((c < 0) || (c > 31)) return false;
    if ((d < 0) || (d > 12)) return false;
    if ((e < 0) || (e > 9999)) return false;
    Marka = a;
    Plaka = b;
    Gun = c;
    Ay = d;
    Yil = e;
    return true;
}

int main() {
    Araba lux;
    Araba kiralik[5];
    Araba *herhangi;
    herhangi = &lux;

    lux.ayarla("Mercedes-Benz","35Z0001",05,01,2020);
    cout << "Marka :" << lux.marka() << endl;
    cout << "Plaka :" << lux.plaka() << endl;
    cout << "Gun:" << lux.gun() << endl;
    cout << "Ay:" << lux.ay() << endl;
    cout << "Yil:" << lux.yil() << endl;

    cout << "------------------" << endl;

    herhangi->ayarla("BMW","34TAU01",23,04,2013);
    cout << "Marka :" << herhangi->marka() << endl;
    cout << "Plaka :" << herhangi->plaka() << endl;
    cout << "Gun:" << herhangi->gun()<< endl;
    cout << "Ay:" << herhangi->ay() << endl;
    cout << "Yil:" << herhangi->yil() << endl;

    cout << "------------------" << endl;

    kiralik[0].ayarla("Renault","34YZF34",29,07,2018);
    cout << "Marka :" << kiralik[0].marka() << endl;
    cout << "Plaka :" << kiralik[0].plaka() << endl;
    cout << "Gun:" << kiralik[0].gun() << endl;
    cout << "Ay:" << kiralik[0].ay() << endl;
    cout << "Yil:" << kiralik[0].yil() << endl;

    cout << "------------------" << endl;

    kiralik[1].ayarla("Fiat","06RR100",26,05,2014);
    cout << "Marka :" << kiralik[1].marka() << endl;
    cout << "Plaka :" << kiralik[1].plaka() << endl;
    cout << "Gun:" << kiralik[1].gun() << endl;
    cout << "Ay:" << kiralik[1].ay() << endl;
    cout << "Yil:" << kiralik[1].yil() << endl;

    cout << "------------------" << endl;

    kiralik[2].ayarla("Hyundai","07ZSP14",15,11,2017);
    cout << "Marka :" << kiralik[2].marka() << endl;
    cout << "Plaka :" << kiralik[2].plaka() << endl;
    cout << "Gun:" << kiralik[2].gun() << endl;
    cout << "Ay:" << kiralik[2].ay() << endl;
    cout << "Yil:" << kiralik[2].yil() << endl;

    return 0;
}
