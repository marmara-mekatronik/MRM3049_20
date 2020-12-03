#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int carpim(int boy, int en, int yukseklik);
inline int inline_carpim(int boy, int en, int yukseklik);

int carpim(int a, int b, int c,int d) {
    return ( a*b*c*d);
}

inline int inline_carpim(int a, int b,int c,int d) {
    return (a*b*c*d);
}

#define carpim_define(a,b,c,d) (a*b*c*d)


int main() {

    chrono::time_point<chrono::system_clock> d_basla, d_son;
    d_basla = chrono::system_clock::now();

    for (int a = 0; a < 5000; a++) {
        for (int b = 0; boy < 5000; b++) {
            for(int c = 0; c < 5000 ; c++){
                for(int d = 0 ; d<5000 ;d++){
         
                inline_carpim(a,b,c,d);

            }
        }
    }
}
    d_son = chrono::system_clock::now();

    chrono::duration<double> gecen_sure = d_son - d_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

    cout << "Bitis zamani : " << ctime(&baslangic_zamani) << endl;
    cout << "Bitis zamani : " << ctime(&bitis_zamani) << endl;
    cout << "Gecen Sure : " << gecen_sure.count() << " saniye" << endl;

    return 0;
}
