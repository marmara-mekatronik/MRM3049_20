#include <iostream>
#include <iomanip>
using namespace std;
class Zaman{
public:
    void gosterZaman();
    Zaman(){
        saat=0;
        dakika=0;
    }
    Zaman(int s, int d){
        saat = s;
        dakika = d;
    }
    Zaman operator++(){
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Zaman(saat, dakika);
    }
    Zaman operator++(int){
        Zaman Z(saat,dakika);
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Z;
    }

private:
    int saat;
    int dakika;
};

void Zaman::gosterZaman() {
    cout << setw(2) << setfill('0')<< saat << " : " << setw(2) << setfill('0') << dakika << endl;
// setw(2) << setfill('0') ifadesi 00:00 daki dijiti gösterebilmek için yazıldı
}

int main() {
    Zaman Z1(01,59);
    Z1.gosterZaman();
    Zaman Z2(10,40);
    Z2.gosterZaman();
    ++Z1;
    Z1.gosterZaman();
    ++Z1;
    Z1.gosterZaman();

    cout<<"_____________________" << endl;

    Z2++;
    Z2.gosterZaman();
    Z2++;
    Z2.gosterZaman();

    return 0;
}
