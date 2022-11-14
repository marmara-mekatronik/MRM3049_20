#include <iostream>
using namespace std;

class Klima
{
protected:
    int sicaklik;
    int nem;

public:
    void goster()
    {
        cout << "Odanin Sicakligi: " << sicaklik << " Nem orani: " << nem << endl;
    }
};

class oda : public Klima
{
public:
    oda(int s, int n)
    {
        sicaklik = s;
        nem = n;
    }

    oda operator++()
    {
        sicaklik++;
        if (sicaklik == 25)
        {
            nem = nem + 5;
            sicaklik = 20;
        }
        if (nem == 60)
        {
            nem = 40;
        }
        return oda(sicaklik, nem);
    }
};

int main()
{
    oda oda1(24, 45);
    oda1.goster();
    ++oda1;
    oda1.goster();
    ++oda1;
    oda1.goster();
    return 0;
}
