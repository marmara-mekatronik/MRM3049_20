#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    void setDisari(double deger);
    void getDisari();

    class Icerisi{
    private:
        int y;
    public:
        void setIceri(double deger2);
        void getIceri();
    };
};

void Disarisi::setDisari(double deger) {
    x=deger;
}
void Disarisi::getDisari() {
    cout<<"Disarisinin degeri : "<<x<<endl;
}

void Disarisi::Icerisi::setIceri(double deger2) {
    y=deger2;
}
void Disarisi::Icerisi::getIceri() {
    cout<<"Icerisinin degeri : "<<y<<endl;
}

int main() {
    Disarisi distaraf;
    distaraf.setDisari(75);
    distaraf.getDisari();

    Disarisi::Icerisi ictaraf;
    ictaraf.setIceri(25);
    ictaraf.getIceri();

    return 0;
}
