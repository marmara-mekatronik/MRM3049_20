#include <iostream>
using namespace std;

class Tv{
private:
    char *kanallar[7] = {"Trt1","KanalD","ShowTv","StarTv","ATV","Fox","TrtSpor"};

public:
    bool tv_durum = false;
    int tv_ses=10;
    char *tv_kanal ="Trt1";

    void tvAc(){
        if(tv_durum == false){
            tv_durum = true;
            cout << "Televizyon acildi." << endl;
        }
        else
            cout << "Televizyon zaten acik" << endl;
    }

    void tvKapat(){
        if(tv_durum == true){
            tv_ses = 10;
            tv_kanal ="Trt1";
            tv_durum = false;
            cout << "Televizyon kapatildi." << endl;
        }
        else
            cout << "Televizyon zaten kapali" << endl;
    }

    void sesYukselt(int miktar){
        if(tv_durum == true){
            tv_ses += miktar;
            cout << "Ses:" << tv_ses << endl;
        }
        else
            cout << "Televizyon kapali iken islem yapilamaz." << endl;
    }

    void sesAzalt(int miktar){
        if(tv_durum == true){
            tv_ses -= miktar;
            cout << "Ses:" << tv_ses << endl;
        }
        else
            cout << "Televizyon kapali iken islem yapilamaz." << endl ;
    }

    void kanalDegis(int istenilen_kanal){
        if(tv_durum == true){
            istenilen_kanal -= 1;
            tv_kanal = kanallar[istenilen_kanal];
            cout << "Kanal: " << tv_kanal << endl;
        }
        else
            cout << "Televizyon kapali iken islem yapilamaz." << endl;
    }

};

int main() {
    Tv televizyon;

    televizyon.tvAc();
    televizyon.sesYukselt(15);
    televizyon.kanalDegis(5);
    televizyon.sesAzalt(10);
    televizyon.tvKapat();
    televizyon.sesYukselt(5);
    televizyon.tvKapat();

    cout << "Televizyon son durum: " << televizyon.tv_durum << endl;
    cout << "Televizyon ses: " << televizyon.tv_ses << endl;
    cout << "Televizyon kanal: " << televizyon.tv_kanal << endl;

    return 0;
}
