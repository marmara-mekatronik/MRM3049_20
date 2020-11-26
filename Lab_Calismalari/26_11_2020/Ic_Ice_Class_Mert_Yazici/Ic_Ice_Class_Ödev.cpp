#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    void setDisarisi(int x);
    int getDisarisi(void);
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
Disarisi::~Disarisi() {
}
Disarisi::Icerisi::Icerisi() {
    y=10;
}
Disarisi::Icerisi::~Icerisi() {

}
void Disarisi::setDisarisi(int disarideger){
 x=disarideger;
}

int Disarisi::getDisarisi(){
return x;
}
void Disarisi::Icerisi::setIcerisi(int icerideger){
 y=icerideger;
}

int Disarisi::Icerisi::getIcerisi(){
return y;
}
int main() {
    Disarisi distaraf;
    cout << "disari tarafin onceki degeri:" << distaraf.getDisarisi() << endl;
    distaraf.setDisarisi(55);
    cout << "disari tarafin simdiki degeri:" << distaraf.getDisarisi() << endl;
    Disarisi::Icerisi ictaraf;
    cout << "ic tarafin onceki degeri:" << ictaraf.getIcerisi() << endl;
    ictaraf.setIcerisi(30);
    cout << "ic tarafin simdiki degeri:" << ictaraf.getIcerisi();

    return 0;
}
