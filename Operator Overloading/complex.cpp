#include <iostream>
using namespace std;

class Complex
{

private:
    double real;
    double imag;

public:
    // Default Constructor
    Complex()
    {
        this->real = 0;
        this->imag = 0;
    }

    // Parameterized Constructor
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    // Operator Overloading
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;

        return temp;
    }

    // Display
    void display();
};

void Complex ::display()
{
    cout << this->real << "+i" << this->imag << "\n";
}

int main()
{

    Complex c1(2, 5);
    Complex c2(8, 5);

    Complex c3 = c1 + c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}