#include <iostream>
#define pi 3.14
using namespace std;

class Silindir{
public:
    void setHacim(double r, double h);
    double getHacim(void);
    Silindir();
    ~Silindir();

private:
    double yaricap;
    double yukseklik;
};

Silindir::Silindir() {
    cout<<"Su anda nesne olusturuluyor."<<endl;
}

Silindir::~Silindir() {
    cout<<"Su anda nesne siliniyor.";
}

void Silindir::setHacim(double r, double h) {
    yaricap=r;
    yukseklik=h;
}

double Silindir::getHacim() {
    return pi*yaricap*yaricap*yukseklik;
}

int main(){
    Silindir silindir;
    silindir.setHacim(5.5,11.11);
    cout<<silindir.getHacim()<<endl;
}
