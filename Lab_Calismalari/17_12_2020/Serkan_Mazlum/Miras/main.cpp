#include <iostream>
//miras alma
using namespace std;
class araba {
public:
    void setHiz(int v);
    void setRPM(int r);
    void settork(int t);
protected:
    int hiz,klmtr,rpm,tork;
};

void araba::setHiz(int v) {
    hiz = v;
}
void araba::setRPM(int r) {
    rpm = r;
}
void araba ::settork(int t) {
    tork = t;
}
class ralli : public araba{
public:
    int beygir(){
        return tork*rpm;
    }
};

int main(){
    ralli ralli1;
    ralli1.settork(480);
    ralli1.setRPM(2500);
    cout << "Beygir = "<<ralli1.beygir()<<" Hp";

return 0;
}
