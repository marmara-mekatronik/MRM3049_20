#include <iostream>
using namespace std;

class Market{
private:
    string MarketAdi;
    string MarketSemti;
public:
    Market(){
    cout << "\n*****Market Bilgilerini Giriniz*****\n\n";
    cout << "Marketin Adi: ";
    cin >> MarketAdi;
    cout << "Marketin Adresi: ";
    cin >> MarketSemti;

    }
    void yazdir()
    {
        cout << MarketAdi << " " << MarketSemti << endl;
    }
};

class urun{
protected:
    string urunAdi;
    int fiyat;
public:
    urun(){
    cout << "\nUrun adini girin: ";
    cin >> urunAdi;
    cout << "Urunun fiyatini girin: ";
    cin >> fiyat;
    }
    void yazdir(){
    cout << urunAdi << " " << fiyat << endl;
    }
};

class musteri: public Market, public urun{
private:
    string musteriAdi;
    int para;
public:
    musteri(){
    cout << "\n*****Musteri Bilgilerini Giriniz*****\n";
    cout << "\nMusterinin Adi: ";
    cin >> musteriAdi;
    cout << "\nMusterinin Parasi: ";
    cin >> para;

    }

    void yazdir(){
    Market::yazdir();
    urun::yazdir();
    cout << musteriAdi << " " << para << endl;
    }

    void operator+ (musteri Kerem){
    cout << "\n********************\n" ;

    cout << "\nIkisinin Toplam Harcadigi miktar: " << fiyat+Kerem.fiyat << endl;

    para = para-fiyat;
    cout << "\nHuseyin'in Kalan parasi: " << para << endl;

    Kerem.para = Kerem.para - Kerem.fiyat;
    cout << "\nKerem'in Kalan parasi: " << Kerem.para << endl;
    }
};

int main()
{

    musteri Kerem, Huseyin;
    Huseyin+Kerem;
    return 0;


}


