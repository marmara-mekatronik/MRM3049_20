#include <iostream>

using namespace::std;
class Boyutlar{
public:
    void setGenislik(int g);
    void setYukseklik(int y);
    void setDerinlik (int d);


protected:
    int genislik, yukseklik, derinlik;
};

void Boyutlar::setGenislik(int g) {
    genislik=g;
}
void Boyutlar::setYukseklik(int y) {
    yukseklik=y;
}
void Boyutlar::setDerinlik(int d) {
    derinlik=d;
}

class Piramit: public Boyutlar {
public:
    int getHacim(){
        return (genislik * yukseklik* derinlik /3 );
    }
    Piramit operator+(const Piramit& b){
        Piramit pir1;
        pir1.derinlik=this->derinlik + b.derinlik;
        pir1.genislik=this->genislik + b.genislik;
        pir1.yukseklik= this->yukseklik + b.yukseklik;
        return pir1;
    }
};

int main() {
    Piramit Pir1;
    Pir1.setGenislik(5);
    Pir1.setYukseklik(15);
    Pir1.setDerinlik(20);
    Piramit Pir2;
    Pir2.setGenislik(10);
    Pir2.setYukseklik(15);
    Pir2.setDerinlik(20);
    Piramit Pir3;
    int hacim = 0;
    Pir3 = Pir1 + Pir2;
    hacim = Pir3.getHacim();

    cout << "Piramit3 hacimi : " << hacim << endl;
    return 0;

}
