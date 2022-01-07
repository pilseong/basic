#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int a=10;

  int& b=a;

  cout << b << endl;

  return 0;
}