/*
Can a C++ class have an object of self type?

A class declaration can contain static object of self type, it can also have pointer to self type, 
but it cannot have a non-static object of self type. 

*/


/*
 ----------------------------------- Program 1 -------------------------------------

// A class can have a static member of self type 
#include<iostream> 

using namespace std; 

class Test { 
static Test self; // works fine 

// other stuff in class

}; 

int main() 
{ 
Test t; 
getchar(); 
return 0; 
} 

----------------------------------------------------------------------------------------



---------------------------------- Program 2 ---------------------------------------------

// A class can have a pointer to self type 
#include<iostream> 

using namespace std; 

class Test { 
Test * self; //works fine 

// other stuff in class

}; 

int main() 
{ 
Test t; 
getchar(); 
return 0; 
} 

-----------------------------------------------------------------------------------------------


-------------------------------------Program 3 ------------------------------------------------

// A class cannot have non-static object(s) of self type. 
#include<iostream> 

using namespace std; 

class Test { 
Test self; // Error 

//other stuff in class

}; 

int main() 
{ 
Test t; 
getchar(); 
return 0; 
} 


-----------------------------------------------------------------------------------------------

NOTE: 

If a non-static object is member then declaration of class is incomplete and compiler has no way to find out size of the objects of the class.
Static variables do not contribute to the size of objects. So no problem in calculating size with static variables of self type.
For a compiler, all pointers have a fixed size irrespective of the data type they are pointing to, so no problem with this also
*/