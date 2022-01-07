#include <stdio.h>

int main() {

  char s[] = "I    a love you pilseong   ";
  int i, word, flag;

  flag = 0;
  word = 0;
  for (i=0; s[i] != '\0'; i++) {
    // if (s[i] == ' ' || s[i] == '\t') {
    //   word++;
    // }
    if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
      if (flag == 0) {
        word++; flag = 1;
      } 
    } else if (s[i] == ' ' || s[i] == '\t') {
      flag = 0;
    }
  } 

  printf("Number of words is :%d\n", word);

  return 0;
}