#include <iostream>

using namespace std;

class birthdays {
private:
    string Name;
    string Job;
    int Day;
    int Month;
    int Year;
public:
    string name() {return Name; }
    string job() {return Job; }
    int day() { return Day; }
    int month() { return Month; }
    int year() { return Year; }

    bool set (string n, string j, int d, int m, int y);
};
bool birthdays::set(string n, string j, int d, int m, int y) {
    if ((d < 0) || (d > 31)) return false;
    if ((m < 0) || (m > 12)) return false;
    if ((y < 0) || (y > 9999)) return false;
    Job = j;
    Name = n;
    Day = d;
    Month = m;
    Year = y;
    return true;
}

int main() {
    birthdays ceo;
    birthdays managers[5];
    birthdays *assistantCEO;
    assistantCEO = &ceo;

    cout << "Birthdays of Board Members"<< endl;
    cout << "********************" << endl;

    ceo.set("Steven Spielberg","CEO",18,12,1946);
    cout << ceo.job() << endl;
    cout << ceo.name() << endl << "--Birthday--" << endl;
    cout << "Day:" << ceo.day() << endl;
    cout << "Month:" << ceo.month() << endl;
    cout << "Year:" << ceo.year() << endl;

    cout << "********************" << endl;

    assistantCEO->set("Can Katirci","Assistant CEO",14,8,2000);
    cout << assistantCEO->job() << endl;
    cout << assistantCEO->name() << endl << "--Birthday--" << endl;
    cout << "Day:" << assistantCEO->day()<< endl;
    cout << "Month:" << assistantCEO->month() << endl;
    cout << "Year:" << assistantCEO->year() << endl;

    cout << "********************" << endl;

    managers[0].set("Jim Carrey","Board Member",17,1,1962);
    cout << managers[0].job() << endl;
    cout << managers[0].name() << endl << "--Birthday--" << endl;
    cout << "Day:" << managers[0].day() << endl;
    cout << "Month:" << managers[0].month() << endl;
    cout << "Year:" << managers[0].year() << endl;
    cout << "********************" << endl;

    managers[1].set("Tom Hanks","Board Member",9,7,1956);
    cout << managers[1].job() << endl;
    cout << managers[1].name() << endl << "--Birthday--" << endl;
    cout << "Day:" << managers[1].day() << endl;
    cout << "Month:" << managers[1].month() << endl;
    cout << "Year:" << managers[1].year() << endl;
    cout << "********************" << endl;

    managers[2].set("Charlie Chaplin","Board Member",16,4,1889);
    cout << managers[2].job() << endl;
    cout << managers[2].name() << endl << "--Birthday--" << endl;
    cout << "Day:" << managers[2].day() << endl;
    cout << "Month:" << managers[2].month() << endl;
    cout << "Year:" << managers[2].year() << endl;
    cout << "RIP" << endl;
    cout << "********************" << endl;

    managers[3].set("Al Pacino","Board Member",25,4,1940);
    cout << managers[3].job() << endl;
    cout << managers[3].name() << endl << "--Birthday--" << endl;
    cout << "Day:" << managers[3].day() << endl;
    cout << "Month:" << managers[3].month() << endl;
    cout << "Year:" << managers[3].year() << endl;
    cout << "********************" << endl;

    managers[4].set("Aaron Paul","Board Member",27,8,1979);
    cout << managers[4].job() << endl;
    cout << managers[4].name() << endl << "--Birthday--" << endl;
    cout << "Day:" << managers[4].day() << endl;
    cout << "Month:" << managers[4].month() << endl;
    cout << "Year:" << managers[4].year() << endl;

    return 0;
}

