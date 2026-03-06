#include <stdio.h>
#include <stdlib.h>
int main() {
  // Allocate raw memory
  void* memory = malloc(sizeof(int) * 5);
  // TASK 1: Try to index it directly
  // Uncomment the line below and try to compile:
  // memory[0] = 10;
  // TASK 2: Cast it to the correct type
  int* p = (int*)memory; // Explicit cast (optional in C, required in C++)
  p[0] = 10;
  printf("Value: %d\n", p[0]);
  free(memory);
  return 0;
}