#include <iostream>

using namespace std;

class atm {
private:
    string Ad;
    string Soyad;
    int Sifre;
public:
    string ad() { return Ad; }

    string soyad() { return Soyad; }

    int sifre() const { return Sifre; }

    bool kontrol(string a, string s, int ss);
};

bool atm::kontrol(string a, string s, int ss) {
    Ad = a;
    Soyad = s;
    Sifre = ss;
    return true;
}

int main() {
    atm bilgi;
    bilgi.kontrol("Firat", "Erdem", 1234);
    string a, s;
    int ss, x;
    for (int i = 0; i < 3; ++i) {
        cout << "Lutfen kart sahibinin adini giriniz...:";
        cin >> a;
        cout << "Lutfen kart sahibinin soyadini giriniz...:";
        cin >> s;
        if (a != bilgi.ad() || s != bilgi.soyad()) {
            cout << "Hatali girdiniz kalan hakkiniz: " << 2 - i << "\n";
            if (i == 2) {
                cout << "Hatali giris hakkiniz dolmustur.\n "
                        "Kartiniz ATM tarafindan yutuldu en yakin subemizle iletisime geciniz. ";
            }
        } else if (a == bilgi.ad() && s == bilgi.soyad()) {
            cout << "Lutfen kart sifrenizi giriniz...:";
            cin >> ss;
            if (ss != bilgi.sifre()) {

                cout << "Hatali sifre kartiniz iade ediliyor...: ";
                git:
                break;

            } else if (ss == bilgi.sifre()) {

                for (int j = 0; j < 3; ++j) {

                    cout << "Hesap bakiyeniz...:3000TL\n";

                    cout << "Lutfen cekmek istediginiz tutari giriniz...:";
                    cin >> x;

                    if (x > 3000) {
                        cout << "Bakiye yetersiz.";
                        if (j == 2) {
                            cout << "Kartiniz iade ediliyor...";
                            goto git;
                        }

                    } else if (x <= 3000) {
                        cout << "Para cekme isleminiz tamamlanmistir\n"
                                "Yeni bakiyeniz...:" << 3000 - x <<
                             "\nKartiniz iade ediliyor"

                             "\niyi gunler dileriz\n";
                        goto git;

                    }

                }
            }
        }
    }
    return 0;
}
