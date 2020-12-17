#include <iostream>
using namespace std;

class Araba
{
public:
    Araba(int f = 200000, int y = 2005);
    void setFiyat(int f);
    void setYil(int y);

protected:
    int yil;
    int fiyat;
};
void Araba::setFiyat(int f)
{
    fiyat = f;
}
void Araba::setYil(int y)
{
    yil = y;
}
Araba::Araba(int f, int y)
{
    yil = y;
    fiyat = f;
}

class Toyota : public Araba
{
public:
    Toyota(int f = 100000, int y = 2020);
    void getarac()
    {
        cout << "Aracinizin fiyati: " << fiyat<<endl;
        cout << "Aracinizin yili: " << yil<<endl;
    }
};

Toyota::Toyota(int f, int y)
{
    fiyat = f;
    yil = y;
}

int main()
{
    Toyota Toyota1;
    Toyota1.setYil(2010);
    Toyota1.setFiyat(300000);
    Toyota1.getarac();
    return 0;
}
