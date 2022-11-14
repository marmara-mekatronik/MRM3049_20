#include <iostream>
using namespace std;
class Kagit{
public:
    virtual string boyut(){
        return "boyut yok";
    }
};
class A0: public Kagit {
public:
    string boyut()  {
        return "841x1198 mm";
    }
};
class A1:public Kagit{
public:
    string boyut() {
        return "594x841 mm";
    }
};
class A2:public Kagit{
public:
    string boyut() {
        return "420x594 mm";
    }
};
class A3:public Kagit{
public:
    string boyut() {
        return "297x420 mm";
    }
};
class A4:public Kagit{
public:
    string boyut() {
        return "210x297 mm";
    }
};
class A5:public Kagit{
public:
    string boyut() {
        return "148x210 mm";
    }
};
class A6:public Kagit{
public:
    string boyut() {
        return "216x279 mm";
    }
};

int main() {

    Kagit *ptrArryboyut[7];
    ptrArryboyut[0]=new A0();
    ptrArryboyut[1]=new A1();
    ptrArryboyut[2]=new A2();
    ptrArryboyut[3]=new A3();
    ptrArryboyut[4]=new A4();
    ptrArryboyut[5]=new A5();
    ptrArryboyut[6]=new A6();


    for(int i=0;i<7;++i){
        cout<<"A"<<i<<" boyutu = "<< ptrArryboyut[i]->boyut()<< endl;
    }

    return 0;
}
