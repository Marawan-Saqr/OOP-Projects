#include <iostream>
using namespace std;

class calculator {
private:
	int numberOne;
	int numberTwo;
	char operation;

public:

	//Setter
	void setNumberOne(int _numberOne) {
		numberOne = _numberOne;
	}

	//Setter
	void setNumberTwo(int _numberTwo) {
		numberTwo = _numberTwo;
	}

	//Setter
	void setOperation(char _operation) {
		operation = _operation;
	}

	//Getter
	int getNumberOne() {
		return numberOne;
	}

	//Getter
	int getNumberTwo() {
		return numberTwo;
	}

	//Add Function
	int getAddNumbers() {
		return numberOne + numberTwo;
	}

	//Sub Function
	int getSubNumbers() {
		return numberOne - numberTwo;
	}

	//Mul Function
	int getMulNumbers() {
		return numberOne * numberTwo;
	}

	//Divider Function
	int getDividerNumbers() {
		return numberOne / numberTwo;
	}

	//Constructor
	calculator() {
		numberOne = 0;
		numberTwo = 0;
	}
};

int main() {

	int mainNumberOne;
	int mainNumberTwo;
	char mainOperation;
	calculator c1;
	cout << "Please Enter Number One" << endl;
	cin >> mainNumberOne;
	c1.setNumberOne(mainNumberOne);
	cout << "Please Enter Number Two" << endl;
	cin >> mainNumberTwo;
	c1.setNumberTwo(mainNumberTwo);
	cout << "Good Now Select Operation (+) (-) (*) (/)" << endl;
	cin >> mainOperation;
	c1.setOperation(mainOperation);

	if (mainOperation == '+') {
		cout << "The Result Is " << c1.getAddNumbers() << endl;
	}
	else if (mainOperation == '-') {
		cout << "The Result Is " << c1.getSubNumbers() << endl;
	}
	else if (mainOperation == '*') {
		cout << "The Result Is " << c1.getMulNumbers() << endl;
	}
	else {
		cout << "The Result Is " << c1.getDividerNumbers() << endl;
	}

	return 0;
}