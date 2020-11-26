#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi();
    };
};
Disarisi::Disarisi() {
    x=5;
}

Disarisi::Icerisi::Icerisi() {
    y=10;
}

int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;

    return 0;
}
