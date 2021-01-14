#include <iostream>
using  namespace  std;
class V_K_I{ // Vucut Kitle İndeksi
public:
    V_K_I(float k = 60.0,float b = 1.60);
    float indek();
    int karsilastir(V_K_I V_K_I);

private:
    float boy , kilo ;

};

V_K_I ::V_K_I(float k, float b) {
    cout << "Yapici cagriliyor... "<<endl;
    boy= b;
    kilo=k;

}
float V_K_I ::indek() {
    return kilo/boy;
}

int V_K_I ::karsilastir(V_K_I V_K_I) {

   return this ->indek()>V_K_I.indek();
}
int main(){
    float b1,k1,b2,k2;
    cout << "Kisi1 Kilo(.0 koyun) : ";
    cin >> k1;
    cout << "Kisi1 Boy : ";
    cin >> b1;
    cout << "Kisi2 Kilo : ";
    cin >> k2;
    cout << "Kisi2 Boy : ";
    cin >> b2;
   V_K_I kisi1(k1,b1);
   V_K_I kisi2(k2,b2);
   if (kisi1.karsilastir(kisi2))
       cout<<"Kisi1 Vucut Kitle Indeksi Kisi2den Buyuktur.";
   else
       cout<<"Kisi2 Vucut Kitle Indeksi Kisi1den Buyuktur.";
   return 0;
}




