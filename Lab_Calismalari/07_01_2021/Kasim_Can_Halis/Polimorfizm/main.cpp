#include <iostream>
using namespace std;

class araba{
public:
    virtual string ozellik(){
        return ("Standart araba...");
    }
};

class SUV:public araba{
public:
    string ozellik() override{
        return ("SUV, standart arabadan daha yüksektir...");
    }
};

class yarisarabasi:public araba{
public:
    string ozellik() override{
        return ("Yaris arabası, standart arabadan daha hızlıdır...");
    }
};

int main() {
    araba *arabalar[3];

    arabalar[0] = new araba();
    arabalar[1] = new SUV();
    arabalar[2] = new yarisarabasi();

    for ( int i=0; i<3; i++){
        cout << arabalar[i]->ozellik() << endl;
    }
    return 0;
}
