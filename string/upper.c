#include <stdio.h>

// A - 65, a = 97, the difference is 97 -65 = 32

int main() {
  char str[] = "welcome";
  int i;

  for (i=0; str[i] != '\0'; i++) {
    str[i] = str[i] - 32;
  }

  printf("%s\n", str);
  return 0;
}