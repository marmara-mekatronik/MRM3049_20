#include <iostream>
using namespace std;

class Yolcu
{
public:
    virtual string gidis()
    {
        return "Yolcu bir yere gitmiyor.";
    }
};

class Yurume : public Yolcu
{
public:
    string gidis() override
    {
        return "Yolcu yuruyerek gidiyor.";
    }
};

class Bisiklet : public Yolcu
{
public:
    string gidis() override
    {
        return "Yolcu bisiklet ile gidiyor.";
    }
};

class Toplu_Tasima : public Yolcu
{
public:
    string gidis() override
    {
        return "Yolcu toplu tasima ile gidiyor.";
    }
};

class Otomobil : public Yolcu
{
public:
    string gidis() override
    {
        return "Yolcu kisisel araci ile gidiyor.";
    }
};

int main()
{
    Yolcu yolcu1;

    cout << yolcu1.gidis() << endl;

    Yolcu *ptrDiziYolcu[4];
    ptrDiziYolcu[0] = new Yurume();
    ptrDiziYolcu[1] = new Bisiklet();
    ptrDiziYolcu[2] = new Toplu_Tasima();
    ptrDiziYolcu[3] = new Otomobil();

    for (int i = 0; i < 4; i++)
    {
        cout << ptrDiziYolcu[i]->gidis() << endl;
    }

    return 0;
}
