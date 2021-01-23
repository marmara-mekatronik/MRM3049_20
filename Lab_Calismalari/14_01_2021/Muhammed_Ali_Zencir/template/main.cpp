#include <iostream>

using namespace std;

template <class Tur>
Tur topla(Tur deger1, Tur deger2) {
  return deger1 + deger2;
}

int main() {

  int sayi1 = 11, sayi2 = 22;
  cout << topla(sayi1, sayi2);

  cout << endl;

  float sayi3 = 30.7, sayi4 = 9.9;
  cout << topla(sayi3, sayi4);

  cout << endl;

  double sayi5 = 77.5, sayi6 = 87.6;
  cout << topla(sayi5, sayi6);

  return 0;
}
