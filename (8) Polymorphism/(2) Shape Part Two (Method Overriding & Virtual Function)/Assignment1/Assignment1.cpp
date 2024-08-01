#include <iostream>
using namespace std;

class Shape {
private:
    int width;
    int height;
public:

    //Default Constructor
    Shape() : width(0), height(0) {

    }

    //Parameterize Constructor
    Shape(int w, int h) : width(w), height(h) {

    }

    void set_width(int _width) {
        width = _width;
    }

    void set_height(int _height) {
        height = _height;
    }

    int get_width() {
        return width;
    }

    int get_height() {
        return height;
    }

    virtual void get_area() {
        cout << "Area Of Shape I Don't Know" << endl;
    }
};

class Square : public Shape {
private:
    int width;
public:

    //Default Constructor
    Square() : width(0) {

    }

    //Parameterize Constructor
    Square(int w) : width(w) {

    }

    void set_width(int _width) {
        width = _width;
    }

    void get_area() {
        cout << "Square Area Is " << width * width << endl;
    }
};

class Rectangle : public Shape {
private:
    int width;
    int length;
public:

    //Default Constructor
    Rectangle() : width(0), length(0) {

    }

    //Parameterize Constructor
    Rectangle(int w, int l) : width(w), length(l) {

    }

    void set_width(int _width) {
        width = _width;
    }

    void set_length(int _length) {
        length = _length;
    }

    void get_area() {
        cout << "Rectangle Area Is " << width * length << endl;
    }
};

int main() {

    cout << "Method Overriding Square" << endl;
    Square s1(5);
    s1.get_area();

    cout << "Method Overriding Rectangle" << endl;
    Rectangle r1(5, 6);
    r1.get_area();

    cout << "/////////////////////////////////////////////////////////////" << endl;

    cout << "Virtual Function Square" << endl;
    Shape *shape_ptr;
    shape_ptr = &s1;
    shape_ptr->get_area();

    cout << "Virtual Function Rectangle" << endl;
    shape_ptr = &r1;
    shape_ptr->get_area();


    return 0;
}