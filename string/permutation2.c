#include <stdio.h>

static char S[] = "ABC";

void swap(int i, int l) {
  char temp = S[l];
  S[l] = S[i];
  S[i] = temp;
}

void perm(int l) {
  static char F[sizeof(S)] = {0};
  static int h = sizeof(S)-2;

  int i=l;

  if (l == h && i == h) {
    printf("%s\n", S);
  }

  while (i<=h) {
    swap(i, l);
    perm(l+1);
    swap(i, l);
    i++;
  }
}

int main() {
  perm(0);

  return 0;
}