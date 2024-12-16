#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:

    //Default Constructor
    Complex() {
        real = 0;
        img = 0;
    }

    //Paramterize Constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void setReal(int _real) {
        real = _real;
    }

    void setImg(int _img) {
        img = _img;
    }

    int getReal() {
        return real;
    }

    int getImg() {
        return img;
    }

    void getComplex() {
        if (real < 0 && img < 0) {
            cout << "Error There Is No Negative Real Number And No Negative Img Number" << endl;
        }
        else if (real < 0) {
            cout << "Error There Is No Negative Real Number" << endl;
            cout << img << "j";
        }
        else if (img < 0) {
            cout << "Error There Is No Negative Img Number" << endl;
            cout << real << "+";
        }
        else if (real > 0 && img > 0) {
            cout << real << "+" << img << "j" << endl;
        }
    }

    Complex addNumber(Complex cTop) {
        Complex result;
        result.real = this->real + cTop.real;
        result.img = this->img + cTop.img;
        return result;
    }

    // Operator Overloading polymerphism
    Complex operator+(Complex plus) {
        Complex resultPlus;
        resultPlus.real = this->real + plus.real;
        resultPlus.img = this->img + plus.img;
        return resultPlus;
    }

    Complex operator-(Complex minus) {
        Complex resultMinus;
        resultMinus.real = this->real - minus.real;
        resultMinus.img = this->img - minus.img;
        return resultMinus;
    }

    Complex operator*(Complex mul) {
        Complex resultMul;
        resultMul.real = this->real * mul.real;
        resultMul.img = this->img * mul.img;
        return resultMul;
    }

    Complex operator/(Complex divider) {
        Complex resultDivider;
        resultDivider.real = this->real / divider.real;
        resultDivider.img = this->img / divider.img;
        return resultDivider;
    }

    Complex operator%(Complex moduls) {
        Complex resultModuls;
        resultModuls.real = this->real % moduls.real;
        resultModuls.img = this->img % moduls.img;
        return resultModuls;
    }

    Complex operator++() {
        ++real;
        ++img;
        Complex newNumber(real, img);
        return newNumber;
    }

    Complex operator++(int) {
        real++;
        img++;
        Complex newNumber(real, img);
        return newNumber;
    }

    Complex operator--() {
        --real;
        --img;
        Complex newNumber(real, img);
        return newNumber;
    }

    Complex operator--(int) {
        real--;
        img--;
        Complex newNumber(real, img);
        return newNumber;
    }

    friend Complex operator+(int x, const Complex numberReal) {
        Complex result;
        result.real = x + numberReal.real;
        result.img = x + numberReal.img;
        return result;
    }

    Complex operator+=(Complex numberReal) {
        Complex result;
        result.real += numberReal.real;
        result.img += numberReal.img;
        return result;
    }
};

int main() {

    Complex c1, c2(10, 10), c3;
    int userReal;
    int userImg;
    cout << "Please Enter Real Number" << endl;
    cin >> userReal;
    cout << "Please Enter Img Number" << endl;
    cin >> userImg;
    c1.setReal(userReal);
    c1.setImg(userImg);
    
    c1.getComplex();

    cout << "==========================================" << endl;
    
    Complex mainResult;
    mainResult = c1.addNumber(c2);
    cout << "New Real Result Is " << mainResult.getReal() << endl;
    cout << "New Real Result Is " << mainResult.getImg() << endl;

    cout << "===========================================" << endl;

    cout << "Plus Operator Function" << endl;
    c3 = c1 + c2;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "===========================================" << endl;

    cout << "Minus Operator Function" << endl;
    c3 = c1 - c2;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "Mul Operator Function" << endl;
    c3 = c1 * c2;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "Divider Operator Function" << endl;
    c3 = c1 / c2;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "Modlus Operator Function" << endl;
    c3 = c1 % c2;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "preincrement Operator Function" << endl;
    c3 = ++c1;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "postincrement Operator Function" << endl;
    c3 = c1++;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "predecrement Operator Function" << endl;
    c3 = --c1;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "postdecrement Operator Function" << endl;
    c3 = c1--;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "number Operator" << endl;
    c3 = 5 + c1;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;

    cout << "============================================" << endl;

    cout << "number += Operator" << endl;
    c3 += c1;
    cout << c3.getReal() << endl;
    cout << c3.getImg() << endl;
}