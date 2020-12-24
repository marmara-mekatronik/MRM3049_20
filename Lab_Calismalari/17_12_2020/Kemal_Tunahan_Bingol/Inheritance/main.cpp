#include <iostream>

using namespace std;

class ogretmen{
private:
    string isim;
    string soyisim;
    int numara;
public:
    ogretmen(string ad = "Ali", string soyad = "Yilmaz", int no = 12345);
    void bilgi();
    void girisyap();
    void cikisyap();
};

class akademisyen: public ogretmen{
private:
    string isim1;
    string soyisim1;
    int numara1;
public:
    akademisyen(string ad1 = "Ali", string soyad1 = "Yilmaz", int no1 = 12345);
    void egitimver();
    void bilgi();
};

ogretmen::ogretmen(string ad, string soyad, int no) {
    cout << "\nOgretmen sinifinin yapici fonksiyonu calisiyor..." << endl;
    isim = ad;
    soyisim = soyad;
    numara = no;
}

void ogretmen::bilgi() {
    cout << "\nIsim : " << isim << "\nSoyisim : " << soyisim << "\nNumara : " << numara << endl;
}

void ogretmen::girisyap() {
    cout << endl << this->isim << " Bey/Hanim giris yapiyor!";
    this->bilgi();
}

void ogretmen::cikisyap() {
    cout << endl << this->isim << " Bey/Hanim cikis yapiyor!" << endl;
    this->bilgi();
}

akademisyen::akademisyen(string ad, string soyad, int no) {
    cout << "\nAkademisyen sinifinin yapici fonksiyonu calisiyor..." << endl;
    isim1 = ad;
    soyisim1 = soyad;
    numara1 = no;
}

void akademisyen::egitimver() {
    cout << "\nSadece akademisyenlerin kullanabildigi metot ve ozellik...";
    this->bilgi();
}

void akademisyen::bilgi() {
    cout << "\nIsim : " << isim1 << "\nSoyisim : " << soyisim1 << "\nNumara : " << numara1 << endl;
}
int main() {
    ogretmen ogretmen1;
    ogretmen1.girisyap();

    akademisyen akademisyen1;
    akademisyen1.girisyap();
    akademisyen1.egitimver();
    return 0;
}
