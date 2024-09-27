#include <iostream>

using namespace std;

class Hayvanlar {

public:
	string ureme;
	string beslenme;
	string solunum;
	void ortak_ozellikler () {
		cout<< "Ortak Ozellikler"<< endl <<"Ureme: " << ureme << "  Beslenme: " << beslenme <<"  Solunum:  "<< solunum<< endl;
	}

};

class Kopekler: public Hayvanlar {
	
	                            
public:
	string cins;
	int kilo;
	int yas;
	int boy;
	void kopek_ozellikleri ( string *c, int *b, int *k,  int *y) {
		cins=*c;
		boy=*b;
		kilo=*k;
		yas=*y;
		cout <<"Kopeginizin-- Cins: "<< cins << " Boy: "<<boy <<"cm Kilo: "<<kilo << "kg Yas: "<< yas ;	
	}
	
	Kopekler () {
	ureme="dollenme";
	beslenme = "etcil";
	solunum= "oksijenli solunum";
	}
	
};


class Kuslar: public Hayvanlar {
	
	                            
public:
	string cins;
	int kilo;
	int yas;
	int boy;
	void kus_ozellikleri ( string c, int b, int k,  int y) {
		cins=c;
		boy=b;
		kilo=k;
		yas=y;
		cout <<"Kusunuzun Ozellikleri-- Cins: "<< cins << " Boy: "<<boy <<"cm Kilo: "<<kilo << "kg Yas: "<< yas ;
	}
	
	Kuslar () {
	ureme="yumurtalama";
	beslenme = "hepcil";
	solunum= "oksijenli solunum";
	}
	
};

	
class Atlar: public Hayvanlar {
	
private:
	string Cins;
	int Kilo;
	int Yas;
	int Boy;	                            
public:
	string cins() { return Cins;}
	int kilo (){ return Kilo;}
	int yas(){return Yas;}
	int boy(){return Boy;};
	void at_ozellikleri ( string c, int b, int k,  int y) {
		Cins=c;
		Boy=b;
		Kilo=k;
		Yas=y;
		cout <<"Atinizin Ozellikleri-- Cins: "<< Cins << " Boy: "<<Boy <<"cm Kilo: "<<Kilo << "kg Yas: "<< Yas ;
	}
	
	Atlar () {
	ureme="dollenme";
	beslenme = "otcul";
	solunum= "oksijenli solunum";
	}
	
};



int main(void) {
	int i=0;
	string secim;
	Kopekler kopek;
	Atlar at;
	Kuslar kus;
	cout << "Hayvan Siniflari: Kopekler,Kuslar,Atlar   Lutfen cikmak icin 'q' ya basiniz";
	
	while (i<1) {
		cout << endl<<" Islem Yapmak istediginiz sinifi seciniz "<<endl <<" Kopekler    Kuslar   Atlar"<< endl ;
		cin >> secim;
		
		if (secim=="Kopekler") {
			int bo,ya,ki;
			string ci;
			cout<<"Sirasiyla kopegin cinsini, boyunu, kilosunu ve yasini giriniz.";
			cin>>ci;
			cin>>bo;
			cin>>ki;
			cin>>ya;
			kopek.ortak_ozellikler();
			kopek.kopek_ozellikleri(&ci,&bo,&ki,&ya);
		}
		
		else if (secim=="Atlar") {
			int bo,ya,ki;
			string ci;
			cout<<"Sirasiyla kopegin cinsini, boyunu, kilosunu ve yasini giriniz.";
			cin>>ci;
			cin>>bo;
			cin>>ki;
			cin>>ya;
			at.ortak_ozellikler();
			at.at_ozellikleri(ci,bo,ki,ya);
		}
		
		else if (secim=="Kuslar") {
			int bo,ya,ki;
			string ci;
			cout<<"Sirasiyla kopegin cinsini, boyunu, kilosunu ve yasini giriniz.";
			cin>>ci;
			cin>>bo;
			cin>>ki;
			cin>>ya;
			kus.ortak_ozellikler();
			kus.kus_ozellikleri(ci,bo,ki,ya);
		}
		
		else if (secim=="q") {
			cout <<"tekrar gorusmek uzere";
			i++;
			
		}
		else 
		{
		cout<<"hatali islem";
		}
		
		
		
		
	}
	
	
	
	return 0;
}
