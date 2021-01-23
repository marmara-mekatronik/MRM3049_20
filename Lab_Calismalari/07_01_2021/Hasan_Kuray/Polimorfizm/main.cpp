#include <iostream>
using namespace std;

class meyve{
public:
    virtual string benNeyim();
};

class elma:meyve {
public:
    string benNeyim(){ return "Ben bir elmayim"; };
};

class armut:meyve{
public:
    string benNeyim(){return "Ben bir armutum"; };
};

class cilek:meyve{
public:
    string benNeyim(){return "Ben bir cilegim"; };
};

class karpuz:meyve{
public:
    string benNeyim(){ return "Ben bir karpuzum"; };
};


int main() {

    elma e;
    armut a;
    cilek c;
    karpuz k;
    cout << "a nedir? --> " << a.benNeyim() << endl;
    cout << "e nedir? --> " << e.benNeyim() << endl;
    cout << "k nedir? --> " << k.benNeyim() << endl;
    cout << "c nedir? --> " << c.benNeyim() << endl;

    return 0;
}
