// Delete Duplicate value from the LinkedList
#include <iostream>
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

void push(Node **head_ref, int data){
    Node *new_node = new Node(data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteDuplicate(Node* head){

    Node *current = head, *temp;

    if(current == NULL)
        return;

    

    while(current->next != NULL){
        if(current->data == current->next->data){
             /* The sequence of steps is important*/  
            temp = current->next->next;
            free(current->next);
            current->next = temp;
            }   else
            {
                /* This is tricky: only advance if no deletion */
                current = current->next;   
            }
            
        
}
}

void display(Node* head){
    while(head != NULL){
        cout << "->" << head->data;
        head = head->next;
    }
    cout << "\n";
}

int main(){

    Node* head = NULL;
    
    push(&head, 50);
    push(&head, 50);
    push(&head, 50);
    push(&head, 50);
    push(&head, 50);
    push(&head, 40);
    push(&head, 40);
    push(&head, 40);
    push(&head, 40);
    push(&head, 30);
    push(&head, 30);
    push(&head, 30);
    push(&head, 20);
    push(&head, 20);
    push(&head, 10);

    display(head);

    // To delete the duplicate value
    deleteDuplicate(head);

    display(head);


    return 0;
}