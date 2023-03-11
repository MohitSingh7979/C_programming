#include<stdio.h>

int main()
{
  char c, *cp;
  short s, *sp;
  int i, *ip;
  float f, *fp;
  long l, *lp;
  long long ll, *llp;
  double db, *dp;
  void *v;

  printf("size of c = %lx, size of *cp = %lx\n", sizeof(c), sizeof(*cp));
  printf("size of s = %lx, size of *sp = %lx\n", sizeof(s), sizeof(*sp));
  printf("size of i = %lx, size of *ip = %lx\n", sizeof(i), sizeof(*ip));
  printf("size of f = %lx, size of *fp = %lx\n", sizeof(f), sizeof(*fp));
  printf("size of l = %lx, size of *l = %lx\n", sizeof(l), sizeof(*lp));
  printf("size of ll = %lx, size of *ll = %lx\n", sizeof(ll), sizeof(*llp));
  printf("size of db = %lx, size of *dp = %lx\n", sizeof(db), sizeof(*dp));
  printf("size of v = %lx, size of *v = %lx, size of void = %lu\n", sizeof(v), sizeof(*v), sizeof(void));

  printf("size in memory size of 100 = %lu, of 0xF-4times = %lu, size of 0xF-8times = %lu, size of 0xF-10times = %lu\n", sizeof(100), sizeof(0xFFFF), sizeof(0xFFFFFFFF), sizeof(0xFFFFFFFFFFF));
  
  return 0;
}
