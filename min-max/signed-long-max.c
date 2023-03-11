#include<stdio.h>

// void method1()
// {
//   long l;
//   
//   while (++l > 0);
//   l--;
//   printf("signed long max = %ld", l);
// }

/* 
  long : 8 bytes
  
*/
void method2()
{
  long l;
  l = 0x7FFFFFFFFFFFFFFF;

  printf("%lx\n",sizeof(long));
  printf("%ld\n",l);
    
}
int main()
{
  // method1();
  method2();

  return 0;
}

