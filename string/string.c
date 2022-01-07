#include <stdio.h>
// #include <stdlib.h>

// gets, deprecated

int main() {
  char str[] = "pilseong";
  char fromInput[50];

  // scanf("%s", fromInput);
  fgets(fromInput, 50, stdin);

  printf("%s\n", str);
  printf("%lu\n", sizeof(str));
  
  // printf("%s\n", fromInput);
  // fputs(fromInput, stdout);
  puts(fromInput);

  return 0;
}