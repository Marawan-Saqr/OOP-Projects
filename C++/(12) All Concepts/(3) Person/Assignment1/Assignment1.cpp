#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    bool car;
    string gender;
public:

    //Default Constructor
    Person() : name("Unknown"), age(0), car(0), gender("Unknown") {

    }

    //Parameterize Constructor
    Person(string n, int a, bool c, string g) : name(n), age(a), car(c), gender(g) {

    }

    //Setters
    void set_name(string _name) {
        this->name = _name;
    }

    void set_age(int _age) {

    }

    void set_car(bool _car) {
        this->car = _car;
    }

    void set_gender(string _gender) {
        this->gender = _gender;
    }

    //Getters
    //Method Will Be Overloaded
    virtual string get_name() = 0;

    virtual int get_age() = 0;

    virtual bool get_car() = 0;

    virtual string get_gender() = 0;
};

class Student : public Person {
private:
    int studentId;
    char studentGpa;
    string studentSsn;
public:

    //Default Constructor
    Student() : studentId(0), studentGpa('A'), studentSsn("Unknown") {

    }

    //Parameterize Constructor
    Student(string n, int a, bool c, string g, int sid, char sg, string ssn) : Person(n, a, c, g), studentId(sid), studentGpa(sg), studentSsn(ssn) {

    }

    //Setters
    void set_studentId(int _studentId) {
        this->studentId = _studentId;
    }

    void set_studentGpa(char _studentGpa) {
        this->studentGpa = _studentGpa;
    }

    void studentSsn(string _studentSsn) {
        this->studentSsn = _studentSsn;
    }

    //Getters
    //Method Will Be Overloaded
    virtual int get_studentId() = 0;

    virtual char get_studentGpa() = 0;

    virtual string get_studentSsn() = 0;

    //Getters From Pervious Class
    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    bool get_car() {
        return car;
    }

    string get_gender() {
        return gender;
    }
};

class Instructor : public Person {
private:
    int instructorId;
    char instructorGpa;
    string InstructorSsn;
public:

    //Default Constructor
    Instructor() : instructorId(0), instructorGpa('A'), InstructorSsn("Unknown") {

    }

    //Parameterize Constructor
};

int main() {

    
   
    return 0;
}