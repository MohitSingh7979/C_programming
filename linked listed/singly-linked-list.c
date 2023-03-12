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

    //current node aka 2 node
    struct node *current = malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link = current;

    //current node aka 3 node
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 56;
    current2->link = NULL;
    head->link->link = current2;
    
    printf("head address: %p\n", head);
    printf("head data aka node 1: %d\n", head->data);
    
    printf("\ncurrent address: %p\n", head->link);
    printf("current data aka node 2: %d\n", current->data);
    printf("current link: %p\n", current->link);
    
    printf("\ncurrent2 address: %p\n", head->link->link);
    printf("current2 data aka node 3: %d\n", current2->data);
    printf("current2 link: %p\n", current2->link);
    
    return 0;
}
/*  [5  link]->[23 link]-> [56 link] = NULL
     ^          ^           ^
     |          |           |

ADD head       current     current2
*/