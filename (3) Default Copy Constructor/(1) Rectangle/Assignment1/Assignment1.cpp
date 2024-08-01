#include <iostream>
using namespace std;

class Rectangle {
private:
	float length;
	float width;
public:

	//Default Constructor
	Rectangle() : length(5), width(6) {

	}

	//Parametrize Constructor
	Rectangle(int l, int w) : length(l), width(w) {

	}

	//Setters & Getters
	void setLength(int _length) {
		length = _length;
	}

	void setWidth(int _width) {
		width = _width;
	}

	float getLength() {
		return length;
	}

	float getWidth() {
		return width;
	}

	void getArea() {
		cout << length * width;
	}
};

int main() {
	
	//Setters & Getters
	Rectangle r1;
	r1.setLength(5);
	r1.setWidth(6);
	r1.getArea();

	cout << "\n" << endl;
	cout << "=================================" << endl;

	//Default Constructor
	Rectangle r2;
	r2.getArea();

	cout << "\n" << endl;
	cout << "=================================" << endl;

	//Parametrize Constructor
	Rectangle r3(4, 6);
	r3.getArea();

	cout << "\n" << endl;
	cout << "=================================" << endl;

	//Default Copy Constructor
	Rectangle r4(r2);
	r4.getArea();
	
	return 0;
}