
/*

// Types of Inheritence 

Single Inheritance: In single inheritance, 
a class is allowed to inherit from only one class. i.e. one sub class is inherited by one base class only.

--------------------------------------------------------------------------------------------------------------------------

Syntax:

class subclass_name : access_mode base_class
{
  //body of subclass
};

*/

#include <iostream>
#include <string.h>
using namespace std;

class Parent {
	public:
		string LastName;

	void Set_LastName(){
		cin >> LastName;
	}

};

class Child : public Parent {
	public:

		void Get_LastName(){
			cout << LastName;
		}
};

int main(){

	Child c;
	cout <<"Enter The Last Name: ";
	c.Set_LastName();
	cout << "Last of Your Child is: ";
	c.Get_LastName();
	cout << endl;

	return 0;
}