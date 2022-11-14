#include <iostream>

using namespace std;

class Futbolcu{
public:
    virtual string piyasadegeri(){
        return "Piyasa Degerleri";
    }
};

class GOAT: public Futbolcu {
public:
    string piyasadegeri()  {
        return "Leo Messi: Priceless";
    }
};

class CR7:public Futbolcu{
public:
    string piyasadegeri() {
        return "Cristiano Ronaldo: Priceless";
    }
};

class Mbappe:public Futbolcu{
public:
    string piyasadegeri() {
        return "Kylian Mbappe: 180 milyon euro";
    }
};

class Neymar:public Futbolcu{
public:
    string piyasadegeri() {
        return "Neymar: 128 milyon euro";
    }
};

class Mane:public Futbolcu{
public:
    string piyasadegeri() {
        return "Sadio Mane: 120 milyon euro";
    }
};

int main() {

    Futbolcu *ptrDiziFutbolcu[5];
    ptrDiziFutbolcu[0]=new GOAT();
    ptrDiziFutbolcu[1]=new CR7();
    ptrDiziFutbolcu[2]=new Mbappe();
    ptrDiziFutbolcu[3]=new Neymar();
    ptrDiziFutbolcu[4]=new Mane();

    for(int i=0;i<5;++i){
        cout<< ptrDiziFutbolcu[i]->piyasadegeri()<< endl;
    }

    return 0;
}
