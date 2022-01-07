#include <stdio.h>

int main() {

  char str1[] = "ddcimal";
  char str2[] = "mddical";
  char check[26] = {0};
  int i, temp;

  for (i=0; str1[i] != '\0'; i++) {
    check[str1[i]-97]++;
  }

  for (i=0; str2[i] != '\0'; i++) {
    check[str2[i]-97]--;
    temp = check[str2[i]-97];
    if (temp < 0) {
      printf("Not anagram\n");
      return 0;
    }
  }

  // for (i=0; i<26; i++) {
  //   if (check[i] != 0) {
  //     printf("Not anagram\n");
  //     return 0;
  //   }
  // }

  printf("It's Anagram\n");

  return 0;
}