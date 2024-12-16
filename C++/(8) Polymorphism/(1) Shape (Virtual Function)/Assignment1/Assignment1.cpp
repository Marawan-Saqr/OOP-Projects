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
        width = w;
        height = h;
    }

    //Setters & Getters
    void set_width(int _width) {
        width = _width;
    }

    void set_height(int _height) {
        height = _height;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    virtual int getArea() {
        return width * height;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;
public:

    //Default Constructor
    Rectangle() : length(0), width(0) {

    }

    //Parameterize Constructor
    Rectangle(int l, int w) : length(l), width(w) {
        length = l;
        width = w;
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

    int getArea() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    int length;
    int width;
    int half;
public:

    //Default Constructor
    Circle() : length(0), width(0), half(0) {

    }

    //Parameterize Constructor
    Circle(int l, int w, int h) : length(l), width(w), half(h) {
        length = l;
        width = w;
        half = h;
    }

    void setLength(int _length) {
        length = _length;
    }

    void setWidth(int _width) {
        width = _width;
    }

    void setHalf(int _half) {
        width = _half;
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    int getHalf() {
        return half;
    }

    int getArea() {
        return length * width * half;
    }
};

int main() {

    Shape *shape_ptr;
    Rectangle rec(5, 6);
    Circle cer(5, 6, 4);
    shape_ptr = &rec;
    cout << shape_ptr->getArea() << endl;  //30

    shape_ptr = &cer;
    cout << shape_ptr->getArea() << endl;  //120

    return 0;
}