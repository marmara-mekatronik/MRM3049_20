#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
class Zaman{
public:
    void gosterZaman();
    Zaman(){
        saat=0; dakika=0;
    }
    Zaman(int s, int d){
        saat=s; dakika=d;
    }
    Zaman operator++(){
      ++dakika;
      if(dakika>=60){
          ++saat;
          dakika-=60;
      }
        return Zaman(saat,dakika);
    }
private:
    int saat, dakika;
};
void Zaman::gosterZaman() {
    cout << setw(2) << setfill('0')<< saat << " : " << setw(2)
    << setfill('0') << dakika <<  "\r";
}
int main() {
    Zaman Z1(01,59);

    for (int i = 0; i < 120; ++i) {
        ++Z1;
        Z1.gosterZaman();
        Sleep(100);
    }
    return 0;
}
