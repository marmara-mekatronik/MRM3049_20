#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi(int q);
    void getDisarisi();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi(int s);
        void getIcerisi();
    };
};
Disarisi::Disarisi(int q) {
    x=q;
}

Disarisi::Icerisi::Icerisi(int s) {
    y=s;
}

void Disarisi::getDisarisi(){
    cout <<x<<endl;
}

void Disarisi::Icerisi::getIcerisi(){
    cout <<y<<endl;
}


int main() {
    Disarisi distaraf(21);
    Disarisi::Icerisi ictaraf(14);

    distaraf.getDisarisi();
    ictaraf.getIcerisi();


    return 0;
}
