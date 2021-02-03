#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;


inline int puan_inline(int b, int puan);

int puan_inline(int b,int puan) {
    if (b==1) {
        return puan=puan+2;
    }
    else {
        return puan=puan-1;
    }
}



int main() {
    char c;
    cout << "Her dogru cevap 2, yanlis cavap -1 puandir\n"<<"Sinavi baslatmak icin B, iptal etmek icin I yaziniz.\n";
    cin >> c;

    if (c=='I') {
        cout << "Sinaviniz iptal edilmistir"<<endl;
    }
    else if(c=='B') {
        int puan=0;
        int b, t, p;
        chrono::time_point<chrono::system_clock> baslangic, son;
        baslangic = chrono::system_clock::now();

        cout<<"48+22 isleminin sonucu nedir?";
        cin>>b;
        cout<<"13+28 isleminin sonucu nedir?";
        cin>>t;
        cout<<"42-8 isleminin sonucu nedir?";
        cin>>p;

        son = chrono::system_clock::now();
        chrono::duration<double> gecen_zaman = son - baslangic;

        if(b==70) puan=puan_inline( 1, puan);
        else puan=puan_inline( 0, puan);

        if(t==41) puan=puan_inline( 1, puan);
        else puan=puan_inline( 0, puan);

        if(p==34) puan=puan_inline( 1, puan);
        else puan=puan_inline( 0, puan);


        time_t baslangic_zamani = chrono::system_clock::to_time_t(baslangic);
        time_t bitis_zamani = chrono::system_clock::to_time_t(son);

        cout << "Sinava basladiginiz an= " << ctime(&baslangic_zamani) ;
        cout << "Sinavi bitirdiginiz an= " << ctime(&bitis_zamani) ;
        cout << "Sinavi cozme sureniz= " << gecen_zaman.count() << " saniyedir\n";
        cout << "Punaniniz= "<<puan<<endl;
    }
    else{
        cout<<"Gecerli bir islem degildir";
    }


    return 0;
}
