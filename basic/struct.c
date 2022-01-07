#include <stdio.h>

struct Rectangle {
  int length;
  int breadth;
};

int main() {

  struct Rectangle r = { 10, 10 };
  
  // r.breadth = 10;
  // r.length = 10;

  printf("The Area of the reactangle is %d\n", r.breadth * r.length);

  return 0;
}