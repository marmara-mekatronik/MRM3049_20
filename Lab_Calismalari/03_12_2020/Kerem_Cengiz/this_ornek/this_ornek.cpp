#include <iostream>

using namespace std;

class Ucak {

   public:
       Ucak( double murettebatSayisi, double azamiHiz, double havadaKalmaSuresi, double azamiSavasYuku, double azamiKalkisAgirligi, double icYakitRezervi) {
       cout <<"Constructor cagirildi." << endl;
       this-> murettebatSayisi = murettebatSayisi;
       this-> azamiHiz = azamiHiz;
       this-> havadaKalmaSuresi = havadaKalmaSuresi;
       this-> azamiSavasYuku = azamiSavasYuku;
       this-> azamiKalkisAgirligi = azamiKalkisAgirligi;
       this-> icYakitRezervi = icYakitRezervi;

    }
        double getMurettebatSayisi(){
            return this->murettebatSayisi;
        }
        double getAzamiHiz(){
            return this->azamiHiz;
        }
        double getHavadaKalmaSuresi(){
            return this->havadaKalmaSuresi;
        }
        double getAzamiSavasYuku(){
            return this->azamiSavasYuku;
        }
        double getAzamiKalkisAgirligi(){
            return this->azamiKalkisAgirligi;
        }
        double getIcYakitRezervi(){
            return this->icYakitRezervi;
        }


      double murettebatSayisiKarsilastir(Ucak ucak2) {
      return this-> murettebatSayisi - ucak2.murettebatSayisi;

      }
      double azamiHizKarsilastir(Ucak ucak2) {
      return this-> azamiHiz - ucak2.azamiHiz;

      }
      double havadaKalmaSuresiKarsilastir(Ucak ucak2) {
      return this-> havadaKalmaSuresi - ucak2.havadaKalmaSuresi;

      }
      double azamiSavasYukuKarsilastir(Ucak ucak2) {
      return this-> azamiSavasYuku - ucak2.azamiSavasYuku;

      }
      double azamiKalkisAgirligiKarsilastir(Ucak ucak2) {
      return this-> azamiKalkisAgirligi - ucak2.azamiKalkisAgirligi;

      }
      double icYakitRezerviKarsilastir(Ucak ucak2) {
      return this-> icYakitRezervi - ucak2.icYakitRezervi;

      }

   private:

       double murettebatSayisi;
       double azamiHiz ;
       double havadaKalmaSuresi;
       double azamiSavasYuku;
       double azamiKalkisAgirligi;
       double icYakitRezervi;
};

int main(void) {
   Ucak ucak1(1, 1932, 5.8, 8160, 41200, 8391);
   Ucak ucak2(1, 2600, 2.36, 10000, 37000, 11100);

   cout << " " << endl;

   double murettebatSayisiSonuc = ucak1.murettebatSayisiKarsilastir(ucak2);
   double azamiHizSonuc = ucak1.azamiHizKarsilastir(ucak2);
   double havadaKalmaSuresiSonuc = ucak1.havadaKalmaSuresiKarsilastir(ucak2);
   double azamiSavasYukuSonuc = ucak1.azamiSavasYukuKarsilastir(ucak2);
   double azamiKalkisAgirligiSonuc = ucak1.azamiKalkisAgirligiKarsilastir(ucak2);
   double icYakitRezerviSonuc = ucak1.icYakitRezerviKarsilastir(ucak2);


   if(murettebatSayisiSonuc > 0) {
      cout << "Ucak1'in murettebat sayisi Ucak2'den daha fazladir" <<endl;
   } else if (murettebatSayisiSonuc < 0 ) {
    cout << "Ucak2'nin murettebat sayisi Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin murettebat sayisi esittir " << endl;
   }
   if(azamiHizSonuc > 0) {
      cout << "Ucak1'in murettebat sayisi Ucak2'den daha fazladir" <<endl;
   } else if (azamiHizSonuc < 0 ) {
    cout << "Ucak2'nin azami hizi Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin azami hizi esittir " << endl;
   }
   if(havadaKalmaSuresiSonuc > 0) {
      cout << "Ucak1'in havada kalma suresi Ucak2'den daha fazladir" <<endl;
   } else if (havadaKalmaSuresiSonuc < 0 ) {
    cout << "Ucak2'nin havada kalma suresi Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin havada kalma suresi esittir " << endl;
   }
   if(azamiSavasYukuSonuc > 0) {
      cout << "Ucak1'in azami savas yuku Ucak2'den daha fazladir" <<endl;
   } else if (azamiSavasYukuSonuc < 0 ) {
    cout << "Ucak2'nin azami savas yuku Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin azami savas yuku esittir " << endl;
   }
   if(azamiKalkisAgirligiSonuc > 0) {
      cout << "Ucak1'in azami kalkis agirligi Ucak2'den daha fazladir" <<endl;
   } else if (azamiKalkisAgirligiSonuc < 0 ) {
    cout << "Ucak2'nin azami kalkis agirligi Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin azami kalkis agirligi esittir " << endl;
   }
   if(icYakitRezerviSonuc > 0) {
      cout << "Ucak1'in ic yakit rezervi Ucak2'den daha fazladir" <<endl;
   } else if (icYakitRezerviSonuc < 0 ) {
    cout << "Ucak2'nin ic yakit rezervi Ucak1'den daha fazladir" << endl;
   } else {
       cout << "Ucak1'in ve Ucak2'nin ic yakit rezervi esittir " << endl;
   }
   return 0;
}
