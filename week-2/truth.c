#include <stdio.h>
#include <stdbool.h> // C99 standard for bool type
int main() {
  // Test 1: Integers
  int a = 0, b = 5, c = -1;
  if (a) printf("a (0) is True\n");
  else printf("a (0) is False\n");
  if (b) printf("b (5) is True\n");
  if (c) printf("c (-1) is True\n");
  // Test 2: The bool type
  bool flag = true;
  printf("Value of true is: %d\n", flag);
  printf("Value of false is: %d\n", false);
  return 0;
}