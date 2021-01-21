#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    string dizi,dizi2;
    fstream dosya;
    dosya.open("dosya.txt",ios::out);
    cout << "yaziliyor ...\n"
         << "adinizi girin : ";
    getline(cin,dizi,'\n');
    dosya<<dizi;
    dosya<<"\n";
    cout<<"Numaranizi girin (numaranizin sayilari arasina bir bosluk koyun 1 2 3 4 5 6 seklinde ): ";
          getline(cin,dizi2,'\n');
           dosya<<dizi2;
    dosya.close();
    dosya >> dizi ;
    dosya.open("dosya.txt",ios::out|ios::in);
    getline(dosya,dizi,'\t');
    cout << dizi << endl ;
    stringstream  numara;
    numara << dizi2;
    int n[9];
    int toplam=0;
      for(int i=0;i<9;i++){
    numara >>n[i];
    }
        for(int i=0;i<9;i++){
        toplam=toplam+n[i];
    }
    cout<<"numaranizda sayilar toplami = "<<toplam;
    return 0;
}
