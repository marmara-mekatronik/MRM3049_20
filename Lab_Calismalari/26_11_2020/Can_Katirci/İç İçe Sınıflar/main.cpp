#include <iostream>
using namespace std;

class Dis{
private:
    int x;
public:
    Dis(int );

    class Ic{
    private:
        int y;
    public:
        Ic(int );
        void setIc(int b);
        void getIc();
    };

    void setDis(int a);
    void getDis();
};

Dis::Dis(int n) {
    x=n;
}

Dis::Ic::Ic(int p) {
    y=p;
}

void Dis::setDis(int a){
    cout << "Disari set ediliyor.."<< endl;
    x=a;
}

void Dis::getDis(){
    cout << "Disari'nin degeri: "<< x << endl;
}

void Dis::Ic::setIc(int b){
    cout << "Iceri set ediliyor.."<< endl;
    y=b;
}

void Dis::Ic::getIc(){
    cout << "Iceri'nin degeri: " << y << endl;
}

int main() {
    Dis distaraf(2);
    Dis::Ic ictaraf(7);

    distaraf.getDis();
    distaraf.setDis(10);
    distaraf.getDis();

    ictaraf.getIc();
    ictaraf.setIc(20);
    ictaraf.getIc();

    return 0;
}
