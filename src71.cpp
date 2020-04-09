#include <bits/stdc++.h>
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

void pushFront(Node** head_ref, int data);
void display(Node* node);
bool detectLoop(Node* head);


int main(){
    Node* head = NULL;
    int t, data;
    cout << "How many data you want to insert\n";
    cin >> t;

    while(t--){
        cin >> data;
        pushFront(&head, data);
    }

    head->next->next->next->next->next = head;

    if(detectLoop(head)){
        cout << "Loop Found";
    }

    else
    {
        cout << "No";
    }
    

    display(head);
    return 0;
}

void pushFront(Node** head_ref, int data){
    Node* new_node = new Node(data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void display(Node* node){
    while(node != NULL){
        cout << node->data;
        cout << "->";
        node = node->next;
    }
}

bool detectLoop(Node* head){
    unordered_set<Node* > s;
    while(head != NULL){
        // If this node is already present 
        // in hashmap it means there is a cycle 
        // (Because you we encountering the 
        // node for the second time). 

        if(s.find(head) != s.end())
            return true;
    }

    s.insert(head);

    head = head->next;
    
}
