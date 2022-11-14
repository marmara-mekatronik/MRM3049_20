#include<iostream>
#include<string>
using namespace std;
class canlilar {
public:
	canlilar();
	string tur;
	string cins;
};
canlilar::canlilar()
{
	cout << "\t\t-------------Canlilar Alemine Hosgeldiniz---------------" << endl;

}
class hayvanlar :public canlilar
{
public:
	hayvanlar();
	int ayaksayisi, elsayisi;
};
hayvanlar::hayvanlar()
{
	cout << "Cinsini Giriniz = ";
	cin >> cins;
	cout << "Ayaksayisini Giriniz = ";
	cin >> ayaksayisi;
	cout << "Elsayisini Giriniz = ";
	cin >> elsayisi;
	cout << cins << "\n" << ayaksayisi << "\n" << elsayisi << endl;
}
class bitkiler :public canlilar
{
public:
	bitkiler();
	int yapraksayisi;
};
bitkiler::bitkiler()
{
	cout << "Yaprak sayisini Giriniz = ";
	cin >> yapraksayisi;
	cout << yapraksayisi << " yaprakli bitkidir" << endl;
}

int main()

{
	hayvanlar h;
	bitkiler b;
	return 0;
}
