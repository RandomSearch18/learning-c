#include <stdio.h>
#include <stdlib.h>

int* create_sequence(int n) {
  int* sequence = malloc(sizeof(int) * n);
  if (sequence == NULL) {
    return NULL;
  }

  for (int i = 0; i < n;i++) {
    sequence[i] = 0;
  }

  return sequence;
}

int main() {
  int size = 5;
  // 1. Call the factory function
  // Ownership of the memory is transferred to 'my_arr'
  int* my_arr = create_sequence(size);
  if (my_arr == NULL) return 1;
  // 2. Use the array (Prove the data is still there!)
  printf("The sequence is: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", my_arr[i]);
  }
  printf("\n");
  // 3. Clean up
  free(my_arr);
  return 0;
}