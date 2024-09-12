#include <iostream>

using namespace std;

class Tabut {

private:
    int En;
    int Boy;
    int Yukseklik;

public:
    int en()        { return En; }
    int boy()       { return Boy; }
    int yukseklik()  { return Yukseklik;}

    bool siparis ( int e, int b, int y );
};

    bool Tabut::siparis(int e, int b, int y)

{
    if (((e >= 30) && (e <= 50)) && ((b >= 40) && (b <= 200)) && ((y >= 30) && (y <= 50))) {
        cout << " Tabut siparisiniz alinmistir" << endl;
    }
    else {
        cout << " Ozel siparis vermeniz gerekmektedir" << endl;
    }

    En = e;
    Boy = b;
    Yukseklik = y;
    return true;
}

    int main() {


    Tabut giris;
    int e,b,y;

    cout <<" \n Lutfen siparis vereceginiz tabut olculerini giriniz"<< endl;
    cout << " ---------------------------------------"<< endl;
    cout<< " Tabutun en boyunu giriniz: ";
    cin >> e;
    cout << "---------------------------------------"<< endl;
    cout << " Tabutun boyunu giriniz: ";
    cin >> b;
    cout << "---------------------------------------"<< endl;
    cout << " Tabutun yuksekligini giriniz: ";
    cin >> y;
    cout << "---------------------------------------"<< endl;


    giris.siparis(e,b,y);


    return 0;
}