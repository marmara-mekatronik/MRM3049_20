#include <iostream>
//Class Constructor with param

using namespace std;

class Saat
{
public:
    void setDakika(double SaatDakika);
    double getDakika(void);
    Saat(double SaatDakika);
    ~Saat();

private:
    double dakika;
};

Saat::Saat(double SaatDakika)
{
    cout << "Su anda  nesne olusturuluyor" << endl;
    dakika = SaatDakika;
    cout << "Saat Olusturulurken verilen deger : " << SaatDakika;
}
Saat::~Saat()
{
    cout << "\n Su anda  nesne kaldiriliyor" << endl;
}

void Saat::setDakika(double SaatDakika)
{
    dakika = SaatDakika;
}

double Saat::getDakika()
{
    return dakika;
}

int main()
{
    Saat saat_1(14.00);
    saat_1.setDakika(16.43);
    cout << "\nSaatin Degeri Degistikden Sonraki degeri : " << saat_1.getDakika();
    return 0;
}