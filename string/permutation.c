#include <stdio.h>

void perm(int k)
{
  static char S[] = "ABCDE";
  static char R[sizeof(S)] = {0};
  static int F[sizeof(S)] = {0};
 

  // printf("%ld\n", sizeof(S));

  if (k == sizeof(S)-1) {
    printf("%s\n", R);
    return;
  } 

  int i = 0;
  while (i < sizeof(S)-1)
  {
    if (F[i] == 0)
    {
      R[k] = S[i];
      F[i] = 1;
      perm(k + 1);
      F[i] = 0;
    }
    i++;
  }
}

int main()
{
  perm(0);
  return 0;
}