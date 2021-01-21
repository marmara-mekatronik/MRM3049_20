#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char data[100];
    ofstream print_file;
    
    print_file.open("file.dat");

    cout << "...\n" << endl;
    cout << "Motorun silindir dizilimi : " ;
    cin.getline(data,100);

    print_file <<"Motor tipi : "<< data << " - " ;

    cout << "Motorun hacmi : " ;
    cin >> data;
    cin.ignore();

    print_file << data << endl;
    print_file.close();

    ifstream entry_file;
    entry_file.open("file.dat");
    cout << "...\n" << endl;

    entry_file >> data;
    cout << data << endl;
    entry_file >> data;
    cout << data ;
    entry_file.close();

return 0;
}
