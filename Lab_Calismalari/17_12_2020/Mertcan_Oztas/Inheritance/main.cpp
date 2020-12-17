#include <iostream>

using namespace std;

/* Horsepower = Torque x RPM / 5,252 */

class Vehicle
{
    public:
        Vehicle(int g=1, int y=1);
        void setTorque(int t);
        void setRPM(int r);
    
    protected:
        int torque, rpm;
};

void Vehicle::setTorque(int t)
{
    torque=t;
}

void Vehicle::setRPM(int r)
{
    rpm=r;
}

Vehicle::Vehicle(int t, int r)
{
    rpm = t;
    torque=r;
}

class Car: public Vehicle
{
    public:
        Car(int t=700, int r=6000);
        int getAlan()

        {return torque*rpm/5;}
};

Car::Car(int t, int r)
{
    torque=t;
    rpm=r;
}

int main()
{
    Car Challenger;
    Challenger.setTorque(656);
    Challenger.setRPM(4800);
    cout << "Arabanin beygir gucu : " << Challenger.getAlan()<< endl;

    return 0;
}
