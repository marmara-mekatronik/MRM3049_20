#include <fstream>
#include <iostream>

using namespace std;

int main() {
    char bilgi[100];
    
    ofstream dosya;
    
    dosya.open("isim-takım.dat");

    cout << " Dosya Oluşturma İşlemi Başlatılıyor..." << endl;
    cout << "İsinizi giriniz : " ;
    
    cin.getline(bilgi,100);

    dosya << bilgi << "\t \t";

    cout << "Tuttuğunuz Takımı giriniz : " ;
    cin >> bilgi;
    
    cin.ignore();

    dosya << bilgi << endl;

    dosya.close();

    ifstream dosya1;
    dosya1.open("isim-takım.dat");
    cout << " Dosya Okunuma İşlemi Başlatılıyor..." << endl;

    dosya1 >> bilgi;
    
    cout << bilgi << endl;
    
    dosya1 >> bilgi;
    
    cout << bilgi ;

    dosya1.close();

    return 0;
}
