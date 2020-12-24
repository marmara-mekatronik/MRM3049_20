#include <iostream>

using namespace std;

class Engine
{
    public:
        void setBore(int b);
        void setStroke(int s);
        void setCylinder(int c);

    protected:
        int bore, stroke, cylinder;
};

void Engine::setBore(int b) {bore = b;}
void Engine::setStroke(int s) {stroke = s;}
void Engine::setCylinder(int c) {cylinder = c;}

class Displacement:public Engine
{
    int getDisplacement() {return ((bore * bore) * stroke * cylinder * (3.14 / 4))/100;}

    Displacement operator+(const Displacement& x)
    {
        Displacement engine1;
        engine1.bore=this->bore + x.bore;
        engine1.stroke=this->stroke + x.stroke;
        engine1.cylinder= this->cylinder + x.cylinder;
        return engine1
    }
};

int main()
{
    Displacement Engine1;
    Engine1.setBore(90);
    Engine1.setStroke(90);
    Engine1.setCylinder(8);

    Displacement Engine2;
    Engine2.setBore(85);
    Engine2.setStroke(80);
    Engine2.setCylinder(6);

    Displacement Engine3;
    int displacement = 0;
    Engine3 = Engine1 + Engine2;
    displacement = Engine3.getDisplacement();

    cout << "Total Engine Displacement size : " << displacement << endl;
    
    return 0;
}
