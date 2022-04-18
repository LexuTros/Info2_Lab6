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

    // Build new linked List of odd & even elements
    while (root != NULL)
    {
        int value = root->data;
        if (value %2 != 0){
            odd = insertList(odd, value);
        }
        else {even = insertList(even, value);}
        root = root->next;
    }

    // Attach even list to odd list
    if (odd == NULL) {odd = even;}
    else{
        struct Node* q = odd;
        while (q->next != NULL) {q = q->next;}
        q->next = even;
    }
    
    return odd;
}

int main(){

    head = insertList(head, 8);
    insertList(head, 3);
    insertList(head, 2);
    insertList(head, 9);
    insertList(head, 4);
    insertList(head, 5);
    insertList(head, 6);

    displayList(head);

    head = groupingLinkedLists(head);
    displayList(head);
    

    return 0;
}