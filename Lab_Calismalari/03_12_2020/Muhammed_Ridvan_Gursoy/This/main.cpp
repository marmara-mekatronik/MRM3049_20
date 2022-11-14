#include <iostream>
using  namespace  std;
class Sinif{                      // okuldaki sınıfların öğrenci sayısını karşılaştırma.
public:
    Sinif(int s= 3,int o = 50);  //s= Birinci, ikinci, yada üçüncü sınıflar.  o= sınıflardaki öğrenci adeti.(SABİTTİR.)
    int mevcut();
    int karsilastir(Sinif sinif);

private:
    int sinif , ogrenci ;

};


 Sinif::Sinif(int s, int o) {
    cout << "Yapici fonksiyon... "<<endl;
    sinif= s;
    ogrenci=o;
}


int Sinif::mevcut() {
    return sinif*ogrenci;
}


int Sinif::karsilastir(Sinif sinif) {
    return this -> mevcut() > sinif.mevcut();
}
int main(){
    int s1,o1,s2,o2;
        cout << "7. sinif adetini giriniz : ";
        cin >> s1;
        cout << "7. sinif ogrenci mevcutunu giriniz : ";
        cin >> o1;
        cout << "6. sinif adetini giriniz : ";
        cin >> s2;
        cout << "6. sinif ogrenci mevcutunu giriniz : ";
        cin >> o2;
    Sinif sinif7(s1,o1);
    Sinif sinif6(s2,o2);
        if (sinif7.karsilastir(sinif6))
            cout<<"7. Sinif mevcutu 6. Sinif mevcutundan fazladir. ";
        else
            cout<<"6. Sinif mevcutu 7. Sinif mevcutundan fazladir.";

   return 0;
}
