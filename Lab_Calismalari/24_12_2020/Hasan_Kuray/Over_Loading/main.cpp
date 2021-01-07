#include <iostream>
using namespace std;

class tarih{
protected:
    string aylar[13]={"","ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
    int ay;
    int yil;
    int gun;
public:

    void goster(){
        cout << gun << " : " << aylar[ay] << " : " << yil << endl;
    }

};

class hesapla : public tarih{
public:
    hesapla(int g,int a, int y){
        gun = g;
        ay = a;
        yil = y;
    }
    hesapla operator++(){
        gun++;
        if(gun==31){
            ay++;
            gun = 1;
        }
        if(ay == 13){
            yil++;
            ay = 1;
        }
        return hesapla(gun,ay,yil);
    }
};

int main(){

    hesapla trh1(29,12,2020);
    trh1.goster();
    ++trh1;
    ++trh1;
    trh1.goster();
    return 0;
}
