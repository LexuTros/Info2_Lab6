#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* head;
struct Node* ass;



struct Node* insertList(struct Node* root, char x){
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
        printf("%c", root->data);
        root = root->next;
        if (root != NULL) {printf(", ");}
        
    }
    printf("]");
}

void sortList(struct Node *word){
    if(word == NULL) {return;}
    while (word->next != NULL)
    {
        struct Node *current = word->next;
        while (current != NULL)
        {
            if(word->data > current->data)
            {
                char temp = word->data;
                word->data = current->data;
                current->data = temp;
            }
            current = current->next;
        }
        word = word->next;
    }
}

int anagramsValidation(struct Node *word1, struct Node *word2){
    sortList(word1);
    sortList(word2);
    
    while (word1 != NULL)
    {
        if (word1->data == word2->data)
        {
            word1 = word1->next;
            word2 = word2->next;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}


int main(){

    // Creation of two Linked Lists
    head = insertList(head, 'a');
    insertList(head, 'c');
    insertList(head, 'f');
    insertList(head, 'b');
    insertList(head, 'd');
    insertList(head, 'e');
    insertList(head, 'g');
    
    ass = insertList(ass, 'a');
    insertList(ass, 'd');
    insertList(ass, 'c');
    insertList(ass, 'g');
    insertList(ass, 'f');
    insertList(ass, 'e');
    insertList(ass, 'b');

    // Display the lists
    printf("Word 1: \n");
    displayList(head);
    printf("\nWord 2: \n");
    displayList(ass);

    // Are they an anagram?
    if(anagramsValidation(head, ass)) {
        printf("\nThese words are an anagram");
    }
    else {printf("\nThese words are no anagram");}

    return 0;
}