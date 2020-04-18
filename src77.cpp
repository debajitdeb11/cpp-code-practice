// Deletion in Circular linkedList

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};


// Insertion of a new node to the front of the CLL
void push(Node **head, int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node ->next = *head;

    if(*head != NULL){
        Node *temp = *head;

        while(temp->next != *head){
            temp = temp->next;
        }
        temp ->next = new_node;
    }   else
    {
        new_node -> next = new_node;        
    }
    
    *head = new_node;
}

// Print Node of a CLL
void printNode(Node *head){
    if (head != NULL){
        Node *temp = head;
        do
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        } while (temp != head);
        
        cout <<"\n";
    }
    else
        return ;
}

// To perform deletion of Ndoe in CLL
void deleteNode(Node **head, int key){

    // If Linkedlist is empty
    if(*head == NULL)
        return;

    // If the list contains only single Node
    if( (*head)->next == NULL && (*head)->data == key){
            free(*head);
            *head == NULL;
    }

    Node *last = *head, *temp;

    // If the head is to be deleted
    if ((*head)->data == key){
        
        // Find the last Ndoe in the Linked List
        while(last ->next != *head)
            last = last->next;

        last->next = (*head)->next;
        free(*head);
    }

    while(last ->next != *head && last-> next->data != key)
        last = last ->next;

    if(last->next->data == key){
        temp=last->next;
        last ->next = temp ->next;
        free(temp);
    }
    else
        cout << "Not Found\n";
    
}

int main(){
    Node *head = NULL;

    push(&head, 2); 
    push(&head, 5); 
    push(&head, 7); 
    push(&head, 8); 
    push(&head, 10);

    cout << "List :";
    printNode(head);

    deleteNode(&head, 7);

    cout << "After the Deletion:";
    printNode(head);
    return 0;
}