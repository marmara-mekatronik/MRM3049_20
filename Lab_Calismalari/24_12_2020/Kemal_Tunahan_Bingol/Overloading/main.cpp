#include <iostream>
using namespace std;

class Canli{
protected:
    int yas;
public:
    Canli(){}
    Canli(int a){
        yas = a;
    }
    void yasgoster(void);
    Canli operator+(Canli& b){
        Canli canli;
        canli.yas = this->yas + b.yas;
        return canli;
    }
};

class Insan: public Canli{
public:
    Insan(){}
    Insan(int a){
        yas = a;
    }
    Insan operator++(){
        yas++;
    }
};
void Canli::yasgoster() {
    cout << "Yas : " << yas << endl;
}

int main() {
    //canli1
    Canli canli(10);
    canli.yasgoster();

    //canli2
    Canli canli2(25);
    canli2.yasgoster();

    //canli3; canli1 ile canli2 nin toplamı
    Canli canli3;
    canli3 = canli + canli2;
    canli3.yasgoster();

    //insan sınıfı canlı sınıfını inherit ediyor
    Insan insan(6);
    insan.yasgoster();

    //insan sınıfının içindeki operator calısıyor
    ++insan;
    insan.yasgoster();

    return 0;
}
