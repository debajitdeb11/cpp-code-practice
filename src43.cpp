/* 

Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. 
For example: Combining Hierarchical inheritance and Multiple Inheritance.

*/

#include <iostream>
using namespace std;

class VEHICLE {
	public:
		VEHICLE(){
			cout << "This is a vehicle\n";
		}
};

class FARE {
	public: 
		FARE(){
			cout << "Fare of the Vehicle\n";
		}
};

class CAR : public VEHICLE {};		// first sub class

class BUS : public VEHICLE, public FARE {};		//second sub class

int main(){
	// CAR c;
	BUS b;
	return 0;
}