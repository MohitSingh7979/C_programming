#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *link; 
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *current = malloc(sizeof(struct node));

    //head node
    head->data = 5;
    head->link = NULL;

    //current node
    current->data = 23;
    current->link = NULL;
    head->link = current;
    
    printf("head address: %lu\n", head);
    printf("head data: %d\n", head->data);
    
    printf("current address: %lu\n", head->link);
    printf("current data : %d\n", current->data);
    printf("current lilnk: %d\n", current->link);
    
    
    return 0;
}
