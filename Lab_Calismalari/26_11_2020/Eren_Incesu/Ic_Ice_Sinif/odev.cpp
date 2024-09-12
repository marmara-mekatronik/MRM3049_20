#include <iostream>

using namespace std;

class Disarisi{
private:
	int x;

public:
	Disarisi();		
	void setDisariDeger(int a);
	void getDisariDeger();
	class Icerisi{
	private:
		int y;	
	public:
		Icerisi();	
		void setIceriDeger(int b);
		void getIceriDeger();
			
	};
	
};

Disarisi::Disarisi(){
	x = 5;
}

Disarisi::Icerisi::Icerisi(){
	y = 10;
}

void Disarisi::setDisariDeger(int a){
	x = a;
}

void Disarisi::getDisariDeger(){
	cout << "\nDisarinin degeri = " << x << endl;
}

void Disarisi::Icerisi::setIceriDeger(int b){
	y = b;
}

void Disarisi::Icerisi::getIceriDeger(){
	cout << "\nIcerinin degeri = " << y << endl;
}


int main(){
	Disarisi disTaraf;
	disTaraf.getDisariDeger();		
	disTaraf.setDisariDeger(34);
	disTaraf.getDisariDeger();

	Disarisi::Icerisi icTaraf;
	icTaraf.getIceriDeger();
	icTaraf.setIceriDeger(36);
	icTaraf.getIceriDeger();
	

	
		
	return 0;
}
