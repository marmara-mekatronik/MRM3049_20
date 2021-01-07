#include <iostream>
using namespace std;

class bisiklet{
public:
    virtual string ozellik(){
        return ("Standart bisiklet...");
    }
};

class dagBisikleti:public bisiklet{
public:
    string ozellik() override{
        return ("Dag bisikletinin tekerlekleri daha kalindir...");
    }
};

class yarisBisikleti:public bisiklet{
public:
    string ozellik() override{
        return ("Yaris bisikletinin tekerlekleri daha incedir...");
    }
};

int main() {
    bisiklet *bisikletler[3];

    bisikletler[0] = new bisiklet();
    bisikletler[1] = new dagBisikleti();
    bisikletler[2] = new yarisBisikleti();

    for ( int i=0; i<3; i++){
        cout << bisikletler[i]->ozellik() << endl;
    }
    return 0;
}
