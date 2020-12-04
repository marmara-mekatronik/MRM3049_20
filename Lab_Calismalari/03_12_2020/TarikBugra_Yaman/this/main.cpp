#include <iostream>
using namespace std;
class GeometikOrtalama {
public:
    double ortalama;
    GeometikOrtalama(double Dizi[5]);
    double OrtalamaHesapla ();
    int karsilastir (GeometikOrtalama GO);

private:
    double e1;
    double e2;
    double e3;
    double e4;
    double e5;
};
GeometikOrtalama::GeometikOrtalama(double *Dizi) {
    e1=Dizi[0];
    e2=Dizi[1];
    e3=Dizi[2];
    e4=Dizi[3];
    e5=Dizi[4];
}

double GeometikOrtalama::OrtalamaHesapla() {
    ortalama= e1*e2*e3*e4*e5;
    return (pow (ortalama,0.2));
}

int GeometikOrtalama::karsilastir(GeometikOrtalama Goo) {

    return this->OrtalamaHesapla() > Goo.OrtalamaHesapla();
}

int main() {
    double dizi1[5];
    double dizi2 [5];

    cout<<"Girilen 2 dizinin geometrik ortalamasinin hangisinin buyuk oldugunu veren program"<<endl;
    cout<<"5 elemanli birinci dizinin elemanlarini giriniz";
    for (int i=0;i<5;i++) {
        cin>>dizi1[i];

    }
    cout<<"5 elemanli ikinci dizinin elemanlarini giriniz";
    for (int j=0;j<5;j++) {
        cin>>dizi2[j];

    }

    GeometikOrtalama Dizi1(dizi1);
    GeometikOrtalama Dizi2 (dizi2);


    if (Dizi1.karsilastir(Dizi2)) {

        cout<<"1. dizinin geometrik ortalamasi daha buyuktur. "<<endl;

    }
    else {
        cout<<"Dizi 2 nin geometrik ortalamasi daha buyuktur. "<<endl;

    }




    return 0;
}
