#include <iostream>
#include <string.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){     // Constructor
            this->data = data;
            this->next = NULL;
        }
};

// This Will insert a node to the front of the linkedList
void pushFront(Node** head_ref, int data){
    Node* new_node = new Node(data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// This will insert a node after a given Node in the linkedList
void pushAfter(Node* prev_node, int data){
    Node* new_node = new Node(data);

    if(prev_node == NULL){
        cout << "Data cannot be inserted as\n Node doesn't exist!!!!!!\n";
        return ;
    }
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    
}

// This will insert node at the end of the LinkedList
void pushEnd(Node** head_ref, int data){
    Node* new_node = new Node(data);
    Node *last_node = *head_ref;

    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last_node->next != NULL){
        last_node = last_node->next;
    }   

    last_node->next = new_node;
    return;
    
}

// This will print the Status of the linkedList
void printList(Node* list){
    while(list != NULL){
        cout << list->data << " ";
        list = list->next;
    }

    cout << endl;
}

// Contents to Print on the screen
void printContent(){
    cout << "1. Print the LinkedList\n"
    << "2. Insert a value at the Front of the LinkedList\n"  
    << "3. Insert a value after a Node of the LinkedList\n"
    << "4. Insert a value at the End of the LinkedList\n"
    << "5 To delete a Node\n";
}

// This will delete the specific node 
void deleteNode(Node** head_ref, int key){

    // Store head node
    Node* temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted 
    if(temp != NULL &&  temp->data == key){
        *head_ref = temp->next;         // Changed Head
        free(temp);                     // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 


}


int main(){
    int n,i;
    int key;
    Node* emptyList = new Node(0);
    int test;
    printContent();
    cin >> i;
    while(i>0 && i<6){
    
    switch (i)  {
    case 1:{
         printList(emptyList);
        break;
    }
    
    case 2: {
            cout << "Enter the data: ";
            cin >> n;
            pushFront(&emptyList, n);
            break;
    }

    case 3: { 
            cout << "Enter the data: ";
            cin >> n;
            cout << "Enter the Position";
            cin >> key;
            pushAfter(emptyList+key, n);
            break;
    }

    case 4: {
            cout << "Enter the data: ";
            cin >> n;
            pushEnd(&emptyList, n);
            break;
    }

    case 5: {
            cout << "Enter the Node Position: ";
            cin >> key;
            deleteNode(&emptyList, key);
            break;
    }


    }
    printContent();
    cin >> i;
}
    return 0;
}
