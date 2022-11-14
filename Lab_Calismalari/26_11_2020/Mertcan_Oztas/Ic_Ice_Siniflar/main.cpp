#include <iostream>

using namespace std;

class Outside
{
    private:
        int x;
    public:
        Outside(int TempOut);
        void getOutside();

    class Inside
    {
        private:
            int y;
        public:
            Inside(int TempIn);
            void getInside();
    };
};

Outside::Outside(int TempOut)
{
    x = TempOut;
}

void Outside::getOutside()
{
    cout << "Disarisinin sicakligi: " << x <<"°C"<< endl;
}

Outside::Inside::Inside(int TempIn)
{
    y = TempIn;
}

void Outside::Inside::getInside()
{
    cout << "Icerisinin sicakligi:  " << y << "°C" << endl;
}

int main()
{
    Outside distaraf(18);
    Outside::Inside ictaraf(26);

    distaraf.getOutside();
    ictaraf.getInside();
    
    return 0;
}
