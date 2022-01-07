#include <stdio.h>

int isValid(char *str);

int main() {
  char s[] = "pilseongisagooAdperson";

  if (isValid(s)) {
    printf("It's valid string.\n");
  } else {
    printf("It's not valid sring.\n");
  }
  return 0;
}

int isValid(char *str) {
  int i;

  for (i=0; str[i] != '\0'; i++) {
    if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <=122) || (str[i] >= 48 && str[i] <= 57))) {
      return 0;
    }
  }
  return 1;
}

