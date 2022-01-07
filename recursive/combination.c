#include <stdio.h>

unsigned long fact(int n) {
  if (n <= 1) return 1;
  return fact(n-1) * n;
}

unsigned long com(int n, int r) {
  if (n == 0) return 1;

  unsigned long facn = fact(n);
  unsigned long facr = fact(r);
  unsigned long facnr = fact(n-r);
  unsigned long res = facn / (facr * facnr);
  return  res;
}

int main() {

  printf("%lu\n", com(20,10));
  return 0;
}