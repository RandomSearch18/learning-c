#include <stdio.h>
#include "maths.h"
#include "config.h"

int main() {
  struct Config c;
  c.version = 1;

  int x = 10, y = 5;
  printf("Add: %d\n", add(x, y));
  printf("Sub: %d\n", sub(x, y));
  printf("Mult: %d\n", mult(x, y));
  printf("Maths library used %d times\n", usage_count);
  log_operation("test");
  return 0;
}
