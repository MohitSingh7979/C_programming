#include<stdio.h>
#include<stdlib.h> //! required for malloc

int main()
{
    int i, n;

    printf("Enter the number of intergers: ");
    scanf("%d", &n);
    
    int *ptr = (int *)malloc(n * (sizeof(int)));
    //* variable - typecasting - returning void - scanf - bytes for allocating in void
                                    
    if (ptr == NULL){
        printf("Memory not available");
        exit(1);
    }
    
    for (i = 0; i < n; i++){
        printf("Enter an interger: ");
        scanf("%d", ptr + i);
        // # ptr does not have & bcoz its already returns address
    }
    
    for (i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

    printf("\n");
 
    return 0;

}