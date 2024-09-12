#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int islem(int k, int c);
inline int islem_inline(int k, int c);

int islem(int k, int c){
return ((k+c)*(k-c))/2;
}

int islem_inline(int k, int c){
return ((k+c)*(k-c))/2;
}

int main()
{
    chrono::time_point<chrono::system_clock> d_basla, d_son;
    d_basla = chrono::system_clock::now();
    for(int i=0; i<15000; ++i){
        for(int j=0; j<15000; ++j){
            islem_inline(i,j);   // islem_inline , islem'e gore daha kisa suruyor.
            //islem(i,j);
        }
    }
    d_son = chrono::system_clock::now();

chrono::duration<double> gecen_zaman = d_son - d_basla;
time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

cout << "Baslangic zamani: " << ctime(&baslangic_zamani) << endl;
cout << "Bitis zamani: " << ctime(&bitis_zamani) << endl;
cout << "Gecen sure: " << gecen_zaman.count() << " saniyedir." << endl;


    return 0;
}
