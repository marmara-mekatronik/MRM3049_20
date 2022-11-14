    #include <iostream>

using namespace std;
class Kutu {
public:
    Kutu (double g=2.0, double d=2.0, double y=2.0);
    double hacim ();
    int karsilastir (Kutu kutu);
private:
    double genislik;
    double derinlik;
    double yukseklik;
};
Kutu::Kutu(double g, double d, double y) {
    cout << "Yapıcı fonksiyon çağrılıyor..." << endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;
}

double Kutu::hacim() {
 return genislik * derinlik * yukseklik;
}
int Kutu::karsilastir(Kutu kutu) {
    return this->hacim() > kutu.hacim();
}

int main() {
    Kutu Kutu1(3.3,1.2,1.5);
    Kutu Kutu2(8.5,6.0,2.0);
    if(Kutu1.karsilastir(Kutu2))
    {
        cout << "Kutu 2 daha kucuktur kutu 1 den " << endl;
    } else {
        cout << "Kutu 1 daha kucuktur kutu 2 den " << endl;
    }

}