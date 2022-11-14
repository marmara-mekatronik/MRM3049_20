#include <iostream>
using namespace std;

class Araba
        {
        public:
            virtual string ozellik() {return "Normal araba";}
        };

class Amerikan:public Araba
        {
        public:
            string ozellik() override {return "Guclu";}
        };

class Alman:public Araba
        {
        public:
            string ozellik() override {return "Luks";}
        };

class Italyan:public Araba
        {
        public:
            string ozellik() override {return "Hizli";}
        };

class Japon:public Araba
        {
        public:
            string ozellik() override {return "Donanimli";}
        };

int main()
{
    Araba *ptrDiziAraba[4];
    ptrDiziAraba[0] = new Amerikan();
    ptrDiziAraba[1] = new Alman();
    ptrDiziAraba[2] = new Italyan();
    ptrDiziAraba[3] = new Japon();

    for(int i=0; i<4; ++i)
    {
        cout << ptrDiziAraba[i]->ozellik() << endl;
    }
    
    return 0;
}
