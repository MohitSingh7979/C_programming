#include<stdio.h>

void main()
{
    int a = 1, b = 3, c = 2;
    if (a > b)
        if (b > c)
            printf("a > b and b > c\n");
    else
        printf("Something else\n");
}