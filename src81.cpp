/*

##### Insertation into a Doubly LinkedList

 Add a node at the end: (7 steps process)
 The new node is always added after the last node of the given Linked List. 
 For example if the given DLL is 510152025 and we add an item 30 at the end, 
 then the DLL becomes 51015202530.
 Since a Linked List is typically represented by the head of it, 
 we have to traverse the list till end and then change the next of last node to new node.

*/

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev, *next;
};

void insertAtEnd(Node **head, int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL){
        new_node->prev = NULL;
        return;
    }

    Node *last = *head;

    while(last != NULL){
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

void display(Node *node){
    while(node != NULL){
        cout << node->data <<"  ";
        node = node->next;
    }
    cout <<"\n";
}

int main(){

    Node *head = NULL;
    int t, data;

    cout << "Initial Data on the Node: ";
    display(head);

    cout <<"How many data you want to insert to the Linked List\n";
    cin >> t;

    while(t--){
        cin >> data;
        insertAtEnd(&head, data);
    }

    cout << "Final data on the LinkedList is: ";
    display(head);

    return 0;
}