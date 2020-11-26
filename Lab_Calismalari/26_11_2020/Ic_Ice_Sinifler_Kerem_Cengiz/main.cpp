#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    void setDisari(int X);
    void getDisari();

    class Icerisi{
    private:
        int y;
    public:
        void setIceri(int Y);
        void getIceri();
    };
};

void Disarisi::setDisari(int X) {
    x=X;
}
void Disarisi::getDisari() {
    cout<<"Disarinin degeri : "<<x<<endl;
}

void Disarisi::Icerisi::setIceri(int Y) {
    y=Y;
}
void Disarisi::Icerisi::getIceri() {
    cout<<"Icerinin degeri : "<<y<<endl;
}

int main() {
    Disarisi distaraf;
    distaraf.setDisari(57);
    distaraf.getDisari();

    Disarisi::Icerisi ictaraf;
    ictaraf.setIceri(34);
    ictaraf.getIceri();

    return 0;
}
