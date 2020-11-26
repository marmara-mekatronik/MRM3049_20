#include <iostream>

using namespace std;

class Kontrol{

private:
   int vergi_orani1=8;
   int vergi_orani2=18;
   int net_k;

public:

   int vergi1()          {return vergi_orani1;}
   int vergi2()          {return vergi_orani2;}
   int net_kazanc()      {return net_k;}


bool hesaplama (int b,int m,int f); // kullanýcýdan etiket fiyatý alýnacak f onun temsilii

};

bool Kontrol::hesaplama(int b, int m,int f){
         int s = b;//vergi oranýný belirleyen deðiþken
         int maaliyet = m;
         int n = net_k;
         int v1 = vergi_orani1;
         int v2 = vergi_orani2;
         int e = f;// kasiyerin girdiði etiket fiaytý
         int h;//vergisiz fiyatý deðiþkeni



if (s==1){
h = e - ((e*v1)/100); // vergisiz fiyat hesaplamasý
n = h - m;//net kazanç
}

if (s==2){
h = e - ((e*v2)/100); // vergisiz fiyat hesaplamasý
n = h - m;//net kazanç}
}

         if(n<=0){
         cout << "Fiyatta hata var. Satis yapilamaz." << endl;
         return false;
         }else
         {
         cout<< "Fiyatta hata yok. Satis yapilabilir."<< endl;
         }


return  true;
}


int main()
{

Kontrol giris;
int b,m,f;

cout <<"Urun sinifini belirleyiniz. Gida urunleri icin 1 ,diger urunler icin 2 yaziniz"<< endl;
cout << "-----------------------"<< endl;
cout<< "Urunun sinifini giriniz: ";
cin >> b;
cout << "-----------------------"<< endl;
cout << "Urunun maaliyeti: ";
cin >> m;
cout << "-----------------------"<< endl;
cout << "Urunun satis fiyati: ";
cin >> f;
cout << "-----------------------"<< endl;


giris.hesaplama(b,m,f);



return 0;




}
