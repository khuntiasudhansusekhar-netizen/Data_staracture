#include<stdio.h>
#include<stdlib.h>
//Define structure for Node
struct Node{
    int data;
    struct Node*next;
};
int main()
//Creating nodes using dynamic memory allocation
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    //allocate the memory
    head = (struct Node*)malloc(sizeof (struct Node ));
    second= (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof (struct Node));
    //Assign the data and link nodes 
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third ->data = 30;
    third -> next = NULL;//last node
    //Traversal
    struct Node*start = head;
    while(start != NULL){
        printf("%d \n",start->data);
        start = start->next;   
    }
    free(third);
    free(second);
    free(head);
    return 0;

}
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for Node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to traverse circular linked list
// void traverseCircular(struct Node* head) {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }

//     struct Node* temp = head;
//     do {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     } while (temp != head); // stop when we come back to head
// }

// int main() {
//     // Pointers for nodes
//     struct Node* head = NULL;
//     struct Node* second = NULL;
//     struct Node* third = NULL;

//     // Allocate memory for nodes
//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));

//     // Assign data and link nodes in circular manner
//     head->data = 10;
//     head->next = second;

//     second->data = 20;
//     second->next = third;

//     third->data = 30;
//     third->next = head; // last node points back to head (circular)

//     // Call traversal function
//     printf("Circular Linked List elements:\n");
//     traverseCircular(head);

//     // Free memory (manual breaking of circular links needed to free properly)
//     third->next = NULL; 
//     free(third);
//     free(second);
//     free(head);

//     return 0;
// }