#include <iostream>
#include <fstream>
//eren_incesu_21_01_2021_lab
using namespace std;

int main() {
    char kimlik[100];
    ofstream kimlikCikti;
    kimlikCikti.open("kimlik.dat");
    cout << "Kimliginiz hazirlaniyor..." << endl;

    cout << "Adiniz : " ;
    cin >> kimlik;

    kimlikCikti << kimlik << "\n";

    cout << "Soy Adiniz : " ;
    cin >> kimlik;

    kimlikCikti << kimlik << "\n";

    cout << "Dogum tarihiniz : " ;
    cin >> kimlik;

    kimlikCikti << kimlik << "\n";

    cout << "Dogum yeriniz : " ;
    cin >> kimlik;

    kimlikCikti << kimlik << "\n";

    cout << "Egitim durumunuz : " ;
    cin >> kimlik;

    kimlikCikti << kimlik << "\n";

    kimlikCikti.close();

    ifstream kimlikOku;
    kimlikOku.open("kimlik.dat");

    kimlikOku >> kimlik;
    cout << kimlik << endl;

    kimlikOku >> kimlik;
    cout << kimlik << endl;

    kimlikOku >> kimlik;
    cout << kimlik << endl;

    kimlikOku >> kimlik;
    cout << kimlik << endl;

    kimlikOku >> kimlik;
    cout << kimlik << endl;

    kimlikOku.close();

    return 0;
}
