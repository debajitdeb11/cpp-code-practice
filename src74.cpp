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

void push(Node** head, int data){
    Node* new_node = new Node(data);
    new_node->next = *head;
    *head = new_node;
}

int countNode(Node* head){
    int countNode = 1;
    Node *start = head;
    while(start ->next != head){
        countNode++;
        start = start->next;
    }

    return countNode;
}

int detectLoop(Node* head){
    Node *tortoise = head, *hare = head;

    while(tortoise && hare && hare->next){
        
        tortoise = tortoise->next;
        hare = hare->next;

        if(tortoise == hare)
            return countNode(tortoise);
            
    }

}

int main(){
    Node* head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);

    head->next->next->next->next->next = head;
    detectLoop(head);
    return 0;
}