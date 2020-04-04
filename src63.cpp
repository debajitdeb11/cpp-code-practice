/*  Search a given value exist or not inside a LinkedList   */
// Method: Reccursive
// Time Complexity is more ----------------- O(log(n))

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

// // To search the element is present or not in the List
bool searchList (Node* head, int key){
    //Base Case
    if(head == NULL)
        return false;

    // If the key is present in the current Node
    if(head->data == key)
        return true;

    // Recur for remaining list
    return(head->next, key); 
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
    if(searchList(list, n) == n){
        cout << "yes\n";
    }   else
    {
        cout << "No\n";
    }
    

    return 0;
}

