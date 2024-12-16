#include <iostream>
using namespace std;

class Company {
private:
    int salary;
    string name;
public:

    //Default Constructor
    Company() : salary(0), name("Unknown") {

    }

    //Parameterize Constructor
    Company(int s, string n) : salary(s), name(n) {

    }

    //Don't Edit Just For Show
    virtual void getName() final {
        cout << "Company Name Is Cars Factory Company" << endl;
    }

    //Will Be Overriden
    virtual int getSalary() = 0;
};

class Branch_One : public Company {
private:
    int salaryClerk;
    int holidays;
public:

    //Default Constructor
    Branch_One() : salaryClerk(0), holidays(0) {

    }

    //Parameterize Constructor
    Branch_One(int s, string n, int sc, int h) : Company(s, n), salaryClerk(sc), holidays(h) {

    }

    //Setters
    void set_salary(int _salaryClerk) {
        salaryClerk = _salaryClerk;
    }

    void set_holidays(int _holidays) {
        holidays = _holidays;
    }

    //Getters
    int getSalary() {
        return salaryClerk;
    }

    int getHolidays() {
        return holidays;
    }
};

int main() {

    Branch_One bo;
    bo.set_salary(50000);
    bo.set_holidays(5);
    cout << bo.getSalary() << endl;
    cout << bo.getHolidays() << endl;


    return 0;
}