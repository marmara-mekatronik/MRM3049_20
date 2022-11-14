#include <iostream>

//EREN_İNCESU_POLİMORFİZM_ÖRNEĞİ

using namespace std;

class Oyuncu{
public:
	virtual string takim(){
		return "Oyuncu bosta,herhangi bir takimda oynamiyor!";
	}	
};

class Galatasaray: public Oyuncu{
public:
	string takim() override{
		return "Oyuncu Galatasarayda oynuyor!";
	}		
};

class Liverpool: public Oyuncu{
public:
	string takim() override{
		return "Oyuncu Liverpoolda oynuyor!";
	}	
};

class Barcelona: public Oyuncu{
public:
	string takim() override{
		return "Oyuncu Barcelonada oynuyor!";
	}	
};

int main(){
	Oyuncu oyuncu1;	
	
	cout << oyuncu1.takim()<< endl;
	
	Oyuncu *ptrDiziOyuncu[3];
	ptrDiziOyuncu[0] = new Galatasaray(); 
	ptrDiziOyuncu[1] = new Liverpool();
	ptrDiziOyuncu[2] = new Barcelona();
	
	for(int i = 0;i < 3;i++){
		cout << ptrDiziOyuncu[i]->takim() << endl;
	}
	
	
	return 0;
}
