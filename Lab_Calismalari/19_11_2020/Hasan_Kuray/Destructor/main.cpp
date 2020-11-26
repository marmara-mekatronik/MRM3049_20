#include <iostream>
using namespace std;

class bilgisayar{
private:
    int ram;
    char *marka;
public:
    bilgisayar(int bellek,char *model);
    ~bilgisayar();
    int getRam();
    void setRam(int pcRam);
    char *getMarka();


};

int bilgisayar::getRam() {
    return ram;
}

void bilgisayar::setRam(int pcRam) {
    ram = pcRam;
}

char* bilgisayar::getMarka() {
    return marka;
}

bilgisayar::bilgisayar(int bellek,char *model){
    ram = bellek;
    marka = model;
}

bilgisayar::~bilgisayar() {
    cout << "Nesne ile isimiz bitti ve nesneyi kaldiriyoruz" << endl;
}

int main() {
    bilgisayar pc(100,"hasan");
    cout << "Bilgisayarin ram degeri: " << pc.getRam() << endl;

    pc.setRam(200);
    cout << "Yeni ram degeri: " << pc.getRam() << endl;

    cout << "Bilgisayarin markasi: " << pc.getMarka() << endl;
    return 0;
}
