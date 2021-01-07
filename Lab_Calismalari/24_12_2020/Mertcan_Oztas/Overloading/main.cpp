#include <iostream>

using namespace std;

class Motor
{
    public:
        void setCap(int b);             //Silindir çapı
        void setStrok(int s);           //Strok sayısı
        void setSilindir(int c);        //Silindir sayısı

    protected:
        int cap, strok, silindir;
};

void Engine::setCap(int b) {cap = b;}
void Engine::setStrok(int s) {strok = s;}
void Engine::setSilindir(int c) {silindir = c;}

class Hacim:public Motor                //Motor hacmi
{
    int getHacim() {return ((cap * cap) * strok * silindir * (3.14 / 4))/100;}

    Hacim operator+(const Hacim& x)
    {
        Hacim motor1;
        motor1.cap=this->cap + x.cap;
        motor1.strok=this->strok + x.strok;
        motor1.silindir= this->silindir + x.silindir;
        return motor1
    }
};

int main()
{
    Hacim Motor1;
    Motor1.setCap(90);
    Motor1.setStrok(90);
    Motor1.setSilindir(8);

    Hacim Motor2;
    Motor2.setCap(85);
    Motor2.setStrok(80);
    Motor2.setSilindir(6);

    Hacim Motor3;
    int hacim = 0;
    Motor3 = Motor1 + Motor2;
    hacim = Motor3.getHacim();

    cout << "Toplam motor hacmi : " << hacim << endl;
    
    return 0;
}
