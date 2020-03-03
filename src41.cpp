/*

Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class. 

*/

#include <iostream>
using namespace std;


// base class
class Vehicle{
	public: 
		Vehicle(){
			cout << "This is a Vehicle" << endl;
		}
};

class Fourwheeler : public Vehicle {
	public:
		Fourwheeler(){
		cout << "Object with 4 Wheels are Vehicle" << endl;
	}
};

// sub class derived from two base class
class Car : public Fourwheeler {
	public:
		Car(){
			cout << "Car has 4 Wheels" << endl;
		}
};

// main function
int main(){

	Car c;
	return 0;
}