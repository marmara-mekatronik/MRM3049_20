#include <iostream>
//Class Constructor with param

using namespace std;

class Dusman{
public:
    void setGuc(double Guc);
    double getGuc(void);
    Dusman(double Guc);
    ~Dusman();
private:
    double guc;
};

Dusman::Dusman(double Guc) {
    cout << "Nesne olusturulurken calisan metot" << endl;
    guc = Guc;
    cout << "Dusman Olusturulurken verilen Guc : " << Guc;
}

Dusman::~Dusman() {
    cout << "\nNesne kaldirilirken calisan metot" << endl;
}

void Dusman::setGuc(double Guc) {
    guc = Guc;
}

double Dusman::getGuc() {
    return guc;
}

int main() {
    Dusman dusman(50);
    dusman.setGuc(100.45);
    cout << "\nGuc degeri degistirildikten sonra degeri : " << dusman.getGuc();
    return 0;
}
