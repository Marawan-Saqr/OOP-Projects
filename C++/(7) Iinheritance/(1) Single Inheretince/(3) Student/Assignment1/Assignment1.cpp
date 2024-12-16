#include <iostream>
using namespace std;

class Instructor {
private:
    string name;
    int age;
    string courses;
public:

    //Default Constructor
    Instructor() {
        name = "Marawan";
        age = 26;
        courses = "C++, Java, Html";
    }

    void set_name(string n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    void set_courses(string c) {
        courses = c;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_courses() {
        return courses;
    }
};

class Student : public Instructor {
public:

    Student() {
        cout << "Student Constructor Here" << endl;
    }
};

int main() {

    Student s1;
    cout << s1.get_name() << endl;
    cout << s1.get_courses() << endl;
    cout << s1.get_age() << endl;
    

    return 0;
}