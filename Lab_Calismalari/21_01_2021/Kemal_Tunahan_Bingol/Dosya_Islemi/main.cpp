#include <fstream>
#include <iostream>

using namespace std;

int main() {
    char data[100];
    ofstream write;
    write.open("file.dat");

    cout << "Dosya Olusturuluyor..." << endl;
    cout << "Araba markaniz : " ;
    cin.getline(data,100);

    write << data << "\t \t";

    cout << "Araba modeliniz : " ;
    cin >> data;
    cin.ignore();

    write << data << endl;

    write.close();

    ifstream ride;
    ride.open("file.dat");
    cout << "Dosya Okunuyor..." << endl;

    ride >> data;
    cout << data << endl;
    ride >> data;
    cout << data ;

    ride.close();

    return 0;
}
