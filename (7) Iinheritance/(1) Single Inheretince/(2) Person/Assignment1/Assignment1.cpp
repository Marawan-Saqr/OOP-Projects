#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string job;
    bool married;
    int salary;
public:
    void setName(string _name) {
        name = _name;
    }

    void setAge(int _age) {
        age = _age;
    }

    void setJob(string _job) {
        job = _job;
    }

    void setMarried(bool _married) {
        married = _married;
    }

    void setSalary(int _salary) {
        salary = _salary;
    }


    void displayPerson() {
        cout << "Your Name Is " << name << endl;
        cout << "Your Age Is " << age << endl;
        cout << "Your job Is " << job << endl;
        cout << "Your married Is " << married << endl;
        cout << "Your salary Is " << salary << endl;
    }
};

class Person_one : public Person {

};

int main() {

    string mainName;
    int mainAge;
    string mainJob;
    bool mainMarried;
    int mainSalary;


    Person_one p1;
    cout << "Please Enter Your Name" << endl;
    cin >> mainName;
    p1.setName(mainName);
    cout << "Please Enter Your Age" << endl;
    cin >> mainAge;
    p1.setAge(mainAge);
    cout << "Please Enter Your Job" << endl;
    cin >> mainJob;
    p1.setJob(mainJob);
    cout << "Please Enter Your Married Status" << endl;
    cin >> mainMarried;
    p1.setMarried(mainMarried);
    cout << "Please Enter Your Salary" << endl;
    cin >> mainSalary;
    p1.setSalary(mainSalary);

    cout << "======================================" << endl;

    p1.displayPerson();
   
    return 0;
}