#include<stdio.h>

void main()
{
    void *vp;
    // void v, *vp; //can not assign any variable at/to void
 
    // printf("sizeof v = %d, sizeof vp = %d", sizeof(v), sizeof(vp));
    printf("size of vp = %lu, size of *vp = %lu", sizeof(vp), sizeof(*vp));
}