#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void displayList(Node* head){
    
    Node* temp = head;

    // If linked list is empty 
    if(head == NULL){
        return;
    }  else {
        // Keep printing nodes till we reach the first node again
        do
    {
        cout << temp->data << "\t" ;
        temp = temp->next;
        } while (temp != head);
    
    }
    
}

void push(Node** head, int data){

    Node* ptr1 = new Node(data);
    Node* temp = *head;
    ptr1->next = *head;

    if(*head != NULL){
        while(temp->next != *head)
            temp = temp->next;
        temp->next=ptr1;
    }   else
    {
        ptr1->next=ptr1;
    }
    
    *head = ptr1;

}



int main(int argc, char const *argv[])
{
    Node* list = NULL;

    push(&list, 12);  
    push(&list, 56);  
    push(&list, 2);  
    push(&list, 11);

    cout << "Contents of Circular Linked List\n ";  
    displayList(list);

    return 0;
}
