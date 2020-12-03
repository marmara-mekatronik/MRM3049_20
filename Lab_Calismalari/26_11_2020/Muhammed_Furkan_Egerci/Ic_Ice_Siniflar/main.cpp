#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi();
   void setDegisken1(int degisken1);
   double getDegisken1(void);
    class Icerisi{
    private:
        int y;
    public:
        Icerisi();
        void setDegisken2(int degisken2);
        double getDegisken2(void);
       
    };
};


Disarisi::Disarisi() {
    x=5;
}

Disarisi::Icerisi::Icerisi() {
    y=10;
}

void Disarisi::Disarisi::setDegisken1(int degisken1){
	x=degisken1;
}

void Disarisi::Icerisi::Icerisi:: setDegisken2(int degisken2){
	y=degisken2;
}

double Disarisi::Disarisi::getDegisken1() {
    return x;
}
double Disarisi::Icerisi::Icerisi::getDegisken2() {
    return y;
}

int main() {
	
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;
    cout << "Degisken1 : " <<distaraf.getDegisken1();
    cout << "\nDegisken2 : " << ictaraf.getDegisken2();
    distaraf.setDegisken1(40);
    ictaraf.setDegisken2(30);
    cout<<"\n-------Set Edildikten Sonra-------";
    cout << "\nDegisken1 : " <<distaraf.getDegisken1();
    cout << "\nDegisken2 : " << ictaraf.getDegisken2();
	
return 0;
}

