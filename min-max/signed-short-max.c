#include<stdio.h>

void method1();
void method2();
void method3();
void method4();

void main()
{
    method1();
    method2();
    method3();
    method4();
}

void method1()
{
       short s, temp;
    s = 0;
    temp = s - 1;

    while (s > temp)
    {
        s++;
        temp++;
    }

    printf("temp = (s - 1) max short value = %d\n", temp);
}

void method2()
{
    short s, temp;
    s = 0;
    temp = s - 1;

    while (s++ > temp ++);
    temp--;
    
    printf("while (s ++ > temp ++) max short value = %d \n", temp);
}

void method3()
{
    short s;

    while(++s > 0);
    s--;

    printf("while (s ++)s-- max short value = %d \n", s);
}
/* 
    32767 -> 0111 1111 1111 1111
                7   f   f   f
    signed short max 
    msb[0]000 0000 0000 0000[0]lsb
          f    f    f    f
        1 -ve
        0 +ve

        1 000 000 ->   -128
        0 111 111 ->    127 : 64 + 32 + 16 + 8 + 4 + 2 + 1
*/
void method4()
{
    short s = 0x7fff;

    printf("hash numbers max short value = %d\n", s);
}