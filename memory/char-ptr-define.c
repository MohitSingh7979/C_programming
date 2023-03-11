#include<stdio.h>

#define pf(stmnt, ...) printf(#stmnt "\n", ##__VA_ARGS__)

int main()
{
    char *cp;
    pf("sizeof cp = %lu sizeof *cp = %lu, sizeof * = %lu", sizeof(cp), sizeof(*cp), sizeof(char *));
    return 0;
}
