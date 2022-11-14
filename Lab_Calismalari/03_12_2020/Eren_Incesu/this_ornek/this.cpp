#include <iostream>

using namespace std;

class Arazi{
public:
    Arazi(double e=10,double b=15);
    double alan();
    int Karsilastir (Arazi arazi);

private:
    double en;
    double boy;
};

Arazi::Arazi(double e, double b) {
    cout << "Arazi olusturuluyor..." << endl;
    en = e;
    boy = b;
}

double Arazi::alan() {
    return en*boy;
}

int Arazi::Karsilastir(Arazi arazi) {
    return this->alan() > arazi.alan();
}

int main(){
    Arazi arazi1(10.5,11.9);
    Arazi arazi2(19.4,18.4);

    if (arazi1.Karsilastir(arazi2)){
        cout << "Arazi1 Arazi2den daha buyuktur !" << endl;
    } else {
        cout << "Arazi2 Arazi1den daha buyuktur !" << endl;
    }
    
    return 0;
}
