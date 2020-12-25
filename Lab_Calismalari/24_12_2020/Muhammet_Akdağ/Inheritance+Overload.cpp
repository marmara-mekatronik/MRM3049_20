#include <iostream>

using namespace std;
class MasaUstu{
public:
         void yaz(int Yil){
         cout<<"Bilgisayarin model yili: "<<Yil<<endl;
         }

         void yaz(double Fiyat){
         cout<<"Bilgisayarin fiyati: "<<Fiyat<<endl;
         }

         void yaz(char* Marka){
         cout<<"Bilgisayarin Markasý: "<<Marka<<endl;
         }
         void duzen(){
         cout<<"--------------------------------"<<endl;}

};

class Laptop: public MasaUstu{
};

int main()
{
         MasaUstu Pc1;
         Laptop Pc2;
         Pc1.yaz(2015);
         Pc1.yaz(5879.99);
         Pc1.yaz("Lenovo");
         Pc1.duzen();
         Pc2.yaz(2016);
         Pc2.yaz(3254.79);
         Pc2.yaz("Casper");




return 0;
}
