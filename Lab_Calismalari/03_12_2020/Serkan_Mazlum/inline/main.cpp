#include<iostream>
#include <ctime>
#include<chrono>
using namespace std;
inline int carp(int,int);
int carp(int a ,int b ){
    return a*b;
}
#define carpma(c,d)(c*d)
int main(){
    chrono :: time_point<chrono :: system_clock> ilk ,son;
    ilk = chrono ::system_clock :: now();
    int b = 0;
    for(int a =0;a<85020000;a++){
        while(b<850200000){
            carp(a,b);
            b++;
        }
    }
    son = chrono ::system_clock::now;
    chrono :: duration<double> fark = son-ilk;
    time_t baslaZ= chrono ::system_clock::to_time_t(ilk);
    time_t bitisZ=chrono :: system_clock::to_time_t(son);
    cout << "Baslangıc : "<<ctime(&baslaZ)<<endl;
    cout << "Bitiş :"<<ctime(&bitisZ)<<endl;
    cout << "Gecen zaman : "<<fark.cout()<<"saniye" <<endl;




    return 0;
}
