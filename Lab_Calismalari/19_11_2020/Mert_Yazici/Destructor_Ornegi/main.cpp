#include <iostream>

using namespace std;

class Cember{
public:
    void setcevre(double CemberCevre);
    double getcevre(void);
    Cember(double CemberCevre);
    ~Cember();
private:
    double cevre;
};

Cember::Cember(double CemberCevre) {
    cout << "nesne olusturuluyor" << endl;
    cevre = CemberCevre;
    cout << "olusturulurken verilen deger : " << CemberCevre << endl;
}
Cember::~Cember() {
    cout << "\n nesne kaldiriliyor" << endl;
}

void Cember::setcevre(double CemberCevre) {
    cevre=CemberCevre;
}

double Cember::getcevre() {
    return cevre;
}
double deger = 0;
int main() {
    Cember cember_1(45);
    cout << "bir cevre degeri giriniz" << endl;
    cin >> deger;
    cember_1.setcevre(deger);
    cout << "Degistikden Sonraki cevresi : " << cember_1.getcevre();
    return 0;
}
