#include <stdio.h>
#include <stdlib.h> // Required for malloc and free
int main() {
  // 1. Request memory for one integer
  int* p = malloc(sizeof(int));
  // 2. SAFETY CHECK: Always check if malloc returned NULL
  if (p == NULL) {
    fprintf(stderr, "Memory allocation failed!\n");
    return 1;
  }
  // 3. Use the memory
  *p = 42;
  printf("Value: %d\n", *p);
  printf("Address on Heap: %p\n", (void*)p);
  // 4. Release the memory
  free(p);
  // 5. Safety: Prevent Use-After-Free
  p = NULL;
  return 0;
}