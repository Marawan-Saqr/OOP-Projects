#include <iostream>
using namespace std;

class person {
public:
	string name;
	int age;
	int height;
	string hairColor;
	string hobbies;

	//Default Constructor
	person() {
		name = "Marawan";
	}

	//Paramatize Constructor
	person(string n, int a, int h, string hc, string ho) {
		name = n;
		age = a;
		height = h;
		hairColor = hc;
		hobbies = ho;
	}

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}

	int getHeight() {
		return height;
	}

	string getHairColor() {
		return hairColor;
	}

	string getHobbies() {
		return hobbies;
	}
};

int main() {
	
	person p1;
	cout << "Please Enter Your Name" << endl;
	cin >> p1.name;
	cout << "Please Enter Your Age" << endl;
	cin >> p1.age;
	cout << "Please Enter Your Height" << endl;
	cin >> p1.height;
	cout << "Please Enter Your Hair Color" << endl;
	cin >> p1.hairColor;
	cout << "Please Enter Your Hobbies" << endl;
	cin >> p1.hobbies;

	cout << "==========================" << endl;
	cout << "Your Data Is" << endl;
	cout << "==========================" << endl;

	cout << p1.getName() << endl;
	cout << p1.getAge() << endl;
	cout << p1.getHeight() << endl;
	cout << p1.getHairColor() << endl;
	cout << p1.getHobbies() << endl;
	
	return 0;
}