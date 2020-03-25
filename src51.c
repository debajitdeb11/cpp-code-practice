// Simple Program to insert the data to the link List

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insertation(struct Node* n){
    while(n != NULL ){
        int dat;
        scanf("%d", &dat);
        n->data = dat;
        n = n->next;
    }
}

void display(struct Node* n){
    while(n != NULL){
        printf("%d", n->data);
        n = n->next;
    }
}

int main(){
    struct Node *head, *second, *third;
  
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->next = second;
    second->next = third;
    third->next = NULL;

    Insertation(head);
    display(head);

    return 0;
}