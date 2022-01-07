#include <stdio.h>

int main() {

  char str[] = "pilseonge";
  unsigned char check[26] = {0};
  int i;

  for (i=0; str[i] != '\0'; i++) {
    if (check[str[i]-97] != 0) {
      printf("Duplicated\n");
      return 0;
    } else {
      check[str[i]-97] = 1;
    }
  }

  printf("Not duplicated\n");

  return 0;
}