#include <iostream>
#include <cmath>
using namespace std;
class Nokta{
public:
    // d=√((x2 – x1)² + (y2 – y1)²)
// iki nokta arasındaki mesafenin hesaplanması
    Nokta() : x(0.0), y(0.0) {}
    Nokta(double x, double y):x(x), y(y){}
    double operator-(const Nokta& Diger)const{
        return sqrt(pow((this->x-Diger.x),2)+pow((this->y-Diger.y),2));
    }
private:
    double x,y;
};
int main() {
    Nokta N1;
    Nokta N2(3.0,4.0);
    cout << "iki nokta arsindaki mesafe: " << N1-N2 << endl;
    return 0;
}
