#include <iostream>
using namespace std;
class Banka {        //10 Odasi ve her odada sutun ve satiri 15x15 olan bir banka.
private:
	int Oda;        //BIR BANKANIN ODASINDA KISIYE OZEL KASANIN NUMARALARINI GOSTEREN PROGRAM.
	int Kasa_Sutun;
	int Kasa_Satir;

public:
	int oda() { return Oda; }
	int kasaSutun() { return Kasa_Sutun; }
	int kasaSatir() { return Kasa_Satir; }
	bool bul(int o, int su, int sa);
};

bool Banka::bul(int o, int su, int sa) {         //ODA,SATIR VE SUTUN DEGER ARALIKLARI.
	if ((o < 0) || (o > 10)) return false;
	if ((su < 0) || (su > 15)) return false;
	if ((sa < 0) || (sa > 15)) return false;
	Oda = o;
	Kasa_Sutun = su;
	Kasa_Satir = sa;
	return true;
}

int main() {
	Banka kasa;
	Banka kasalar[5];
	Banka* customer;

	customer = &kasa;

	kasa.bul(7, 12, 10);
	cout << "Odanizin numarasi " << kasa.oda() << "'dir. Kasaniza ulasmak icin (" << kasa.kasaSutun() << ") numarali sutunu ve (" << kasa.kasaSatir() << ") numarali satira bakabilirsiniz. " << endl;
	cout << "Giris Kodunuz: (o" << kasa.oda() << kasa.kasaSutun() << kasa.kasaSatir() << ")" << endl;

	cout << "-------------------------------------------------------------------------------------------" << endl;

	customer->bul(5, 3, 9);
	cout << "Odanizin numarasi " << customer->oda() << "'dir. Kasaniza ulasmak icin (" << customer->kasaSutun() << ") numarali sutunu ve (" << customer->kasaSatir() << ") numarali satira bakabilirsiniz. " << endl;
	cout << "Giris Kodunuz: (o" << customer->oda() << customer->kasaSutun() << customer->kasaSatir() << ")" << endl;

	cout << "-------------------------------------------------------------------------------------------" << endl;

	kasalar[0].bul(9, 15, 15);
	cout << "Odanizin numarasi " << kasalar[0].oda() << "'dir. Kasaniza ulasmak icin (" << kasalar[0].kasaSutun() << ") numarali sutunu ve (" << kasalar[0].kasaSatir() << ") numarali satira bakabilirsiniz. " << endl;
	cout << "Giris Kodunuz: (o" << kasalar[0].oda() << kasalar[0].kasaSutun() << kasalar[0].kasaSatir() << ")" << endl;
	return 0;
}