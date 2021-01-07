#include <iostream>
using namespace std;

class Sayilar{
public:
     virtual string Tanim_kumesi(){
        return 0;
    }
};
class Dogal_Sayilar: public Sayilar {
public:
    string Tanim_kumesi() override  {
        return " {0,1,2,3,4,5,6,...} ";
    }
};
class Tam_Sayilar:public Sayilar{
public:
    string Tanim_kumesi() override {
        return " {...,-3,-2,-1,0,1,2,3,...} ";
    }
};
class Reel_Sayilar:public Sayilar{
public:
    string Tanim_kumesi() override {
        return " {... , ...} ";
    }
};

int main() {
    Dogal_Sayilar ds;
    Tam_Sayilar ts;
    Reel_Sayilar rs;

    cout<<"Dogal Sayilar  :"<<ds.Tanim_kumesi()<<endl;
    cout<<"Tam   Sayilar  :"<<ts.Tanim_kumesi()<<endl;
    cout<<"Reel  Sayilar  :"<<rs.Tanim_kumesi()<<endl;


    return 0;
}
