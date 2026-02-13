#include <stdio.h>
int main() {
  // We want to count down from 5 to 0
  // We use 'unsigned' because count can't be negative, right?
  for (unsigned int i = 5; i >= 0; i--) {
    printf("%u\n", i);
    // Safety break to prevent flooding your terminal
    if (i > 100) {
      printf("...Underflow detected! Aborting.\n");
      break;
    }
  }
  return 0;
}