#include <stdio.h>
#include <stdlib.h>

// pointer  is used for accessing heap memeory location

int main() {
  // int a=10;
  int *p;

  p = (int*)malloc(5*sizeof(int));
  p[0] = 100;
  p[1] = 101;
  p[2] = 102;

  // p=&a;

  printf("%d\n", p[0]);
  printf("%lu", sizeof(p));

  free(p);

  return 0;
}