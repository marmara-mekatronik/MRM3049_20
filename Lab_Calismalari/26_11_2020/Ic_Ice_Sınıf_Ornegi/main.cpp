#include <iostream>
using namespace std;

class Disarisi {
private:
    int x;
public:
    Disarisi();
    void setDeger1(double Gdeger1);
    double getDeger1();

    class Icerisi {
    private:
        int y;
    public:
        Icerisi();
        void setDeger(int gDeger);
        double getDeger();
    };
};
Disarisi::Disarisi() {
    x = 5;
}

Disarisi::Icerisi::Icerisi() {
    y = 10;
}

void Disarisi::setDeger1(double Gdeger1) {
    Gdeger1 = x;
}

double Disarisi::getDeger1(){
    return x;

}

void Disarisi::Icerisi::setDeger(int gDeger) {
    gDeger = y;
}
double Disarisi::Icerisi::getDeger() {
    return y;
}
int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;
    cout << "y:" << ictaraf.getDeger() << endl;
    cout << "x:" << distaraf.getDeger1() << endl;


    return 0;
}
