#include <iostream>
using namespace std;

class Animal {
private:
    string color;
    string sound;
    int numberOfLegs;
    string type;
public:
    void setColor(string _color) {
        color = _color;
    }

    void setSound(string _sound) {
        sound = _sound;
    }

    void setNumberOfLegs(int _numberOfLegs) {
        numberOfLegs = _numberOfLegs;
    }

    void setType(string _type) {
        type = _type;
    }

    string getColor() {
        return color;
    }

    string getSound() {
        return sound;
    }

    int getNumberOfLegs() {
        return numberOfLegs;
    }

    string getType() {
        return type;
    }

    void getDisplayAnimal() {
        cout << "Animal Color Is " << color << endl;
        cout << "Animal sound Is " << sound << endl;
        cout << "Animal numberOfLegs Is " << numberOfLegs << endl;
        cout << "Animal type Is " << type << endl;
    }
};

class Cat : public Animal {
    
};

class Dog : public Animal {

};

int main() {


    Cat c1;
    c1.setColor("Red");
    c1.setSound("Naw");
    c1.setNumberOfLegs(4);
    c1.setType("Home");
    cout << "Cat Display From Animal" << endl;
    c1.getDisplayAnimal();

    cout << "===========================" << endl;

    Dog d1;
    d1.setColor("Blue");
    d1.setSound("Haw");
    d1.setNumberOfLegs(4);
    d1.setType("Out");
    cout << "Dog Display From Animal" << endl;
    d1.getDisplayAnimal();
   
    return 0;
}