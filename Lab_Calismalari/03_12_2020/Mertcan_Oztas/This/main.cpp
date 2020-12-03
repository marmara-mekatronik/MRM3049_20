#include <iostream>

using namespace std;

/* (Engine displacement = Stroke * Bore^2 * Cylinder number * pi/4) */

class Engine
{

    public:
        Engine(double b, double s, double c);
        double displacement();
        int compare(Engine engine);
    
    private:
        double bore;
        double stroke;
        double cylinder;
};

Engine::Engine(double b, double s, double c)
{
    cout << "\nCalculating engine displacement size..." << endl;
    
    bore = b;
    stroke = s;
    cylinder = c;
}

double Engine::displacement()
{
    return ((bore * bore) * stroke * cylinder * (3.14 / 4))/100;
}

int Engine::compare(Engine engine)
{
    return this->displacement() > engine.displacement();
}

int main()
{
    double b1, s1, c1, b2, s2, c2;
    
    cout << "Engine 1 bore radius       : ";      cin >> b1;
    cout << "Engine 1 stroke length     : ";      cin >> s1;
    cout << "Engine 1 cylinder number   : ";      cin >> c1;
    cout << "Engine 1 displacement size : " << ((b1 * b1) * s1 * c1 * (3.14 / 4) / 1000) << " cc" << endl;
    cout << "\nEngine 2 bore radius     : ";      cin >> b2;
    cout << "Engine 2 stroke length     : ";      cin >> s2;
    cout << "Engine 2 cylinder number   : ";      cin >> c2;
    cout << "Engine 2 displacement size : " << ((b2 * b2) * s2 * c2 * (3.14 / 4) / 1000) << " cc" << endl;

    Engine Engine1(b1, s1, c1);
    Engine Engine2(b2, c2, s2);

    
    if (Engine1.compare(Engine2))
    {
        cout << "\nEngine 1 has a bigger displacement than Engine 2" << endl;
    }
    else
    {
        cout << "\nEngine 2 has a bigger displacement than Engine 1" << endl;
    }

}
