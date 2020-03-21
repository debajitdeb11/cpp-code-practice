/*

The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability 
of a message to be displayed in more than one form. Real life example of polymorphism, a person at the same time
can have different characteristic. Like a man at the same time is a father, a husband, an employee. 
So the same person posses different behavior in different situations. This is called polymorphism.
Polymorphism is considered as one of the important features of Object Oriented Programming.

In C++ polymorphism is mainly divided into two types:

    Compile time Polymorphism
    Runtime Polymorphism


------------------------------------------------------------------------------------------------------------------------------------------------

*** Compile time polymorphism: This type of polymorphism is achieved by `function overloading` or `operator overloading`.

****Function Overloading: When there are multiple functions with same name but different parameters then 
	these functions are said to be overloaded. Functions can be overloaded by change in number of arguments 
	or/and change in type of arguments.


****** Rules of Function Overloading *******

Link: https://www.geeksforgeeks.org/function-overloading-in-c/
Link: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1905.pdf

*/

// Example program for "Function Overloading"

#include <iostream>
using namespace std;


class Calculate {
public:

	void Result(int x){
		cout << "You have Entered only one parameter:" << x << endl;
	}

	void Result(int x, int y){
		cout << "You have Entered two parameters:"<< x << "," << y << endl;
	}

	void Result(int x, int y, int z){
		cout << "You have Entered three parameters:" << x <<","<< y << "," << z << endl;
	}
};

int main(int argc, char const *argv[])
{
	Calculate c;
	int p,q,r;
	cin >> p >> q >> r;

	c.Result(p);
	c.Result(p,q);
	c.Result(p,q,r);

	return 0;
}