#include <iostream>
using namespace std;

class Sicaklik{
public:
    void setDerece(double SicaklikDerece);
    double getDerece(void);
    Sicaklik(double SicaklikDerece);
    ~Sicaklik();
    double derece;
};

Sicaklik::Sicaklik(double SicaklikDerece) {
    cout << "...NESNE OLUSTURULUYOR..." << endl;
    derece = SicaklikDerece;
    cout << "Ilk derece Olcumu: " << SicaklikDerece;
}
Sicaklik::~Sicaklik() {
    cout << "\n ...NESNE KALDIRILIYOR..." << endl;
}

void Sicaklik::setDerece(double SicaklikDerece) {
    derece=SicaklikDerece;
}

double Sicaklik::getDerece() {
    return derece;
}

int main() {
    Sicaklik derece_1(38.6);
    derece_1.setDerece(37.2);
    cout << "\nIkinci Derece Olcumu: " << derece_1.getDerece();
    return 0;
}
