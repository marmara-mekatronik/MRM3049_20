#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    void setDisarisi(int x);
    int getDisarisi (void);
    Disarisi();
    ~Disarisi();

    class Icerisi{
    private:
        int y;
    public:
             void setIcerisi(int y);
             int getIcerisi(void);
        Icerisi();
        ~Icerisi();
    };
};
Disarisi::Disarisi() {
    x=5;
}
Disarisi::~Disarisi(){}
Disarisi::Icerisi::Icerisi() {
    y=10;
}
Disarisi::Icerisi::~Icerisi(){}
void Disarisi::setDisarisi(int d){
x=d;
}
int Disarisi::getDisarisi(){
return x;}

void Disarisi::Icerisi::setIcerisi(int t){
y=t;
}
int Disarisi::Icerisi::getIcerisi(){
return y;}

int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;
    cout << "Disarinin 1. degeri: "<<distaraf.getDisarisi()<<endl;
    distaraf.setDisarisi(70);
    cout << "Disarinin 2. degeri: "<<distaraf.getDisarisi()<<endl;

    cout << "Icerisi 1. degeri: "<<ictaraf.getIcerisi()<<endl;
    ictaraf.setIcerisi(16);
    cout << "Icerisi 2. degeri: "<<ictaraf.getIcerisi();
    return 0;
}
