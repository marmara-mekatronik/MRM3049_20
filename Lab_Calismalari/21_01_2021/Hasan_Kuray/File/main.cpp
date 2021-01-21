#include <fstream>
#include <iostream>

using namespace std;

int main() {
    char data[50];
    ofstream ogrenci_belgesi;
    ogrenci_belgesi.open("ogrenci_belgesi.txt");

    cout << " Dosya Olusturuluyor..." << endl;
    cout << "Ad Soyad : " ;
    cin.getline(data,50);

    ogrenci_belgesi << data << "\t";

    cout << "Okul Numarasi : " ;
    cin >> data;
    cin.ignore();
    ogrenci_belgesi << data << "\t";

    cout << "Okul Adi : " ;
    cin.getline(data,50);
    ogrenci_belgesi << data << "\t";

    ogrenci_belgesi.close();

    ifstream giris_ogrenci_belgesi;
    giris_ogrenci_belgesi.open("ogrenci_belgesi.txt");
    cout << " Dosya Okunuyor..." << endl;

    giris_ogrenci_belgesi >> data;
    cout << data << endl;
    giris_ogrenci_belgesi >> data;
    cout << data << endl;
    giris_ogrenci_belgesi >> data;
    cout << data << endl;
    giris_ogrenci_belgesi >> data;
    cout << data << endl;

    giris_ogrenci_belgesi.close();

    return 0;
}
