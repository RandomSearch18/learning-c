#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("How many numbers do you want to enter? ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
  }

  int* arr = malloc(sizeof(int) * n);

  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    // long int num = strtol(input, NULL, 10);
    // arr[i] = num;
  }

  // TODO 3: Calculate the sum of the numbers.
  long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  float avg = (float)sum / n;
  printf("Average: %f\n", avg);

  free(arr);
  return 0;
}