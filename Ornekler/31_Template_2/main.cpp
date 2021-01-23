#include <iostream>

using namespace std;
class Para{
private:
    int m_para;
public:
    Para(int para) : m_para(para){

    }
//    Para(int para){
//    m_para=para;
//    }

friend  bool operator>(const Para &p1, const Para &p2){
    return (p1.m_para > p2.m_para);
    }

};

template<typename T>
const T& maksimum(const T& x, const T& y){
    return (x > y) ? x : y;
}

int main() {
    Para besLira(5);
    Para onLira(10);

    Para buyuk = maksimum(besLira, onLira);

    return 0;
}
