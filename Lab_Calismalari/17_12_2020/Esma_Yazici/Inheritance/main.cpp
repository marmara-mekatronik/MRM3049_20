#include <iostream>
using namespace std;

class Kitap{
public:
    Kitap(string yaz="Frank Herbert",string yayin="ithaki");
    void setYazar(string yaz);
    void setYayinevi(string yayin);
    string getYayinevi(){
        return yayinevi;
    }
    string getYazar(){
        return yazar;
    }
protected:
    string yayinevi;
    string yazar;
};

Kitap::Kitap(string yaz, string yayin) {
    yayinevi=yayin;
    yazar=yaz;
}

void Kitap::setYayinevi(string yayin) {
    yayinevi=yayin;
}

void Kitap::setYazar(string yaz) {
    yazar=yaz;
}

class Seri: public Kitap{
public:
    string setSeri(string adi){
        Ad=adi;
    }
    int setSeriS(int sayfa){
        Sf=sayfa;
    }
    string getSeri(){
        return Ad;
    }
    int getSeriS(){
        return Sf;
    }

private:
    string Ad;
    int Sf;
};

int main() {
    Seri Seri1[6];
    Seri1[0].setSeri("Dune");
    Seri1[1].setSeri("Dune Mesihi");
    Seri1[2].setSeri("Dune Cocuklari");
    Seri1[3].setSeri("Dune Tanri Imparatoru");
    Seri1[4].setSeri("Dune Sapkinlari");
    Seri1[5].setSeri("Dune Rahibeler Meclisi");
    Seri1[0].setSeriS(712);
    Seri1[1].setSeriS(304);
    Seri1[2].setSeriS(552);
    Seri1[3].setSeriS(512);
    Seri1[4].setSeriS(600);
    Seri1[5].setSeriS(656);

    int i;
    for (i = 0; i < 6; i++) {
        int a = i + 1;
        cout << a << ". Kitabin Yazari : " << Seri1[i].getYazar() << endl;
        cout << "Kitabin Yayinevi : " << Seri1[i].getYayinevi() << endl;
        cout << "Kitabin Adi : " << Seri1[i].getSeri() << endl;
        cout << "Kitabin Sayfa Sayisi : " << Seri1[i].getSeriS() << "\n" << endl;
    }
    return 0;

}
