#include <iostream>

using namespace std;

class pc{
private:
    int ram;
public:
    pc(int ram=0);
    void setRam(int ram);
    void karsilastir(pc bilgisayar);
};

pc::pc(int ram) {
    this->ram = ram;
}

void pc::setRam(int ram) {
    this->ram = ram;
}

void pc::karsilastir(pc bilgisayar) {
    if(this->ram > bilgisayar.ram)
        cout << "1. bilgisayarin ram kapasitesi daha fazladir : " << this->ram << endl;
    else
        cout << "2. bilgisayarin ram kapasitesi daha fazladir : " << bilgisayar.ram << endl;
}


int main(){

    pc bilgisayar1(5);
    pc bilgisayar2;

    bilgisayar1.karsilastir(bilgisayar2);

    bilgisayar2.setRam(10);
    bilgisayar1.karsilastir(bilgisayar2);

    return 0;
}
