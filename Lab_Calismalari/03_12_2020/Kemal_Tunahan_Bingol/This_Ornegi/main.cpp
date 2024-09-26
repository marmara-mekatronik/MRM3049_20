#include <iostream>

using namespace std;

class Dusman{
public:
    string Isim;
    Dusman(string ,int ,int ,int );
    void bilgi();
    int *saldir(Dusman );
    bool kazanan(Dusman );

private:
    int Guc;
    int Can;
    int Mermi;
    int veri[2];
};

Dusman::Dusman(string isim = "Dusman", int guc = 100, int can = 100, int mermi = 30) {
    cout << "Yapici fonk calisiyor." << endl;
    Isim = isim;
    Guc = guc;
    Can = can;
    Mermi = mermi;
}

void Dusman::bilgi() {
    cout << "\nIsim : " << Isim << endl;
    cout << "Guc : " << Guc << endl;
    cout << "Can : " << Can << endl;
    cout << "Mermi : " << Mermi << endl;
}
int* Dusman::saldir(Dusman dusman) {
    int guc = this->Mermi * this->Guc;
    int guc2 = dusman.Mermi * dusman.Guc;
    veri[0] = guc;
    veri[1] = guc2;
    return veri;
}

bool Dusman::kazanan(Dusman dusman) {
    cout << endl << this->Isim << " saldiriyor..." << endl;
    cout << dusman.Isim << " saldiriya ugruyor!!!" << endl;
    int *a = this->saldir(dusman);
    int bir = a[0] - dusman.Can * dusman.Guc;
    int iki = a[1] - this->Can * this->Guc;

    if(bir > iki){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    Dusman dusman1("Ahmet",80,66,25);
    Dusman dusman2("Ali",75,70,22);

    dusman1.bilgi();
    dusman2.bilgi();

    /*
    int *a = dusman1.saldir(dusman2);
    cout << a[0] << " " << a[1] << endl;
     */

    bool kontrol = dusman1.kazanan(dusman2);

    if(kontrol){
        cout << endl << dusman1.Isim << " saldirdi ve kazandi... (Dusman1)" << endl << dusman2.Isim << " saldiriya ugradi ve kaybetti!!! (Dusman2)" << endl;
    }
    else{
        cout << endl << dusman2.Isim << " saldiriya ugradi ve  kazandi... (Dusman2)" << endl << dusman1.Isim << " saldirdi ve kaybetti!!! (Dusman1)" << endl;
    }
    return 0;
}
