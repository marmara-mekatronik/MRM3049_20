#include <iostream>

using namespace std;

class islemler{
private:
    float x;
    float y;
public:
    islemler(float sayi1,float sayi2){
        this-> x=sayi1;
        this-> y=sayi2;
    }
    float topla();
    float cikarma();
    float carpma();
    float bolme();
    void sayilari_yaz();
};

float islemler::topla() {
    return this-> x + this ->y;
}

float islemler::cikarma() {
    return this-> x - this ->y;
}

float islemler::carpma() {
    return this-> x * this ->y;
}

float islemler::bolme() {
    return (this->x) / this->y;
}

void islemler::sayilari_yaz() {
    cout << "Birinci Sayi: " << this-> x << endl << "Ikinci Sayi: " << this ->y << endl;
}

int main(){

    float birincisayi, ikincisayi;

    cout << "Birinci sayiyi giriniz:";
    cin >> birincisayi;
    cout << "Ikinci sayiyi giriniz:";
    cin >> ikincisayi;

    islemler sayilar(birincisayi,ikincisayi);

    sayilar.sayilari_yaz();

    cout << endl << "Sayilarin Dort Islem Sonucu" << endl;
    cout << "Toplama: " << sayilar.topla() << endl;
    cout << "Cikarma: " << sayilar.cikarma() << endl;
    cout << "Carpma: " << sayilar.carpma() << endl;
    cout << "Bolme: " << sayilar.bolme() << endl;

    return 0;
}
