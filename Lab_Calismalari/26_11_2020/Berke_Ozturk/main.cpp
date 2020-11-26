#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
    Disarisi(int a);
    void getDeger ();

    class Icerisi{
    private:
        int y;
    public:
        Icerisi(int b);
         void getIDeger();
    };
};
Disarisi::Disarisi(int a) {
    x=a;
}

Disarisi::Icerisi::Icerisi(int b) {
    y=b;
}

void Disarisi::getDeger(){
	cout<<x<<endl;
}

void Disarisi::Icerisi::getIDeger(){
	cout<<y<<endl;
}




int main() {
    Disarisi distaraf(5);
    Disarisi::Icerisi ictaraf(10);


distaraf.getDeger();
ictaraf.getIDeger(); 



    return 0;
}
