// Trees are Hierarchical data structure unlike linear data structure like arrays, linkedlist,
// stacks, queues etc.

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
};

Node *newNode(int data){
    Node *node = new Node();
    node->data = data;
    node->left=NULL;
    node->right=NULL;

    return (node);
}

int main(){

    Node *root = newNode(1);
    root->left = newNode(2);
    root ->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    return 0;
}