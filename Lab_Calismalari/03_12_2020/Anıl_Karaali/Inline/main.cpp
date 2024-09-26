#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

inline double fonx_inline(double sayi1, double sayi2);


inline double fonx_inline(double sayi1, double sayi2) {

    double a = sqrt(sayi1)*sqrt(sayi2);

    return a  ;}

int main() {

    double sayi1;
    double sayi2;

    cout<<"1. sayiyi giriniz: "<<endl;
    cin >> sayi1;
    cout<<"2. sayiyi giriniz: "<< endl;
    cin >> sayi2;

    chrono::time_point<chrono::system_clock> baslangic, bitis;
    baslangic = chrono::system_clock::now();

    for (int sayi1 = 0; sayi1 < 60000; sayi1++) {
        for (int sayi2 = 0; sayi2 < 60000; sayi2++) {

            fonx_inline(sayi1,sayi2);
        }
    }

    bitis = chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = bitis - baslangic;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(baslangic);
    time_t bitis_zamani = chrono::system_clock::to_time_t(bitis);

    cout << "Isleninizin sonucu : "<<fonx_inline(sayi1,sayi2)<< endl;

    cout << "\nBitis zamani : " << ctime(&baslangic_zamani) << endl;

    cout << "Bitis zamani : " << ctime(&bitis_zamani) << endl;

    cout << "Islem " << gecen_zaman.count() << " saniyede gerceklesmistir. " << endl;


    return 0;
}
