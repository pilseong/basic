#include <stdio.h>



double fun(int x, int n) {
  static double p = 1, f = 1, val = 0;


  if (n == 0) {
    return 1;
  }

  val = fun(x, n-1);
  
  p = p * x;
  f = f * n;

  return val + p/f;
}

int main() {
  // addition, power, factorial
  printf("%lf\n", fun(2, 20));



  return 0;
}