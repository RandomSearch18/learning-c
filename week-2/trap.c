#include <stdio.h>
int main() {
  int score = 50;
  // INTENT: Check if score is 100
  // BUG: Used assignment (=) instead of equality (==)
  if (score = 100) {
    printf("Perfect score! (Score is %d)\n", score);
  } else {
    printf("Keep trying. (Score is %d)\n", score);
  }
  return 0;
}