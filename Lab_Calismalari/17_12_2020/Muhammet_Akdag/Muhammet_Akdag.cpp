#include <iostream>

using namespace std;
class Masaustu_Bilgisayar{
protected:
         double fiyat;
         int modelYili;
         double Ram_Kapasitesi;
         double CPU_Ghz;
         double HDD_Kapasitesi;
public:
         Masaustu_Bilgisayar(double _f=2789.99, int _y=2016,double _R=8,double _C=3.5,double _H=500);
         void setFiyat(double f);
         void setModel(int y);
         void setRam (double R);
         void setCPU(double C);
         void setHDD(double H);
         double getBilgiler1();


};

void Masaustu_Bilgisayar::setFiyat(double f){
fiyat=f;}
void Masaustu_Bilgisayar::setModel(int y){
modelYili=y;}
void Masaustu_Bilgisayar::setRam(double R){
Ram_Kapasitesi=R;}
void Masaustu_Bilgisayar::setCPU(double C){
CPU_Ghz=C;}
void Masaustu_Bilgisayar::setHDD(double H){
HDD_Kapasitesi=H;}

Masaustu_Bilgisayar::Masaustu_Bilgisayar(double _f, int _y,double _R,double _C,double _H){
fiyat=_f;
modelYili=_y;
Ram_Kapasitesi=_R;
CPU_Ghz=_C;
HDD_Kapasitesi=_H;

}
double Masaustu_Bilgisayar::getBilgiler1(){

cout<<"Fiyati: "<<fiyat<<"Tl"<<endl;
cout<<"Model yili: "<<modelYili<<endl;
cout<<"Ram Kapasitesi: "<<Ram_Kapasitesi<<"GB"<<endl;
cout<<"CPU Hizi: "<<CPU_Ghz<<"Ghz"<<endl;
cout<<"HDD Kapasitesi: "<<HDD_Kapasitesi<<"GB"<<endl;
}

class Laptop: public Masaustu_Bilgisayar{
public:
         Laptop(double _fiyat, int _yil,double _RAM,double _CPU,double _HDD);
         double getBilgiler2();

};


Laptop::Laptop(double _fiyat, int _yil,double _RAM,double _CPU,double _HDD){
fiyat=_fiyat;
modelYili=_yil;
Ram_Kapasitesi=_RAM;
CPU_Ghz=_CPU;
HDD_Kapasitesi=_HDD;}

double Laptop::getBilgiler2(){
cout<<"Fiyati: "<<fiyat<<"Tl"<<endl;
cout<<"Model yili: "<<modelYili<<endl;
cout<<"Ram Kapasitesi: "<<Ram_Kapasitesi<<"GB"<<endl;
cout<<"CPU Hizi: "<<CPU_Ghz<<"Ghz"<<endl;
cout<<"HDD Kapasitesi: "<<HDD_Kapasitesi<<"GB"<<endl;
}

int main()
{
     Masaustu_Bilgisayar pc1;
    Laptop pc2(5399.7,2018,8,3.5,888);
    cout <<"1. Bilgisayarin Bilgileri"<<endl;
    cout << pc1.getBilgiler1()<<endl;
    cout <<"------------------------------------------------------"<<endl;
    cout <<"2. Bilgisayarin Bilgileri"<<endl;
    cout <<  pc2.getBilgiler2()<<endl;



    return 0;
}
