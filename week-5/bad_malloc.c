#include <stdio.h>
#include <stdlib.h>
int main() {
  // INTENT: Allocate array of 10 integers
  // BUG: Forgot sizeof(int)
  int* arr = malloc(10);
  if (arr == NULL) return 1;
  // Fill the array
  for (int i = 0; i < 10; i++) {
    arr[i] = i * 100;
    printf("Wrote index %d\n", i);
  }
  free(arr);
  return 0;
}