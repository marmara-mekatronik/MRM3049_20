#include <iostream>
using namespace std;

class Avize {

private:

	string Model;
	int Duy;
	int Fiyat;
	int a;
	int b;
	int c;


public:
	string model() { return Model; }
	int duy() { return Duy; }
	int fiyat() { return Fiyat; }
	bool ayarla(string m, int d, int f);
};

bool Avize::ayarla(string m, int d, int f) {
	if ((d < 0) || (d > 60)) return false;
	if ((f < 0) || (f > 5000)) return false;

	Model = m;

	Duy = d;

	Fiyat = f;
	return true;

}



int main() {
	Avize eskitme;
	Avize gumus[15];
	Avize* ahsap;

	ahsap = &eskitme;

	int a, b, c;
	char isim[10];
	char isim2[10];
	char isim3[10];
	cout << "Model ismini giriniz:";
	cin >> isim;
	cout << isim<<" modeli icin duy sayisi giriniz:";
	cin >> a;
	eskitme.ayarla(isim, a, 500);
	cout << "Model:" << eskitme.model() << endl;
	cout << "Duy:" << eskitme.duy() << endl;
	cout << "Fiyat:" << eskitme.fiyat() << endl;
	cout << "-----------------------------------" << endl;
	cout << "Model ismini giriniz:";
	cin >> isim2;
	cout << isim<<" modeli icin duy sayisi giriniz:";
	cin >> b;
	ahsap->ayarla(isim2, b, 2000);

	cout << "Model:" << ahsap->model() << endl;
	cout << "Duy:" << ahsap->duy() << endl;
	cout << "Fiyat:" << ahsap->fiyat() << endl;


	cout << " ---------------- " << endl;
	cout << "Model ismini giriniz:";
	cin >> isim3;

	cout << isim3<<"modeli icin duy sayisi giriniz:";
	cin >> c;
	gumus[0].ayarla("Yagmur", c, 1899);
	cout << "Model:" << gumus[0].model() << endl;
	cout << "Duy:" << gumus[0].duy() << endl;
	cout << "Fiyat:" << gumus[0].fiyat() << endl;




	return 0;



}
