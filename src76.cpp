// Insertion in a Circular LinkedList

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node *addToEmpty(Node* last, int data){
    // This function is only for Empty list
    if(last != NULL)
        return last;

    // Creating a Node dynamically
    last = new Node();
    
    // Inserting data to the new Node
    last->data = data;

    // Last Element of the Node will point itself
    last ->next = last;

    return last;
}

Node *addBegin(Node *last, int data){
    if(last == NULL)
        return addToEmpty(last, data);

    // Allocate memory to the New_node
    Node* new_node = new Node();
    
    // Insert data to the new Node
    new_node -> data = data;

    // new_node->next will point to the next element of the last node which is 1st node
    new_node ->next = last->next;

    // Now the last node points to the new_node, Hence new_node is the 1st node.
    last ->next = new_node;

    return last;
}

Node *addEnd(Node *last, int data){
    if(last == NULL)
        return addToEmpty(last, data);

    // Allocate memory to the new Node
    Node *new_node = new Node();

    // Insertion of data to the new Node
    new_node->data = data;

    // new_node is now pointing to the next of the last node
    new_node->next = last->next;

    last ->next = new_node;

    last = new_node;

    return last;
}

Node *addAfter(Node *last, int data, int item){
    if(last == NULL){
        return NULL;
    }
    
    Node *temp, *p;

    // p is pointing to the head of the LinkedList
    p = last ->next;

    do
    {
        if(p -> data == item){
            // Allocate memory to the temp
            temp = new Node();

            // Insert data to the temp node
            temp -> data = data;

            temp ->next = p->next;

            p->next = temp;

            if (p == last)
                last = temp;

            return last;
        }
            p = p->next;

    } while (p != last ->next);
    
    cout << item << "Item is not present in the list\n";
    return last;
}

void traverse(Node *last){
    Node *p;
    
    // If the list is empty
    if(last == NULL){
        cout << "List is Empty\n";
        return ;
    }

    p = last->next;

    do{
        cout << p ->data << " ";
        p = p -> next;
    }   while(p != last->next);
    cout <<"\n";
}

int main(){

    Node *last = NULL;

    last = addToEmpty(last, 1);
    last = addToEmpty(last, 2);
    last = addBegin(last, 3);
    last = addBegin(last, 10);
    last = addEnd(last, 1000);
    last = addAfter(last, 5000, 3);

    traverse(last);

    return 0;
}