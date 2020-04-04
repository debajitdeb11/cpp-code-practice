#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void pushFront(struct Node** head_ref, int data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteList(struct Node** head_ref){
    struct Node* current = *head_ref;
    struct Node* next;
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

void displayList(struct Node* list){
    while(list != NULL){
        printf("%d\t", list->data);
        list = list->next;
    }
}

int main(){
    int n;
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    scanf("%d", &n);
    pushFront(&head, n);
    displayList(head);
    deleteList(&head);
    printf("After Deletion\n");
    displayList(head);

    return 0;
}