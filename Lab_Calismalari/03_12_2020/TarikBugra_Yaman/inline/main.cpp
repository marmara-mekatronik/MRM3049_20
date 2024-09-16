#include <iostream>
#include <cmath>
#include <ctime>
#include <chrono>
using namespace std;
inline void fonk_inline(int sayi);

inline void fonk_inline(int sayi) {
    int sayiasil;
    int rakam;

    for (int i = 100; i < sayi; i++) {
        int toplam=0;
        int sayac = 0;
        sayiasil=i;
        int rakam_listesi[10];
        while (sayiasil > 0) {

            rakam = sayiasil % 10;
            sayiasil = sayiasil / 10;
            rakam_listesi[sayac] = rakam;
            sayac++;

        }
        for (int j=0;j<sayac;j++){
            toplam= toplam +  pow(rakam_listesi[j],sayac);

        }
        if (toplam==i) {
            cout<<i<<"  bir mukemmel sayidir"<<endl;
        }
        else {
            continue;
        }

    }


}

int main() {
    cout<<"MUKEMMEL SAYI BULMA UYGULAMASI"<<endl<<"bir sayinin rakamlarinin o sayinin basamak sayisi kadar ussu alinip elde edilen sayilarin toplanmasiyla amstrong\n"
                                                  "sayisi elde edilir. orn. 1634. 1^4+6^4+3^4+4^4=1634";

    int a=1;
    while(a>0) {

        int sayi;



        cout << endl<<"En az uc basamakli Bir sayi giriniz";
        cin >> sayi;
        chrono::time_point<chrono::system_clock> baslangic, bitis;
        baslangic = chrono::system_clock::now();

        fonk_inline(sayi);

        bitis = chrono::system_clock::now();

        chrono::duration<double> gecen_zaman = bitis - baslangic;
        time_t baslangic_zamani = chrono::system_clock::to_time_t(baslangic);
        time_t bitis_zamani = chrono::system_clock::to_time_t(bitis);

        cout << "Baslangic Zamani :" << ctime(&baslangic_zamani);
        cout << "Bitis Zamani :" << ctime(&bitis_zamani) ;
        cout << "Gecen Sure :" << gecen_zaman.count() << " saniyedir" << endl;

    }
    return 0;
}
