#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("The value of node : %d\n", ptr->data);
        count ++;
        ptr = ptr ->next;
    }
    printf("No of nodes : %d\n", count);
};


int main(){
    
    struct node *head = malloc (sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *current = malloc (sizeof(struct node));
    current->data = 98;
    current->next = NULL;
    head->next = current;

    current = malloc (sizeof(struct node));
    current->data = 3; 
    current->next = NULL;
    
    head->next->next = current;

    count_of_nodes(head);

    // printf("The value of nodes are : %d\n", head->data);
    // printf("%d\n", head->next->data);
    // printf("%d\n", current->data);
    return 0;
}
