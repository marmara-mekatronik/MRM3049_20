#include <iostream>
using namespace  std ;
class soru {
private:
    int V1,t; // ilk hız , zaman
    float g;
public:
    int hiz(){
        float V = V1 + g*t ;
        return V;
    }
    int zaman (){return t;}
    int yukseklik(){
        float h = V1*t + g*t ;
        return h ;
    }
    bool limit (int Hiz ,int Zaman , float Ivme);

};
bool soru ::limit(int Hiz, int Zaman, float Ivme) {
    if (Zaman<=0) return false;
    if ((Hiz <=0)|| (Hiz > 100000)) return false;
    if (Ivme >=15) return false ;
    V1 = Hiz;
    t = Zaman;
    g = Ivme;
    return true;
}
int main() {
    int ZAMAN ,HIZ ;
    float IVME;
    cout << "Atis icin istenen değerleri girin "<<endl ;
    cout << "Hiz = ";
    cin  >> HIZ;
    cout << "\nZaman = ";
    cin >> ZAMAN;
    cout << "\nIvme = ";
    cin >> IVME;
    soru deneme1;
    soru sorular [3];
    soru *deneme;
    deneme = &deneme1;
    deneme1.limit(HIZ,ZAMAN,IVME);
    cout << "Son Hiz = "<<deneme1.hiz()<<endl;
    cout << "Zaman = "<<deneme1.zaman() <<endl;
    cout << "Max yukseklik = "<<deneme1.yukseklik()<<endl;
    cout << "----------------------------"<< endl;
    cout << "Atis icin istenen değerleri girin "<<endl ;
    cout << "Hiz = ";
    cin  >> HIZ;
    cout << "\nZaman = ";
    cin >> ZAMAN;
    cout << "\nIvme = ";
    cin >> IVME;
    deneme -> limit(HIZ,ZAMAN,IVME);
    cout << "Hiz ="<< deneme->hiz()<<endl;
    cout << "Zaman = "<< deneme->zaman()<<endl;
    cout << "Yukseklik ="<< deneme->yukseklik()<<endl;
    cout << "----------------"<<endl;
    sorular[0].limit (12,11,9.8);
    cout << "H max  ="<< sorular[0].yukseklik()<<endl;
    cout << "Hiz = "<< sorular[0].hiz()<<endl;
    cout << "zaman ="<< sorular[0].zaman()<<endl;



    return 0;
}
