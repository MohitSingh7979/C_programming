#include<stdio.h>

int main()
{

  union un{
    short val;
    char ch;
  };

  union un u;

  // u.val = 256;
  // u.ch = 1;

  // u.val = 257;
  // u.ch = 1;

  u.val = 258;
  u.ch = 1;

  // u.ch = 1;
  // u.val = 256;

  printf("short : %d\n",u.val);
  printf("char  : %d\n",u.ch);
  
  return 0;

}
