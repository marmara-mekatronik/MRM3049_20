#include "stdafx.h"
#include <iostream>;
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int sayi;
	int sabit=5;
	int *psayi;


	cout<<"sayi girinz:";
		cin>>sayi;
		psayi=&sayi;
	cout<<"sayi:"<<sayi<<endl;
	cout<<"sayinin adresi : "<<&sayi<<endl;
	cout<<"sayinin bir fazlasi :"<<sayi+1<<endl;
	cout<<"sayinin bir fazlasinin adresi : "<<&sayi+1<<endl;
	cout<<"sayinin pointerli ramdeki degeri:  "<<*psayi<<endl;
	cout<<"sayinin pointerli bir fazlasi : "<<*psayi+1<<endl;
	cout<<"sabit olarak 5 degeri verdigimiz sayinin adresi "<<&sabit<<endl;


	system("pause");



	return 0;
}
