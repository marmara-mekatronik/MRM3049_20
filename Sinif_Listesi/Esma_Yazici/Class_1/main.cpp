#include <iostream>
using namespace std;

class Sinif{
private:
    string Isim;
    string Soyad;
    int Num;
public:
    string isim(){ return Isim;}
    string soyad(){return Soyad;}
    int num(){return Num;}

    bool ogrenci(string i, string  s, int n){
        Isim=i;
        Soyad=s;
        Num=n;
        return true;}
};



int main(){
    int t;
    int n=2;     //kalan hak sayımı işleminde kullanılıyor.
    int sayac;

for(int sayac=1; sayac<4; sayac++){
    cout<<"Sinitaki ogrenci sayisi: \n";
    cin>>t;
    if(t>0)
        break;
    if((t<1)&&(sayac!=3)){
        cout<<"Deger gecerli degil. "<<n<<" hak kaldi\n";
        n--;}
}

if((sayac=3)&&(t<1))
    cout<<"Tum haklariniz bitti.";

    Sinif A[t];

for(int i=0; i<t; i++) {   //Öğrenci bilgilerini kullanıcıdan alan fonksiyon.
    string x;
    string y;
    int z;
    i++;
    cout<<i<<". Ogrenci Adini Giriniz: \n";
    cin >> x;
    cout<<i<<". Ogrenci Soyadini Giriniz: \n";
    cin >> y;
    cout<<i<<". Ogrenci Numarasini Giriniz: \n";
    cin >> z;
    i--;
    A[i].ogrenci( x, y, z);
}

    char c;
if(t>0){
    cout<<"Ogrenci bilgilerini ekrana yazdirmak icin E, programi bitirmek icin H yazin.\n";
    cin>>c;
}

if(c=='E'){    //koşul sağlanırsa öğrencilerin bilgileri gösterilir
    cout<<"\nSINIFTAKI OGRENCI BILGILERI\n";
    int i=1;
    for(int d=0; d<t; d++) {

        cout << i << ". Ogrenci Adi: " << A[d].isim() << "\n";
        cout << i << ". Ogrenci Soyadi: " << A[d].soyad() << "\n";
        cout << i << ". Ogrenci Numarasi: " << A[d].num() << "\n";
        cout << "---------------" << endl;
        i++;}

}
if(c=='H'){
    return 0;}

if((c!='H')&&(c!='E')){
    cout<<"Gecerli islem degildir. Program sonlandirilir."; return 0;}

return 0;}
