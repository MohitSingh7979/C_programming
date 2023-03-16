#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *link; 
};

int main()
{

    //head node
    struct node *head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    printf("head address: %p\n", head);
    printf("head data aka node 1: %d\n", head->data);

    //current node aka 2 node
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link = current;

    printf("\ncurrent address: %p\n", head->link);
    printf("current data aka node 2: %d\n", current->data);
    printf("current link: %p\n", current->link);

    //current node aka 3 node
    current = malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    
    printf("\ncurrent2 address: %p\n", current->link);
    printf("current2 data aka node 3: %d\n", current->data);
    printf("current2 link: %p\n", current->link);
    
    return 0;
}
/*  [5  link]->[23 link]-> [56 link] = NULL
     ^          ^           ^
     |          |           |

ADD head       current     current2
*/