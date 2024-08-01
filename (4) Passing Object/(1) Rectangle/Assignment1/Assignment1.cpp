#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    void setWidth(int _width) {
        width = _width;
    }

    void setHeight(int _height) {
        height = _height;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    int getArea(int w, int h) {
        return w * h;
    }

    Rectangle addTwoNumbers(Rectangle r2) {
        Rectangle result;
        result.setWidth(this->width + r2.getWidth());
        result.setHeight(this->height + r2.getHeight());
        return result;
    }
};

int main() {

    Rectangle r1, r3, result;
    r1.setWidth(5);
    r1.setHeight(6);
    r3.setWidth(5);
    r3.setHeight(6);
    cout << "Width Now " << r1.getWidth() << endl;
    cout << "Height Now " << r1.getHeight() << endl;

    cout << "=======================================" << endl;

    cout << "Area Is Now " << r1.getArea(r1.getHeight(), r1.getWidth()) << endl;

    result = r1.addTwoNumbers(r3);

    cout << "addTwoNumbers Width Is " << result.getWidth() << endl;
    cout << "addTwoNumbers Height Is " << result.getHeight() << endl;

    return 0;
}