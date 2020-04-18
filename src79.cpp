// Insertion in a Doubly Linked List (DLL)

/*

1) Add a node at the front: (A 5 steps process)
*******************************************************************************
The new node is always added before the head of the given Linked List.
And newly added node becomes the new head of DLL. 
For example if the given Linked List is 10152025 and we add an item 5 at the front, 
then the Linked List becomes 510152025. 
Let us call the function that adds at the front of the list is push(). 
The push() must receive a pointer to the head pointer, 
because push must change the head pointer to point to the new node 

*/
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;
};

void pushFront(Node **head, int data){
    
    //1. Initialization of New Node
    Node *new_node = new Node();

     /* 2. put in the data  */
    new_node->data = data;


    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = *head;
    new_node->prev = NULL;

    /* 4. change prev of head node to new node */
    if(*head != NULL)
        (*head)->prev = new_node;
    
    /* 5. move the head to point to the new node */
    (*head) = new_node;
}

void display(Node *node){
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    cout <<"\n";
}

int main(){

    Node *head = NULL;
    int t, data;
    cout << "How many values you want to insert\n";
    cin >> t;

    while(t--){
        cin >> data;
        pushFront(&head, data);
    }
    cout << "The final result LL is :";
    display(head); 
    return 0;
}