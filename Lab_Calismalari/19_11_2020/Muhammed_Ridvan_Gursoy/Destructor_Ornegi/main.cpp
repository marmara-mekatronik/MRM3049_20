#include <iostream>

using namespace std;


class Para{
public:
    void setPara(double ParaMiktari);
    double getPara(void);
    Para(double ParaMiktari);
    ~Para();
private:
    double miktar;
};

Para::Para(double ParaMiktari){
    cout<< "Paraniz Hesabiniza Aktariliyor Lutfen Bekleyiniz..."<< endl;
    miktar=ParaMiktari;
    cout<< "Parayi Yatirmadan Onceki Varliginiz:"<<ParaMiktari ;
}

Para::~Para(){
    cout<< "\nPara Aktarim Isleminiz Sonlandiriliyor...\nBizi Tercih Ettiginiz Icin Tesekkur Eder, Iyi Gunler Dileriz :)"<< endl;
}

void Para::setPara(double ParaMiktari){
    miktar=ParaMiktari;
}

double Para::getPara(){
    return miktar;
}


int main()
{
    Para paraniz(124.5);
    paraniz.setPara(1250.75);
    cout<< "\nParayi Yatirdiktan Sonraki Varliginiz:"<<paraniz.getPara() ;
    return 0;
}
