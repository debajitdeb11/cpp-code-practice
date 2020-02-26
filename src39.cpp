/*

Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
i.e one sub class is inherited from more than one base classes.

----------------------------------------------------------------------------------------------------------------------------------------------

class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
};


Here, the number of base classes will be separated by a comma 
(‘, ‘) and access mode for every base class must be specified.

*/

// Program 1

#include <iostream>
using namespace std;


// First base Class
class Vehicle {
	public:
		Vehicle(){
			cout << "This is a Vehicle" << endl;
		}
};


// Second base Class
class FourWheel{
	public:
		FourWheel(){
			cout << "It has 4 Wheels" << endl;
		}
};


// sub Class derived from two base class
class Car : public Vehicle, public FourWheel {

};


// main function
int main(){

	Car obj;
	return 0;
}