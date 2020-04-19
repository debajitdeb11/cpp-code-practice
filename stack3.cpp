// Implemention of Stack using LinkedList

#include <bits/stdc++.h>
using namespace std;

class StackNode{
    public:
        int data;
        StackNode *next;
};


StackNode *newNode(int data){
    StackNode *stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(StackNode *root){
    return (!root);
}

void push(StackNode **root, int data){
    StackNode *StackNode = newNode(data);
    StackNode->next = *root;
    *root = StackNode;

    cout <<data<<": Pushed to the Stack\n";
}

int pop(StackNode **root){
    if(isEmpty(*root))
        return INT_MIN;

    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(StackNode *root){
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main(){
    StackNode *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout <<"Top Element of the Root is: "<< peek(root);

    pop(&root);

    cout <<"Top Element of the Root is: "<<peek(root);

    return 0;
}