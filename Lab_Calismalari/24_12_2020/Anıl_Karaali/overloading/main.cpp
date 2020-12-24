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
        return ( yukseklik * genislik * derinlik );
    }
    Bina operator+(const Bina& b) {
        Bina b1;
        b1.yukseklik = this->yukseklik + b.yukseklik;
        b1.genislik = this->genislik + b.genislik;
        b1.derinlik = this->derinlik + b.derinlik;
        
        return b1;
    }
};

int main() {
    Bina b1;
    b1.setYukseklik(20);
    b1.setGenislik(15);
    b1.setDerinlik(10);
    Bina b2;
    b2.setYukseklik(18);
    b2.setGenislik(22);
    b2.setDerinlik(16);
    Bina b3;
    int hacim = 0;
    b3 = b1 + b2;
    hacim = b3.getHacim();

    cout << "b3 hacmi : " << hacim << endl;
    return 0;

}
