#include <iostream>
using namespace std;
class disarisi{
private:
    int x;
public:

    void setDisari(double sayi);
    void getDisari();

class icerisi{
private:
    int y;
public:
    void setIceri(double sayi2);
    void getIceri();
};
};
void disarisi::setDisari(double sayi) {
    x=sayi;
}

void disarisi::icerisi::setIceri(double sayi2) {
    y=sayi2;
}
void disarisi::getDisari() {
    cout<<"dış degeri : "<<x<<endl;
}


void disarisi::icerisi::getIceri() {
    cout<<"ic degeri  : "<<y<<endl;
}

int main() {
    int say1,say2;
    cout << "sayi gir :";

    cin >> say1;
    cout << "sayi gir :";
    cin >>say2;
    disarisi distaraf;
    distaraf.setDisari(say1);
    distaraf.getDisari();

    disarisi::icerisi ic;
    ic.setIceri(say2);
    ic.getIceri();

    return 0;
}
