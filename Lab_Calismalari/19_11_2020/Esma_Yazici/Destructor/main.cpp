#include <iostream>
using namespace std;

class Renk{
public:
    Renk(double r, double g, double  b);   //constructor
    ~Renk();   //destructor
private:
    double Red;
    double Green;
    double Blue;
};



Renk::Renk(double r, double g, double b) {
    cout<<"Su anda renginiz  olusturuluyor"<<endl;
    Red=r;
    Green=g;
    Blue=b;
    cout<<"Olusturdugunuz rengin R bileseni: "
          ":"<<Red<<"\nG bileseni: "<<Green<<"\nB bileseni:"<<Blue; }

Renk::~Renk(){
    cout<<"\nSu anda renginiz kaldiriliyor"<<endl;
}


int main(){
    double x;
    double y;
    double z;
    cout<<"\nRGB renk uzayinda olusturacaginiz rengin R bilesenini girin:(0-255)\n";
    cin>>x;
    cout<<"\nRengin G bilesenini girin:(0-255)\n";
    cin>>y;
    cout<<"\nRengin B bilesenini girin:(0-255)\n";
    cin>>z;
    Renk renk(x,y,z);

    return 0;
}
