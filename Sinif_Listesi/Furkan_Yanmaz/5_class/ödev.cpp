#include <iostream>

using namespace std;

class Rapor {

private:
   int Sure;
   int Adet;
   int Hazirlanis;

public:
   int sure()          { return Sure; }
   int adet()          { return Adet; }
   int hazirlanis()    { return Hazirlanis; }

   bool siparis  ( int s, int a, int h );
};

   bool Rapor::siparis( int s, int a,int h )

{
   if (((s >= 6) && (s <= 24)) && ((a >= 1) && (a <= 3)) && ((h >= 1) && (h <= 3))) {
        cout << " Rapor yazdýrma isteðiniz alinmistir" << endl;
    }
    else {
        cout << " Ozel rapor istegi belirtmeniz gerekmektedir." << endl;
    }

    Sure = s;
    Adet = a;
    Hazirlanis = h;
    return true;
}   

    int main() {


    Rapor giris;
    int s,a,h;

    cout <<" \n Lutfen yazdirmak istediginiz rapor veya raporlarin detaylarini giriniz"<< endl;
    cout << " ---------------------------------------"<< endl;
    cout<< " Rapor teslim suresini(saatini) giriniz: ";
    cin >> s;
    cout << "---------------------------------------"<< endl;
    cout << " Rapor adetini giriniz: ";
    cin >> a;
    cout << "---------------------------------------"<< endl;
    cout << " Rapor hazirlanis suresini(saatini) giriniz: ";
    cin >> h;
    cout << "---------------------------------------"<< endl;


    giris.siparis(s,a,h);


    return 0;
}
