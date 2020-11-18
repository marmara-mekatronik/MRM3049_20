#include <iostream>
#include <ctime>

using namespace std;

class Savas {
private:
    string Isim = "Kemal";
    int Can = 85;
    int Guc = 60;

public:
    string isim() { return Isim;}
    int can() { return Can;}
    int guc() { return Guc;}

    void saldir(string ad, int can, int guc);
};

void Savas::saldir(string ad="Veli", int can=rand() % 100, int guc=rand() % 100) {
    cout << "Isim:" << ad << endl;
    cout << "Can:" << can << endl;
    cout << "Guc:" << guc << endl;

    if(can > 50 and guc > 50){
        cout << "Savasi kazandiniz " << ad << " Bey" << endl;
    }
    else{
        cout << "Savasi kaybettiniz " << ad << " Bey" << endl;
    }
}

int main() {
    srand(time(0));
    string a;
    cout << "Lutfen bir isim giriniz:" << endl;
    cin >> a;
    Savas saldiran;
    string isim = saldiran.isim();
    int can = saldiran.can();
    int guc = saldiran.guc();
    cout << endl << isim << endl << can << endl << guc << endl << endl;
    saldiran.saldir(a);

    return 0;
}
