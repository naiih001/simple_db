#include "include/math.h"
#include <stdio.h>

int main() {
  int a = 10;
  int b = 5;
  printf("Hello from simple_db!\n");
  printf("The sum of %d and %d is: %d\n", a, b, add(a, b));
  printf("The difference between %d and %d is: %d\n", a, b, subtract(a, b));
  return 0;
}
