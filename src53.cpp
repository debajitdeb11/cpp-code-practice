// Linked List | Set 2 (Inserting a node)

/*

In this post, methods to insert a new node in linked list are discussed. A node can be added in three ways
1) At the front of the linked list
2) After a given node.
3) At the end of the linked list.

----------------------------------------------------------------------------------------------------------------------

Link: https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/

*/

// Program to add node at the front of the LinkList


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push (Node** head_ref, int new_data){
    
    // Allocate Node
    Node* new_node = new Node();

    // Put in the data
    new_node->data = new_data;

    //Make next of new node as head
    new_node->next = (*head_ref);

    // Move the head to point of the new node
    (*head_ref) = new_node;
}

//Time complexity of push() is O(1) as it does constant amount of work.


void printList(Node* n){
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
    
}

int main(){
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    cout << "Want to Add a New Data to the Head\n" << endl;
    cout << "Y or N" <<endl;

    char input;
    
    cin >> input;

    if(input == 'Y' || input == 'y'){
        int dta;
        cin >> dta;
        push(&head, dta);

    }   else    {
        cout << "Thank You!\n";
    }
    printList(head);


    return 0;
}
