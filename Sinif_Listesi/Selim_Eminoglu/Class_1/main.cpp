#include <iostream>

using namespace std;

class isci{
private:
    string ad="Selim";       // varsayilan deger atamasi yapildi
    string soyad="Eminoglu";
    int yas=21;
public:
    string Ad(){return ad;}    // private degerlere erisme fonksiyonlari
    string Soyad(){return soyad;}
    int Yas(){return yas;}

    bool kontrol(string a,string s,int y); // fonksiyon prototipi

    int maas;
    string mevki;

    // isci sınıfı metodlari

    int zam_yap(int zam){
        maas=maas+zam;
        return 0;
    }

    string mevki_degis(string new_position){
        if(new_position.empty()) // string ifadenin bos olup olmadiginin kontrolu
            cout<<"mevki girin!!";
        mevki=new_position;
    }

};
// fonksiyon prototipinin aciklamasi
bool isci::kontrol(string a, string s, int y) {

    if(a.empty()){
        cout<<"İsim giriniz!!";
        return false;
    }
    if(s.empty()){
        cout<<"Soyadi giriniz!!";
        return false;
    }
    if ((y<=0)||(y>150)){return false;}

    ad=a;
    soyad=s;
    yas=y;
    return true;
}

int main() {
    isci patron; // ilk nesne
    patron.mevki="Boss";
    patron.maas=7000;

    isci yardimci; // ikinci nesne
    yardimci.kontrol("Mehmet","Kücük",34);
    yardimci.maas=3200;
    yardimci.mevki="Assistant";

    isci elemanlar[5]; // eleman dizisi

    while (1) { // zam,eleman ekleme ve maas programı
        int y;

        cout << "-----------------------" << endl;
        cout << "1.Eleman ekleme(5 kisi)" << endl;
        cout << "2.Zam yap" << endl;
        cout << "3.Mevki degistir" << endl;
        cout <<"4.Cikis"<<endl;
        cout << "-----------------------" << endl;
        cin >> y;

        switch (y) {
            case 1: {              // eleman ekleme kismi
                string is, soy;
                int ya;

                for (int i = 0; i < 5; i++) {
                    elemanlar[i].kontrol("bos", "bos", 0);
                    cout << "isim: " << endl;
                    cin >> is;
                    cout << "Soyad: " << endl;
                    cin >> soy;
                    cout << "Yas: " << endl;
                    cin >> ya;
                    elemanlar[i].kontrol(is, soy, ya);

                    cout << "Mevki: " << endl;
                    cin >> elemanlar[i].mevki;
                    cout << "Maas: " << endl;
                    cin >> elemanlar[i].maas;

                    cout << elemanlar[i].Ad() << endl;
                    cout << elemanlar[i].Soyad() << endl;
                    cout << elemanlar[i].Yas() << endl;
                    cout << elemanlar[i].mevki << endl;
                    cout << elemanlar[i].maas << endl;
                }
                break;
            }
            case 2: {           // Zam yapma kismi
                int f;
                cout << "Seciminiz:" << endl;
                cout << "1.Yardimci" << endl << "2.Elemanlar" << endl;
                cin >> f;
                if (f == 1) {
                    int z;
                    cout << "Zam miktari:" << endl;
                    cin >> z;
                    yardimci.zam_yap(z);
                    cout << "Yeni Maas" << yardimci.maas;
                }
                if (f == 2) {
                    int ek;
                    for (int e = 0; e < 6; ++e) {
                        cout << e << ". Elemanin zam miktari:" << endl;
                        cin >> ek;
                        elemanlar[e].zam_yap(ek);
                        cout << e << ". Elemanin yeni Maas:" << elemanlar[e].maas << endl;
                    }
                }
                break;
            }
            case 3: {           // Mevki Degistirme kismi
                int v;
                cout << "Seciminiz:" << endl;
                cout << "1.Yardimci" << endl << "2.Elemanlar" << endl;
                cin >> v;
                string new_mev;
                if (v == 1) {
                    cout << "Yeni pozisyon:" << endl;
                    cin >> new_mev;
                    yardimci.mevki_degis(new_mev);
                    cout << "Yeni poziyon:" << yardimci.mevki << endl;
                }
                string el_mev;
                if (v == 2) {
                    for (int b = 0; b < 6; ++b) {
                        cout << b << ". Elemanin yeni pozisyonu:" << endl;
                        cin >> el_mev;
                        elemanlar[b].mevki_degis(el_mev);
                        cout << b << ". Elemanin yeni pozisyonu:" << elemanlar[b].mevki << endl;
                    }
                }
                break;
            }
        }
        if (y<0 || y>5){
            cout<<"Dogru secenek giriniz!!"<<endl;
            continue;
        }
        if (y==4){      // Cikis kismi
            break;
        }
    }
    return 0;
}
