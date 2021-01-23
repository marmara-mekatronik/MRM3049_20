#include <iostream>

using namespace std;

class Rapor {

private:
   float Sure;
   int Fiyat;

public:
   Rapor(float a=1.5, int b=30);
   double hesapla();
   int karsilastirma(Rapor rapor);
};

   Rapor::Rapor(float a, int b){
   Sure = a ;
   Fiyat = b ;

}
   double Rapor::hesapla() {

   return Sure*Fiyat ;

   }
   int Rapor::karsilastirma(Rapor rapor){

   return this->hesapla() > rapor.hesapla();

   }

   int main() {

    Rapor rapor1(3.2 , 30);
    Rapor rapor2(2.4 , 50);

    if(rapor1.karsilastirma(rapor2)){
        cout<<"Rapor 2 daha uzun surmustur."<< endl;

}

    else{
        cout<<"Rapor 1 daha uzun surmustur."<< endl;

}

     return 0;
}
