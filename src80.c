/*  
    # Insertion in a DLL

    Add a node after a given node.: (A 7 steps process)
    We are given pointer to a node as prev_node, and the new node is inserted after the given node.

*/


#include <stdio.h>

struct Node{
    int data;
    struct Node *next, *prev;
};

void insertAfter(struct Node *prev_node, int data){

    if(prev_node == NULL){
        printf("Cannot Insert new_node as prev node is empty\n");
        return ;
    }

    /* 2. allocate new node */
    struct Node *new_node = (struct Node*) malloc (sizeof(struct Node));
    
    /* 3. Insert data to the new node */
    new_node->data = data;
    
    /* 4. make the next node equals to the next of the prev_node */
    new_node->next = prev_node->next;

    /* 5. Linked the new_node -> next = prev_node -> next */
    prev_node->next = new_node;

    /* 6. Make prev_node as previous of new_node */
    new_node->prev = prev_node;

    /* 7. Change previous of new_node's next node */
    if(new_node ->next != NULL){
        new_node->next->prev = new_node;
    }
}

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;


    return 0;
} 