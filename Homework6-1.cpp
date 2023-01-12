#include <iostream>
#include <math.h>
using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;
public:
    ComplexNumber(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print() {
        cout << real << " + i" << imaginary;
    }
    ComplexNumber operator+ (ComplexNumber c2) { // This oveloading operator is also the solution for T.6.2.
        ComplexNumber c3(0, 0);
        c3.real = this->real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;
        return c3;
    }
    ComplexNumber operator~ () {
        ComplexNumber c4(0,0);
        c4.real = this->real;
        c4.imaginary = this->imaginary;
        // return abs(c4); - does not work.
        // return sqrt[(c4.real * c4.real) + (c4. imaginary * c4. imaginary)]; - does not work.
        // How to compute the absolute value of the number?
    }
    ComplexNumber operator^ (ComplexNumber c5) {
       // return (c5.real * c5.real) + (2 * c5.real * c5.imaginary) + (c5.imaginary * c5. imaginary); - does not work.
       // return pow(c5, 2); - does not work.
       // How to compute the power of a complex number?
    }
};

int main()
{
    ComplexNumber c1(3, 5);
    ComplexNumber c2(2, 4);
    ComplexNumber c3 = c1 + c2;
    ComplexNumber c4(8, 6);
    ComplexNumber c5(7, 9);
    c3.print();
    ~c4;
    c5;
    return 0;
}

