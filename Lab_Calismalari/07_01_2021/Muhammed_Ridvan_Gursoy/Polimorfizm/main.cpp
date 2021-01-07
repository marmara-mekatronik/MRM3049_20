#include <iostream>
using namespace std;


class Kredi{
public:
    virtual string almak(){
        return "Almak";
    }
};


class Ogrenci: public Kredi{
public:
    string almak() override{
        return "Ogrenci olarak alabileceginiz kredi 1400 TL' dir.";
    }
};


class Tarim: public Kredi{
public:
    string almak() override{
        return "Ciftci olarak alabileceginiz kredi 10000 TL' dir. ";
    }
};


class Ev: public Kredi{
public:
    string almak()override{
        return "Ev satin alabilmeniz icin alabileceginiz kredi 50000 TL' dir.";
    }
};


int main() {

Kredi *ptrKrediDizi[3];
ptrKrediDizi[0]=new Ogrenci();
ptrKrediDizi[1]=new Tarim();
ptrKrediDizi[2]=new Ev();


for (int k = 0; k < 3; k++) {
    cout<< ptrKrediDizi[k]->almak() << endl;
    }
    return 0;
}
