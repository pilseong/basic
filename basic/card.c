#include <stdio.h>

struct Card {
  int face;
  int shape;
  int color;
  char x;
};

int main() {
  // struct Card c = { 1, 0, 0};
  struct Card deck[52] = { {1,0,0,4}, {2,0,0,4}, {1,1,0,4}, {2,1,0,4} };
  struct Card test;

  printf("The face of the first card: %d\n", deck[0].face);
  printf("The shape of the first card: %d\n", deck[0].shape);
  printf("%d\n", sizeof(test));

  return 0;
}