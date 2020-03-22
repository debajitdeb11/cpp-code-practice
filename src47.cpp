/*
***** Encapsulation in C++ *****

	In normal terms Encapsulation is defined as wrapping up of data and information under a single unit.
	In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions
	that manipulates them.

	Consider a real life example of encapsulation, in a company there are different sections like the accounts section, 
	finance section, sales section etc. The finance section handles all the financial transactions and keep records 
	of all the data related to finance. Similarly the sales section handles all the sales related activities and keep 
	records of all the sales. Now there may arise a situation when for some reason an official from finance section needs
	all the data about sales in a particular month. In this case, he is not allowed to directly access the data of sales 
	section. He will first have to contact some other officer in the sales section and then request him to give the 
	particular data. This is what encapsulation is. Here the data of sales section and the employees that can manipulate
	them are wrapped under a single name “sales section”.


*/

// Simple Program to demostrate Encapsulation

#include <iostream>
using namespace std;

class Encapsuation{
	private:
		int x;

	public:
		void setData(int a){
		x = a;
	}

	int getData(){
		return x;
	}
};

int main(){

	int n;

	cin >> n;

	Encapsuation E;
	E.setData(n);
	cout << E.getData() << endl;
	return 0;
}



/*
-------------------------------------------------------- NOTE ----------------------------------------------------------

In the above program the variable x is made private. This variable can be accessed and manipulated only using 
the functions get() and set() which are present inside the class. Thus we can say that here, the variable x and 
the functions get() and set() are binded together which is nothing but encapsulation.

--------------------------------------------------------XXXXX------------------------------------------------------------
*/
