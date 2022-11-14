#include <iostream>

using namespace std;
float x=0;
class birim {
public:
    void setmilimetre(float m);
protected:
    float milimetre;
};
void birim::setmilimetre(float m) {
    milimetre=m;
}

class uzunluk: public birim {
public:
    int getinctomilimetre(){
        return (25.4*milimetre);
    }
};


int main() {
    uzunluk uzunluk1;
    cout<<"cevreilecek inc degerini girin: ";
    cin >>x;
    uzunluk1.setmilimetre(x);
    cout << "milimetre : " << uzunluk1.getinctomilimetre()<< endl;
    return 0;
}
