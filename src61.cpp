#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){     // Parameterized constructor
        this->data = data;
        this->next = NULL;
    }
};

//Delete a Linked List node at a given position

void deleteNode(Node** head_ref, int position){
    if(*head_ref == NULL)   return;

    Node* temp = *head_ref;

    if(temp != NULL && position == 0){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Find previous Node of the Node to be deleted
for(int i = 0; temp != NULL && i < position; i++){
    temp = temp->next;
}

// If position is more than number of ndoes 
    if(temp == NULL || temp->next == NULL)  return;

    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 

    Node* next = temp->next->next;

    free(temp->next);

    temp->next = next;
}


