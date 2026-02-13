#include <stdio.h>
#include <math.h> // Required for fabs
int main() {
  float a = 0.1;
  float b = 0.2;
  float result = a + b;
  // BAD: Direct comparison
  if (result == 0.3) {
    printf("Math works!\n");
  } else {
    printf("Math failed? Result is %.20f\n", result);
  }
  // GOOD: Check the difference
  if (fabs(result - 0.3) < 0.0001) {
    printf("Close enough!\n");
  }
  return 0;
}