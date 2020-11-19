#include <iostream>
using namespace std;

class araba{
	
	private:
	int yil;
	int motorgucu;
	
	
	public:
		int Yil() {
		return yil;}
		int Motorgucu() {
		return motorgucu;}
		
		bool kontrol(int a,int b);
		
	
};
bool araba::kontrol(int a,int b){
	if(a <0 ) return false;
	if(b<0) return false;
	yil=a;
	motorgucu=b;
	return true;
	
	
}


int main(){
	
	araba traktor;
	araba *traktorp;
	araba motor[2];
	
	traktorp=&traktor;
	
	traktor.kontrol(2010,3000);
	
	cout<<"Traktorun yili:"<<traktor.Yil()<< ""<< "Traktorun gucu:"<<traktor.Motorgucu()<<endl;
	
	cout<<"-----------------"<<endl;
	
	traktorp->kontrol(2011,2000);
	
	cout<<"Traktorun yili:"<<traktorp->Yil()<< ""<< "Traktorun gucu:"<<traktorp->Motorgucu()<<endl;
	cout<<"-----------------"<<endl;
	
	motor[0].kontrol(1987,500);
	
	cout<<"Traktorun yili:"<<motor[0].Yil()<< ""<< "Traktorun gucu:"<<motor[0].Motorgucu()<<endl;
	
	
	
	
	
	
}
