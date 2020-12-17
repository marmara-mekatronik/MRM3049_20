#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int hacim(int boy, int en, int yukseklik);
inline int inline_hacim(int boy, int en, int yukseklik);

int hacim(int boy, int en, int yukseklik) {
    return ( boy*en*yukseklik);
}

inline int inline_hacim(int boy, int en, int yukseklik) {
    return (boy*en*yukseklik);
}

#define hacim_define(boy,en, yukseklik) (boy*en*yukseklik)


int main() {

    chrono::time_point<chrono::system_clock> d_basla, d_son;
    d_basla = chrono::system_clock::now();

    for (int en = 0; en < 1000; en++) {
        for (int boy = 0; boy < 1000; boy++) {
            for(int yukseklik = 0; yukseklik < 1000 ; yukseklik++){
                
                //hacim(en,boy,yukseklik);
                //inline_hacim(en,boy,yukseklik);
                //hacim_define(en,boy,yukseklik);

            }
        }
    }

    d_son = chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

    cout << "Bitis zamani : " << ctime(&baslangic_zamani) << endl;
    cout << "Bitis zamani : " << ctime(&bitis_zamani) << endl;
    cout << "Gecen Sure : " << gecen_zaman.count() << " saniye" << endl;

    return 0;
}
