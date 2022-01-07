#include <stdio.h>

int main() {

  char str[] = "abcddcba";
  int i, j;
  
  for (i=0; str[i] != '\0'; i++) ;
  i--;

  for (j=0; j < i; j++, i--) {
    if (str[i] != str[j]) {
      printf("Not Palindrome\n");
      return 0;
    }
  }

  printf("Palindorme\n");

  return 0;
}