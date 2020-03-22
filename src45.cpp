/*
Polymorphism:

// Example program on Operator Overloading

**** Operator Overloading:  C++ also provide option to overload operators. 
	For example, we can make the operator (‘+’) for string class to concatenate two strings. 
	We know that this is the addition operator whose task is to add two operands. 
	So a single operator ‘+’ when placed between integer operands , adds them and when placed 
	between string operands, concatenates them.

*/


// ******************* Example needs rectification ************************************* 

#include <iostream>
using namespace std;

class Complex{
private:
	int real, img;

public:
	Complex(int r = 0, int i = 0){
		real = r;
		img = i;
	}


	Complex operator + (Complex const &obj){
		Complex res;
		res.real = real + obj.img;
		res.img = img + obj.real;

		return res;
	}

	void display(){
		cout << real << "+i" << 	img << endl;
	}

};

int main(){
	Complex c1 (10,5), c2 (2, 4);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}
