#include <iostream>

using namespace std;

class deger   // deger = araba değeri
{
    private:
        int kilometre;
        int tramer kaydı sayısı;
        int Yas;

    public:
        int kilometre() { return kilometre; }
        int tramer() { return tramer kaydı sayısı; }
        int yas() { return Yas; }

        bool ayarla(int b, int k, int y);
};


bool deger::ayarla(int b, int k, int y)
{
    kilometre = b;
    tramer kaydı sayısı = k;
    Yas = y;

    if ((b < 0) || (b > 300.000)) return false;
    if ((k < 0) || (k > 100)) return false;
    if ((y < 0) || (y > 30)) return false;

    return true;
}


int main()
{
    deger maximum;
    deger* arac;

    arac = &maximum;

    maximum.ayarla(0, 0, 0);
    cout << "max kilometre : " << maximum.kilometre() << endl;
    cout << "max tramer kaydı sayısı   : " << maximum.tramer() << endl;
    cout << "max Yas    : " << maximum.yas() << endl;

    cout << "\n aracın bilgileri : \n" << endl;

    arac->ayarla(100.000, 5 , 12);  // arac durumu
    cout << "kilometre  : " << arac->kilometre() << endl;
    cout << "tramer kaydı sayısı   : " << arac->tramer() << endl;
    cout << "Yas    : " << arac->yas() << endl;

    return 0;
}
