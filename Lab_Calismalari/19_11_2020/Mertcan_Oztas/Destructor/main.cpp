#include <iostream>

using namespace std;

class Motor
{
    public:
        void setBeygir(double MotorBeygir);
        double getBeygir(void);
        Motor(double MotorBeygir);
        ~Motor();

    private:
        double beygir;
};

Motor::Motor(double MotorBeygir)
{
    cout << " Nesne olusturuluyor" << endl;
    beygir = MotorBeygir;
    cout << " Motorun ilk beygiri : " << MotorBeygir;
}

Motor::~Motor()
{
    cout << "\n Nesne kaldiriliyor" << endl;
}

void Motor::setBeygir(double MotorBeygir)
{
    beygir = MotorBeygir;
}

double Motor::getBeygir()
{
    return beygir;
}

int main()
{
    Motor motor_1(500);
    motor_1.setBeygir(600);
    cout << "\n Motorun modifiye edildikten sonraki beygiri : " << motor_1.getBeygir();
    return 0;
}
