#include <iostream>
using namespace std;

class Ubisoft {
private:
    string places;
protected:
    int year;
    int clerks;
public:

    void setYear(int _year) {
        year = _year;
    }

    void setClerks(int _clerks) {
        clerks = _clerks;
    }

    void yearFunction() {
        cout << "Ubisfot Year " << year << endl;
    }

    void clerksFunction() {
        cout << "Ubisoft Clerks " << clerks << endl;
    }

    void placesFunction() {
        cout << "Ubisoft Places " << places << endl;
    }
};

class Farcry : public Ubisoft {
public:
    void yearFunction() {
        cout << "Farcry Year " << year << endl;
    }

    void clerksFunction() {
        cout << "Farcry Clerks " << clerks << endl;
    }
};

class Splintercell : public Ubisoft {
public:
    void yearFunction() {
        cout << "Splintercell Year " << year << endl;
    }

    void clerksFunction() {
        cout << "Splintercell Clerks " << clerks << endl;
    }
};

int main() {

    Farcry f1;
    cout << "Farcry Data" << endl;
    f1.setYear(2013);
    f1.yearFunction();
    f1.setClerks(3000);
    f1.clerksFunction();

    cout << "==========================================" << endl;

    Splintercell s1;
    cout << "Splintercell Data" << endl;
    s1.setYear(2010);
    s1.yearFunction();
    s1.setClerks(4000);
    s1.clerksFunction();

    return 0;
}