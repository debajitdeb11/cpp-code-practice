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

void push(Node** head, int data){
    Node* new_node = new Node(data);
    new_node->next = *head;
    *head = new_node;
}

int nthNodeFromEnd(Node* head, int position){
    if(head == NULL)
        return -1;
    
    // For Finding the Length of the LinkedList
    Node* current = NULL;
    Node* temp = head;
    int length = 0;
    while(current != NULL){
        current = current->next;
        length++;
    }
    // free(current);

    
   for(int i = 0; i < length-position; i++){
       temp = temp->next;
   }
    return temp->data;
}

int main(){
    Node* head;
    int value;
    int i;
    cout<<"How many values you want to insert\n";
    cin >> i;
    while(i--){
        cin >> value;
        push(&head, value);
    }

    cout << "At what position You want to find the value\n";
    int position;
    cin >> position;

    cout << nthNodeFromEnd(head, position);

    return 0;
}