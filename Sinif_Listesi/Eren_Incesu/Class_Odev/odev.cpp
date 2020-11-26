#include <iostream>

using namespace std;

class Futbolcu{
private:
	string Ad;
	string SoyAd;
	string Uyruk;
	string Mevki;
	int Yas;
	int FormaNo;
public:
	string isim(){return Ad;}	
	string soyAd(){return SoyAd;}
	string uyruk(){return Uyruk;}	
	string mevki(){return Mevki;}
	int yas(){return Yas;}
	int formaNo(){return FormaNo;}	
	bool lisansCikart(string a,string s,string u,string m,int y,int n);	
	
};

bool Futbolcu::lisansCikart(string a,string s,string u,string m,int y,int n){
	if ((y<14) || (y>45)) return false;
	if ((n<0)  || (n>99)) return false;
	Ad=a;
	SoyAd=s;
	Uyruk=u;
	Mevki=m;
	Yas=y;
	FormaNo=n;
	
	return true;
};
	

int main(){
	char secim;
	string a,s,u,m;
	int y,n;
	Futbolcu oyuncu1;
		
	cout << "Lisans Sihirbazina Hos Geldiniz !" << endl;
while(true){
	cout << "Lisans girisi yapmak icin 'g' i " << endl;
	cout << "Lisans girisi yapilmis oyuncu bilgilerini gormek icin 'a' " << endl;
	cout << "Lisans sihirbazindan cikmak icin 'q' tuslayiniz!:\n";
	cin >> secim;
	
	if (secim == 'g'){
	do{
	cout << "Futbolcunun adini giriniz:\n";
	cin >> a;
	cout << "Futbolcunun soy adini giriniz:\n";
	cin >> s;
	cout << "Futbolcunun uyrugunu giriniz:\n";
	cin >> u;
	cout << "Futbolcunun mevkisini giriniz:\n";
	cin >> m;
	cout << "Futbolcunun yasini giriniz:\n";
	cin >> y;
	cout << "Futbolcunun forma numarasini giriniz:\n";
	cin >> n;	 	
		
	break;
	}while (true);
};
	oyuncu1.lisansCikart(a,s,u,m,y,n);
	
	if (secim == 'a'){
	do{		
	cout << "Oyuncu Adi      : " << oyuncu1.isim()  << endl;
	cout << "Oyuncu Soyadi   : " << oyuncu1.soyAd() << endl;
	cout << "Oyuncu Uyruk    : " << oyuncu1.uyruk()  << endl;
	cout << "Oyuncu Mevki    : " << oyuncu1.mevki() << endl;
	cout << "Oyuncu Yas      : " << oyuncu1.yas() << endl;
	cout << "Oyuncu Numara   : " << oyuncu1.formaNo() << endl;		
	break;		
	}while (true);
	};
	if (secim == 'q'){
		cout << "\nProgram sonlandiriliyor..." << endl;
		break;  
	}

	
}
}
