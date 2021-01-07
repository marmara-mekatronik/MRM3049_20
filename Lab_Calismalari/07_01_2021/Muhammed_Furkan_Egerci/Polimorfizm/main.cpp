#include <iostream>
using namespace std;

class Tasit{
public:
    virtual string ozellik(){
        return "Ulasim araci genel ismi.";
    }
};

class Otomobil: public Tasit{
public:
    string ozellik() override{
        return "Kisisel ulasim aracidir.";
    }
};

class Otobus: public Tasit{
public:
    string ozellik() override{
        return "Toplu ulasim aracidir.";
    }
};

class Ucak: public Tasit{
public:
    string ozellik()override{
        return "Diger ulasim Araclarindan daha hizlidir.";
    }
};
int main() {

    Tasit *ptrDiziTasit[3];
    ptrDiziTasit[0]=new Otomobil();
    ptrDiziTasit[1]=new Otobus();
    ptrDiziTasit[2]=new Ucak();

    for (int i = 0; i < 3; ++i) {
        cout<< ptrDiziTasit[i]->ozellik() << endl;
    }
    return 0;
}
