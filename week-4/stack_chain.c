#include <stdio.h>
void funcC() {
  int c = 300;
  printf("Inside funcC. Pausing here.\n");
  // We will set a breakpoint on this line
}
void funcB() {
  int b = 200;
  funcC(); // Call C
}
void funcA() {
  int a = 100;
  funcB(); // Call B
}
int main() {
  printf("Starting main...\n");
  funcA(); // Call A
  return 0;
}