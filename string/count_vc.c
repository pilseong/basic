#include <stdio.h>

int main() {

  char s[] = "I love you pilseong";
  int i, vcount, ccount;

  vcount = 0;
  ccount = 0;
  for (i=0; s[i] != '\0'; i++) {
    // if (s[i] == ' ' || s[i] == '\t') word++;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
      vcount++;
    else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) 
      ccount++;
  } 

  printf("Number of Consonant is :%d\n", ccount);
  printf("Number of Vowel is :%d\n", vcount);

  return 0;
}