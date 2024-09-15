#include <iostream>
//Class Constructor with param

using namespace std;

class kare{
public:
    void setkenar(double kenarUzunluk);
    double getkenar(void);
    kare(double kenarUzunluk);
    ~kare();
private:
    double yaricap;
};

kare::kare(double kenarUzunluk) {
    cout << "Su anda  nesne olusturuluyor" << endl;
    kenar = kenarUzunluk;
    cout << "kare Olusturulurken verilen kenar uzunluğu : " << YaricapUzunluk;
}
kare::~kare() {
    cout << "\nSu anda  nesne kaldiriliyor" << endl;
}

void kare::setkenar(double kenarUzunluk) {
    kenar=kenarUzunluk;
}

double kare::getkenar() {
    return kenar;
}

int main() {
    kare kare_1(8.45);
    kare_1.setkenar(32.5);
    cout << "\n kenar Degeri Degistikden Sonraki Uzunlugu : " << kare_1.getkenar();
    return 0;
}
