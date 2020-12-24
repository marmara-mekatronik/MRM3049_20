#include <iostream>

using namespace std;
class Kutu{
public:
    double getHacim();
    void setUzunluk(double uzn);
    void setGenislik(double gen);
    void setYukseklik(double yuk);
    Kutu operator+(const Kutu& b){
        Kutu kutu1;
        kutu1.uzunluk=this->uzunluk + b.uzunluk;
        kutu1.genislik=this->genislik + b.genislik;
        kutu1.yukseklik= this->yukseklik + b.yukseklik;
        return kutu1;
    }

private:
    double uzunluk, genislik, yukseklik;
};

double Kutu::getHacim() {
    return uzunluk*genislik*yukseklik;
}
void Kutu::setYukseklik(double yuk) {
    yukseklik=yuk;
}
void Kutu::setGenislik(double gen) {
    genislik=gen;
}
void Kutu::setUzunluk(double uzn) {
    uzunluk=uzn;
}

int main() {
    Kutu kutu1;
    Kutu kutu2;
    Kutu kutu3;

   double hacim=0.00;

    kutu1.setUzunluk(1.10);
    kutu1.setGenislik(1.20);
    kutu1.setYukseklik(1.30);

    hacim = kutu1.getHacim();
    cout << "Kutu 1'in hacmi : " << hacim << endl;

    kutu2.setUzunluk(2.10);
    kutu2.setGenislik(2.20);
    kutu2.setYukseklik(2.30);

    hacim = kutu2.getHacim();
    cout << "Kutu 2'in hacmi : " << hacim << endl;

    kutu3 =  kutu1 + kutu2;
    hacim = kutu3.getHacim();
    cout << "Kutu 3'in hacmi : " << hacim << endl;

    return 0;
}
