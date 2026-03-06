#include <stdio.h>
void recurse(int depth) {
  int x = depth;
  // Stop at depth 50
  if (depth == 50) {
    printf("Reached bottom. Pausing here.\n");
    return; // Ideally, we break here in GDB
  }
  recurse(depth + 1);
}
int main() {
  recurse(1);
  return 0;
}