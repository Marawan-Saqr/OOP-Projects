#include <iostream>
using namespace std;

class Car {
private:
	string name;
	string color;
	int model;
	int numberOfCovers;
public:

	//Default Constructor
	/*Car() {
		name = "Honda Default";
		color = "Red Default";
		model = 1997;
		numberOfCovers = 4;
	}
	*/

	//Paramterize Constructor
	/*Car(string n, string c, int m, int nOc) {
		name = n;
		color = c;
		model = m;
		numberOfCovers = nOc;
	}
	*/

	//Default Initalization List Constructor
	/*Car() : name("BMW"), color("Black"), model(2021), numberOfCovers(4) {

	}
	*/

	//Parametrize Initalization List Constructor
	/*Car(string n, string c, int m, int nOc) : name(n), color(c), model(m), numberOfCovers(nOc) {

	}
	*/
 
	//Setters
	void setName(string _name) {
		name = _name;
	}

	void setColor(string _color) {
		color = _color;
	}

	void setModel(int _model) {
		model = _model;
	}

	void setNumberOfCovers(int _numberOfCovers) {
		numberOfCovers = _numberOfCovers;
	}

	//Getters
	string getName() {
		return name;
	}

	string getColor() {
		return color;
	}

	int getModel() {
		return model;
	}

	int getNumberOfCovers() {
		return numberOfCovers;
	}
};

int main() {
	
	/*cout << "Display Data From Default Constructor" << endl;
	Car c1;
	cout << c1.getName() << endl;
	cout << c1.getColor() << endl;
	cout << c1.getModel() << endl;
	cout << c1.getNumberOfCovers() << endl;
	*/

	/*cout << "Display Data From Paramterize Constructor" << endl;
	Car c2("Marcedes", "Blue", 1997, 5);
	cout << c2.getName() << endl;
	cout << c2.getColor() << endl;
	cout << c2.getModel() << endl;
	cout << c2.getNumberOfCovers() << endl;
	*/

	/*cout << "Display Data From Default Initalization List Constructor" << endl;
	Car c3;
	cout << c3.getName() << endl;
	cout << c3.getColor() << endl;
	cout << c3.getModel() << endl;
	cout << c3.getNumberOfCovers() << endl;
	*/

	/*cout << "Display Data From Parametrize Initalization List Constructor" << endl;
	Car c4("Porche", "White", 2022, 4);
	cout << c4.getName() << endl;
	cout << c4.getColor() << endl;
	cout << c4.getModel() << endl;
	cout << c4.getNumberOfCovers() << endl;
	*/

	cout << "Display Data From Setters & Getters" << endl;
	Car c5;
	c5.setName("Skoda");
	c5.setColor("White");
	c5.setModel(2018);
	c5.setNumberOfCovers(4);

	cout << c5.getName() << endl;
	cout << c5.getColor() << endl;
	cout << c5.getModel() << endl;
	cout << c5.getNumberOfCovers() << endl;
	
	return 0;
}