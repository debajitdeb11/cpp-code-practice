// A simple C++ program for traversal of a linked list 

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){

        }

        ~Node();
};

void PrintList(Node* n){

    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    
}


int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate  3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Enter the data to the 1st Node
    cout << "Enter the data to the 1st Node \n";
    cin >> head->data;
    
    // Link the 1st Node with the 2nd Node
    head->next = second;

    // Enter the data to the Second Node
    cout << "Enter the data to the 2nd Node\n";
    cin >> second->data;

    // Link the second node to the third node
    second->next = third;

    // Enter the data to the third Node
    cout << "Enter the data to the 3nd Node\n";
    cin >> third->data;

    // Link the third Node to 'NULL'
    third->next = NULL;

    PrintList(head);

    return 0;
}