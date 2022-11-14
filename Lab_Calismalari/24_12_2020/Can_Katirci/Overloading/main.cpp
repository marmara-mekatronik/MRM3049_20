#include <iostream>

using namespace std;
class Dizi{
public:
    Dizi(){
        kalinandakika=0;
        bolum=0;
        bolumdakikasi=0;
    }
    Dizi operator++(){
        ++kalinandakika;
        if (kalinandakika == bolumdakikasi){
            ++bolum;
            kalinandakika -= bolumdakikasi;
        }
    }
    Dizi operator++(int){
        Dizi d;
        ++kalinandakika;
        if (kalinandakika == bolumdakikasi){
            ++bolum;
            kalinandakika -= bolumdakikasi;
        }
        return d;
    }

    void gosterBolum();
    void setKalinanDakika(int);
    void setBolum(int);
    void setBolumDakikasi(int);

protected:
    int kalinandakika;
    int bolum;
    int bolumdakikasi;

};

void Dizi::setKalinanDakika(int kd) {
    kalinandakika = kd;
}

void Dizi::setBolum(int b) {
    bolum = b;
}
void Dizi::setBolumDakikasi(int bd) {
    bolumdakikasi = bd;
}

class Toplamdakika: public Dizi {
public:
    int getToplamdakika() {
        return ((bolum - 1) * bolumdakikasi) + kalinandakika;
    }
};

void Dizi::gosterBolum() {
    cout << "Kalinan Bolum: " << bolum << endl << "Kalinan Dakika: " << kalinandakika << endl;
}
int main() {
    Toplamdakika Friends, BreakingBad;
    Friends.setBolumDakikasi(22);
    Friends.setBolum(12);
    Friends.setKalinanDakika(21);
    Friends.gosterBolum();

    cout << "**********" << endl;

    ++Friends;
    Friends.gosterBolum();
    cout<<"**********"<<endl;
    ++Friends;
    Friends.gosterBolum();

    int toplamdakika1;
    toplamdakika1 = Friends.getToplamdakika();
    cout << "Su ana kadar bu diziyi toplam " << toplamdakika1 << " dakika izlediniz." << endl;

    cout<<"**********"<<endl;

    BreakingBad.setBolumDakikasi(40);
    BreakingBad.setBolum(21);
    BreakingBad.setKalinanDakika(15);
    BreakingBad.gosterBolum();
    cout<<"**********"<<endl;

    BreakingBad++;
    BreakingBad.gosterBolum();
    cout<<"**********"<<endl;
    BreakingBad++;
    BreakingBad.gosterBolum();

    int toplamdakika2;
    toplamdakika2 = BreakingBad.getToplamdakika();
    cout << "Su ana kadar bu diziyi toplam " << toplamdakika2 << " dakika izlediniz." << endl;

    return 0;
}
