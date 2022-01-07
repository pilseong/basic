#include <stdio.h>

int main() {
  char str[] = "My name is pilseong!";
  int i=0, j=0;
  char temp;

  for (i=0; str[i] != '\0'; i++) ;

  i--;
  // for (j=0; j < i-j; j++) {
  for (j=0; j<i; i--, j++) {
    temp = str[i-j];
    str[i-j] = str[j];
    str[j] = temp;
  }

  printf("%s\n", str);


  return 0;
}