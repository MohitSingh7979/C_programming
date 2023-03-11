#include<stdio.h>

int main()
{
  union un{


    struct str1{
      short s;
      char c;
    }s1;

    struct str2{
      short s;
      char c;
    }s2;

    struct str3{
      short s;
      char c;
    }s3;

    struct str4{
      short s;
      char c;
    }s4;

  }u;
  
  printf("size of union with padding : %lu\n", sizeof(u));
  
  return 0;

}
