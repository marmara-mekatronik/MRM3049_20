#include <iostream>
using namespace std;
class Time {

private:
    int Saniye;
    int Dakika;
    int Saat;
public:
    int saniye() {return Saniye;}
    int dakika() {return Dakika;}
    int saat() {return Saat;}
    bool ayarla (int s, int d, int h);

};

bool Time::ayarla (int h, int d, int s) {
    if((s<0)||(s>59)) return false;
    if((d<0)||(d>59)) return false;
    if((h<15)||(h>23)) return false; //15:00'dan önce akşam yemeği girdisi girilmemesi için.
    if ((h>17)) cout << "!!UYARI!! \n SAAT 18'DEN SONRA YEMEK YEMEK SAĞLIĞA ZARARLIDIR!" << endl;
    Saniye = s;
    Dakika = d;
    Saat = h;

    return true;
    }






int main() {
    Time aksam;
    Time yemekler[5];
    Time *oan;

    oan = &aksam;

    aksam.ayarla(23,25,36);
    cout << "Akşam Yemeği Saatiniz: "
    << aksam.saat() << ":"
    << aksam.dakika() << ":"
    << aksam.saniye() << endl;

    cout << "................." << endl;

    yemekler[0].ayarla(17, 26,30);
    cout << "Akşam Yemeği Saatiniz: "
    << yemekler[0].saat() << ":"
    << yemekler[0].dakika() <<  ":"
    << yemekler[0].saniye() << endl;




    return 0;
}
