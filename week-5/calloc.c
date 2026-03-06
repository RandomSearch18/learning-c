#include <stdio.h>
#include <stdlib.h>
int main() {
  // int a[] = { 1, 2, 3 };

  int n = 10;
  // Round 1: Allocate, write known values, then free
  int* block = malloc(n * sizeof(*block));
  if (block == NULL) return 1;
  printf("=== Round 1: writing values 100, 200 ... ===\n");
  for (int i = 0; i < n; i++) {
    block[i] = (i + 1) * 100;
    printf("block[%d] = %d\n", i, block[i]);
  }
  free(block); // Return the block to malloc's free list
  *block = 1;

  // Round 2: malloc again - likely gets the same block back
  int* reused = malloc(n * sizeof(*reused));
  if (reused == NULL) return 1;
  printf("\n=== Round 2: malloc again, no writes yet ===\n");
  for (int i = 0; i < n; i++) {
    printf("reused[%d] = %d\n", i, reused[i]);
  }
  free(reused);

  // Round 3: calloc - memory IS zeroed regardless of history
  int* zeroed = calloc(n, sizeof(*zeroed));
  if (zeroed == NULL) return 1;
  printf("\n=== Round 3: calloc (zero-initialised) ===\n");
  for (int i = 0; i < n; i++) {
    printf("zeroed[%d] = %d\n", i, zeroed[i]);
  }
  free(zeroed);

  return 0;
}