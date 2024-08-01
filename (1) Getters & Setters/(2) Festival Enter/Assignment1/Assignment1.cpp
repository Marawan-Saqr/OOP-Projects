#include <iostream>
#include <cstdlib>  // for exit function
using namespace std;

class Person {
private:
    string name;
    int age;
    char bloodType;
public:

    //Setters
    void setName(string n) {
        if (n.length() < 3) {
            cout << "Too Short! You Must Enter 3 Characters At Least" << endl;
        }
        else if (n.length() >= 3) {
            name = n;
        }
        else {
            cout << "Error" << endl;
        }
    }

    void setAge(int a) {
        if (a < 18) {
            cout << "Sorry, You Are Under Required Age" << endl;
            exit(EXIT_FAILURE);
        }
        else if (a >= 18) {
            age = a;
        }
        else {
            cout << "Error" << endl;
        }
    }

    void setBloodType(char b) {
        if (b == 'B' || b == 'C') {
            cout << "Sorry, No Entry For Those Types" << endl;
            exit(EXIT_FAILURE);
        }
        else if (b == 'A' || b == 'W') {
            bloodType = b;
        }
        else {
            cout << "Error" << endl;
        }
    }

    //Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    char getBloodType() {
        return bloodType;
    }
};

int main() {

    //Local Variables
    string yourName;
    int yourAge;
    char yourBloodType;

    //Class Instantiate
    Person p;

    // Input Name
    do {
        cout << "Please Enter Your Name (3 characters minimum): " << endl;
        cin >> yourName;
        p.setName(yourName);
    } while (yourName.length() < 3);

    // Input Age
    do {
        cout << "Please Enter Your Age: " << endl;
        cin >> yourAge;
        p.setAge(yourAge);
    } while (yourAge < 18);

    // Input Blood Type
    do {
        cout << "Please Enter Your Blood Type: " << endl;
        cin >> yourBloodType;
        p.setBloodType(yourBloodType);
    } while (yourBloodType == 'B' || yourBloodType == 'C');

    // Display Data
    cout << "Display Your Data" << endl;
    cout << "Your Name Is " << p.getName() << endl;
    cout << "Your Age Is " << p.getAge() << endl;
    cout << "Your Blood Type Is " << p.getBloodType() << endl;
    cout << "Thank You :)" << endl;

    return 0;
}
