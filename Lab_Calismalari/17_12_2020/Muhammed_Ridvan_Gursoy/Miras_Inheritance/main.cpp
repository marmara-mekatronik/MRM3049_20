#include <iostream>

using namespace std;
class AnaKredi{
public:
    AnaKredi(float t=0.0);
    void setMiktar(float t);
protected:
    float miktar;
};
class OgrenciKredisi: public AnaKredi{
public:
    OgrenciKredisi(float t=0.0);
    int getKredi(){
        return miktar+=miktar*0.08;
    }


};

class TarimKredisi: public AnaKredi{
public:
     TarimKredisi(float t=0.0);
    int getKredi(){
        return miktar+=miktar*0.12;
    }

};

class EvKredisi: public AnaKredi{
public:
     EvKredisi(float t=0.0);
    int getKredi(){
        return miktar+=miktar*0.18;
    }

};



void AnaKredi::setMiktar(float t){
    miktar=t;
}

AnaKredi::AnaKredi(float t){
    miktar=t;

}

OgrenciKredisi::OgrenciKredisi(float t){
    miktar=t;
}

TarimKredisi::TarimKredisi(float t){
    miktar=t;
}

EvKredisi::EvKredisi(float t){
    miktar=t;
}


int main()
{
    OgrenciKredisi OgrenciKredisi1;
    TarimKredisi TarimKredisi1;
    EvKredisi EvKredisi1;

    OgrenciKredisi1.setMiktar(4000);
    TarimKredisi1.setMiktar(4000);
    EvKredisi1.setMiktar(4000);

    cout<<"Ogrenci iseniz Ogrenc kredisi icin odemeniz gereken miktar: " <<OgrenciKredisi1.getKredi()<< endl;
    cout<<"Ciftci iseniz tarim kredisi icin odemeniz gereken miktar: " <<TarimKredisi1.getKredi()<< endl;
    cout<<"Ev alacak iseniz Ev Kredisi icin odemeniz miktar: " <<EvKredisi1.getKredi()<< endl;
    return 0;
}
