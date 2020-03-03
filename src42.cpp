/*

Hierarchical Inheritance: In this type of inheritance, more than one sub class is 
inherited from a single base class. i.e. more than one derived class is created from a single base class.

*/

#include <iostream>
using namespace std;

class Vehicle {
	public:
		Vehicle(){
			cout << "This is a Vehicle" << endl;
		}

};

class Car : public Vehicle
{

};

class Bus : public Vehicle
{

};


int main (){
	Car c;
	Bus b;
	return 0;
}