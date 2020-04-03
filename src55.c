// LinkList:

/*

Add a node at the end: (6 steps process)
The new node is always added after the last node of the given Linked List. 
For example if the given Linked List is 5->10->15->20->25 and we add an item 30 at the end, 
then the Linked List becomes 5->10->15->20->25->30.
Since a Linked List is typically represented by the head of it, 
we have to traverse the list till end and then change the next of last node to new node.

*/


#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

/* Given a reference (pointer to pointer) to the head 
   of a list and an int, appends a new node at the end  */
void append(struct Node** head_ref, int new_data){
    
    /* 1. Allocate Node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* Used in step: 5 */
    struct Node* last = *head_ref;


    // 2. Put in the data
    new_node->data = new_data;

    // 3. This node is going to be the last node so make the next node null
    new_node->next = NULL;

     /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL){
        *head_ref == new_node;
        return;
    }

    /* 5. Else Traverse Till the last Node */
    while(last->next != NULL){
        last = last->next;
    }

    /* 6. Change the next of Last Node */
    last->next = new_node;

    return;
}

void insertion(struct Node* n){
    while (n!=NULL)
    {
        int dat;
        scanf("%d", &dat);
        n->data = dat;
        printf("Enter the Next value\n");
        n = n->next;
    }
    
}

void displayList(struct Node* n){
    while(n != NULL){
        printf("%d\n", n->data);
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

        head->next = second;
        second->next = third;
        third->next = NULL;

        insertion(head);

        displayList(head);
        return 0;

        append(&head, 100);

        displayList(head);

        return 0;
    }

/*


Time complexity of append is O(n) where n is the number of nodes in linked list. 
Since there is a loop from head to end, the function does O(n) work.
This method can also be optimized to work in O(1) by keeping an extra pointer to tail of linked list

*/