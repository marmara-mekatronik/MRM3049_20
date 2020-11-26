#include <iostream>

using namespace std;

class A {
public:
    A();
    friend class B;
private:
    int a;
};

class B {
public:
    void GetGosterA(A &x);
private:
    int b;
};

A::A() {
    a = 0;
}

void B::GetGosterA(A &x) {
    cout << "A::a= " << x.a;
}

int main() {
    A a1;
    B b1;
    b1.GetGosterA(a1);
    return 0;
}
