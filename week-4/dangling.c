#include <stdio.h>

void trash_stack() {
  int big_array[1000];
  for (int i = 0; i < 1000; i++) {
    big_array[i] = 9999;
  }
}

int* bad_function() {
  int x = 42;
  printf("Address of x inside function: %p\n", (void*)&x);
  return &x; // WARNING: Returning address of local variable
}

int main() {
  int* p = bad_function();
  printf("Pointer p now holds: %p\n", (void*)p);
  trash_stack();
  // Accessing memory that has been "freed"
  printf("Value at p: %d\n", *p);
  return 0;
}