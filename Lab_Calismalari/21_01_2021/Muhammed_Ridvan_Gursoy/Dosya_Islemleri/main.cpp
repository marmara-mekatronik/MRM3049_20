#include <fstream>
#include <iostream>

using namespace std;

int main() {
char data[100];
ofstream cikti_hesap;
cikti_hesap.open("hesap.dat");

cout << "Hesap Secme Ekrani Aciliyor..." << endl;
cout << "Parayi yatirmak istediginiz Hesap No' yu giriniz : " ;
cin.getline(data,100);

cikti_hesap << data << "\t \t";

cout << "Yatirmak istediginiz miktari giriniz : " ;
cin >> data;
cin.ignore();

cikti_hesap << data << endl;

cikti_hesap.close();

ifstream giris_hesap;
giris_hesap.open("hesap.dat");
cout << "Paraniz Hesabiniza Yatiriliyor..." << endl;

giris_hesap >> data;
cout <<"Hesap No: "<< data<<endl;
giris_hesap >> data;
cout <<"Hesabinizdeki para: "<< data<<endl;

giris_hesap.close();

return 0;
}
