#include <iostream>

using namespace std;

class araba{
	public:
		virtual string fiyat(){
			return "0";
		}
};

class BMW:araba{
	public:
		string fiyat() override {
			return "260.000 TL";
		}
};

class mercedes:araba{
	public:
		string fiyat() override {
			return "240.000 TL";
		}
};
class audi:araba{
public:
        string fiyat()override{
            return "180.000 TL";
        }
};

int main(){
	araba araba1;
	BMW araba2;
	mercedes  araba3;
	audi araba4;
	cout << "Araba: " << araba1.fiyat() << endl;
	cout << "BMW: " << araba2.fiyat() << endl;
	cout << "Mercedes : " << araba3.fiyat() << endl;
	cout << "Audi : " << araba4.fiyat() << endl;
}
