#include <stdio.h>
void recurse(int depth) {
  int x = depth; // A local variable to take up space
  printf("Depth: %d | Address of x: %p\n", depth, (void*)&x);
  // Recursive call without a stop condition
  recurse(depth + 1);
}
int main() {
  recurse(1);
  return 0;
}