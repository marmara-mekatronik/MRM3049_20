#include <iostream>
//Class Constructor with param

using namespace std;

class Silindir{
public:
    void setYaricap(double YaricapUzunluk);
    double getYaricap(void);
    Silindir(double YaricapUzunluk);
    ~Silindir();
private:
    double yaricap;
};

Silindir::Silindir(double YaricapUzunluk) {
    cout << "Su anda  nesne olusturuluyor" << endl;
    yaricap = YaricapUzunluk;
    cout << "Silindir Olusturulurken verilen Yaricap : " << YaricapUzunluk;
}
Silindir::~Silindir() {
    cout << "\nSu anda  nesne kaldiriliyor" << endl;
}

void Silindir::setYaricap(double YaricapUzunluk) {
    yaricap=YaricapUzunluk;
}

double Silindir::getYaricap() {
    return yaricap;
}

int main() {
    Silindir silindir_1(8.45);
    silindir_1.setYaricap(32.5);
    cout << "\nYaricap Degeri Degistikden Sonraki Uzunlugu : " << silindir_1.getYaricap();
    return 0;
}
