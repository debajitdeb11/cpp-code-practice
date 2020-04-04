
//  Function to demostrate delete node using a key.


class Node{
    public:
    int data;
    Node* next;

    Node(int data){     // Parameterized constructor
        this->data = data;
        this->next = NULL;
    }
};


void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref, *prev;
    if( temp != NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)    return;

    prev->next = temp->next;

    free(temp);
}