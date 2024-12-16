#include <iostream>
using namespace std;

class Ubisoft {
protected:
    string name;
public:

    //Default Constructor
    Ubisoft() : name("Unknown") {

    }

    //Parameterize Constructor
    Ubisoft(string n) : name(n) {

    }

    //Setters
    void set_name(string _name) {
        this->name = _name;
    }

    //Abstract Function
    virtual string get_name() = 0;

    //Method Will Be Overriden
    void display() {
        cout << "The Name Of Company Is Ubisoft" << endl;
        cout << "The Name Is " << name << endl;
    }
};

class Studios : public Ubisoft {
private:
    int numberOfGames;
    char Category;
    string gameClass;
public:

    //Default Constructor
    Studios() : numberOfGames(0), Category(' '), gameClass("Unknown") {

    }

    //Parameterize Constructor
    Studios(string n, int nog, char c, string gc) : Ubisoft(n), numberOfGames(nog), Category(c), gameClass(gc){

    }

    //Setters
    void set_numberOfGgames(int _numberOfGames) {
        this->numberOfGames = _numberOfGames;
    }

    void set_numberOfGgames(char _Category) {
        this->Category = _Category;
    }

    void set_gameClass(string _gameClass) {
        this->gameClass = _gameClass;
    }

    //Getters
    int get_numberOfGames() {
        return numberOfGames;
    }

    char get_Category() {
        return Category;
    }

    string get_gameClass() {
        return gameClass;
    }

    string get_name() {
        return "Studios Name Is " + name;
    }

    //Method Overriding From Base Class
    void display() {
        Ubisoft::display();
        cout << "Number Of Game In Each Studio Is " << numberOfGames << " And " << Category << " Game Class Is " << gameClass << endl;
    }
};

class Games : public Studios {
private:
    string gameYear;
    int gameBudget;
public:

    //Default Constructor
    Games() : gameYear("unknown"), gameBudget(0) {
        
    }

    //Parameterize Constructor
    Games(string n, int nog, char c, string gc, string gy, int gb) : Studios(n, nog, c, gc), gameYear(gy), gameBudget(gb) {

    }

    //Setters
    void set_gameYear(string _gameYear) {
        this->gameYear = _gameYear;
    }

    void set_gameBudget(int _gameBudget) {
        this->gameBudget = _gameBudget;
    }

    //Getters
    string get_gameYear() {
        return gameYear;
    }

    int get_gameBudget() {
        return gameBudget;
    }

    string get_name() {
        return "Games Name Is " + name;
    }

    //Method Overriding From Base Class
    void display() {
        Studios::display();
        cout << "Game Year Is " << gameYear << " And Game Budget Is " << gameBudget << endl;
    }
};

class Employee : public Studios {
private:
    int age;
    int ssn;
public:

    //Default Constructor
    Employee() : age(0), ssn(0) {

    }

    //Parameterize Constructor
    Employee(string n, int nog, char c, string gc, int ag, int sn) : Studios(n, nog,c, gc), age(ag), ssn(sn) {

    }

    //Setters
    void set_age(int _age) {
        age = _age;
    }

    void set_ssn(int _ssn) {
        ssn = _ssn;
    }

    //Getters
    int get_age() {
        return age;
    }

    int get_ssn() {
        return ssn;
    }

    string get_name() {
        return "Employee Name Is " + name;
    }

    //Method Overriding From Base Class
    void display() {
        Studios::display();
        cout << "Employee Age Is " << age << " And Employee SSN Is " << ssn << endl;
    }
};

int main() {

    Ubisoft *ubi_pointer;
    Studios s1;
    ubi_pointer = &s1;
    ubi_pointer->set_name("Marawan");
    cout << ubi_pointer->get_name() << endl;
   
    return 0;
}