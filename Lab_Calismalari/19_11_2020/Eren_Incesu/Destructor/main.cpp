#include <iostream>

using namespace std;

class UrunStogu{
public:
	void setSatilanTelefonStok(int SatilanTelefon);
	int getSatilanTelefonStok(void);
	UrunStogu(int UrunStoguTelefon);
	~UrunStogu();
	
private:
	int satilanTelefon;
	int telefonStok;	
};

UrunStogu::UrunStogu(int UrunStoguTelefon){
	cout << "Stok girisi yapiliyor..." << endl;
	telefonStok = UrunStoguTelefon;
	cout << "Stogun Ilk Miktari : " << UrunStoguTelefon << endl;
}

UrunStogu::~UrunStogu(){
	cout << "Satilan Urunler Stoktan kaldiriliyor..." << endl;
}

void UrunStogu::setSatilanTelefonStok(int SatilanTelefon){
	satilanTelefon = SatilanTelefon;
}

int UrunStogu::getSatilanTelefonStok(){
	return satilanTelefon;
}

int main(){
	UrunStogu telefon_1(1500);
	telefon_1.setSatilanTelefonStok(1000);
	cout << "Satilan Urun Miktari : " << telefon_1.getSatilanTelefonStok() << endl;

	return 0;
}
