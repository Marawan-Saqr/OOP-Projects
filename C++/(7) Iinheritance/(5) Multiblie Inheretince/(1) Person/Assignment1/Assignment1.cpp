#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string job;
    int salary;
public:

    //Default Constructor
    Person() : name("Unknown"), age(0), job("Unknown"), salary(0) {

    }

    //Parameterize Constructor
    Person(string n, int a, string j, int s) : name(n), age(a), job(j), salary(s) {
        name = n;
        age = a;
        job = j;
        salary = s;
    }

    //Setters & Getters
    void set_name(string _name) {
        name = _name;
    }

    void set_age(int _age) {
        age = _age;
    }

    void set_job(string _job) {
        job = _job;
    }

    void set_salary(int _salary) {
        salary = _salary;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_job() {
        return job;
    }

    int get_salary() {
        return salary;
    }
};

class Student {
private:
    string name;
    int age;
    string job;
    int salary;
public:

    //Default Constructor
    Student() : name("Unknown"), age(0), job("Unknown"), salary(0) {

    }

    //Parameterize Constructor
    Student(string n, int a, string j, int s) : name(n), age(a), job(j), salary(s) {
        name = n;
        age = a;
        job = j;
        salary = s;
    }

    //Setters & Getters
    void set_name(string _name) {
        name = _name;
    }

    void set_age(int _age) {
        age = _age;
    }

    void set_job(string _job) {
        job = _job;
    }

    void set_salary(int _salary) {
        salary = _salary;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_job() {
        return job;
    }

    int get_salary() {
        return salary;
    }
};

class Marawan : public Person, public Student {
private:
    string hairColor;
    bool working;
public:

    //Default Constructor
    Marawan() : hairColor("Unknown"), working(0) {

    }

    //Parameterize Constructor
    Marawan(string hc, bool w) : hairColor(hc), working(w) {
        hairColor = hc;
        working = w;
    }

    //Setters & Getters
    void set_hairColor(string _hairColor) {
        hairColor = _hairColor;
    }

    void set_working(bool _working) {
        working = _working;
    }

    string get_hairColor() {
        return hairColor;
    }

    bool get_working() {
        return working;
    }
};

int main() {

    Marawan m;

    cout << "Person Data" << endl;
    m.Person::set_name("Person Name");
    m.Person::set_age(30);
    m.Person::set_job("Person Job");
    m.Person::set_salary(3000);
    cout << m.Person::get_name() << endl;
    cout << m.Person::get_age() << endl;
    cout << m.Person::get_job() << endl;
    cout << m.Person::get_salary() << endl;

    cout << "Student Data" << endl;
    m.Student::set_name("Student Name");
    m.Student::set_age(40);
    m.Student::set_job("Student Job");
    m.Student::set_salary(4000);
    cout << m.Student::get_name() << endl;
    cout << m.Student::get_age() << endl;
    cout << m.Student::get_job() << endl;
    cout << m.Student::get_salary() << endl;

    cout << "Marawan Data" << endl;
    m.set_hairColor("Black");
    m.set_working(true);
    cout << m.get_hairColor() << endl;
    cout << m.get_working() << endl;

    return 0;
}