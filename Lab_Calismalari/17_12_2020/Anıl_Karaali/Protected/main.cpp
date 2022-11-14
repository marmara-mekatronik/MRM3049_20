#include <iostream>

using namespace std;

class Otomobil {
public:
    void setModel(string oModel);
    string getModel();

    void setMarka(string oMarka);
    string getMarka();

    void setTekerlek(int oTeker);
    int getTekerlek();
protected:
    string Marka;
    string Model;
    int Tekerlek;

};
void Otomobil::setMarka(string oMarka) {
    Marka = oMarka;
}

string Otomobil::getMarka() {
    return Marka;
}
void Otomobil::setModel(string oModel) {
    Model = oModel;
}
string Otomobil::getModel() {
    return Model;
}

void Otomobil::setTekerlek(int oTeker){
    Tekerlek = oTeker;
}
int Otomobil::getTekerlek() {
    return Tekerlek;
}
class Otobus :public Otomobil {
public:
    Otobus() {
        cout << "Otobus özellikleri yazdırılıyor..." << endl;
    }

};

int main() {

    Otobus Van;
    Van.setMarka("Mercedes");
    Van.setModel("Vito");
    Van.setTekerlek(6);

    cout << "Otobus adi :" << Van.getMarka()<< endl;
    cout << "Otobus adi :" << Van.getModel()<< endl;
    cout << "Otobüs Tekerlek sayisi : " <<Van.getTekerlek();
    return 0;
}
