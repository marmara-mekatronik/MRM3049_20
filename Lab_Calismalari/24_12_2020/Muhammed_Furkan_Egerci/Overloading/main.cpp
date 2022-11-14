#include <iostream>
using namespace std;

class Sekil {
public:
    void setGenislik(double g);
    void setYukseklik(double y);
    void setDerinlik(double d);

protected:
    double genislik, yukseklik, derinlik;
};
void Sekil::setGenislik(double g) {
    genislik = g;
}
void Sekil::setYukseklik(double y) {
    yukseklik=y;
}
void Sekil::setDerinlik(double d) {
    derinlik=d;
}
class Dikdortgen: public Sekil{
public:
    Dikdortgen operator+(const Dikdortgen& b){
        Dikdortgen dikdortgen1;
        dikdortgen1.derinlik= this->derinlik + b.derinlik;
        dikdortgen1.yukseklik= this->yukseklik + b.yukseklik;
        dikdortgen1.genislik= this-> genislik + b.genislik;
        return dikdortgen1;
    }
    double getHacim(){
        return (genislik*yukseklik*derinlik);
    }

};

int main() {

    Dikdortgen dikdortgen1;
    Dikdortgen dikdortgen2;
    Dikdortgen dikdortgen3;

    double hacim =0.0;

    dikdortgen1.setDerinlik(1.45);
    dikdortgen1.setGenislik(3.56);
    dikdortgen1.setYukseklik(5.48);

    hacim=dikdortgen1.getHacim();
    cout<<"1.Dikdotgenin hacimi : "<<hacim<<endl;

    dikdortgen2.setDerinlik(2.45);
    dikdortgen2.setGenislik(1.56);
    dikdortgen2.setYukseklik(9.48);

    hacim=dikdortgen2.getHacim();
    cout<<"2.Dikdotgenin hacimi: "<<hacim<<endl;

    dikdortgen3 = dikdortgen1 + dikdortgen2;
    hacim=dikdortgen3.getHacim();
    cout<<"3.Dikdotgenin hacimi: "<<hacim<<endl;




    return 0;
}
