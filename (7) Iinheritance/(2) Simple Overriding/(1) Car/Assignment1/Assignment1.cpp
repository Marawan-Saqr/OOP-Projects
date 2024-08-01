#include <iostream>
using namespace std;

class CarsCompany {
private:
    string name;
    char model;
    int salary;
public:
    void carName() {
        cout << "Car Name" << endl;
    }

    void carModel() {
        cout << "Car Model" << endl;
    }

    void carSalary() {
        cout << "Car Salary" << endl;
    }
};

class BMW : public CarsCompany {
public:
    void carName() {
        cout << "BMW" << endl;
    }

    void carModel() {
        cout << "A" << endl;
    }

    void carSalary() {
        cout << "850000" << endl;
    }

    void carCovers() {
        cout << "4" << endl;
    }
};

class Marcedes : public CarsCompany {
public:
    void carName() {
        cout << "Marcedes" << endl;
    }

    void carModel() {
        cout << "C199" << endl;
    }

    void carSalary() {
        cout << "950000" << endl;
    }

    void carNew() {
        cout << "Car New On 2024" << endl;
    }
};


int main() {

    cout << "BMW Car" << endl;
    BMW model1;
    model1.carName();
    model1.carModel();
    model1.carSalary();
    model1.carCovers();

    cout << "====================================" << endl;

    cout << "Marcedes Car" << endl;
    Marcedes model2;
    model2.carName();
    model2.carModel();
    model2.carSalary();
    model2.carNew();


    return 0;
}