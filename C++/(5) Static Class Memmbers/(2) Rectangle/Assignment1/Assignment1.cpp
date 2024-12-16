#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
    static int counter;
public:

    //Constructor
    Rectangle() {
        counter++;
    }

    //Destructor
    ~Rectangle() {
        counter--;
    }

    void setLength(int _length) {
        length = _length;
    }

    void setWidth(int _width) {
        width = _width;
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    static void getArea(int h, int w) {
        cout << h * w << endl;
    }

    int get_counter() {
        return counter;
    }
};

int Rectangle::counter = 0;

int main() {

    Rectangle r1;
    cout << r1.get_counter() << endl;

    Rectangle r2;
    cout << r2.get_counter() << endl;

    Rectangle::getArea(5, 6);

    return 0;
}