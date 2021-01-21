#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string dizi;
    fstream st;
    st.open("./dosya.dat",ios::out);
    cout << "Yeni Dosya olusturuldu\n";
    st << "Merhaba Dunya! Nasilsin? ";
    st.close();
    st >> dizi ;
    st.open("./dosya.dat",ios::out|ios::in);
    getline(st,dizi,'\t');
    cout << dizi << endl ;
    return 0;
}
