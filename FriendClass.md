
##Friend class and function in C++
-------------------------------------------------------------------------------------------------------------------------
Friend Class A friend class can access private and protected members of other class 
in which it is declared as friend. It is sometimes useful to allow a particular class 
to access private members of other class. 
For example a LinkedList class may be allowed to access private members of Node.

class Node { 
private: 
	int key; 
	Node* next; 
	Other members of Node Class

	Now class LinkedList can 
	access private members of Node 
	friend class LinkedList; 
    };