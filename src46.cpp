/*
Polymorphism: 

	Runtime Polymorphism: This type of polymorphism is achieved by Function Overriding. 

			*Function overriding on the other hand occurs when a derived class has a definition for 
			one of the member functions of the base class. That base function is said to be overridden.



Link: https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/


*/

// Program on Function Overriding

#include <iostream>
using namespace std;

// Base Class
class base{
public:
	virtual void print(){
		cout << "Print Base Class" << endl;
	}

	void show(){
		cout << "Display Base Class" << endl;
	}
};

// Derived Class
class derive : public base{
public:
	//print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
	void print(){
		cout << "Print derive Class" << endl;
	}

	void show(){
		cout << "Display Derive Class" << endl;
	}
};

int main(){

	base *bptr;
	derive d;
	bptr = &d;

	//virtual function, binded at runtime (Runtime polymorphism)
	bptr -> print();

	// Non-virtual function, binded at compile time 
	bptr -> show();

	return 0;
}
