#include <iostream>

using namespace std;

class Tasit{
public:
    void setMarka(string ma );
    void setModel(string mo);
    void setYil(int y);
    string getMarka(void);
    string getModel(void);
    double getYil(void);
protected:
    string marka , model;
    int yil;

};

void Tasit::setMarka(string ma) {
    marka=ma;
}
void Tasit::setModel(string mo) {
    model=mo;
}
void Tasit::setYil(int y) {
    yil=y;
}
string Tasit::getMarka(){
	
	return marka;
}
string Tasit::getModel(){
	
	return model;
}
double Tasit::getYil(){

    return yil;	
}


class Otomobil: public Tasit{

};



int main(){
    Otomobil araba1;
    araba1.setYil(2020);
    araba1.setModel("M4");
    araba1.setMarka("BMW");
   
    cout<<"Araba Ozellikleri:"<<araba1.getMarka()<<" "<<araba1.getModel()<<" "<<araba1.getYil()<<endl;


    return 0;
}
