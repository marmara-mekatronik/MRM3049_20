#include <iostream>

using namespace std;

class Para {
public:
    Para (double k=2.0, double b=2.0){
        cout << "Yapici fonksiyon cagriliyor...\n" << endl;
        kagit = k;
        bozukluk = b;
    }
    double toplam (){
        return kagit + bozukluk ;
    }
    int karsilastir (Para para){
        return this->toplam() > para.toplam();
    }

private:
    double kagit;
    double bozukluk;
};

int main() {
    Para Para1(6.99,12.5);
    Para Para2(6.5,4.65);

    if(Para1.karsilastir(Para2))
    {
        cout << "Para1 de Para2 den daha fazla para vardir. " << endl;
    } else {
        cout << "Para2 de Para1 den daha fazla para vardir. " << endl;
    }

}
