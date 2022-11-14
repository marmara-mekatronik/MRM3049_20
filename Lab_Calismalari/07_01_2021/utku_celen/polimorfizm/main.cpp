#include <iostream>

using namespace std;
class turkce {
public:
    virtual string cumle() {
        return "bugun gidecegim";
    }
};

class Ingilizce : public turkce {
public:
    string cumle() override {
        return "Inglizce: I will go today";
    }
};

class Almanca : public turkce {
public:
    string cumle()override {
        return "Almanca : Ich werde heute gehen";
    }
};
int main() {
   
    turkce* ptrDizidil[3];
    ptrDizidil[0] = new turkce();
    ptrDizidil[1] = new Ingilizce();
    ptrDizidil[2] = new Almanca();

    for (int i = 0; i < 3; ++i) {
        cout << ptrDizidil[i]->cumle() << endl;
    }
    return 0;
}
