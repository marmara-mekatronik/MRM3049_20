#include <iostream>

using namespace std;

class islemler {
     private:
         
         float x, y, z, c, v, b, n, m, ö;

     public:
    islemler(float sayi1, float sayi2,float sayi3,float sayi4,float sayi5,float sayi6,float sayi7,float sayi8,float sayi9) {
        this->x = sayi1; this->y = sayi2; this->z = sayi3; this->c = sayi4; this->v = sayi5; this->b = sayi6; this->n = sayi7; this->m = sayi8; this->ö = sayi9;
        
    }
    float Aritmatik_Ortalama();
   
    void sayilari_yaz();
};

float islemler::Aritmatik_Ortalama() {
    return this-> x + this->y + this->z + this->c + this->v + this->b + this->n + this->m + this->ö  ;
}


void islemler::sayilari_yaz() {
    cout << "Birinci Sayi: " << this->x << endl << "Ikinci Sayi: " << this->y << endl << "ucuncu sayi Sayi: " << this->z << endl
        << "dorduncu Sayi: " << this->c << endl << "besinci sayi Sayi: " << this->v << endl
        << "altinci sayi: " << this->b << endl << "yedinci Sayi: " << this->n << endl
        << "sekizinci Sayi: " << this->m << endl << "dokuzuncu Sayi: " << this->ö << endl ;
}

int main() {

    float birincisayi, ikincisayi,ücüncüsayi,dördüncüsayi,besincisayi,altincisayi,yedincisayi,sekizincisayi,dokuzuncusayi;

    cout << "Birinci sayiyi giriniz:";
    cin >> birincisayi;
    cout << "Ikinci sayiyi giriniz:";
    cin >> ikincisayi;
    cout << "Ücüncü sayiyi giriniz :";
    cin >> ücüncüsayi;
    cout << "dördüncü sayiyi giriniz:";
    cin >> dördüncüsayi;
    cout << "besinci Sayiyi giriniz :";
        cin >> besincisayi;
    cout << "altinci Sayiyi giriniz: ";
    cin >> altincisayi;
    cout << "yedinci Sayiyi giriniz : ";
    cin >> yedincisayi;
    cout << "sekizinci Sayiyi giriniz: ";
    cin >> sekizincisayi;
    cout << "dokuzuncu Sayiyi giriniz: ";
    cin >> dokuzuncusayi;
    islemler sayilar(birincisayi, ikincisayi,ücüncüsayi,dördüncüsayi,besincisayi,altincisayi,yedincisayi,sekizincisayi,dokuzuncusayi);

    sayilar.sayilari_yaz();

   
    cout << "aritmatik ortalama: " << sayilar.Aritmatik_Ortalama() / 9 << endl;
   

    return 0;
}
