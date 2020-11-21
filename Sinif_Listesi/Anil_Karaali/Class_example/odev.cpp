#include <iostream>
using namespace std;

class Giris {

private:
	int Tel_sayisi;
	string Marka;
	string Model;

public:
	int tel_sayisi() { return Tel_sayisi; }
	string marka() { return Marka; }
	string model() { return Model; }
	bool yerlestir(int t, string mar, string mod);
};

bool Giris::yerlestir(int t, string mar, string mod) {

	bool result = true;

	if ((t < 5) || (t > 8))
		result = false;
	if ((mar != "Fender") || (mar != "Gibson"))
		result = false;
	if ((mod != "Stratocaster") || (mod != "Les_Paul"))
		result = false;

	Tel_sayisi = t;
	Marka = mar;
	Model = mod;

	return true;
}

int main() {

	Giris gitar1, gitar2;

	Giris *raf; 
	 
	raf = &gitar1; // raf pointeri gitarı 1i point ediyor

	//Fender ve Gibson 2 dünyaca ünlü gitar markasidir. Stratocaster ve Les_Paul ise gitar turudur. 

	gitar1.yerlestir(7, "Fender", "Stratocaster");
	cout << "Gitar 1 in tel Sayisi: " << gitar1.tel_sayisi() << endl;
	cout << "Gitar 1 in markasi: " << gitar1.marka() << endl;
	cout << "Gitar 1 in modeli: " << gitar1.model() << endl;
	cout << endl;

	cout << "Raf pointeri ile gitar 1in tel sayisi marka ve model degerleri degistirildikten sonra:" << endl << endl;

	raf->yerlestir(6, "Fender", "Stratocaster");
	cout << "Gitar 1 in tel Sayisi:  " << raf->tel_sayisi() << endl;
	cout << "Gitar 1 in markasi:  " << raf->marka() << endl;
	cout << "Gitar 1 in modeli: " << raf->model() << endl;
	cout << endl;

	gitar2.yerlestir(5, "Gibson", "Les_Paul");
	cout << "Gitar 2 in tel Sayisi: " << gitar2.tel_sayisi() << endl;
	cout << "Gitar 2 in markasi: " << gitar2.marka() << endl;
	cout << "Gitar 2 in modeli: " << gitar2.model() << endl;
	cout << endl;

	


	return 0;
}
