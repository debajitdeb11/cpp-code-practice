/*  Search a given value exist or not inside a LinkedList   */
// Method: Iteration
// Time Complexity is Less

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

// To Insert data on to the head of the List
void push(Node** head, int data){
    Node* new_node = new Node(data);
    new_node->next = *head;
    *head = new_node;
}

// To search the element is present or not in the List
bool searchList(Node* head, int key){
    
    // To point the current Node
    Node* current = head;

    while(current != NULL){
        if(current->data == key)
            return true;

        else
            current = current->next;
    }

    return false;
}

//To display the List
void displayList(Node* head){
    while(head != NULL){
        cout << head->data << "\t";
        head = head->next;
    }
}

int main(){

    int n;
    Node* list = new Node(0);
    push(&list, 100);
    push(&list, 200);
    push(&list, 300);
    push(&list, 400);
    displayList(list);
    cin >> n;
    searchList(list, n) ? cout<< "yes" : cout << "No";

    return 0;
}