#include <iostream>

using namespace std;
class Ozellikler{
protected:
         string Marka, Renk;
         int Fiyat;
public:
         Ozellikler(string M,string R,int F);
         virtual string MarkaYazdir()=0;
         virtual string RenkYazdir()=0;
         virtual int FiyatGoster()=0;
};
Ozellikler::Ozellikler(string M,string R,int F){
Marka=M;
Renk=R;
Fiyat=F;
};
class BuzDolabi: public Ozellikler{
public:
         BuzDolabi( string m,string r,int f):Ozellikler(m,r,f){};
         int FiyatGoster(){
         cout <<"Urun Fiyati: ";
         return Fiyat;
         };
         string MarkaYazdir(){
         cout<<"Urunun markasi: ";
         return Marka;
         };
         string RenkYazdir(){
         cout<<"Urunun rengi: ";
         return Renk;
         };
};
class Firin: public Ozellikler{
public:
         Firin(string m,string r,int f):Ozellikler(m,r,f){};
         string MarkaYazdir(){
         cout<<"Urunun markasi: ";
         return Marka;
         };
         string RenkYazdir(){
         cout<<"Urunun rengi: ";
         return Renk;
         };

         int FiyatGoster(){
         cout <<"Urun Fiyati: ";
         return Fiyat;
         };


};
class CamasirMakinesi: public Ozellikler{
public:
         CamasirMakinesi(string m,string r,int f):Ozellikler(m,r,f){};
         int FiyatGoster(){
         cout <<"Urun Fiyati: ";
         return Fiyat;
         };
         string MarkaYazdir(){
         cout<<"Urunun markasi: ";
         return Marka;
         };
         string RenkYazdir(){
         cout<<"Urunun rengi: ";
         return Renk;
         };
};
int main()
{

    BuzDolabi Dolap1("BEKO","Gri",3549);
    Firin Firin1("SIMFER","Bordo",549);
    CamasirMakinesi CamasirMak1("Arcelik","Beyaz",2499);

         cout<<Dolap1.MarkaYazdir()<<endl;
         cout<<Dolap1.RenkYazdir()<<endl;
         cout<<Dolap1.FiyatGoster()<<" TL"<<endl;
         cout<<"---------------------------------"<<endl;
         cout<<Firin1.MarkaYazdir()<<endl;
         cout<<Firin1.RenkYazdir()<<endl;
         cout<<Firin1.FiyatGoster()<<" TL"<<endl;
         cout<<"---------------------------------"<<endl;
         cout<<CamasirMak1.MarkaYazdir()<<endl;
         cout<<CamasirMak1.RenkYazdir()<<endl;
         cout<<CamasirMak1.FiyatGoster()<<" TL"<<endl;
         cout<<"---------------------------------"<<endl;




    return 0;
}
