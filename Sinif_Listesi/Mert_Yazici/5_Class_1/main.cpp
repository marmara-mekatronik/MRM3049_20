//============================================================================
// Name        : class.cpp
// Author      : Mert
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Daire{
private:
	float Yari_cap;
	float C_Alan=0;
public:
	float yari_cap(){ return Yari_cap; }
	float c_alan(){return C_Alan;}
float daire_alan(float r);
};
float Daire::daire_alan(float r){
	float a=0;
	a = r*r*3.14;
	C_Alan = a;
    return 0 ;
}
class Dikdortgen{
private:
	float kenar1;
	float kenar2;
	float D_Alan;
public:
	float K1(){return kenar1;}
	float K2(){return kenar2;}
	float d_alan(){return D_Alan;}
float dortgen_alan(float k1,float k2);
};
float Dikdortgen::dortgen_alan(float k1,float k2){
	float a = 0;
    a = k1*k2;
    D_Alan = a;
    return 0;
}
class Ucgen{
private:
	float Yukseklik;
	float Taban;
	float U_Alan;
public:
	float H(){return Yukseklik;}
	float T(){return Taban;}
	float u_alan(){return U_Alan;}
float ucgen_alan(float h,float t);
};
float Ucgen::ucgen_alan(float h,float t){
	float a = 0;
	a = (h*t)/2;
	U_Alan = a;
	return 0;
}

float x;
float y;
int sec;
int main() {
	Daire C_alan;
	Dikdortgen D_alan;
	Ucgen U_alan;
	cout<<"dairenin alani icin:1 dikdortgenin alani icin:2 ucgenin alani icin:3 tuslayin:";
	cin >> sec;
   if(sec == 1){
    cout << "dairenin yari capini giriniz:";
    cin >> x;
    C_alan.daire_alan(x);
    cout <<"Alan="<<C_alan.c_alan() << endl;
   }
   else if (sec == 2) {
	   cout << "dikdortgenin 1. kenarini giriniz:";
	       cin >> x;
	   cout << "dikdortgenin 2. kenarini giriniz:";
	       cin >> y;
	       D_alan.dortgen_alan(x, y);
	       cout <<"Alan="<<D_alan.d_alan() << endl;
}
   else if (sec == 3) {
	   cout << "ucgenin taban uzunlugunu giriniz:";
	   	       cin >> x;
	   cout << "ucgenýn yuksekligini giriniz:";
	   	       cin >> y;
	   	       U_alan.ucgen_alan(x, y);
	   	    cout <<"Alan="<<U_alan.u_alan() << endl;
}
	return 0;
}
