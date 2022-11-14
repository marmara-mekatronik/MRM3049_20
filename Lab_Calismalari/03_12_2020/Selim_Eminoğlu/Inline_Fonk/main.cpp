#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
int yaris(int a, int b);
inline int yaris_inline(int a, int b);

int yaris(int a, int b){
    return (a+b)*(a+b);
}

inline int yaris_inline(int a, int b){
    return (a+b)*(a+b);
}

#define HESAPLA(x,y) ((x)+(y))*((x)+(y))

int main() {
    chrono::time_point<chrono::system_clock>  d_basla, d_son;
    string a;
    cout<<"Yarisi baslatmak icin B ye basin"<<endl;
    cout<<"Yarisi bitirmek icin S ye basin"<<endl;
    cin>>a;
    if (a=="b") {
        cout<<"Yaris tipi secimi icin:"<<endl;
        cout<<"hat_ici modu-h"<<endl;  // inline olan fonk kullanılacak
        cout<<"sabit mod-c"<<endl;   // define olan fonk kullanılacak
        cout<<"normal mod-n"<<endl;  // normal tanımlı fonk kullanılacak
        string b;
        cin>>b;
        if (b=="h"){
        d_basla = chrono::system_clock::now();
        for (int i = 0; i < 100; ++i) {
            for (int j = 0; j < 100; ++j) {
                //yaris(i, j);
                yaris_inline(i, j);
                //HESAPLA(i, j);
            }
        }
        }
        else if (b=="c"){
            d_basla = chrono::system_clock::now();
            for (int i = 0; i < 100; ++i) {
                for (int j = 0; j < 100; ++j) {
                    //yaris(i, j);
                    //yaris_inline(i, j);
                    HESAPLA(i, j);
                }
            }
        }
        else if (b=="n"){
            d_basla = chrono::system_clock::now();
            for (int i = 0; i < 100; ++i) {
                for (int j = 0; j < 100; ++j) {
                    yaris(i, j);
                    //yaris_inline(i, j);
                    //HESAPLA(i, j);
                }
            }
        }
    }
    cin>>a;
    if (a=="s") {
        d_son = chrono::system_clock::now();
    }
    chrono::duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

    cout<< "Baslangic Zamani :" << ctime(&baslangic_zamani) << endl;
    cout<< "Bitis Zamani :" << ctime(&bitis_zamani) << endl;
    cout<< "Gecen Sure :" << gecen_zaman.count()<<" saniyedir" << endl;
    return 0;
}
