#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi();
	void dsdeger (int b);
	double dgdeger ();
    class Icerisi{
    private:
        int y;
    public:
        Icerisi();
        void sdeger (int a);
        double gdeger();
    };
};
Disarisi::Disarisi() {
    x=5;
}

Disarisi::Icerisi::Icerisi() {
    y=10;
}

void Disarisi::Icerisi::sdeger (int a) {
	y=a;
}

double Disarisi::Icerisi::gdeger() {
	return y;
}

void Disarisi::dsdeger(int b) {
	x=b;
}
double Disarisi::dgdeger() {
	return x;
}

int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;
    cout<<"x:"<<distaraf.dgdeger()<<endl;
    cout<<"y:"<<ictaraf.gdeger()<<endl;
    

    return 0;
}
