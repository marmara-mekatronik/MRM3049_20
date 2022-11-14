#include <iostream>

using namespace std;
class muhendis {
public:
    muhendis (string a="Selim", string s="Eminoglu", int y=21,string m="Yonetici");
    double mevki_sirasi();
    int karsilastir (muhendis muhendis);
    string Ad(){return ad;}
    string Soyad(){return soyad;}
    int Yas(){return yas;}
    string Mevki(){return mevki;}
private:
    string ad;
    string soyad;
    int yas;
    string mevki;
};
muhendis::muhendis(string a, string s, int y,string m) {
    ad = a;
    soyad= s;
    yas = y;
    mevki =m;
}

double muhendis::mevki_sirasi() {
    double b;
    if (mevki=="Yonetici"){
        return b=4;
    }
    else if (mevki=="Asistan"){
        return b=3;
    }
    else if (mevki=="Eleman"){
        return b=2;
    }
    else {
        return b=1;
    }
}
int muhendis::karsilastir(muhendis muhendis) {
    return this->mevki_sirasi() > muhendis.mevki_sirasi();
}

int main() {
    muhendis muhendis0;
    muhendis muhendis1("Ali","Varol",34,"Asistan");

    if(muhendis0.karsilastir(muhendis1))
    {
        cout <<muhendis0.Ad()<<","<<muhendis1.Ad()<<"'den mevki olarak usttur"<< endl;
    } else {
        cout <<muhendis1.Ad()<<","<<muhendis0.Ad()<<"'den mevki olarak usttur"<< endl;
    }

}
