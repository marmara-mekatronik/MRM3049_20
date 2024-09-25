#include <iostream>
using namespace std;

class Disarisi
{
private:
    int x;

public:
    void setDisarisi(double Disarisix);
    void getDisarisi(void);
    Disarisi();

    class Icerisi
    {
    private:
        int y;

    public:
        void setIcerisi(double Icerisiy);
        void getIcerisi();
        Icerisi();
    };
};
Disarisi::Disarisi()
{
    cout << "Su anda nesne olusturuluyor: ";
    x = 5;
}

Disarisi::Icerisi::Icerisi()
{
    cout << "Su anda nesne olusturuluyor: ";
    y = 10;
}

void Disarisi::setDisarisi(double Disarisix)
{
    x = Disarisix;
}
void Disarisi::getDisarisi()
{
    cout << x << endl;
}
void Disarisi::Icerisi::setIcerisi(double Icerisiy)
{
    y = Icerisiy;
}
void Disarisi::Icerisi::getIcerisi()
{
    cout << y << endl;
}
int main()
{
    Disarisi distaraf;
    distaraf.setDisarisi(50);
    distaraf.getDisarisi();

    Disarisi::Icerisi ictaraf;
    ictaraf.setIcerisi(60);
    ictaraf.getIcerisi();
    return 0;
}
