#include <iostream>

using namespace std;

class Hayvan 
{
  public:
  Hayvan() {cout << "Hayvan olusturuldu!" << endl;}
  ~Hayvan() {cout << "Hayvan silindi!" << endl;}
};

class Kus : public Hayvan
{
  public:
  Kus() {cout << "Kus olusturuldu!" << endl;}
  ~Kus() {cout << "Kus silindi!" << endl;}
};

int main()
{
  Hayvan *h = new Kus();
  
  delete h;
  
  return 0;
}
