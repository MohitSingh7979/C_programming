#include<stdio.h>

int main()
{

  union un{
    short s;
    char c;
  }u;
  
  struct str{
    short s;
    char c;
  }s;

  printf("size of structure :%lu\n", sizeof(s));
  printf("size of union     :%lu\n", sizeof(u));
  
  return 0;

}
