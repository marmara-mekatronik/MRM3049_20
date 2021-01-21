#include <iostream>
#include <fstream>

using namespace std;
string ad,soyad,puan;
int kisi_sayisi=0;
int main(){
    ofstream cikis;
    cikis.open ("bilgiler.txt");
    cout << "Ad : ";
    getline (std::cin, ad);
    cout << "Soyad : ";
    getline (std::cin, soyad);
    cout << "puan : ";
    getline (std::cin, puan);
  cikis.close();


ifstream giris;
giris.open("bilgiler.txt");
cout << " Dosya Okunuyor..." << endl;
giris >> ad;
cout << ad<< endl;
giris >> soyad;
cout <<soyad<<endl ;
giris >> puan;
cout <<puan<<endl ;
giris.close();

  return 0;
}

