#include <iostream>

using namespace std;

class Hayvan{
public:
	int ayakSayisi;
	int boy;	
	Hayvan(int a = 0,int b = 0);	
};

Hayvan::Hayvan(int a,int b){
	ayakSayisi = a;
	boy = b;
}

class Memeli:public Hayvan{	
public:
	string tur;
	Memeli(int a = 1,int b = 1,string t = "");
};

Memeli::Memeli(int a,int b,string t){
	ayakSayisi = a;
	boy = b;
	tur = t;
}



int main(){
	Memeli memeli1(4,488,"Aslan");
	cout << "Memelinin Ayak Sayisi : " << memeli1.ayakSayisi << endl;
	cout << "Memelinin Boyu        : " << memeli1.boy << "cm" << endl;
	cout << "Memelinin Turu        : "  << memeli1.tur << endl;
	
	return 0;
}
