#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n;
    // taking static memory
    printf("Enter the number of intergers\n");
    scanf("%d", &n);
    
    //# creating variable for dynamic memory
    int *ptr = (int *)calloc(n, sizeof(int));

    //overflow 
    if (ptr == NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    
    //adding interger into that memory
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", (ptr + i));
    }
    
    //printing values from that dynamic memory
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}