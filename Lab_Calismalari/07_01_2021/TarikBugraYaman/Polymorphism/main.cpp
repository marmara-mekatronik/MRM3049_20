#include <iostream>

using namespace std;
class Bitki{
public:
    virtual string ureme(){

        return "bitkilerdeki ureme cesitleri\n1.Sporla ureme \n2.Vegetatif Ureme";
    }
};
class EgreltiOtu: public Bitki{
public:
    string ureme() {
        return "Spor";
    }
};

class CamAgaci: public Bitki{
public:
    string ureme() {
        return "Vegetatif Ureme";
    }
};


int main() {

    Bitki *ptrDiziBitki[2];
    ptrDiziBitki[0]=new CamAgaci();
    ptrDiziBitki[1]=new EgreltiOtu();


    for (int i = 0; i < 2; ++i) {
        cout<< ptrDiziBitki[i]->ureme() << endl;
    }
    return 0;
}
