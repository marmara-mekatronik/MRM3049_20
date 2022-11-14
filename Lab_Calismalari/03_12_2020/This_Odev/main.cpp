#include <iostream>

using namespace std;
class OTV{
private:

         double Matrah;
         float DovizKuru;//Dolar olarak alýnmýþtýr
         int VergiOrani;



public:
         OTV(double _m, float _d,int _v);
         double SatisFiyati();

         double getEtiketFiyati();
         double AlimGucu();
         double Karsilastir (OTV _q);






};
OTV::OTV(double _m, float _d,int _v){

         Matrah = _m;
         DovizKuru = _d;
         VergiOrani = _v;

}



double OTV::SatisFiyati(){
        return  (Matrah*DovizKuru)+((Matrah*DovizKuru)*VergiOrani)/100;

}
double OTV::Karsilastir(OTV _q){
         return this->SatisFiyati() > _q.SatisFiyati();
}



int main(){
         float DovizKuru;
         double Arac1_Matrah,Arac2_Matrah;
         int Arac1_Vergi,Arac2_Vergi;
         int EtiketFiyati1,EtiketFiyati2;


         OTV Arac1 (Arac1_Matrah,DovizKuru,Arac1_Vergi);
         OTV Arac2 (Arac2_Matrah,DovizKuru,Arac2_Vergi);

         cout<<"Anlik Dolar Kurunu Girin: ";
         cin>> DovizKuru;
         cout<<endl;
         cout<<"1.Aracin Dolar Bazinda Matrah Bedelini Girin: ";
         cin >>Arac1_Matrah;

         cout<<endl<< "1.Aracin Vergi Oranini Girin: ";
         cin>> Arac1_Vergi;
         cout<<endl;
         cout<<"2.Aracin Matrah Bedelini Girin: ";
         cin >>Arac2_Matrah;
         cout<<endl<< "2.Aracin Vergi Oranini Girin: ";
         cin>> Arac2_Vergi;
         cout<<endl;



         EtiketFiyati1 = (Arac1_Matrah*DovizKuru)+((Arac1_Matrah*DovizKuru)*Arac1_Vergi)/100;
         EtiketFiyati2 = (Arac2_Matrah*DovizKuru)+((Arac2_Matrah*DovizKuru)*Arac2_Vergi)/100;
        if (Arac1.Karsilastir(Arac2)){
         cout << "1. Arac daha pahalidir. "<<"Aracin fiyati: " <<EtiketFiyati1<< "tl." << endl;

          }
         else{
         cout << "2. Arac daha pahalidir. "<<"Aracin fiyati: " <<EtiketFiyati2<<"tl."<< endl;

         }




}
