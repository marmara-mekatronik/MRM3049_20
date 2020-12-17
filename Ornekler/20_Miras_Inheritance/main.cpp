#include <iostream>

using namespace std;
class Sekil{
public:
    Sekil(int g=1, int y=1);
    void setGenislik(int g);
    void setYukseklik(int y);
protected:
    int genislik, yukseklik;
};
void Sekil::setGenislik(int g) {
    genislik=g;
}
void Sekil::setYukseklik(int y) {
    yukseklik=y;
}
Sekil::Sekil(int g, int y) {
    yukseklik = y;
    genislik=g;
}

class Dikdortgen: public Sekil{
public:
    Dikdortgen(int g=2, int y=3);
    int getAlan(){
        return genislik*yukseklik;
    }
};

Dikdortgen::Dikdortgen(int g, int y) {
    genislik=g;
    yukseklik=y;
}

int main() {
    Dikdortgen Dikdortgen1;
    Dikdortgen1.setYukseklik(10);
    Dikdortgen1.setGenislik(5);
    cout << "Dikdortgenin Alanı : " << Dikdortgen1.getAlan()<< endl;

    return 0;
}
