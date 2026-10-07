#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node* next;
 
};

void appendToEnd(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;


    if(*head_ref == NULL){
        *head_ref = new_node;
        return;

    }

    struct Node* last = *head_ref;

    while(last->next != NULL){
        last = last->next;

    }

    last->next = new_node;


}

void printList(struct Node* n){
    
    while(n!= NULL){
        printf("%d ", n->data);
        n=n->next;

    }
    printf("NULL\n");

}

int main() {
    
    struct Node* head = NULL;

    appendToEnd(&head,1);
    appendToEnd(&head,25);
    appendToEnd(&head,3);
    appendToEnd(&head,4);

    printf("Final List: ");
    printList(head);
    
    return 0;
}