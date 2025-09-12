#include<stdio.h>
#include<stdlib.h>
//Define structure for Node
struct Node{
    int data;
    struct Node*next;
};
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = (struct Node*)malloc(sizeof (struct Node ));
    second= (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof (struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third ->data = 30;
    third -> next = head;
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
