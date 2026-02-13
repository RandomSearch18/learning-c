#include <stdio.h>
// Trap 1: Missing Parentheses (fixed)
#define GOOD_MUL(a, b) (a) * (b)
// Trap 2: Side Effects
#define SQUARE(x) ((x) * (x))

int square_func(int x) {
  return x * x;
}

int main() {
  // Test 1: Operator Precedence
  // We expect (2+3) * (4+5) = 5 * 9 = 45
  int result = GOOD_MUL(2 + 3, 4 + 5);
  printf("GOOD_MUL result: %d (Expected 45)\n", result);
  // Test 2: Side Effects
  int i = 2;
  // We expect 2 * 2 = 4, and i to become 3
  int sq = square_func(i++);
  printf("SQUARE result: %d, i is now: %d\n", sq, i);
  return 0;
}