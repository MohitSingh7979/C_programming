#include<stdio.h>

int main()
{
  int x = 4 * 1024;
  printf("value of x after initialization %d\n", x);

  x = x * 1024 * 1024;
  printf("value of x after mulitplication %d\n", x);

  printf("%lu bytes\n", sizeof(int));
  if (x > 0)
    printf("True\n");
  else
    printf("False\n");

  return 0;
}
/*
  int: 32 bits
  signed int range min (-2 ** (n - 1))             max (2 ** (n - 1)) - 1
                        -2147483648                     2147483647
                        approx -2GB                     approx 2GB

  4 *   1024    * 1024    * 1024
      2 ^ 10    2 ^ 10    2 ^ 10
      1KB  =>     1MB   =>    1GB
      
  4 * 1 GB  => 4GB
  its means that int data type cann't hold this value,
  so a good compile either gives warning and overflow the value
*/
