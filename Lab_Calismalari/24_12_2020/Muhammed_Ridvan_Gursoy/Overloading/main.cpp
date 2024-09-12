#include <iostream>

using namespace::std;
class Sekil{
public:
    int getAlan();
    void setTaban(int t);
    void setYukseklik(int y);
    Sekil operator+(const Sekil& b){
        Sekil sekil1;
        sekil1.taban=this->taban + b.taban;
        sekil1.yukseklik= this->yukseklik + b.yukseklik;
        return sekil1;
    }
protected:
    int taban, yukseklik;
};

int Sekil::getAlan() {
    return taban*yukseklik;
}
void Sekil::setYukseklik(int y) {
    yukseklik=y;
}
void Sekil::setTaban(int t) {
    taban=t;
}

class Dikdortgen: public Sekil{
public:
    getAlan(){
    return taban*yukseklik;
    }

};

class Ucgen: public Sekil{
public:
    getAlan(){
    return ((taban*yukseklik)/2);
    }
};



int main() {
    Dikdortgen dik;
    Ucgen ucgen;
    Sekil sekil;

    int alan=0;

    dik.setTaban(5);
    dik.setYukseklik(10);

    alan=dik.getAlan();
    cout << "Dikdortgenin alani : " << alan << endl;

    ucgen.setTaban(10);
    ucgen.setYukseklik(7);

    alan=ucgen.getAlan();
    cout << "Ucgenin alani : " << alan << endl;

    sekil= dik+ucgen;
    alan=sekil.getAlan();
    cout << "Toplam seklin alani : " << alan << endl;



    return 0;
}
