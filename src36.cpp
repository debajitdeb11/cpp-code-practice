/*
	Inheritance in C++

	The capability of a class to derive properties and characteristics from another class is called Inheritance.
	Inheritance is one of the most important feature of Object Oriented Programming.
	Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
	Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.


	Implementing inheritance in C++: For creating a sub-class which is inherited from the base class we have to follow the below syntax.
	Syntax:

		class subclass_name : access_mode base_class_name
		{
  		//body of subclass
		};

*/

#include <iostream>
using namespace  std;


class Parent
{
public:

	int id_p;
};

class Child : public Parent {

public:

	int id_c;
};

int main(){

	Child obj1; // This object is used to call the members of Child class

	obj1.id_p = 50;
	obj1.id_c = 100;

	cout << "Id for the child is:" << obj1.id_c << endl;
	cout << "Id for the Parent is:" << obj1.id_p << endl;
 
	return 0;
}

