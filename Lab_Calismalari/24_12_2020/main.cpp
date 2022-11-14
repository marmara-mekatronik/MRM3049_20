#include <iostream>

using namespace::std;
class Boyut_ayarla {
public:
    
    void setYukseklik(int y);
    void setGenislik(int g);
    void setDerinlik(int d);

protected:
    int genislik, yukseklik, derinlik;
};


void Boyut_ayarla::setYukseklik(int y) {
    yukseklik = y;
}
void Boyut_ayarla::setGenislik(int g) {
    genislik = g;
}
void Boyut_ayarla::setDerinlik(int d) {
    derinlik = d;
}

class Bina : public Boyut_ayarla {
public:
    int getHacim() {
        return ( (yukseklik * genislik * derinlik)/4 );
    }
    Bina operator+(const Bina& b) {
        Bina b1;
        b1.derinlik = this->derinlik + b.derinlik;
        b1.genislik = this->genislik + b.genislik;
        b1.yukseklik = this->yukseklik + b.yukseklik;
        return b1;
    }
};

int main() {
    Bina b1;
    b1.setGenislik(4);
    b1.setYukseklik(16);
    b1.setDerinlik(20);
    Bina b2;
    b2.setGenislik(12);
    b2.setYukseklik(16);
    b2.setDerinlik(20);
    Bina b3;
    int hacim = 0;
    b3 = b1 + b2;
    hacim = b3.getHacim();

    cout << "4 kolon üstünde duran b3 basıncı : " << hacim << endl;
    return 0;

}
