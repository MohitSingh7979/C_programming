#include<stdio.h>

int main()
{
  char c1 = 'A', c2 = 'B', c;

  c = c1 + c2;

  printf("%lu\n", sizeof(char));

  printf("value of c %d\n", c);
  printf("value of c1 %d\n", c1);
  printf("value of c2 %d\n", c2);

  if (c > 'C')
    printf("True\n");
  else
    printf("False\n");

  return 0;
}

/*
  char range : -128 to 127
  so, 'A' = 65 in ASCII CODE
      'B' = 66 in ASCII CODE

  sum of 'A' and 'B' is 131
  but the 'C' = 67 in ASCII CODE
  131 bits cann't be stored in char datatype,
  which means it will overflow the condition
  131 - 127 = 5
  after 127:  0, -128, -127, -126, -125
  if (-127 > 67) this is the true conditon i.e asked in this program
*/
