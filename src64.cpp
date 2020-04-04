/*
*********************** Write a function to get Nth node in a Linked List ******************************
Example:

Input:  1->10->30->14,  index = 2
Output: 30  
The node at index 2 is 30

---------------------------------------------------------------------------------------------------------
Algorithm:


1. Initialize count = 0
2. Loop through the link list
     a. if count is equal to the passed index then return current
         node
     b. Increment count
     c. change current to point to next of the current.


*/




//Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

// To Insert data on to the head of the List
void push(Node** head, int data){
    Node* new_node = new Node(data);
    new_node->next = *head;
    *head = new_node;
}

// To display the List
void displayList(Node* head){
    while(head != NULL){
        cout << head->data << "\t";
        head = head->next;
    }
}

// Takes head pointer of  
// the linked list and index  
// as arguments and return  
// data at index  
int getNth(Node* head, int key){
    Node* current = head;

     
    // the index of the  
    // node we're currently  
    // looking at
    int index = 0;
    while (current != NULL)
    {
        if(index == key){
            return current->data;
        }

        index++;
        current = current->next;
    }

    /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */

    assert(0);
    
}

int main(){

    int n;
    Node* list = new Node(0);
    push(&list, 100);
    push(&list, 200);
    push(&list, 300);
    push(&list, 400);
    displayList(list);
    cin >> n;
    cout << "Element at Index:" << n << "=" << getNth(list,n);

    return 0;
}