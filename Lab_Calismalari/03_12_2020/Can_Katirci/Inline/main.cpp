#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int fonk(int i, int j, int k);

inline int fonk_inline(int i, int j, int k);

int fonk(int i, int j, int k) {
    return (i + j) * (i + k) * (j + k);
}

inline int fonk_inline(int i, int j, int k) {
    return (i + j) * (i + k) * (j + k);
}

#define hesapla(x, y, z) ((x)+(y)) * ((x)+(z)) * ((y)+(z));


int main() {

    chrono::time_point<std::chrono::system_clock> a_basla, a_son, b_basla, b_son, c_basla, c_son;
    a_basla = chrono::system_clock::now();

    for (int i = 0; i < 900; i++) {
        for (int j = 0; j < 900; j++) {
            for (int k = 0; k < 900; k++){
                fonk(i,j,k);
            }

        }
    }

    a_son = chrono::system_clock::now();

    chrono::duration<double> gecen_sure = a_son - a_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(a_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(a_son);

    cout << "Baslangic: " << ctime(&baslangic_zamani) << endl;
    cout << "Bitis: " << ctime(&bitis_zamani) << endl;
    cout << "Gecen sure: " << gecen_sure.count() << " saniye" << endl;

    b_basla = chrono::system_clock::now();

    for (int i = 0; i < 900; i++) {
        for (int j = 0; j < 900; j++) {
            for (int k = 0; k < 900; k++){
                fonk_inline(i,j,k);
            }

        }
    }

    b_son = chrono::system_clock::now();

    chrono::duration<double> gecen_sure2 = b_son - b_basla;
    time_t baslangic_zamani2 = chrono::system_clock::to_time_t(b_basla);
    time_t bitis_zamani2 = chrono::system_clock::to_time_t(b_son);

    cout << endl << "Baslangic: " << ctime(&baslangic_zamani2) << endl;
    cout << "Bitis: " << ctime(&bitis_zamani2) << endl;
    cout << "Gecen sure: " << gecen_sure2.count() << " saniye" << endl;

    c_basla = chrono::system_clock::now();

    for (int i = 0; i < 900; i++) {
        for (int j = 0; j < 900; j++) {
            for (int k = 0; k < 900; k++){
                hesapla(i, j, k);
            }

        }
    }

    c_son = chrono::system_clock::now();

    chrono::duration<double> gecen_sure3 = c_son - c_basla;
    time_t baslangic_zamani3 = chrono::system_clock::to_time_t(c_basla);
    time_t bitis_zamani3 = chrono::system_clock::to_time_t(c_son);

    cout << endl << "Baslangic: " << ctime(&baslangic_zamani3) << endl;
    cout << "Bitis: " << ctime(&bitis_zamani3) << endl;
    cout << "Gecen sure: " << gecen_sure3.count() << " saniye" << endl;

    return 0;
}
