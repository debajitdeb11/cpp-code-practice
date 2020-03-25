//LinkList: Add a node after a given node: (5 steps process)

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// Given a node prev_node, insert a new node after the given prev_node 
void insertAfter(struct Node* prev_node, int new_data){
    
    /*1. check if the given prev_node is NULL */ 
    if(prev_node == NULL){

        printf("The given previous Node cannot be NULL\n");
        return;
    }

     /* 2. allocate new node */
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

     /* 3. Put in the data to the new node */
     new_node->data = new_data;

     /* 4. Make next of new node as next of prev_node */
     new_node->next = prev_node->next;

     /* 5. move the next of prev_node as new_node */
     prev_node->next = new_node;

}

void printList(struct Node* n){
    while(n!=NULL){
        printf("%.2d\n", n->data);
        n = n->next;
    }
}

int main(){

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    printf("Want to Add New Data to the List \n Y or N \n");

    char a;

    scanf("%c", &a);

    if (a == 'Y' || a == 'y')
    {   
        int data;
        // struct Node* postn;
        printf("Enter the Data\n");
        scanf("%d", &data);

        // printf("Enter the Position\n");
        // scanf(postn);

        insertAfter(head, data);


    }   else    {
        printf("Thank You!\n");
    }
    
     printList(head);

    return 0;
}


// Time complexity of insertAfter() is O(1) as it does constant amount of work.