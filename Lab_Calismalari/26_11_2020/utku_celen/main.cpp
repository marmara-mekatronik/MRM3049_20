#include <iostream>
using namespace std;

class Disar{
private:
    int x;
public:
    Disar(int );
    void setDeg(int );
    int getDeg(void);

    class Icer{
    private:
        int y;
    public:
        Icer(int );
        void setDeg(int );
        int getDeg(void);
    };
};
Disar::Disar(int t) {
    x=t;
}

Disar::Icer::Icer(int r) {
    y=r;
}

void Disar::setDeg(int a) {
    x = a;
}

int Disar::getDeg(void) {
    cout << "x:" << x << endl;
}

void Disar::Icerisi::setDeg(int a) {
    y = a;
}

int Disar::Icer::getDeg() {
    cout << "y:" << y << endl;
}

int main() {
    Disar distaraf(20);
    Disar::Icer ictaraf(30);

    distaraf.getDeg();
    distaraf.setDeg(200);
    distaraf.getDeg();

    ictaraf.getDeg();
    ictaraf.setDeg(300);
    ictaraf.getDeg();

    return 0;
