#include <iostream>
using namespace std;

class Car {
private:
    int model;
    string color;
    string name;
    static int counter;
public:

    //Constructor
    Car() {
        counter++;
    }

    //Destructor
    ~Car() {
        counter--;
    }

    int getCounter() {
        return counter;
    }
};

int Car::counter = 0;

int main() {

    Car c1;
    cout << "Counter Now Is " << c1.getCounter() << endl;

    Car c2;
    cout << "Counter Now Is " << c2.getCounter() << endl;

    Car c3;
    cout << "Counter Now Is " << c3.getCounter() << endl;

    return 0;
}