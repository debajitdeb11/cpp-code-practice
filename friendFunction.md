##Friend Function
 Like friend class, a friend function can be given special grant to access private and protected members. A friend function can be:
a) A method of another class
b) A global function

---------------------------------------------------------------------------------------------------------------

class Node { 
private: 
	int key; 
	Node* next; 

	/* Other members of Node Class */
	friend int LinkedList::search(); 
	// Only search() of linkedList 
	// can access internal members 
}; 


------------------------------------------------------------------------------------------------------------------




Following are some important points about friend functions and classes:
1) Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.

2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

3) Friendship is not inherited (See this for more details)

4) The concept of friends is not there in Java. 