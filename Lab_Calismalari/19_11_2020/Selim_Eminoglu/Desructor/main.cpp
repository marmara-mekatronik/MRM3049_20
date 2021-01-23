#include <iostream>

using namespace std;

class termometre{
public:
    double derece;
    void ayar();
    double derece_gor();
    termometre(double derece);// sınıfın ic islemi gibi parametreli olabilir
    ~termometre();// bu yok edici isaret
private:
    double alt_sinir;
    double ust_sinir;
};

void termometre::ayar() {
    cout<<"yeni sınırları girin:"<<endl;
    cin>>alt_sinir;
    cin>>ust_sinir;
}

termometre::termometre(double derece) {
    cout<<"termometre acılıyor"<<endl;
    alt_sinir=0;
    ust_sinir=100;
    cout <<"alt sınır :"<<alt_sinir<<endl;
    cout <<"üst sınır :"<<ust_sinir<<endl;
}

termometre::~termometre(){
    cout<<"termometre kapanıyor"<<endl;
}

double termometre::derece_gor() {
    return derece;
}

int main() {
    termometre olcer();
    olcer().ayar();
    cout<<olcer().derece_gor()<<endl;

    return 0;
}
