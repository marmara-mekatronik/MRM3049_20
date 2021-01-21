#include <iostream>

using namespace std;

template <class T>
class Depo{
private:
    T m_deger;
public:
    Depo(T deger){
        m_deger=deger;
    }
    ~Depo(){}
    void getDeger(){
        cout << m_deger << endl;
    }
};

int main() {
    Depo<int> iDeger(5);
    Depo<double> dDeger(6.7);

    iDeger.getDeger();
    dDeger.getDeger();

    return 0;
}
