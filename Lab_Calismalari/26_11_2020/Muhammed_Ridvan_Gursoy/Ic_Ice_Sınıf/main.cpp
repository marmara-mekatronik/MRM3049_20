#include <iostream>
using namespace std;

class Ev{
private:
    int evmetre;
public:
    void setEv(int boyut);
    void getEv();

class Salon{
private:
    int salonmetre;
public:
    void setSalon(int boyut2);
    void getSalon();
    };
};

void Ev::setEv(int boyut) {
    evmetre=boyut;
}
void Ev::getEv(){
    cout<<"Evin metresi= " << evmetre << endl;
}

void Ev::Salon::setSalon(int boyut2) {
    salonmetre=boyut2;
}

void Ev::Salon::getSalon() {
   cout<<"Salonun metresi= " << salonmetre << endl;
}



int main() {
    Ev evinboyutu;
    evinboyutu.setEv(100);
    evinboyutu.getEv();


    Ev::Salon salonboyutu;
    salonboyutu.setSalon(45);
    salonboyutu.getSalon();

    return 0;
}
