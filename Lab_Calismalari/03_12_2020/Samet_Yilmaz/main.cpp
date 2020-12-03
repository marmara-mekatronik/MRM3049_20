#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>

using namespace std;

void alan();
inline void alan_inline();

void alan()
{
    int h;
    double alan;
    cout << "Eskenar ucgenin yuksekligini giriniz: ";
    cin >> h;

    alan = h * h * sqrt(3.0) / 4;

    cout << "Ucgenin alani: " << alan;
}

void alan_inline()
{
    int h;
    double alan;
    cout << "Eskenar ucgenin yuksekligini giriniz: ";
    cin >> h;

    alan = h * h * sqrt(3.0) / 4;

    cout << "Ucgenin alani: " << alan;
}

int main()
{
    chrono::time_point<chrono::system_clock> d_basla, d_son;
    d_basla = chrono::system_clock::now();

    //alan();
    //alan_inline();

    d_son = chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

    cout << "Baslangic Zamani :" << ctime(&baslangic_zamani) << endl;
    cout << "Bitis Zamani :" << ctime(&bitis_zamani) << endl;
    cout << "Gecen Süre :" << gecen_zaman.count() << " saniyedir" << endl;
    return 0;
}
