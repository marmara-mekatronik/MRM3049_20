#include <iostream>
using namespace std;

template<class T>
class Cift{
private:
    T deger1;
    T deger2;
public:
    Cift(T d1, T d2) : deger1(d1), deger2(d2) {}
    T getDeger1() const {
        return deger1;
    }

    T getDeger2() const {
        return deger2;
    }
    T topla() const {
        return deger1 + deger2;
    }
};
int main() {
    Cift<int> intCift(5, 10);
    Cift<double> doubleCift(3.14, 2.71);
    Cift<string> stringCift("Merhaba","Dunya");

    cout << "Toplam (int): " << intCift.topla() << endl;
    cout << "Toplam (double): " << doubleCift.topla() << endl;
   cout << "Toplam (string): " << stringCift.topla() << endl;
}
