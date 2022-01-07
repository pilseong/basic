#include <stdio.h>

long fib(int n) {
  if (n <= 0) return 0;
  else if (n == 1 || n == 2) {
    return 1;
  } else if (n > 2) {
    return fib(n-2) + fib(n-1);
  }
}

long fib2(int n) {
  static int fibb[100] = { 0 };

  if (n <= 0) return 0;
  else if (n == 1 || n == 2) {
    return 1;
  } else if (n > 2) {
    if (fibb[n-2] == 0) fibb[n-2] = fib2(n-2);
    if (fibb[n-1] == 0) fibb[n-1] = fib2(n-1);

    return fibb[n-2] + fibb[n-1];
  }
}

int main() {
  printf("%lu\n", fib2(0));
  printf("%lu\n", fib2(1));
  printf("%lu\n", fib2(2));
  printf("%lu\n", fib2(3));
  printf("%lu\n", fib2(4));
  printf("%lu\n", fib2(5));
  printf("%lu\n", fib2(6));
  printf("%lu\n", fib2(30));
}