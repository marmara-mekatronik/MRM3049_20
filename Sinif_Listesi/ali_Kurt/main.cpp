#include <iostream>
#include <cstring>
using namespace std;
class card{
    public:
        void store(char *t, char *name,int num);
        void show();
    private:
        char kitap_adi[80];
        char yazari[40];
        int adet;
};
void card::store(char *t, char *name, int num)
{
    strcpy(kitap_adi,t);
    strcpy(yazari,name);
    adet=num;
}
void card::show()
{
    cout<<"kitap adi:"<<kitap_adi<<endl;
    cout<<"yazari:"<<yazari<<endl;
    cout<<"eldeki sayi:"<<adet<<endl;
}
int main()
{
    card book1,book2,book3;
    book1.store("ucurtma avcisi","michel",3);
    book2.store("son veda","aylin",2);
    book3.store("dava","kafka",4);


    book1.show();
    book2.show();
    book3.show();
    return 0;
}
