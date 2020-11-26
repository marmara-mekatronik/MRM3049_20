#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi(int a);
    void getDisarisi();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi(int s);
        void getIcerisi();
    };
};
Disarisi::Disarisi(int a) {
    x=a;
}

Disarisi::Icerisi::Icerisi(int b) {
    y=b;
}

void Disarisi::getDisarisi(){
    cout <<x<<endl;
}

void Disarisi::Icerisi::getIcerisi(){
    cout <<y<<endl;
}


int main() {
    Disarisi distaraf(4);
    Disarisi::Icerisi ictaraf(5);

    distaraf.getDisarisi();
    ictaraf.getIcerisi();


    return 0;
}
