#include <stdio.h>

int main() {

  char s1[] = "painting";
  char s2[] = "painting";

  int i, j;

  for (i=0, j=0; s1[i] != '\0' && s2[j] != '\0'; i++, j++) {
    if (s1[i] != s2[j])  {
      printf("Different\n");
      return 0;
    }
  }

  if (s1[i] == s2[j]) printf("The same\n");
  else printf("Different\n");

  // for (i=0; s1[i] != '\0'; i++) ;
  // for (j=0; s2[j] != '\0'; j++) ;

  // if (i != j) {
  //   printf("Different\n");
  // } else {
  //   for (j=0; j<i; j++) {
  //     if (s1[i] != s2[i]) {
  //       printf("Different\n");
  //       return 0;
  //     }
  //   }
  //   printf("The same\n");
  // }


  return 0;
}