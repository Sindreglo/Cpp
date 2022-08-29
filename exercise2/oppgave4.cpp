#include <iostream>

int main(void) {
  int a = 5;
  int &b = a;
  int *c;
  c = &b;
  a = b + *c;
  b = 2;

  return 0;
}
