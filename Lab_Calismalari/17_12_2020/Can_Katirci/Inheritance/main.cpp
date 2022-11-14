#include <iostream>

using namespace std;

class Birey {
public:
    void setBoy(float b);
    void setKilo(float k);

protected:
    float boy, kilo;
};

void Birey::setBoy(float b) {
    boy=b;
}

void Birey::setKilo(float k) {
    kilo=k;
}

class VucutKitleIndeksi: public Birey {
public:
    float getIndeks(){
        return ( kilo / (boy*boy) );
    }
};

int main() {
    
    float indeks;
    
    VucutKitleIndeksi birey1;
    
    birey1.setBoy(1.70);
    birey1.setKilo(60);
    
    indeks = birey1.getIndeks();

    cout << "Bireyin Vucut Kitle Indeksi = " << indeks << endl;

    if (indeks < 18.5) {
        cout << "Birey normal kilosunun altindadir." ;
    }

    else if (indeks >= 18.5 && indeks <= 24.9)  {
        cout << "Birey ideal kilosundadir." ;
    }

    else if (indeks > 24.9 && indeks <= 29.9)  {
        cout << "Birey ideal kilosunun ustundedir." ;
    }

    else if (indeks >=30 )  {
        cout << "Birey obez sinifindadir. Lutfen hastaneye basvurunuz." ;
    }


    return 0;
}
