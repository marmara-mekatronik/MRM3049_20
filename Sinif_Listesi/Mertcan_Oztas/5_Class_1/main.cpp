#include <iostream>

using namespace std;

class KHO   // KHO = Kara Harp Okulu
{
    private:
        int Boy;
        int Kilo;
        int Yas;

    public:
        int boy() { return Boy; }
        int kilo() { return Kilo; }
        int yas() { return Yas; }
    
        bool ayarla(int b, int k, int y);
};


bool KHO::ayarla(int b, int k, int y)
{
    Boy = b;
    Kilo = k;
    Yas = y;

    if ((b < 164) || (b > 210)) return false;
    if ((k < 51) || (k > 115)) return false;
    if ((y < 16) || (y > 20)) return false;
    
    return true;
}


int main()
{
    KHO minimum;
    KHO* basvuru;

    basvuru = &minimum;

    minimum.ayarla(164, 51, 16);
    cout << "Min Boy    : " << minimum.boy() << endl;
    cout << "Min Kilo   : " << minimum.kilo() << endl;
    cout << "Min Yas    : " << minimum.yas() << endl;

    cout << "\nSizin bilgileriniz : \n" << endl;

    basvuru->ayarla(188, 112, 20);  // Kendi ölçülerim
    cout << "Boy    : " << basvuru->boy() << endl;
    cout << "Kilo   : " << basvuru->kilo() << endl;
    cout << "Yas    : " << basvuru->yas() << endl;

    return 0;
}
