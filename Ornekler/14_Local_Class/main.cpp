#include <iostream>
/* lokal sınıf tanımlama örneği */
using namespace std;
void hesapla(int veri);

void hesapla(int veri){

    class kare{
    public:
        int a;
    };

    kare kKare;
    kare *KK;
    kKare.a=veri;

    cout << kKare.a << endl;
}

int main() {
    hesapla(55);

    return 0;
}
