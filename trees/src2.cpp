// program to insert element into the binary tree
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Inorder traverse of binary tree
void inorder(Node *temp)
{

    if (!temp)
        return;

    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

// Function to insert element in the binary tree
void insert(Node *temp, int data)
{
    queue<Node *> q;
    q.push(temp);

    // Do level order traversal until we find
    // an empty place.
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
    }
}

int main()
{

    return 0;
}