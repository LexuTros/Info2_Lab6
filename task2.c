#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;


struct Node* insertList(struct Node* root, int x){
    if(root == NULL){
        root = malloc(sizeof(struct Node));
        root->data = x;
        root->next = NULL;
    }
    
    else {
        struct Node* q = root;
        while (q->next != NULL) {q = q->next;}
        q->next = malloc(sizeof(struct Node));
        q->next->data = x;
        q->next->next = NULL;
    }

    return root;
}

void displayList(struct Node* root){
    printf("[");
    while (root != NULL)
    {
        printf("%d", root->data);
        root = root->next;
        if (root != NULL) {printf(", ");}
        
    }
    printf("]");
}

struct Node* groupingLinkedLists(struct Node* root){
    struct Node* odd = NULL;
    struct Node* even = NULL;

    // Build new linked List of odd elements
    while (root != NULL)
    {
        if (/* condition */)
        {
            /* code */
        }
        
        insertList(odd, root->data);
        root = root->next;
        if (root != NULL) {printf(", ");}
        
    }

    // Build new linked List of even elements

    // attach even list to odd list
}

int main(){

    head = insertList(head, 8);
    insertList(head, 3);
    insertList(head, 42);
    insertList(head, 9);

    // printf("%d\n", head->data);
    // printf("%d\n", head->next->data);

    displayList(head);

    return 0;
}