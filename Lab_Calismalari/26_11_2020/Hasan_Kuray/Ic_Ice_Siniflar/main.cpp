#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;

public:
    Disarisi(int a);
    int getX();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi(int a);
        int getY();
    };
};

int Disarisi::Icerisi::getY()  {
    return y;
}
int Disarisi::getX()  {
    return x;
}

Disarisi::Disarisi(int a) {
    x=a;
}

Disarisi::Icerisi::Icerisi(int a) {
    y=a;
}



int main() {
    Disarisi distaraf(10);
    Disarisi::Icerisi ictaraf(20);

    distaraf.getX();
    ictaraf.getY();

    return 0;
}
