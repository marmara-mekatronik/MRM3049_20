#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int kareAlani(int a);

inline int kareAlani_inline(int a);

int kareAlani(int a){
    return a*a;
}

int kareAlani_inline(int a){
    return a*a;
}

int main() {
    int kenar;
    chrono::time_point<chrono::system_clock> s_ilk,s_son;
    s_ilk = chrono::system_clock::now();
    cout << "Karenin bir kenarini giriniz : " << endl;
    cin >> kenar;
    //kareAlani(kenar);
    kareAlani_inline(kenar);

    //cout << "Karenin alani = " << kareAlani(kenar) << "m^2" << endl;
    cout << "Karenin alani = " << kareAlani_inline(kenar) << " m^2" <<  endl;

    s_son = chrono::system_clock::now();

    chrono::duration<double> gecen_sure = s_son - s_ilk;
    time_t baslama_zamani = chrono::system_clock::to_time_t(s_ilk);
    time_t bitme_zamani = chrono::system_clock::to_time_t(s_son);

    cout << "Baslama zamani  = " << ctime(&baslama_zamani);
    cout << "Bitis zamani  = " << ctime(&bitme_zamani);
    cout << "Gecen sure  = " << gecen_sure.count() << " Saniye cinsinden hesaplanmistir !" << endl;


    return 0;
}

