#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

inline double banka_inline(double yatirilcak, double cekilcek);


inline double banka_inline(double yatirilcak, double cekilcek) {

    double hesapdaki_para= 0;


    return hesapdaki_para+yatirilcak-cekilcek ;
    }

int main() {
    double yatirilcak, cekilcek;

    cout<<"Bankamiza Hosgeldiniz.. "<<endl;


    cout<<"Yatirmak istediginiz miktari giriniz: ";
    cin >> yatirilcak;

    cout<<"Cekmek istediginiz miktari giriniz: ";
    cin >> cekilcek;


    chrono::time_point<chrono::system_clock> baslangic, bitis;
    baslangic = chrono::system_clock::now();

    for (double a = 0; a < yatirilcak; a++) {

        for (double b = 0; b < cekilcek; b++){

            banka_inline(a,b);
        }
    }
    cout<< "Paraniz Hesaba yatiriliyor"<< endl;
    cout<< "Paraniz Hesabdan Cekiliyor"<< endl;
    bitis = chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = bitis - baslangic;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(baslangic);
    time_t bitis_zamani = chrono::system_clock::to_time_t(bitis);

    cout << "Hesabinizdeki para : "<<banka_inline(yatirilcak,cekilcek)<< endl;

    cout << "Sisteme giris zamani : " << ctime(&baslangic_zamani) << endl;

    cout << "Sistemden cikis zamani : " << ctime(&bitis_zamani) << endl;

    cout << "Banka isleminiz " << gecen_zaman.count() << " saniyede gerceklesmistir. " << endl;


    return 0;
}
