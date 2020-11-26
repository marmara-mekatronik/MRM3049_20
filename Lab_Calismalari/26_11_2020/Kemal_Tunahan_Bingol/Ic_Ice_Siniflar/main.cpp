#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi(int );
    void setDeger(int );
    int getDeger(void);

    class Icerisi{
    private:
        int y;
    public:
        Icerisi(int );
        void setDeger(int );
        int getDeger(void);
    };
};
Disarisi::Disarisi(int t) {
    x=t;
}

Disarisi::Icerisi::Icerisi(int r) {
    y=r;
}

void Disarisi::setDeger(int a) {
    x = a;
}

int Disarisi::getDeger(void) {
    cout << "x:" << x << endl;
}

void Disarisi::Icerisi::setDeger(int a) {
    y = a;
}

int Disarisi::Icerisi::getDeger() {
    cout << "y:" << y << endl;
}

int main() {
    Disarisi distaraf(10);
    Disarisi::Icerisi ictaraf(15);

    distaraf.getDeger();
    distaraf.setDeger(100);
    distaraf.getDeger();

    ictaraf.getDeger();
    ictaraf.setDeger(150);
    ictaraf.getDeger();

    return 0;
