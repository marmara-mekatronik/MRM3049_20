#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using chrono::time_point,chrono::system_clock,chrono::duration;

int hacim(int a, int b, int c);

inline int hacimal(int a, int b, int c);

int hacim(int a, int b, int c) {
    return a*b*c;
}

inline int hacimal(int a, int b, int c) {
    return a*b*c;
}

#define HACIM(a,b,c) (a*b*c)

int main() {

    time_point<system_clock> basla1, son1;
    basla1 = system_clock::now();

    for (int a = 0; a < 2000; a++) {
        for (int b = 0; b < 2000; b++) {
            for(int c = 0; c < 2000; c++){

                hacim(a,b,c);

            }
        }
    }

    son1 = system_clock::now();

    duration<double> sure1 = son1 - basla1;
    time_t baslangic1 = system_clock::to_time_t(basla1);
    time_t bitis1 = system_clock::to_time_t(son1);


    time_point<system_clock> basla2, son2;
    basla2 = system_clock::now();

    for (int a = 0; a < 2000; a++) {
        for (int b = 0; b < 2000; b++) {
            for(int c = 0; c < 2000; c++){

                hacimal(a,b,c);

            }
        }
    }

    son2 = system_clock::now();

    duration<double> sure2 = son2 - basla2;
    time_t baslangic2 = system_clock::to_time_t(basla2);
    time_t bitis2 = system_clock::to_time_t(son2);


    time_point<system_clock> basla3, son3;
    basla3 = system_clock::now();

    for (int a = 0; a < 2000; a++) {
        for (int b = 0; b < 2000; b++) {
            for(int c = 0; c < 2000; c++){

                HACIM(a,b,c);

            }
        }
    }

    son3 = system_clock::now();

    duration<double> sure3 = son3 - basla3;
    time_t baslangic3 = system_clock::to_time_t(basla3);
    time_t bitis3 = system_clock::to_time_t(son3);


    cout << "\nNormal Fonksiyon Baslangic Ani : " << ctime(&baslangic1);
    cout << "Normal Fonksiyon Bitis Ani : " << ctime(&bitis1);
    cout << "Normal Fonksiyon Gecen Sure : " << sure1.count() << " saniye" << endl << endl;

    cout << "Inline Fonksiyon Baslangic Ani : " << ctime(&baslangic2);
    cout << "Inline Fonksiyon Bitis Ani : " << ctime(&bitis2);
    cout << "Inline Fonksiyon Gecen Sure : " << sure2.count() << " saniye" << endl << endl;

    cout << "Define Fonksiyon Baslangic Ani : " << ctime(&baslangic3);
    cout << "Define Fonksiyon Bitis Ani : " << ctime(&bitis3);
    cout << "Define Fonksiyon Gecen Sure : " << sure3.count() << " saniye" << endl;

    return 0;
}
