#include <stdio.h>

int main() {

  int n;

  scanf("%d", &n);

  int A[n];
  A[0] = 100;

  printf("Size of %lu\n", sizeof(A));
  for (int i=0; i<n; i++) {
    printf("%d\n", A[i]);
  }
  // for (int i: A) {
  //   printf("%d\n", i);
  // }

  return 0;
}