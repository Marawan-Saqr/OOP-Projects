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

    Instructor(string _name, int _age, string _courses) {
        name = _name;
        age = _age;
        courses = _courses;
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
private:
    int level;
    float GPA;
public:
    Student(int l, int gp, string n, int a, string c) : Instructor(n, a, c) {
        level = l;
        GPA = gp;
    }

    void set_level(int _level) {
        level = _level;
    }

    void set_GPA(int _GPA) {
        GPA = _GPA;
    }

    int get_level() {
        return level;
    }

    int get_GPA() {
        return GPA;
    }
};

int main() {

    Student s1(5, 3.5, "Marawan", 40, "Java");
    cout << s1.get_level() << endl;
    cout << s1.get_GPA() << endl;
    cout << s1.get_name() << endl;
    cout << s1.get_age() << endl;
    cout << s1.get_courses() << endl;
    
    return 0;
}