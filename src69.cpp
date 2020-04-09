// Code to get Nth Node of the LinkedList

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

int getNth(Node* head, int position){
    if(head == NULL)
        return 0;
    
    Node* current = head;

    int i = 0;
    while (i != position)
    {
        current = current->next;
        i++;
    }
    
    return current->data;

}

int main(){
    int data, position;
    Node* head;
    int i = 5;
    // cout << "Enter the data";
    while(i--){
        cout << "Enter the data\n";
        cin >> data;
        push(&head, data);
    }
    cin >> position;
    cout << "position = "<< getNth(head, position);

    return 0;
}