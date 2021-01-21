#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char dizi[100];

    ofstream dosya;

    dosya.open("parola.dat");

    cout << " Dosya Oluşturuluyor..." << endl;

    cout << "Kullanici adinizi giriniz: ";
    cin.getline(dizi, 100);

    dosya << dizi << "\t \t";

    cout << "Parolanizi giriniz: ";
    cin >> dizi;

    cin.ignore();

    dosya << dizi << endl;

    dosya.close();

    ifstream dosya1;
    dosya1.open("Parola.dat");
    cout << " Dosya Okunuyor..." << endl;

    dosya1 >> dizi;

    cout << dizi << endl;

    dosya1 >> dizi;

    cout << dizi;

    dosya1.close();

    return 0;
}
