#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    void set_feet(int _feet) {
        feet = _feet;
    }

    void set_inches(int _inches) {
        inches = _inches;
    }

    int get_feet() {
        return feet;
    }

    int get_inches() {
        return inches;
    }

    void get_distance() {
        cout << "Feet Is " << feet << endl;
        cout << "Inches Are " << inches << endl;
    }

    Distance add(Distance d3) {
        Distance result;
        result.feet = feet + d3.feet;
        result.inches = inches + d3.inches;
        return result;
    }
};

int main() {

    Distance d1, d2, d3;
    d1.set_feet(5);
    d1.set_inches(10);
    d2.set_feet(5);
    d2.set_inches(10);
    d3 = d1.add(d2);
    d3.get_distance();

    return 0;
}