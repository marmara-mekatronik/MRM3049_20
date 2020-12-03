#include <iostream>

using namespace std;
class Silindir {
public:
    Silindir (double r=2.0, double h=2.0);
    double hacim ();
    int karsilastir (Silindir silindir);
private:
    double yaricap;
    double yukseklik;
};
Silindir::Silindir(double r, double h) {
    cout << "Yapici fonksiyon cagriliyor..." << endl;
    yaricap = r;
    yukseklik = h;
}

double Silindir::hacim() {
    return 3.14 * yaricap * yaricap * yukseklik;
}
int Silindir::karsilastir(Silindir silindir) {
    return this->hacim() > silindir.hacim();
}

int main() {
    Silindir Silindir1(10,10);
    Silindir Silindir2(15,25);
    if(Silindir1.karsilastir(Silindir2))
    {
        cout << "Silindir 2 daha kucuktur Silindir 1 den " << endl;
    } else {
        cout << "Silindir 1 daha kucuktur Silindir 2 den " << endl;
    }

}
