#include <iostream>
using namespace std;

class Disarisi{
private:
    int x;
public:
	int X(){return x;}
    Disarisi();
    Disarisi(int x);
    

    class Icerisi{
    private:
        int y;
    public:
    int Y(){return y;}
        Icerisi();
        Icerisi(int y);
    int getIcerisi();
    void setIcerisi(int y);
    };
    int getDisarisi();
    void setDisarisi(int x);
    
};
Disarisi::Disarisi(int x){
	this->x=x;
	}
Disarisi::Icerisi::Icerisi(int y){
	this->y=y;
}

Disarisi::Disarisi() {
    x=5;
}

Disarisi::Icerisi::Icerisi() {
    y=10;
}
int Disarisi::getDisarisi(){
	return X();
}
int Disarisi::Icerisi::getIcerisi(){
	return Y();
}
void Disarisi::setDisarisi(int x){
	this->x=x;
	
	
}
void Disarisi::Icerisi::setIcerisi(int y){
	
	this->y=y;
}


int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;
    Disarisi distarafparametreli(20);
    Disarisi::Icerisi ictarafparametreli(21);
    
    cout<< "Parametresiz dis tarafin ilk degeri:"<<distaraf.getDisarisi()<<endl;
    cout<< "Parametresiz ic tarafin ilk degeri"<<ictaraf.getIcerisi()<<endl;
     cout<<"\n";
    distaraf.setDisarisi(11);
    ictaraf.setIcerisi(9);
    
    cout <<"-----Degerler set metodu ile degistirildi----"<<endl;
	cout<< "Parametresiz dis tarafin degeri:"<<distaraf.getDisarisi()<<endl;
    cout<<"Parametresiz ic tarafin degeri:" <<ictaraf.getIcerisi()<<endl;
    cout<<"\n";
    
    cout <<"-----Parametrelilerin degerleri----"<<endl;
     cout<<"\n";
    
    cout<< "Parametreli distaraf degeri:"<<distarafparametreli.getDisarisi()<<endl;
    cout<< "Parametreli ic taraf degeri:"<<ictarafparametreli.getIcerisi()<<endl;
    
    
    
    
    

    return 0;
}
