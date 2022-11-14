#include <iostream>

using namespace std;

class Dikdortgen{
public:
    void setKisakenar(double dikdortgenKisakenar);
    void setUzunkenar(double dikdortgenUzunkenar);

    double getKisakenar(void);
    double getUzunkenar(void);

    Dikdortgen(double dikdortgenKisakenar, double dikdortgenUzunkenar);
    ~Dikdortgen();

private:
    double kisakenar;
    double uzunkenar;

};

Dikdortgen::Dikdortgen(double dikdortgenKisakenar, double dikdortgenUzunkenar) {
    cout << "Su anda  nesne olusturuluyor" << endl;
    kisakenar = dikdortgenKisakenar;
    uzunkenar = dikdortgenUzunkenar;
    cout << "Dikdortgen Olusturulurken verilen kisakenar : " << dikdortgenKisakenar;
    cout << "\nCizginin Olusturulurken verilen Uzunluk : " << dikdortgenUzunkenar;

}
Dikdortgen::~Dikdortgen() {
    cout << "\n Su anda  nesne kaldiriliyor" << endl;
}

void Dikdortgen::setKisakenar(double dikdortgenKisakenar) {
    kisakenar=dikdortgenKisakenar;
}
void Dikdortgen::setUzunkenar(double dikdortgenUzunkenar) {
    uzunkenar=dikdortgenUzunkenar;
}

double Dikdortgen::getKisakenar() {
    return kisakenar;
}
double Dikdortgen::getUzunkenar() {
    return uzunkenar;
}

int main() {
    Dikdortgen dikdortgen_1(5,10);
    dikdortgen_1.setKisakenar(50);
    dikdortgen_1.setUzunkenar(100);
    cout << "\nDiktorgenin Degeri Degistikden Sonraki Kisakenari : " << dikdortgen_1.getKisakenar();
    cout << "\nDiktorgenin Degeri Degistikden Sonraki Uzunkenari : " << dikdortgen_1.getUzunkenar();

    return 0;
}