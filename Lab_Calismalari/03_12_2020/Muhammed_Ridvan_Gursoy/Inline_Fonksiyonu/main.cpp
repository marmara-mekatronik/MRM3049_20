#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

inline int islem_inline(int a, int b, int c);

int islem_inline(int a, int b , int c){
    return ((a-c)+b)*(b);

}


int main()
{
    chrono::time_point<chrono::system_clock> d_basla , d_son;
    d_basla=chrono::system_clock::now();
    for (int a=0; a<8500;a++){
        for(int b=0;b<2000;b++){
            for(int c=0;c<1250;c--){

            islem_inline(a,b,c);

            }
        }
    }
    d_son=chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani=chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani=chrono::system_clock::to_time_t(d_son);

    cout<< "Baslangic Zamani: " << ctime(&baslangic_zamani) << endl;
    cout<< "Bitis Zamani: " << ctime(&bitis_zamani) << endl;
    cout<< "Gecen Sure: " << gecen_zaman.count() << "saniyedir" << endl;
    return 0;
}
