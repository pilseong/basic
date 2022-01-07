#include <stdio.h>

int main() {
  char str[] = "pilseongz";
  int check, mask;
  int i;

  check=0;
  mask=1;

  for (i=0; str[i] != '\0'; i++) {
    // if ((check & (mask << (str[i]-97))) >> str[i]-97 != 0) {
    if ((check & (mask << (str[i]-97))) > 0) {
      printf("Duplicated\n");
      return 0;
    } else {
      check = check | (mask << (str[i]-97));
    }
  }

  printf("Not duplicated\n");

  return 0;
}