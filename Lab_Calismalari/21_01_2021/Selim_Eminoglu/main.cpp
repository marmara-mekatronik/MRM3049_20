#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string ad,soyad,mevki;
    int yas;

    ofstream calisanlar;
    calisanlar.open("Selim_sirket_calisanlari.dat");

    cout << " Dosya Olusturuluyor..." << endl;

    calisanlar<<"Selim Eminoglu 21 Patron \n";

    if (!calisanlar){
        cout<<"Dosya olusmadi!!!"<<endl;
    }
    else{
        cout<<"Dosya Kayit icin Hazir"<<endl;
    }
    cout<<"Adiniz: "<<endl;
    cin>>ad;
    cout<<"Soyadiniz: "<<endl;
    cin>>soyad;
    cout<<"Yasiniz: "<<endl;
    cin>>yas;
    cout<<"Mevkiniz: "<<endl;
    cin>>mevki;

    calisanlar<<ad<<" "<<soyad<<" "<<yas<<" "<<mevki<<endl;

    calisanlar.close();

    ifstream okuma_zamani;
    okuma_zamani.open("Selim_sirket_calisanlari.dat");
    string satirsonu="\n";
    char data[100];

    okuma_zamani.getline(data,100);

    cout << data;
    okuma_zamani.close();

    return 0;
}
