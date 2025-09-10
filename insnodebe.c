// 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

// function to insert at beginning
void insertbegin(int value) {
    struct node *newnode;
    // step-1: Allocate memory for new node
    newnode = (struct node *)malloc(sizeof(struct node));
    // step-2: Assign data
    newnode->data = value;
    // step-3: link new node to current head
    newnode->next = start;
    // step-4: update head to new node
    start = newnode;
    printf("Node inserted: %d\n", value);
}

// function to display list
void display() {
    struct node *temp = start;   // ✅ use correct variable
    printf("\nLinked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    display();

    getchar();   // ✅ instead of getch()
    return 0;
}
