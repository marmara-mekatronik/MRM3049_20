#include<iostream>

using namespace std;

class Malzemeiskonto {
public:
	void ampulfiyat(double malzemefiyati);
	double iskontofiyati(void);
	Malzemeiskonto(double malzemefiyati);
	~Malzemeiskonto();
private:
	double fiyat;

};
Malzemeiskonto::Malzemeiskonto(double malzemefiyati) {
	cout << "Girmek istediginiz malzemenin fiyatini giriniz:";
    cin>>malzemefiyati;
    cout<<"malzemefiyati";
}


Malzemeiskonto::~Malzemeiskonto() {
	cout << "\n Su anda nesneyi kaldiriliyor." << endl;

}
void Malzemeiskonto::ampulfiyat(double malzemefiyati) {

	fiyat = malzemefiyati;
	cout << "Malzeme fiyati:" << malzemefiyati;

}
double Malzemeiskonto::iskontofiyati() {

	return (fiyat - fiyat * 40/100);


}


int main() {

	Malzemeiskonto yenifiyat(20);
	yenifiyat.ampulfiyat(40.80);
	cout << "\n ampulun degistikten sonraki fiyati:" << yenifiyat.iskontofiyati();
	return 0;


}
