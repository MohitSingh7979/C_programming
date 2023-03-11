#include<stdio.h>

int main(){
  int i = -4;
  unsigned int j = i ;

    if ( i > j)
        printf("True\n");
    else
        printf("False\n");

    printf("%u", j);
}
