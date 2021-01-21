#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int
main ()
{


string ad, soyad, okul, bolum;


string yas, numara;


ofstream myfile;


myfile.open ("bilgiler.txt");


cout << "Adiniz : ";


getline (std::cin, ad);


cout << "Soyadiniz : ";


getline (std::cin, soyad);


cout << "Yasiniz : ";


getline (std::cin, yas);


cout << "Okudugunuz Okulun Adi : ";


getline (std::cin, okul);


cout << "Hangi bolumu okuyorsunuz : ";


getline (std::cin, bolum);


cout << "Okul numaranizi giriniz : ";


getline (std::cin, numara);



myfile << "Ad: " << ad << endl << "Soyad: " << soyad << endl << "Yas: "
    << yas << endl << "Okul: " << okul << endl << "Bolum: " << bolum << endl
    << "Okul Numarasi: " << numara << endl;


myfile.close ();


cout << "Yeni Dosya olusturululdu\n";


system ("PAUSE");


return 0;


}


